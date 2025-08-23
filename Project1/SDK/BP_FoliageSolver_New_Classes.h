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
	 * BlueprintGeneratedClass BP_FoliageSolver_New.BP_FoliageSolver_New_C
	 * Size -> 0x06D0 (FullSize[0x0C08] - InheritedSize[0x0538])
	 */
	class ABP_FoliageSolver_New_C : public APrimalFoliageSolver
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0538(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMaterialGPUReadbackMessageComponent*                MaterialGPUReadbackMessage;                              // 0x0540(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Cube;                                                    // 0x0548(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Plane;                                                   // 0x0550(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0558(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FSTRUCT_RTVLib>                              RTV_maps;                                                // 0x0560(0x0010) Edit, BlueprintVisible
		TArray<struct FSTRUCT_FluidLOD>                            LOD_map;                                                 // 0x0570(0x0010) Edit, BlueprintVisible
		int32_t                                                    RTV_exports_LOD;                                         // 0x0580(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BJT2[0x4];                                   // 0x0584(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSTRUCT_RTVexport>                           RTV_exports_RTVs_1;                                      // 0x0588(0x0010) Edit, BlueprintVisible
		TMap<class FString, struct FSTRUCT_FluidSolverMats>        MID_map;                                                 // 0x0598(0x0050) Edit, BlueprintVisible
		TMap<class FString, class UTextureRenderTargetVolume*>     _temp_RTV_map;                                           // 0x05E8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class AActor*>                                      Sources;                                                 // 0x0638(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class UTextureRenderTargetVolume*                          RTV_debug_Painter;                                       // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		double                                                     _debug_source_radius;                                    // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ANiagaraActor*>                               Niagara_actors;                                          // 0x0658(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		ENUM_RTV_names                                             RT_to_Niagara;                                           // 0x0668(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ENABLESIM;                                               // 0x0669(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SEDD[0x6];                                   // 0x066A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextureRenderTargetVolume*                          RTV_debug_Advect;                                        // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UTextureRenderTargetVolume*                          RTV_debug_Composite;                                     // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UTextureRenderTargetVolume*                          RTV_debug_PressureDiv;                                   // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UTextureRenderTargetVolume*                          RTV_debug_PressureDivTemp;                               // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UTextureRenderTargetVolume*                          RTV_debug_Divergence;                                    // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		double                                                     _debug_timer;                                            // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             _debug_source_pos;                                       // 0x06A0(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             _debug_source_vel;                                       // 0x06B8(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     _debug_add_painter;                                      // 0x06D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterial*                                           MCubeVisualizer;                                         // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		TArray<class UMaterialInstanceConstant*>                   MPlaneVisualizers;                                       // 0x06E0(0x0010) Edit, BlueprintVisible
		class UMaterialParameterCollection*                        MPC_Fluid3d;                                             // 0x06F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TMap<class FString, class UTextureRenderTarget2D*>         RTs_utility;                                             // 0x06F8(0x0050) Edit, BlueprintVisible
		int32_t                                                    _temp_source_counter;                                    // 0x0748(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7T8S[0x4];                                   // 0x074C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      Sources_valid;                                           // 0x0750(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class UTextureRenderTarget2D*                              RT_debug_data_sources;                                   // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SelectPlaneVisualizerMat;                                // 0x0768(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_E59P[0x4];                                   // 0x076C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            MID_plane_visualizer;                                    // 0x0770(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		ENUM_RTV_names                                             VisualizeRTV;                                            // 0x0778(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AsyncCompute;                                            // 0x0779(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IP6P[0x6];                                   // 0x077A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextureRenderTarget2D*                              RT_debug_to_Niagara;                                     // 0x0780(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UTextureRenderTarget2D*                              RT_external_to_Niagara_1;                                // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		bool                                                       ENABLEFLUIDS;                                            // 0x0790(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ENABLEFOLIAGE;                                           // 0x0791(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9F7V[0x6];                                   // 0x0792(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextureRenderTargetVolume*                          RTV_debug_foliage_direction;                             // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		bool                                                       EchoStatsonTick;                                         // 0x07A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EchoStatsonBeginPlay;                                    // 0x07A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1VKQ[0x6];                                   // 0x07A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     Precisionvectorpacking;                                  // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTextureRenderTargetVolume*                          RTV_debug_foliage_utility_C;                             // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UTextureRenderTargetVolume*                          RTV_debug_foliage_plasticity;                            // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		bool                                                       ExportDebugRTVs;                                         // 0x07C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8U3D[0x7];                                   // 0x07C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSTRUCT_RTexport>                            RT_exports;                                              // 0x07C8(0x0010) Edit, BlueprintVisible
		double                                                     VisualizerPlanePos;                                      // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ENABLEWIND;                                              // 0x07E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EWSE[0x7];                                   // 0x07E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     wind_heading;                                            // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     wind_frequency;                                          // 0x07F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     wind_radii_sum;                                          // 0x07F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     wind_strength;                                           // 0x0800(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     wind_speed;                                              // 0x0808(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           wind_lookup_offset;                                      // 0x0810(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             wind_dir;                                                // 0x0820(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     wind_MASTER_pattern_scale;                               // 0x0838(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     wind_MASTER_turbulence;                                  // 0x0840(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             pos_player;                                              // 0x0848(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Domainfollowsplayer;                                     // 0x0860(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9MIR[0x7];                                   // 0x0861(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextureRenderTargetVolume*                          RTV_debug_foliage_utility_A;                             // 0x0868(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UTextureRenderTargetVolume*                          RTV_debug_foliage_utility_B;                             // 0x0870(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		bool                                                       BeginPlayUnlit;                                          // 0x0878(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_975Q[0x7];                                   // 0x0879(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     _temp_widnsource_weight;                                 // 0x0880(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             domain_delta_P_LOD_1;                                    // 0x0888(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       VerboseLog;                                              // 0x08A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       move_domain_once;                                        // 0x08A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RHNX[0x6];                                   // 0x08A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             domain_delta_debug;                                      // 0x08A8(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTextureRenderTargetVolume*                          RTV_debug_foliage_stash;                                 // 0x08C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UTextureRenderTargetVolume*                          _temp_RTV;                                               // 0x08C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowVizCube;                                             // 0x08D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowVizPlane;                                            // 0x08D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MKCL[0x6];                                   // 0x08D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextureRenderTargetVolume*                          RTV_0_Niagara_direction;                                 // 0x08D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UTextureRenderTargetVolume*                          RTV_0_Niagara_utility_A;                                 // 0x08E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UTextureRenderTargetVolume*                          RTV_0_Niagara_utility_B;                                 // 0x08E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UObject*                                             EUW_asset_tools;                                         // 0x08F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UTextureRenderTarget2D*                              RT_Debug_values;                                         // 0x08F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UMaterialInstance*                                   MIC_debug_values;                                        // 0x0900(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Fluids_resolution_multiplier;                            // 0x0908(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SelectPlaneVisualizerRTVset;                             // 0x0920(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_E66A[0x4];                                   // 0x0924(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            MID_current;                                             // 0x0928(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TMap<class FString, struct FSTRUCT_FluidSolverMats>        MID_map_RTVs_1;                                          // 0x0930(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FString, struct FSTRUCT_FluidSolverMats>        MID_map_RTVs_2;                                          // 0x0980(0x0050) Edit, BlueprintVisible
		TArray<struct FSTRUCT_RTVexport>                           RTV_exports_RTVs_2;                                      // 0x09D0(0x0010) Edit, BlueprintVisible
		double                                                     wind_MASTER;                                             // 0x09E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     wind_MASTER_heading;                                     // 0x09E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           wind_lookup_offset_leaves;                               // 0x09F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCurveLinearColor*                                   wind_CRV_BF_BS_LF;                                       // 0x0A00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMaterialParameterCollection*                        MPC_UltraDynamicWeather;                                 // 0x0A08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       use_solver_wind_parms;                                   // 0x0A10(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IBVI[0x7];                                   // 0x0A11(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     wind_MASTER_converging;                                  // 0x0A18(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     wind_MASTER_heading__converging;                         // 0x0A20(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     wind_timer;                                              // 0x0A28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     wind_GUST_probability;                                   // 0x0A30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             domain_delta_P_LOD_2;                                    // 0x0A38(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    GPU_Msg_count;                                           // 0x0A50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IDTR[0x4];                                   // 0x0A54(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, struct FSTRUCT_GPUMsg>                 GPU_Msg_value;                                           // 0x0A58(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       ENABLEGPUMsgReceiver;                                    // 0x0AA8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5TWR[0x7];                                   // 0x0AA9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     BP_time;                                                 // 0x0AB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     GPUMsgexpirytime;                                        // 0x0AB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    BP_time_prev;                                            // 0x0AC0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_92LP[0x4];                                   // 0x0AC4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             EventDispatch_GPUMsg_interaction;                        // 0x0AC8(0x0010) Edit, BlueprintVisible, ZeroConstructor, BlueprintAssignable, BlueprintCallable
		TArray<ENUM_verbose_types>                                 verbose_tags;                                            // 0x0AD8(0x0010) Edit, BlueprintVisible
		TArray<struct FSTRUCT_RTVexport>                           RTV_exports_RTVs_0_DEBUG;                                // 0x0AE8(0x0010) Edit, BlueprintVisible
		int32_t                                                    BP_tick;                                                 // 0x0AF8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    draw_interval_foliage;                                   // 0x0AFC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    draw_interval_fluids;                                    // 0x0B00(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OZHM[0x4];                                   // 0x0B04(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBP_PrimalWindSourceComponent_Base_C*                source_player;                                           // 0x0B08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		double                                                     player_source_radius_inner;                              // 0x0B10(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     player_source_radius_outer;                              // 0x0B18(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     player_source_vel_mult;                                  // 0x0B20(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             player_source_dir_radial;                                // 0x0B28(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             player_source_scale;                                     // 0x0B40(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     player_source_strength;                                  // 0x0B58(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     player_source_osc_speed;                                 // 0x0B60(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       player_source_enable_debug;                              // 0x0B68(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       player_source_use_actor_vel;                             // 0x0B69(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KJS9[0x6];                                   // 0x0B6A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextureRenderTarget2D*                              RT_Ninja_Painter;                                        // 0x0B70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMaterial*                                           M_Ninja_Inject;                                          // 0x0B78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMaterialParameterCollection*                        MPC_ASA_Environment;                                     // 0x0B80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bol_RTV_0_direction_STASHED;                             // 0x0B88(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bol_move_visualizer;                                     // 0x0B89(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3IOR[0x6];                                   // 0x0B8A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UTextureRenderTargetVolume*, bool>              RTVs_stashed;                                            // 0x0B90(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bol_RTV_0_utility_A_STASHED;                             // 0x0BE0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bol_RTV_0_utility_B_STASHED;                             // 0x0BE1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bol_RTV_0_utility_B_OFFSET_COMPLETE;                     // 0x0BE2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bol_RTV_0_utility_A_OFFSET_COMPLETE;                     // 0x0BE3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bol_RTV_0_direction_OFFSET_COMPLETE;                     // 0x0BE4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bol_RTV_1_direction_STASHED;                             // 0x0BE5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bol_RTV_1_utility_A_STASHED;                             // 0x0BE6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bol_RTV_1_utility_B_STASHED;                             // 0x0BE7(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bol_RTV_1_utility_B_OFFSET_COMPLETE;                     // 0x0BE8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bol_RTV_1_utility_A_OFFSET_COMPLETE;                     // 0x0BE9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bol_RTV_1_direction_OFFSET_COMPLETE;                     // 0x0BEA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       _debug_move_domain_manual;                               // 0x0BEB(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDownrezzedLODMap;                                       // 0x0BEC(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bol_RTV_composite_STASHED;                               // 0x0BED(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bol_RTV_composite_OFFSET_COMPLETE;                       // 0x0BEE(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JZ4Z[0x1];                                   // 0x0BEF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextureRenderTarget2D*                              RT_external_to_Niagara_2;                                // 0x0BF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           wind_lookup_offset_prev;                                 // 0x0BF8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void DestroyRTVsFluid();
		void DRAWCompositeRepositioned(int32_t LOD);
		void NewFunction();
		void world_pos_to_domain_space(const struct FVector& world_space, int32_t domain_LOD_idx, struct FVector* domain_space, struct FVector* domain_indices);
		void DownrezLODMap();
		void DRAW_RT_sources_legacy();
		void move_domain3();
		void move_domain2();
		void DRAWFoliageLOD1();
		void DRAWFoliageLOD0();
		void GPU_Msg_report();
		void move_domain();
		void update_globals_init();
		void init_clear_RTVs();
		void DRAWRTVDeltaP(const class FString& RTV, const class FString& RTVStash, const class FString& SolverMaterial, int32_t RTV_LOD_idx, TMap<class FString, struct FSTRUCT_FluidSolverMats> NewParam, int32_t everynthtick, const class FString& M_Stash_name);
		void enforce_full_texel_pos(const struct FVector& Pos, int32_t RTVLODidx, struct FVector* pos_clamped);
		void verbose_print(const class FString& Label, const class FString& PrintString, const struct FLinearColor& Color, double Time, bool PrinttoScreen, bool PrinttoLog, ENUM_verbose_types verbose_tag);
		void wind_update();
		void export_RTs();
		void connect_MIDs_FOLIAGE();
		void logic_adjust_sources();
		void DRAW_foliage_solver();
		void init_RTV_map();
		void init_RTVs_Foliage();
		void init_RTs_utility();
		void DRAW_RT_sources();
		void update_globals_continuous();
		void init_Visualizers();
		void export_debug_RTVs();
		void DRAW_pressureCycle2(int32_t LOD);
		void connect_MIDs_FLUID();
		void DRAW_pressureCycle1(int32_t LOD);
		void export_to_Niagara();
		void export_RTV_as_RT_for_Niagara();
		void DRAW_divergence(int32_t LOD);
		void DRAW_composite(int32_t LOD);
		void DRAW_advect(int32_t LOD);
		void echo_stats_OnTick();
		void find_sources();
		void export_RTVs();
		void init_MIDs();
		void echo_stats_BeginPlay();
		void init_RTVs_Fluid();
		void UserConstructionScript();
		void STEP();
		void add_painter();
		void UpdateVisualizer();
		void ReceiveBeginPlay();
		void Spawn4Rex();
		void Spawn40Raptors();
		void initclear();
		void disable_FI_MPC_WPO();
		void BndEvt__BP_FoliageSolver_MaterialGPUReadbackMessage_K2Node_ComponentBoundEvent_0_GPUReadbackMessageDelegate__DelegateSignature(TArray<float> Data, const struct FMaterialGPUMessagePrimitiveInfo& PrimitiveInfo);
		void GPU_Msg_event_interaction(const class FString& event_key, const struct FSTRUCT_GPUMsg& event_values);
		void ReceiveTick(float DeltaSeconds);
		void update_player_source_parms();
		void print_player_pawn();
		void AAAAA_OFFSET_PX();
		void init_fluids();
		void destroy_fluids();
		void ExecuteUbergraph_BP_FoliageSolver_New(int32_t EntryPoint);
		void EventDispatch_GPUMsg_interaction__DelegateSignature(const class FString& event_key, const struct FSTRUCT_GPUMsg& event_values);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
