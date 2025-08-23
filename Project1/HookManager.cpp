#include "pch.h"
#include "HookManager.h"
#include "Modules.h"
#include "Globals.h"

bool HookManager::InitHooks()
{
    Hooks::InitSuccess = true;
    Hooks::UpdateSuccess = true;
    Hooks::Uninject = false;

    UWorld* world = *UWorld::GWorld;

    if (!world) 
        return false;
   
    Hooks::GetShootingCamLoc = Hooks::GetShootingCamLoc_t(signature(Hooks::GetShootingCamLocSig).GetPointer());
    Hooks::DrawTransition.HookObject(world->OwningGameInstance->LocalPlayers[0]->ViewportClient);

    return Hooks::InitSuccess;
}

bool HookManager::UpdateHooks()
{
    Hooks::Uninject = false;
    UWorld* world = *UWorld::GWorld;

    if (!world)
        return false;

    if (!Hooks::GetDLCManager_f)
        Hooks::GetDLCManager_f = Hooks::GetDLCManager_t(signature(Hooks::GetDLCManagerSig).GetPointer());

    if (Hooks::GetDLCManager_f)
    {
        UMountedDLCManager* manager = Hooks::GetDLCManager_f();

        if (manager)
            Hooks::DoesOwnDLC.HookObject(manager);
    }

    Hooks::ConsoleCommand.HookObject(world->OwningGameInstance->LocalPlayers[0]->ViewportClient->ViewportConsole);
    Hooks::CameraGetRotationForPawnMovementInput.HookObject(globals::local::CM);
    Hooks::PlayerViewPoint.HookObject(globals::local::PC);
    Hooks::UpdateRotation.HookObject(globals::local::PC);
    Hooks::ProcessRemoteFunction.HookObject(world->NetDriver);
    Hooks::GetViewPoint.HookObject(world->OwningGameInstance->LocalPlayers[0]);
    Hooks::ClientForceUpdateMovement.HookObject(globals::local::AP);
    Hooks::CallServerMovePacked.HookObject(globals::local::AP->CharacterMovement);
    Hooks::ReplicateMoveToServer.HookObject(globals::local::AP->CharacterMovement);
    Hooks::TickComponent.HookObject(globals::local::AP->CharacterMovement);

    if (globals::local::LP->CurrentWeapon && globals::local::LP->CurrentWeapon->AssociatedPrimalItem) 
    {
        if (globals::local::LP->CurrentWeapon->IsA(AShooterWeapon_InstantPenetrating::StaticClass())) 
        {
            Hooks::StartUnequip_Implementation.HookObject(globals::local::LP->CurrentWeapon);
            Hooks::WeaponTraceForHits.HookObject(globals::local::LP->CurrentWeapon);
        }

		Hooks::SimulateInstantHit_Implementation.HookObject(globals::local::LP->CurrentWeapon);
    }

    if (globals::local::DP)
        Hooks::PhysicsRotation.HookObject(globals::local::DP->CharacterMovement);

    Hooks::UpdateSuccess = true;
    return Hooks::UpdateSuccess;
}

