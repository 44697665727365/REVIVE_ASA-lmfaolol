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
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.Destroy RTVs Fluid
	 */
	struct ABP_FoliageSolver_New_C_DestroyRTVsFluid_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DRAW Composite Repositioned
	 */
	struct ABP_FoliageSolver_New_C_DRAWCompositeRepositioned_Params
	{
	public:
		int32_t                                                    LOD;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.NewFunction
	 */
	struct ABP_FoliageSolver_New_C_NewFunction_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.world_pos_to_domain_space
	 */
	struct ABP_FoliageSolver_New_C_world_pos_to_domain_space_Params
	{
	public:
		struct FVector                                             world_space;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    domain_LOD_idx;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D0SA[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             domain_space;                                            // 0x0020(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             domain_indices;                                          // 0x0038(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DownrezLODMap
	 */
	struct ABP_FoliageSolver_New_C_DownrezLODMap_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DRAW_RT_sources_legacy
	 */
	struct ABP_FoliageSolver_New_C_DRAW_RT_sources_legacy_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.move_domain3
	 */
	struct ABP_FoliageSolver_New_C_move_domain3_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.move_domain2
	 */
	struct ABP_FoliageSolver_New_C_move_domain2_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DRAW Foliage LOD 1
	 */
	struct ABP_FoliageSolver_New_C_DRAWFoliageLOD1_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DRAW Foliage LOD 0
	 */
	struct ABP_FoliageSolver_New_C_DRAWFoliageLOD0_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.GPU_Msg_report
	 */
	struct ABP_FoliageSolver_New_C_GPU_Msg_report_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.move_domain
	 */
	struct ABP_FoliageSolver_New_C_move_domain_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.update_globals_init
	 */
	struct ABP_FoliageSolver_New_C_update_globals_init_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.init_clear_RTVs
	 */
	struct ABP_FoliageSolver_New_C_init_clear_RTVs_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DRAW RTV Delta P
	 */
	struct ABP_FoliageSolver_New_C_DRAWRTVDeltaP_Params
	{
	public:
		class FString                                              RTV;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              RTVStash;                                                // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              SolverMaterial;                                          // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    RTV_LOD_idx;                                             // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XSLS[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<class FString, struct FSTRUCT_FluidSolverMats>        NewParam;                                                // 0x0038(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    everynthtick;                                            // 0x0088(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KUZJ[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              M_Stash_name;                                            // 0x0090(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.enforce_full_texel_pos
	 */
	struct ABP_FoliageSolver_New_C_enforce_full_texel_pos_Params
	{
	public:
		struct FVector                                             Pos;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RTVLODidx;                                               // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QLAU[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             pos_clamped;                                             // 0x0020(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.verbose_print
	 */
	struct ABP_FoliageSolver_New_C_verbose_print_Params
	{
	public:
		class FString                                              Label;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              PrintString;                                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FLinearColor                                        Color;                                                   // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Time;                                                    // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PrinttoScreen;                                           // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PrinttoLog;                                              // 0x0039(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENUM_verbose_types                                         verbose_tag;                                             // 0x003A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0KTG[0x1];                                   // 0x003B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.wind_update
	 */
	struct ABP_FoliageSolver_New_C_wind_update_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.export_RTs
	 */
	struct ABP_FoliageSolver_New_C_export_RTs_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.connect_MIDs_FOLIAGE
	 */
	struct ABP_FoliageSolver_New_C_connect_MIDs_FOLIAGE_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.logic_adjust_sources
	 */
	struct ABP_FoliageSolver_New_C_logic_adjust_sources_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DRAW_foliage_solver
	 */
	struct ABP_FoliageSolver_New_C_DRAW_foliage_solver_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.init_RTV_map
	 */
	struct ABP_FoliageSolver_New_C_init_RTV_map_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.init_RTVs_Foliage
	 */
	struct ABP_FoliageSolver_New_C_init_RTVs_Foliage_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.init_RTs_utility
	 */
	struct ABP_FoliageSolver_New_C_init_RTs_utility_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DRAW_RT_sources
	 */
	struct ABP_FoliageSolver_New_C_DRAW_RT_sources_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.update_globals_continuous
	 */
	struct ABP_FoliageSolver_New_C_update_globals_continuous_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.init_Visualizers
	 */
	struct ABP_FoliageSolver_New_C_init_Visualizers_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.export_debug_RTVs
	 */
	struct ABP_FoliageSolver_New_C_export_debug_RTVs_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DRAW_pressureCycle2
	 */
	struct ABP_FoliageSolver_New_C_DRAW_pressureCycle2_Params
	{
	public:
		int32_t                                                    LOD;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QFVK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.connect_MIDs_FLUID
	 */
	struct ABP_FoliageSolver_New_C_connect_MIDs_FLUID_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DRAW_pressureCycle1
	 */
	struct ABP_FoliageSolver_New_C_DRAW_pressureCycle1_Params
	{
	public:
		int32_t                                                    LOD;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PP65[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.export_to_Niagara
	 */
	struct ABP_FoliageSolver_New_C_export_to_Niagara_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.export_RTV_as_RT_for_Niagara
	 */
	struct ABP_FoliageSolver_New_C_export_RTV_as_RT_for_Niagara_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DRAW_divergence
	 */
	struct ABP_FoliageSolver_New_C_DRAW_divergence_Params
	{
	public:
		int32_t                                                    LOD;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EK3Y[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DRAW_composite
	 */
	struct ABP_FoliageSolver_New_C_DRAW_composite_Params
	{
	public:
		int32_t                                                    LOD;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Z843[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DRAW_advect
	 */
	struct ABP_FoliageSolver_New_C_DRAW_advect_Params
	{
	public:
		int32_t                                                    LOD;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YO47[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.echo_stats_OnTick
	 */
	struct ABP_FoliageSolver_New_C_echo_stats_OnTick_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.find_sources
	 */
	struct ABP_FoliageSolver_New_C_find_sources_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.export_RTVs
	 */
	struct ABP_FoliageSolver_New_C_export_RTVs_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.init_MIDs
	 */
	struct ABP_FoliageSolver_New_C_init_MIDs_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.echo_stats_BeginPlay
	 */
	struct ABP_FoliageSolver_New_C_echo_stats_BeginPlay_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.init_RTVs_Fluid
	 */
	struct ABP_FoliageSolver_New_C_init_RTVs_Fluid_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.UserConstructionScript
	 */
	struct ABP_FoliageSolver_New_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.STEP
	 */
	struct ABP_FoliageSolver_New_C_STEP_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.add_painter
	 */
	struct ABP_FoliageSolver_New_C_add_painter_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.Update Visualizer
	 */
	struct ABP_FoliageSolver_New_C_UpdateVisualizer_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.ReceiveBeginPlay
	 */
	struct ABP_FoliageSolver_New_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.Spawn 4 Rex
	 */
	struct ABP_FoliageSolver_New_C_Spawn4Rex_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.Spawn 40 Raptors
	 */
	struct ABP_FoliageSolver_New_C_Spawn40Raptors_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.init clear
	 */
	struct ABP_FoliageSolver_New_C_initclear_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.disable_FI_MPC_WPO
	 */
	struct ABP_FoliageSolver_New_C_disable_FI_MPC_WPO_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.BndEvt__BP_FoliageSolver_MaterialGPUReadbackMessage_K2Node_ComponentBoundEvent_0_GPUReadbackMessageDelegate__DelegateSignature
	 */
	struct ABP_FoliageSolver_New_C_BndEvt__BP_FoliageSolver_MaterialGPUReadbackMessage_K2Node_ComponentBoundEvent_0_GPUReadbackMessageDelegate__DelegateSignature_Params
	{
	public:
		TArray<float>                                              Data;                                                    // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FMaterialGPUMessagePrimitiveInfo                    PrimitiveInfo;                                           // 0x0010(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.GPU_Msg_event_interaction
	 */
	struct ABP_FoliageSolver_New_C_GPU_Msg_event_interaction_Params
	{
	public:
		class FString                                              event_key;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FSTRUCT_GPUMsg                                      event_values;                                            // 0x0010(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.ReceiveTick
	 */
	struct ABP_FoliageSolver_New_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.update_player_source_parms
	 */
	struct ABP_FoliageSolver_New_C_update_player_source_parms_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.print_player_pawn
	 */
	struct ABP_FoliageSolver_New_C_print_player_pawn_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.AAAAA_OFFSET_PX
	 */
	struct ABP_FoliageSolver_New_C_AAAAA_OFFSET_PX_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.init_fluids
	 */
	struct ABP_FoliageSolver_New_C_init_fluids_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.destroy_fluids
	 */
	struct ABP_FoliageSolver_New_C_destroy_fluids_Params
	{	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.ExecuteUbergraph_BP_FoliageSolver_New
	 */
	struct ABP_FoliageSolver_New_C_ExecuteUbergraph_BP_FoliageSolver_New_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.EventDispatch_GPUMsg_interaction__DelegateSignature
	 */
	struct ABP_FoliageSolver_New_C_EventDispatch_GPUMsg_interaction__DelegateSignature_Params
	{
	public:
		class FString                                              event_key;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FSTRUCT_GPUMsg                                      event_values;                                            // 0x0010(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
