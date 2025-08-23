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
	 * BlueprintGeneratedClass BP_WaterPostProcess_Base.BP_WaterPostProcess_Base_C
	 * Size -> 0x0010 (FullSize[0x1C30] - InheritedSize[0x1C20])
	 */
	class ABP_WaterPostProcess_Base_C : public APostProcessVolume
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1C20(0x0008) ZeroConstructor, Transient, DuplicateTransient
		double                                                     WaterlineOverride;                                       // 0x1C28(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_WaterPostProcess_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
