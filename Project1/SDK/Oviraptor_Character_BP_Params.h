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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.BPTryMultiUse
	 */
	struct AOviraptor_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.BPClientDoMultiUse
	 */
	struct AOviraptor_Character_BP_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.BPGetMultiUseEntries
	 */
	struct AOviraptor_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ReturnParm, ContainsInstancedReference)
	};

	/**
	 * Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.GetEggSearchRadius
	 */
	struct AOviraptor_Character_BP_C_GetEggSearchRadius_Params
	{
	public:
		double                                                     RadiusForGrabbingNearbyEgg;                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.SearchForEggs
	 */
	struct AOviraptor_Character_BP_C_SearchForEggs_Params
	{	};

	/**
	 * Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.OnRep_CarriedItem
	 */
	struct AOviraptor_Character_BP_C_OnRep_CarriedItem_Params
	{	};

	/**
	 * Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.FindCarriedEgg
	 */
	struct AOviraptor_Character_BP_C_FindCarriedEgg_Params
	{
	public:
		bool                                                       bIsAnimNotify;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZAQR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.UpdateEggBoost
	 */
	struct AOviraptor_Character_BP_C_UpdateEggBoost_Params
	{	};

	/**
	 * Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.BlueprintTamedTick
	 */
	struct AOviraptor_Character_BP_C_BlueprintTamedTick_Params
	{	};

	/**
	 * Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct AOviraptor_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.DoCheckEgg
	 */
	struct AOviraptor_Character_BP_C_DoCheckEgg_Params
	{	};

	/**
	 * Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.PerformanceThrottledTick
	 */
	struct AOviraptor_Character_BP_C_PerformanceThrottledTick_Params
	{	};

	/**
	 * Function Oviraptor_Character_BP.Oviraptor_Character_BP_C.ExecuteUbergraph_Oviraptor_Character_BP
	 */
	struct AOviraptor_Character_BP_C_ExecuteUbergraph_Oviraptor_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5W4C[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
