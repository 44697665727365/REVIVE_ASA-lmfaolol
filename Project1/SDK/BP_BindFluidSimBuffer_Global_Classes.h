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
	 * BlueprintGeneratedClass BP_BindFluidSimBuffer_Global.BP_BindFluidSimBuffer_Global_C
	 * Size -> 0x00DC (FullSize[0x05A4] - InheritedSize[0x04C8])
	 */
	class ABP_BindFluidSimBuffer_Global_C : public AStaticMeshActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TMap<class FName, class FString>                           NinjaRTLookup;                                           // 0x04D0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class UMaterialInstanceDynamic*                            dynamicMic;                                              // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        SyncWaterTimer;                                          // 0x0528(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentSyncAtempts;                                      // 0x0530(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxSyncAtempts;                                          // 0x0534(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentSyncAtempts2;                                     // 0x0538(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TrySyncWithNinjaLive;                                    // 0x053C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_69UJ[0x3];                                   // 0x053D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UMaterialInterface*, class UMaterialInstanceDynamic*> DMICMap;                                                 // 0x0540(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class AWaterInteractionBP_C*                               WaterInteractionBP;                                      // 0x0590(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       Intialized;                                              // 0x0598(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5UYK[0x3];                                   // 0x0599(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                BindingTag;                                              // 0x059C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void SyncWaterInteraction();
		void TryResyncNinjaLiveComponent();
		void ExecuteUbergraph_BP_BindFluidSimBuffer_Global(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
