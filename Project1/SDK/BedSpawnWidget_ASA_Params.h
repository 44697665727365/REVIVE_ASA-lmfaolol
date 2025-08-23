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
	 * Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.SetupBedIcon
	 */
	struct UBedSpawnWidget_ASA_C_SetupBedIcon_Params
	{
	public:
		class UTexture2D*                                          BedIcon;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.Get_Image_DefaultDestination_ColorAndOpacity
	 */
	struct UBedSpawnWidget_ASA_C_Get_Image_DefaultDestination_ColorAndOpacity_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.BndEvt__SpawnRegionWidget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBedSpawnWidget_ASA_C_BndEvt__SpawnRegionWidget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.SetSelected
	 */
	struct UBedSpawnWidget_ASA_C_SetSelected_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.SetupBed
	 */
	struct UBedSpawnWidget_ASA_C_SetupBed_Params
	{
	public:
		int32_t                                                    SpawnPointID;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XUI2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     NextAllowedUseTime;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAllowedUse;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IFPC[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              BedName;                                                 // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bIsDefaultDest;                                          // 0x0040(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.SetQuantityBeds
	 */
	struct UBedSpawnWidget_ASA_C_SetQuantityBeds_Params
	{
	public:
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.Construct
	 */
	struct UBedSpawnWidget_ASA_C_Construct_Params
	{	};

	/**
	 * Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.ExecuteUbergraph_BedSpawnWidget_ASA
	 */
	struct UBedSpawnWidget_ASA_C_ExecuteUbergraph_BedSpawnWidget_ASA_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.Clicked__DelegateSignature
	 */
	struct UBedSpawnWidget_ASA_C_Clicked__DelegateSignature_Params
	{
	public:
		class UBedSpawnWidget_ASA_C*                               BedSpawn;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
