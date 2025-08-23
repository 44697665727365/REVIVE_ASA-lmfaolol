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
	 * BlueprintGeneratedClass BP_CFCoreUIModel.BP_CFCoreUIModel_C
	 * Size -> 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
	 */
	class UBP_CFCoreUIModel_C : public UCFCoreUIModel
	{
	public:
		bool OnEventReceived(EGameModsEvent evt, TArray<struct FCFCoreMod> InModsList, TArray<struct FInstallProgressMod>* OutModsList);
		bool OnEventReceived_LibraryProgress(EGameModsEvent evt, const struct FLibraryProgress& progress, TArray<struct FInstallProgressMod>* OutModsList);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
