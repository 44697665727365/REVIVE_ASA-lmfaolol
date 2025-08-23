#pragma once
#include "pch.h"
#include "Rendering.h"
class VarBase;
namespace globals
{
	extern bool GetNewGlobals;

	namespace local 
	{
		extern AShooterPlayerCameraManager* CM;
		extern AShooterPlayerController* PC;
		extern AShooterCharacter* LP;
		extern APrimalDinoCharacter* DP;
		extern APrimalCharacter* AP;
		extern AShooterWeapon* WP;
		extern UPrimalInventoryComponent* DINV;
		extern UPrimalInventoryComponent* PINV;
		extern FVector POS;
		extern UShooterGameViewportClient* VP;
		extern APrimalDinoCharacter* DinoChar;
		extern long int FrameNum;
	};

	namespace rendering
	{
		extern UCanvas* canvas;
		extern UFont* font;
		extern FLinearColor RGBColor;
		extern double DeltaTime;
		extern double InjectTimeSeconds;
		extern double LastFrame;
	};

	namespace libs 
	{
		extern UKismetMathLibrary* MathLib;
		extern UKismetStringLibrary* StringLib;
		extern UKismetMaterialLibrary* MaterialLib;
		extern ULightWeightInstanceBlueprintFunctionLibrary* InstanceLib;
		extern UKismetSystemLibrary* SystemLib;
		extern UVictoryCore* VictoryCore;
	};

	namespace aimbot 
	{
		extern bool Targeting;
		extern APrimalCharacter* target;
		extern std::vector<int64_t> AlliedTribes;
	};

	namespace hudvars
	{
		extern std::vector<VarBase*> HudDrawVars;
		extern bool hudInitialized;
	};

	namespace framework 
	{
		extern HMODULE DllHandle;
	};

	extern bool GlobalsValid();
};

