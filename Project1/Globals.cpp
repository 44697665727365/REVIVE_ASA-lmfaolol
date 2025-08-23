#include "pch.h"
#include "Globals.h"
namespace globals
{
	bool GetNewGlobals = false;

	namespace local 
	{
		 AShooterPlayerController* PC = nullptr;
		 AShooterPlayerCameraManager* CM = nullptr;
		 AShooterCharacter* LP = nullptr;
		 APrimalDinoCharacter* DP = nullptr;
		 APrimalCharacter* AP = nullptr;
		 AShooterWeapon* WP = nullptr;
		 UPrimalInventoryComponent* DINV = nullptr;
		 UPrimalInventoryComponent* PINV = nullptr;
		 FVector POS = {0,0,0};
		 UShooterGameViewportClient* VP = nullptr;
		 APrimalDinoCharacter* DinoChar = nullptr;
		 long int FrameNum = 0;
	};

	namespace rendering 
	{
		 UCanvas* canvas = nullptr;
		 UFont* font = nullptr;
		 FLinearColor RGBColor = {0,0,0,0};
		 double InjectTimeSeconds = 0.0;
		 double DeltaTime = 0.0;
		 double LastFrame = 0.0;
	};

	namespace libs 
	{
		 UKismetMathLibrary* MathLib = nullptr;
		 UKismetStringLibrary* StringLib = nullptr;
		 UKismetMaterialLibrary* MaterialLib = nullptr;
		 ULightWeightInstanceBlueprintFunctionLibrary* InstanceLib = nullptr;
		 UKismetSystemLibrary* SystemLib = nullptr;
		 UVictoryCore* VictoryCore = nullptr;
	};

	namespace aimbot 
	{
		bool Targeting = false;
		 APrimalCharacter* target = nullptr;
		 std::vector<int64_t> AlliedTribes = {};
	};

	namespace hudvars 
	{
		 std::vector<VarBase*> HudDrawVars = {};
		 bool hudInitialized = false;
	};

	namespace framework
	{
		HMODULE DllHandle = nullptr;
	};

	bool GlobalsValid()
	{
		if (!libs::MaterialLib || !libs::MathLib || !libs::StringLib || !libs::InstanceLib || !libs::SystemLib) 
			return false;
		else
			return true;
	}
};
