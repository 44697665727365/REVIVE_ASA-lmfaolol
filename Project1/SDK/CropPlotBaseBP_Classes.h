#pragma once

/**
 * Name: Ark_Survival_Ascended
 * Version: 0.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass CropPlotBaseBP.CropPlotBaseBP_C
	 * Size -> 0x0008 (FullSize[0x1588] - InheritedSize[0x1580])
	 */
	class ACropPlotBaseBP_C : public APrimalStructureItemContainer_CropPlot
	{
	public:
		class USphereComponent*                                    StasisComponent;                                         // 0x1580(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void GetCurrentStackCount(int32_t MaxCount, class APrimalStructure* PlacingOn, int32_t* StackCount);
		class FString BPOverrideCantBuildReasonString(int32_t CantBuildReason);
		int32_t BPIsAllowedToBuild(const struct FPlacementData& OutPlacementData, int32_t CurrentAllowedReason);
		void IsOverStackLimit(const struct FPlacementData& PlacementData, bool* IsOverLimit);
		bool BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, const struct FBPNetExecParams& ExecParams);
		bool CanAttachToExosuit(class AShooterPlayerController* ForPC);
		bool CanBeStoredByExosuit(class AShooterPlayerController* ForPC);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
