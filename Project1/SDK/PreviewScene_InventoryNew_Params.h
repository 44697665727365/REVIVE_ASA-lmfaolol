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
	 * Function PreviewScene_InventoryNew.PreviewScene_InventoryNew_C.UpdateFloorLocation
	 */
	struct APreviewScene_InventoryNew_C_UpdateFloorLocation_Params
	{
	public:
		bool                                                       isFemale;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WMQ5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PreviewScene_InventoryNew.PreviewScene_InventoryNew_C.FrontLightChangeWhenBelowFloor
	 */
	struct APreviewScene_InventoryNew_C_FrontLightChangeWhenBelowFloor_Params
	{	};

	/**
	 * Function PreviewScene_InventoryNew.PreviewScene_InventoryNew_C.RotateLightsInZWithCamera
	 */
	struct APreviewScene_InventoryNew_C_RotateLightsInZWithCamera_Params
	{	};

	/**
	 * Function PreviewScene_InventoryNew.PreviewScene_InventoryNew_C.NotifyPreviewSceneUpdated
	 */
	struct APreviewScene_InventoryNew_C_NotifyPreviewSceneUpdated_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PreviewScene_InventoryNew.PreviewScene_InventoryNew_C.NotifySetupPreviewScene
	 */
	struct APreviewScene_InventoryNew_C_NotifySetupPreviewScene_Params
	{
	public:
		class UMeshComponent*                                      ForMeshComp;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		TArray<class USceneComponent*>                             ForChildComps;                                           // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		class AShooterPlayerController*                            ForPC;                                                   // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PreviewScene_InventoryNew.PreviewScene_InventoryNew_C.ExecuteUbergraph_PreviewScene_InventoryNew
	 */
	struct APreviewScene_InventoryNew_C_ExecuteUbergraph_PreviewScene_InventoryNew_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