bool HookManager::UnHook()
{
    Hooks::Uninject = true;
    auto world = *UWorld::GWorld;

    if (!world)
        return false;

    if (!Hooks::GetDLCManager_f)
        Hooks::GetDLCManager_f = Hooks::GetDLCManager_t(signature(Hooks::GetDLCManagerSig).GetPointer());

    if (Hooks::GetDLCManager_f)
    {
        UMountedDLCManager* manager = Hooks::GetDLCManager_f();

        if (manager)
            Hooks::DoesOwnDLC.UnHookObject(manager);
    }

    Hooks::DrawTransition.UnHookObject(world->OwningGameInstance->LocalPlayers[0]->ViewportClient);
    Hooks::ConsoleCommand.UnHookObject(world->OwningGameInstance->LocalPlayers[0]->ViewportClient->ViewportConsole);
    Hooks::CameraGetRotationForPawnMovementInput.UnHookObject(globals::local::CM);
    Hooks::PlayerViewPoint.UnHookObject(globals::local::PC);
    Hooks::UpdateRotation.UnHookObject(globals::local::PC);
    Hooks::ProcessRemoteFunction.UnHookObject(world->NetDriver);
    Hooks::GetViewPoint.UnHookObject(world->OwningGameInstance->LocalPlayers[0]);
    Hooks::ClientForceUpdateMovement.UnHookObject(globals::local::AP);
    Hooks::CallServerMovePacked.UnHookObject(globals::local::AP->CharacterMovement);
    Hooks::ReplicateMoveToServer.UnHookObject(globals::local::AP->CharacterMovement);
	Hooks::TickComponent.UnHookObject(globals::local::AP->CharacterMovement);
    

    if (globals::local::LP->CurrentWeapon && globals::local::LP->CurrentWeapon->AssociatedPrimalItem)
    {
        if (globals::local::LP->CurrentWeapon->IsA(AShooterWeapon_InstantPenetrating::StaticClass()))
        {
            Hooks::StartUnequip_Implementation.UnHookObject(globals::local::LP->CurrentWeapon);
            Hooks::WeaponTraceForHits.UnHookObject(globals::local::LP->CurrentWeapon);
        }
        Hooks::SimulateInstantHit_Implementation.UnHookObject(globals::local::LP->CurrentWeapon);
    }

    if (globals::local::DP)
        Hooks::PhysicsRotation.UnHookObject(globals::local::DP->CharacterMovement);

    Hooks::UpdateSuccess = true;

    return Hooks::UpdateSuccess;
}

bool HookManager::StopEverything()
{
    auto world = *UWorld::GWorld;
    if (!world)
        return false;

    UnHook();
    Keyboard::Uninitialize();
    NewMenu::Uninitialize();
    settings::Uninitialize();

    return true;
}

bool HookManager::StartEverything()
{
    if (!InitEngine())
        return false;

    if (!settings::Initialize())
        return false;

    if (!InitModules())
        return false;

    if (!InitHooks())
        return false;

    if (!Keyboard::Initialize())
        return false;

    NewMenu::Initialize();

    return true;
}
void HookManager::memcpy_(void* _Dst, void const* _Src, size_t _Size)
{
    auto csrc = (char*)_Src;
    auto cdest = (char*)_Dst;

    for (int i = 0; i < _Size; i++)
    {
        cdest[i] = csrc[i];
    }
}
void HookManager::SwapVtable(void* obj, uint32_t index, void* hook)
{
    auto memcpy_ = [](void* _Dst, void const* _Src, size_t _Size)
        {
            auto csrc = (char*)_Src;
            auto cdest = (char*)_Dst;

            for (int i = 0; i < _Size; i++)
            {
                cdest[i] = csrc[i];
            }
        };

    auto currVt = *(void**)(obj);

    auto vtable = *(void***)(obj);
    int i = 0;

    for (; vtable[i]; i++)
        __noop();

    auto newVt = new uintptr_t[i];

    memcpy_(newVt, currVt, i * 0x8);

    newVt[index] = (uintptr_t)hook;

    *(uintptr_t**)(obj) = newVt;
}
bool HookManager::StartHook(UObject* Object, uint32_t index, void* HookFn, void* Original)
{
    if (Object && index > 0 && HookFn)
    {
        if (Object->VfTable[index] != HookFn)
        {
            if (Original != (int*)0x696969)
                Original = Object->VfTable[index];

            HookManager::SwapVtable(Object, index, HookFn);
            //plog(Xors("Swapped : %llx"), index);
        }
        return Hooks::UpdateSuccess = true;
    }
    return Hooks::UpdateSuccess = false;
}

