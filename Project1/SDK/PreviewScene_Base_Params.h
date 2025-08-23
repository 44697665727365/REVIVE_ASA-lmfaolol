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
	 * Function PreviewScene_Base.PreviewScene_Base_C.SetDebugLightIntensity
	 */
	struct APreviewScene_Base_C_SetDebugLightIntensity_Params
	{
	public:
		double                                                     NewIntensity;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PreviewScene_Base.PreviewScene_Base_C.SetDebugLightRotation
	 */
	struct APreviewScene_Base_C_SetDebugLightRotation_Params
	{
	public:
		struct FRotator                                            NewRotation;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PreviewScene_Base.PreviewScene_Base_C.DebugLights
	 */
	struct APreviewScene_Base_C_DebugLights_Params
	{	};

	/**
	 * Function PreviewScene_Base.PreviewScene_Base_C.UpdateFloorLocation
	 */
	struct APreviewScene_Base_C_UpdateFloorLocation_Params
	{
	public:
		bool                                                       isFemale;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PreviewScene_Base.PreviewScene_Base_C.NotifySetupPreviewScene
	 */
	struct APreviewScene_Base_C_NotifySetupPreviewScene_Params
	{
	public:
		class UMeshComponent*                                      ForMeshComp;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		TArray<class USceneComponent*>                             ForChildComps;                                           // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		class AShooterPlayerController*                            ForPC;                                                   // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PreviewScene_Base.PreviewScene_Base_C.NotifyPreviewSceneUpdated
	 */
	struct APreviewScene_Base_C_NotifyPreviewSceneUpdated_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PreviewScene_Base.PreviewScene_Base_C.ExecuteUbergraph_PreviewScene_Base
	 */
	struct APreviewScene_Base_C_ExecuteUbergraph_PreviewScene_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QTQM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
