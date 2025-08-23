#include "pch.h"
#include "HookManager.h"
#include "AimbotModule.h"
#include "NewMenu.h"
#include "StructureModule.h"
#include "MovementModule.h"
#include "AssetLoader.h"
#include "LocalModule.h"
#include "Config.h"
#include "UserModule.h"

std::wstring updateFrame(int frameCtr, const std::wstring& target) 
{
	std::wstring result = Xors(L""); 

	size_t targetIndex = frameCtr / 26;  

	if (targetIndex >= target.size()) 
		return target;

	wchar_t currentChar = L'a' + (frameCtr % 26);  

	result = target.substr(0, targetIndex);  

	if (currentChar <= target[targetIndex]) 
		result += currentChar;
	else 
		result += target[targetIndex];  

	return result; 
}

void PreTransition(UCanvas* Canvas)
{
	static bool FT = true;

	if (FT)
	{
		static double InjectionTime = 0.0;

		if (globals::rendering::DeltaTime >= 0.0 && globals::rendering::DeltaTime <= 10.0)
			InjectionTime += globals::rendering::DeltaTime;

		if (InjectionTime > 15.0)
			FT = false;

		std::wstring target = Xors(L"Injection Successful.");

		globals::rendering::canvas->K2_DrawTexture(((UEngine*)UEngine::StaticClass())->DefaultTexture, { Renderer::GetCanvasSize().X / 2 - 100, 185 }, { 200 ,30 }, { 0.f,0.f }, { 1.f,1.f }, { 0,0,0,0.7f }, EBlendMode::BLEND_Translucent, 0.f, { 0.f,0.f });
		globals::rendering::canvas->K2_DrawText(Renderer::EspFont, updateFrame(globals::local::FrameNum, target).c_str(), {Renderer::GetCanvasSize().X / 2, 200}, {0.7, 0.7}, {1,1,1,1}, 0.0, {1,1,1,1}, {0,0}, true, true, true, {0,0,0,1});
	}
}

void Hooks::DrawTransition_f(UGameViewportClient* _this, UCanvas* Canvas)
{
	static bool InitShowFlags = true;

	globals::rendering::canvas = Canvas;  Renderer::canvas = Canvas; globals::local::FrameNum++; globals::local::VP = (UShooterGameViewportClient*)_this;
	globals::rendering::DeltaTime = globals::libs::VictoryCore->STATIC_GetNetworkTimeInSeconds(UWorld::Singleton()) - globals::rendering::LastFrame;
	globals::rendering::LastFrame = globals::libs::VictoryCore->STATIC_GetNetworkTimeInSeconds(UWorld::Singleton());

	spoof_call(Hooks::DrawTransition.GetOriginal(), _this, Canvas);

	PreTransition(Canvas);

	if (!Actors::ValidateWorld())
	{
		globals::aimbot::target = nullptr;
		globals::local::DinoChar = nullptr;

		StructureModule::StructureMap.clear();
		UserModule::ClearAntimeshESP();
		MovementModule::TekChestBuff(true);
		LocalModule::CachedBossFightLocation = { 0,0,0 };
		Resources = {};
		if (settings::misc::TekChestDisconnect.Enabled)
			settings::misc::TekChestDisconnect.Enabled = false;

		ABuff_TekArmor_Shirt_Rework_C Buff1;
		Buff1.Server_SetThrusterState(E_TekThrusterState::NewEnumerator0, true);
		
		return;
	}
	
	if (InitShowFlags)
	{
		UserModule::InitShowFlags();
		InitShowFlags = false;
	}

	Actors::UpdateGlobals(Canvas);
	
	if (!HookManager::UpdateHooks())
		return;

	Renderer::PushFont(Renderer::EspFont);
	
	for (int i = 0; i < UWorld::Singleton()->PersistentLevel->Actors.Count(); i++)
	{
		AActor* Actor = UWorld::Singleton()->PersistentLevel->Actors[i];

		if (!Actor)
			continue;

		if (Actor->bHidden)
			continue;

		CurrentActor Current = CurrentActor();
		Actors::ProcessActor(&Current, Actor);

		if (!Current.Actor)
			continue;

		for (int j = 0; j < ModuleBase::Children.size(); j++)
		{
			const auto& Module = ModuleBase::Children[j];
			if (Module.get()->ModuleRequirements(&Current))
				Module.get()->OnActorModule(&Current);
		}
	}

	for (const auto& Module : ModuleBase::Children)
		Module.get()->PostActors();

	NewMenu::DrawMenu();
	UpdateMenuVars();

	if (Keyboard::GetState(VK_F7, 0))
	{
		//plog(Xors("Ejecting Module"));
		UserModule::ClearAntimeshESP();
		HookManager::StopEverything();
		LI_FN(FreeLibrary).safe()(globals::framework::DllHandle);
		return;
	}

	Renderer::DrawScreenMessages();
	Keyboard::Reset();
}