bool InitEngine() 
{
    UWorld::GWorld = (UWorld**)signature(Xors("48 8B 05 ? ? ? ? EB 05")).instruction(3).add(7).GetPointer();
    UObject::GObjects = (TUObjectArray*)signature(Xors("48 8B 05 ? ? ? ? 48 8B 0C C8 48 8D 04 D1 EB")).instruction(3).add(7).GetPointer();
    NamePoolData = (FNamePool*)(signature(Xors("48 8D 05 ? ? ? ? EB 13")).instruction(3).add(7).GetPointer());

    if (!*UWorld::GWorld || !UObject::GObjects || !NamePoolData)
        return false;
        
    globals::libs::MaterialLib = (UKismetMaterialLibrary*)UKismetMaterialLibrary::StaticClass();
    globals::libs::MathLib = (UKismetMathLibrary*)UKismetMathLibrary::StaticClass();
    globals::libs::StringLib = (UKismetStringLibrary*)UKismetStringLibrary::StaticClass();
    globals::libs::InstanceLib = (ULightWeightInstanceBlueprintFunctionLibrary*)ULightWeightInstanceBlueprintFunctionLibrary::StaticClass();
    globals::libs::VictoryCore = (UVictoryCore*)UVictoryCore::StaticClass();
    globals::libs::SystemLib = (UKismetSystemLibrary*)UKismetSystemLibrary::StaticClass();

    globals::rendering::font = UObject::FindObjectSingle<UFont*>(Xors(L"/Game/OldAssets/UI/HUD/Roboto18.Roboto18"));
    Renderer::MenuFont = UObject::FindObjectSingle<UFont*>(Xors(L"/Game/OldAssets/UI/HUD/Roboto18.Roboto18"));
    Renderer::Font = UObject::FindObjectSingle<UFont*>(Xors(L"/Game/OldAssets/UI/HUD/Roboto18.Roboto18"));
    Renderer::EspFont = UObject::FindObjectSingle<UFont*>(Xors(L"/Game/OldAssets/UI/HUD/SansationBold18.SansationBold18"));
    Renderer::HudFont = UObject::FindObjectSingle<UFont*>(Xors(L"/Game/OldAssets/UI/HUD/SansationBold18.SansationBold18"));
    Renderer::HudFontBig = UObject::FindObjectSingle<UFont*>(Xors(L"/Game/PrimalEarth/UI/Fonts/OpenSansBold30-em34.OpenSansBold30-em34"));

    globals::local::VP = UObject::FindObjectSingle<UShooterGameViewportClient*>(Xors(L"/Engine/Transient.ShooterEngine_2147482608:ShooterGameViewportClient_2147482433"));
    globals::rendering::InjectTimeSeconds = globals::libs::VictoryCore->STATIC_GetRealWorldUtcTimeInSeconds();
    return true;
}

bool InitModules()
{
    ModuleBase::Children.push_back(PlayerModule::CreateModule());
    ModuleBase::Children.push_back(DinoModule::CreateModule());
    ModuleBase::Children.push_back(StructureModule::CreateModule());
    ModuleBase::Children.push_back(AimbotModule::CreateModule());
    ModuleBase::Children.push_back(AutoModule::CreateModule());
    ModuleBase::Children.push_back(ChamsModule::CreateModule());
    ModuleBase::Children.push_back(DinoFeaturesModule::CreateModule());
    ModuleBase::Children.push_back(InventoryModule::CreateModule());
    ModuleBase::Children.push_back(LocalModule::CreateModule());
    ModuleBase::Children.push_back(MovementModule::CreateModule());
    ModuleBase::Children.push_back(UserModule::CreateModule());
    ModuleBase::Children.push_back(RadarModule::CreateModule());
    ModuleBase::Children.push_back(SpyglassModule::CreateModule());
    ModuleBase::Children.push_back(AutoArmorModule::CreateModule());

    for (int i = 0; i < ModuleBase::Children.size();i++)
    {
        const auto& mod = ModuleBase::Children[i];
        if (!mod.get()->OnModuleInit())
			return false;
	}

    return true;
}


