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
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.GetStatRecoveryRateValue
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_GetStatRecoveryRateValue_Params
	{
	public:
		EPrimalCharacterStatusValue                                Stat;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7SC7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<double>                                             FloatVars;                                               // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		double                                                     StatValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.GetStatMaxValue
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_GetStatMaxValue_Params
	{
	public:
		EPrimalCharacterStatusValue                                Stat;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6PE4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<double>                                             FloatVars;                                               // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		double                                                     StatValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.GetRecoveryRateIndexForStat
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_GetRecoveryRateIndexForStat_Params
	{
	public:
		EPrimalCharacterStatusValue                                Stat;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NG1R[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.GetCurrentValueIndexForStat
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_GetCurrentValueIndexForStat_Params
	{
	public:
		EPrimalCharacterStatusValue                                Stat;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PAKJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.GetStatCurrentValue
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_GetStatCurrentValue_Params
	{
	public:
		EPrimalCharacterStatusValue                                Stat;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X6K0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<double>                                             FloatVars;                                               // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		double                                                     StatValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.GetMaxValueIndexForStat
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_GetMaxValueIndexForStat_Params
	{
	public:
		EPrimalCharacterStatusValue                                Stat;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MQYE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.IsIceBox
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_IsIceBox_Params
	{
	public:
		bool                                                       IsIceBox;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YO0L[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalStructureItemContainer*                       AsContainer;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.IsCryoFridge
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_IsCryoFridge_Params
	{
	public:
		bool                                                       IsFridge;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KMBU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalStructureItemContainer*                       AsContainer;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.GetCooldownBuffIfLoaded
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_GetCooldownBuffIfLoaded_Params
	{
	public:
		class UClass*                                              OutputClass;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.GetContainedDinoClass
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_GetContainedDinoClass_Params
	{
	public:
		class UClass*                                              ResolvedClass;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasData;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R1A2[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCustomItemData                                     RawCustomItemData;                                       // 0x0010(0x0078)  (Parm, OutParm)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPPreventUpload
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_BPPreventUpload_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.Get Stat Value for Display
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_GetStatValueforDisplay_Params
	{
	public:
		double                                                     MaxValue;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPrimalCharacterStatusValue                                Stat;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L6FL[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     Value;                                                   // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Result;                                                  // 0x0018(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.GetStatDisplayName
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_GetStatDisplayName_Params
	{
	public:
		EPrimalCharacterStatusValue                                Stat;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0ZIN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                DisplayName;                                             // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPGetItemDescription
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_BPGetItemDescription_Params
	{
	public:
		class FString                                              InDescription;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bGetLongDescription;                                     // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JAOC[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterPlayerController*                            ForPC;                                                   // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPInitIconMaterial
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_BPInitIconMaterial_Params
	{	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPGetCustomIconMaterialParent
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_BPGetCustomIconMaterialParent_Params
	{
	public:
		class UMaterialInterface*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPTributeItemUploaded
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_BPTributeItemUploaded_Params
	{
	public:
		class UObject*                                             ContextObject;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPTributeItemDownloaded
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_BPTributeItemDownloaded_Params
	{
	public:
		class UObject*                                             ContextObject;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPItemBelowDurabilityThreshold
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_BPItemBelowDurabilityThreshold_Params
	{	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPGetCustomInventoryWidgetTextColor
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_BPGetCustomInventoryWidgetTextColor_Params
	{
	public:
		struct FColor                                              ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPGetCustomDurabilityText
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_BPGetCustomDurabilityText_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPGetCustomAutoDecreaseDurabilityPerInterval
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_BPGetCustomAutoDecreaseDurabilityPerInterval_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GW5X[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPGetCustomInventoryWidgetText
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_BPGetCustomInventoryWidgetText_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPItemBroken
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_BPItemBroken_Params
	{	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.TryDeploy
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_TryDeploy_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            Rotation;                                                // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              SpawningActor;                                           // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              IgnoreActor;                                             // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       Deployed;                                                // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8SXV[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             NewLocation;                                             // 0x0048(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              FailureReason;                                           // 0x0060(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.CanFit
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_CanFit_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     VerticalOffset;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Angle;                                                   // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     HorizontalOffset;                                        // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Radius;                                                  // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     HalfHeight;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              SpawningActor;                                           // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              IgnoreActor;                                             // 0x0048(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       Can;                                                     // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XCN8[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             NewLocation;                                             // 0x0058(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.CanDeploy
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_CanDeploy_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              SpawningActor;                                           // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              IgnoreActor;                                             // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       Can;                                                     // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MYGR[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             NewLocation;                                             // 0x0038(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              FailureReason;                                           // 0x0050(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BPGetItemName
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_BPGetItemName_Params
	{
	public:
		class FString                                              ItemNameIn;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class AShooterPlayerController*                            ForPC;                                                   // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.BrokenDeploy
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_BrokenDeploy_Params
	{	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.ExecuteUbergraph_PrimalItem_WeaponEmptyCryopod
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_ExecuteUbergraph_PrimalItem_WeaponEmptyCryopod_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZGX2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItem_WeaponEmptyCryopod.PrimalItem_WeaponEmptyCryopod_C.NewEventDispatcher__DelegateSignature
	 */
	struct UPrimalItem_WeaponEmptyCryopod_C_NewEventDispatcher__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
