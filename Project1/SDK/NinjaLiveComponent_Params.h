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
	 * Function NinjaLiveComponent.NinjaLiveComponent_C.ASA_Compute_SplatDispatch
	 */
	struct UNinjaLiveComponent_C_ASA_Compute_SplatDispatch_Params
	{
	public:
		class UTextureRenderTarget2D*                              RenderTarget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UMaterialInterface*                                  Material;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLiveComponent.NinjaLiveComponent_C.ASA_set_visualizer_mat_RT
	 */
	struct UNinjaLiveComponent_C_ASA_set_visualizer_mat_RT_Params
	{
	public:
		class UMaterialInstanceDynamic*                            Mid;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLiveComponent.NinjaLiveComponent_C.ASA_advect_foam_init_RTs
	 */
	struct UNinjaLiveComponent_C_ASA_advect_foam_init_RTs_Params
	{	};

	/**
	 * Function NinjaLiveComponent.NinjaLiveComponent_C.ASA_advect_foam_init_MIDs
	 */
	struct UNinjaLiveComponent_C_ASA_advect_foam_init_MIDs_Params
	{	};

	/**
	 * Function NinjaLiveComponent.NinjaLiveComponent_C.ASA_advect_foam_step
	 */
	struct UNinjaLiveComponent_C_ASA_advect_foam_step_Params
	{
	public:
		TMap<class FString, class UTextureRenderTarget2D*>         RT_map;                                                  // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function NinjaLiveComponent.NinjaLiveComponent_C.PrimalOnTick
	 */
	struct UNinjaLiveComponent_C_PrimalOnTick_Params
	{	};

	/**
	 * Function NinjaLiveComponent.NinjaLiveComponent_C.GetActualResolutionY
	 */
	struct UNinjaLiveComponent_C_GetActualResolutionY_Params
	{
	public:
		int32_t                                                    ResX;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLiveComponent.NinjaLiveComponent_C.GetActualResolutionX
	 */
	struct UNinjaLiveComponent_C_GetActualResolutionX_Params
	{
	public:
		int32_t                                                    ResX;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLiveComponent.NinjaLiveComponent_C.ASA_ClearRenderTarget
	 */
	struct UNinjaLiveComponent_C_ASA_ClearRenderTarget_Params
	{
	public:
		class FString                                              TargetName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLiveComponent.NinjaLiveComponent_C.ASA_TraceToSimUV
	 */
	struct UNinjaLiveComponent_C_ASA_TraceToSimUV_Params
	{
	public:
		struct FVector                                             TraceWorldPosition;                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        HitUV;                                                   // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLiveComponent.NinjaLiveComponent_C.ASA_Compute_Draw
	 */
	struct UNinjaLiveComponent_C_ASA_Compute_Draw_Params
	{
	public:
		class UTextureRenderTarget2D*                              RenderTarget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UMaterialInterface*                                  Material;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLiveComponent.NinjaLiveComponent_C.ReceiveBeginPlay
	 */
	struct UNinjaLiveComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function NinjaLiveComponent.NinjaLiveComponent_C.Shutdown
	 */
	struct UNinjaLiveComponent_C_Shutdown_Params
	{	};

	/**
	 * Function NinjaLiveComponent.NinjaLiveComponent_C.LiveFluidParams
	 */
	struct UNinjaLiveComponent_C_LiveFluidParams_Params
	{
	public:
		double                                                     BrushSize;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLiveComponent.NinjaLiveComponent_C.BPOnComponentCreated
	 */
	struct UNinjaLiveComponent_C_BPOnComponentCreated_Params
	{	};

	/**
	 * Function NinjaLiveComponent.NinjaLiveComponent_C.SelChanged
	 */
	struct UNinjaLiveComponent_C_SelChanged_Params
	{
	public:
		class FString                                              SelectedMenuItem;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              SelectedActorName;                                       // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLiveComponent.NinjaLiveComponent_C.PresetSelectionChanged
	 */
	struct UNinjaLiveComponent_C_PresetSelectionChanged_Params
	{
	public:
		class FString                                              SelectedPreset;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ForceAutoLoadPreset;                                     // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLiveComponent.NinjaLiveComponent_C.PresetSave
	 */
	struct UNinjaLiveComponent_C_PresetSave_Params
	{
	public:
		class FString                                              SelectedProject;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              SelectedPreset;                                          // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       OverWriteOrNot;                                          // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLiveComponent.NinjaLiveComponent_C.LiveActivation
	 */
	struct UNinjaLiveComponent_C_LiveActivation_Params
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     FadeTimeOfBrush;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     FadeTimeOfCanvas;                                        // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLiveComponent.NinjaLiveComponent_C.Replay
	 */
	struct UNinjaLiveComponent_C_Replay_Params
	{	};

	/**
	 * Function NinjaLiveComponent.NinjaLiveComponent_C.ReceiveTick
	 */
	struct UNinjaLiveComponent_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLiveComponent.NinjaLiveComponent_C.ComponentRePlayEvent2
	 */
	struct UNinjaLiveComponent_C_ComponentRePlayEvent2_Params
	{	};

	/**
	 * Function NinjaLiveComponent.NinjaLiveComponent_C.ExecuteUbergraph_NinjaLiveComponent
	 */
	struct UNinjaLiveComponent_C_ExecuteUbergraph_NinjaLiveComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLiveComponent.NinjaLiveComponent_C.WorldSpaceOffset__DelegateSignature
	 */
	struct UNinjaLiveComponent_C_WorldSpaceOffset__DelegateSignature_Params
	{
	public:
		struct FVector                                             TraceMeshPos;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLiveComponent.NinjaLiveComponent_C.ComponentShutdownEvent__DelegateSignature
	 */
	struct UNinjaLiveComponent_C_ComponentShutdownEvent__DelegateSignature_Params
	{	};

	/**
	 * Function NinjaLiveComponent.NinjaLiveComponent_C.ComponentBroadcastMemConsumption__DelegateSignature
	 */
	struct UNinjaLiveComponent_C_ComponentBroadcastMemConsumption__DelegateSignature_Params
	{
	public:
		class UObject*                                             Consumer;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                                     MemConsumption;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       TakenOrReturned;                                         // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLiveComponent.NinjaLiveComponent_C.ComponentRePlayEvent__DelegateSignature
	 */
	struct UNinjaLiveComponent_C_ComponentRePlayEvent__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
