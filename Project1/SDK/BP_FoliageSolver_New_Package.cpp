/**
 * Name: Ark_Survival_Ascended
 * Version: 0.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.Destroy RTVs Fluid
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::DestroyRTVsFluid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.Destroy RTVs Fluid");
		
		ABP_FoliageSolver_New_C_DestroyRTVsFluid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DRAW Composite Repositioned
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            LOD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FoliageSolver_New_C::DRAWCompositeRepositioned(int32_t LOD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DRAW Composite Repositioned");
		
		ABP_FoliageSolver_New_C_DRAWCompositeRepositioned_Params params {};
		params.LOD = LOD;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.NewFunction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::NewFunction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.NewFunction");
		
		ABP_FoliageSolver_New_C_NewFunction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.world_pos_to_domain_space
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     world_space                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            domain_LOD_idx                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     domain_space                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     domain_indices                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FoliageSolver_New_C::world_pos_to_domain_space(const struct FVector& world_space, int32_t domain_LOD_idx, struct FVector* domain_space, struct FVector* domain_indices)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.world_pos_to_domain_space");
		
		ABP_FoliageSolver_New_C_world_pos_to_domain_space_Params params {};
		params.world_space = world_space;
		params.domain_LOD_idx = domain_LOD_idx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (domain_space != nullptr)
			*domain_space = params.domain_space;
		if (domain_indices != nullptr)
			*domain_indices = params.domain_indices;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DownrezLODMap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::DownrezLODMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DownrezLODMap");
		
		ABP_FoliageSolver_New_C_DownrezLODMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DRAW_RT_sources_legacy
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::DRAW_RT_sources_legacy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DRAW_RT_sources_legacy");
		
		ABP_FoliageSolver_New_C_DRAW_RT_sources_legacy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.move_domain3
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::move_domain3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.move_domain3");
		
		ABP_FoliageSolver_New_C_move_domain3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.move_domain2
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::move_domain2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.move_domain2");
		
		ABP_FoliageSolver_New_C_move_domain2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DRAW Foliage LOD 1
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::DRAWFoliageLOD1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DRAW Foliage LOD 1");
		
		ABP_FoliageSolver_New_C_DRAWFoliageLOD1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DRAW Foliage LOD 0
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::DRAWFoliageLOD0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DRAW Foliage LOD 0");
		
		ABP_FoliageSolver_New_C_DRAWFoliageLOD0_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.GPU_Msg_report
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::GPU_Msg_report()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.GPU_Msg_report");
		
		ABP_FoliageSolver_New_C_GPU_Msg_report_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.move_domain
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::move_domain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.move_domain");
		
		ABP_FoliageSolver_New_C_move_domain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.update_globals_init
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::update_globals_init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.update_globals_init");
		
		ABP_FoliageSolver_New_C_update_globals_init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.init_clear_RTVs
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::init_clear_RTVs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.init_clear_RTVs");
		
		ABP_FoliageSolver_New_C_init_clear_RTVs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DRAW RTV Delta P
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      RTV                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      RTVStash                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      SolverMaterial                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            RTV_LOD_idx                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<class FString, struct FSTRUCT_FluidSolverMats> NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            everynthtick                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      M_Stash_name                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_FoliageSolver_New_C::DRAWRTVDeltaP(const class FString& RTV, const class FString& RTVStash, const class FString& SolverMaterial, int32_t RTV_LOD_idx, TMap<class FString, struct FSTRUCT_FluidSolverMats> NewParam, int32_t everynthtick, const class FString& M_Stash_name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DRAW RTV Delta P");
		
		ABP_FoliageSolver_New_C_DRAWRTVDeltaP_Params params {};
		params.RTV = RTV;
		params.RTVStash = RTVStash;
		params.SolverMaterial = SolverMaterial;
		params.RTV_LOD_idx = RTV_LOD_idx;
		params.NewParam = NewParam;
		params.everynthtick = everynthtick;
		params.M_Stash_name = M_Stash_name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.enforce_full_texel_pos
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Pos                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RTVLODidx                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     pos_clamped                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FoliageSolver_New_C::enforce_full_texel_pos(const struct FVector& Pos, int32_t RTVLODidx, struct FVector* pos_clamped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.enforce_full_texel_pos");
		
		ABP_FoliageSolver_New_C_enforce_full_texel_pos_Params params {};
		params.Pos = Pos;
		params.RTVLODidx = RTVLODidx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (pos_clamped != nullptr)
			*pos_clamped = params.pos_clamped;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.verbose_print
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Label                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      PrintString                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PrinttoScreen                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PrinttoLog                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ENUM_verbose_types                                 verbose_tag                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FoliageSolver_New_C::verbose_print(const class FString& Label, const class FString& PrintString, const struct FLinearColor& Color, double Time, bool PrinttoScreen, bool PrinttoLog, ENUM_verbose_types verbose_tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.verbose_print");
		
		ABP_FoliageSolver_New_C_verbose_print_Params params {};
		params.Label = Label;
		params.PrintString = PrintString;
		params.Color = Color;
		params.Time = Time;
		params.PrinttoScreen = PrinttoScreen;
		params.PrinttoLog = PrinttoLog;
		params.verbose_tag = verbose_tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.wind_update
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::wind_update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.wind_update");
		
		ABP_FoliageSolver_New_C_wind_update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.export_RTs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::export_RTs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.export_RTs");
		
		ABP_FoliageSolver_New_C_export_RTs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.connect_MIDs_FOLIAGE
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::connect_MIDs_FOLIAGE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.connect_MIDs_FOLIAGE");
		
		ABP_FoliageSolver_New_C_connect_MIDs_FOLIAGE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.logic_adjust_sources
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::logic_adjust_sources()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.logic_adjust_sources");
		
		ABP_FoliageSolver_New_C_logic_adjust_sources_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DRAW_foliage_solver
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::DRAW_foliage_solver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DRAW_foliage_solver");
		
		ABP_FoliageSolver_New_C_DRAW_foliage_solver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.init_RTV_map
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::init_RTV_map()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.init_RTV_map");
		
		ABP_FoliageSolver_New_C_init_RTV_map_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.init_RTVs_Foliage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::init_RTVs_Foliage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.init_RTVs_Foliage");
		
		ABP_FoliageSolver_New_C_init_RTVs_Foliage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.init_RTs_utility
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::init_RTs_utility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.init_RTs_utility");
		
		ABP_FoliageSolver_New_C_init_RTs_utility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DRAW_RT_sources
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::DRAW_RT_sources()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DRAW_RT_sources");
		
		ABP_FoliageSolver_New_C_DRAW_RT_sources_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.update_globals_continuous
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::update_globals_continuous()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.update_globals_continuous");
		
		ABP_FoliageSolver_New_C_update_globals_continuous_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.init_Visualizers
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::init_Visualizers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.init_Visualizers");
		
		ABP_FoliageSolver_New_C_init_Visualizers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.export_debug_RTVs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::export_debug_RTVs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.export_debug_RTVs");
		
		ABP_FoliageSolver_New_C_export_debug_RTVs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DRAW_pressureCycle2
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            LOD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FoliageSolver_New_C::DRAW_pressureCycle2(int32_t LOD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DRAW_pressureCycle2");
		
		ABP_FoliageSolver_New_C_DRAW_pressureCycle2_Params params {};
		params.LOD = LOD;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.connect_MIDs_FLUID
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::connect_MIDs_FLUID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.connect_MIDs_FLUID");
		
		ABP_FoliageSolver_New_C_connect_MIDs_FLUID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DRAW_pressureCycle1
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            LOD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FoliageSolver_New_C::DRAW_pressureCycle1(int32_t LOD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DRAW_pressureCycle1");
		
		ABP_FoliageSolver_New_C_DRAW_pressureCycle1_Params params {};
		params.LOD = LOD;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.export_to_Niagara
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::export_to_Niagara()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.export_to_Niagara");
		
		ABP_FoliageSolver_New_C_export_to_Niagara_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.export_RTV_as_RT_for_Niagara
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::export_RTV_as_RT_for_Niagara()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.export_RTV_as_RT_for_Niagara");
		
		ABP_FoliageSolver_New_C_export_RTV_as_RT_for_Niagara_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DRAW_divergence
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            LOD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FoliageSolver_New_C::DRAW_divergence(int32_t LOD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DRAW_divergence");
		
		ABP_FoliageSolver_New_C_DRAW_divergence_Params params {};
		params.LOD = LOD;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DRAW_composite
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            LOD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FoliageSolver_New_C::DRAW_composite(int32_t LOD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DRAW_composite");
		
		ABP_FoliageSolver_New_C_DRAW_composite_Params params {};
		params.LOD = LOD;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DRAW_advect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            LOD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FoliageSolver_New_C::DRAW_advect(int32_t LOD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.DRAW_advect");
		
		ABP_FoliageSolver_New_C_DRAW_advect_Params params {};
		params.LOD = LOD;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.echo_stats_OnTick
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::echo_stats_OnTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.echo_stats_OnTick");
		
		ABP_FoliageSolver_New_C_echo_stats_OnTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.find_sources
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::find_sources()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.find_sources");
		
		ABP_FoliageSolver_New_C_find_sources_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.export_RTVs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::export_RTVs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.export_RTVs");
		
		ABP_FoliageSolver_New_C_export_RTVs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.init_MIDs
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::init_MIDs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.init_MIDs");
		
		ABP_FoliageSolver_New_C_init_MIDs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.echo_stats_BeginPlay
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::echo_stats_BeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.echo_stats_BeginPlay");
		
		ABP_FoliageSolver_New_C_echo_stats_BeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.init_RTVs_Fluid
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::init_RTVs_Fluid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.init_RTVs_Fluid");
		
		ABP_FoliageSolver_New_C_init_RTVs_Fluid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.UserConstructionScript");
		
		ABP_FoliageSolver_New_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.STEP
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::STEP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.STEP");
		
		ABP_FoliageSolver_New_C_STEP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.add_painter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::add_painter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.add_painter");
		
		ABP_FoliageSolver_New_C_add_painter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.Update Visualizer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::UpdateVisualizer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.Update Visualizer");
		
		ABP_FoliageSolver_New_C_UpdateVisualizer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.ReceiveBeginPlay");
		
		ABP_FoliageSolver_New_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.Spawn 4 Rex
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::Spawn4Rex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.Spawn 4 Rex");
		
		ABP_FoliageSolver_New_C_Spawn4Rex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.Spawn 40 Raptors
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::Spawn40Raptors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.Spawn 40 Raptors");
		
		ABP_FoliageSolver_New_C_Spawn40Raptors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.init clear
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::initclear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.init clear");
		
		ABP_FoliageSolver_New_C_initclear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.disable_FI_MPC_WPO
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::disable_FI_MPC_WPO()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.disable_FI_MPC_WPO");
		
		ABP_FoliageSolver_New_C_disable_FI_MPC_WPO_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.BndEvt__BP_FoliageSolver_MaterialGPUReadbackMessage_K2Node_ComponentBoundEvent_0_GPUReadbackMessageDelegate__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<float>                                      Data                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FMaterialGPUMessagePrimitiveInfo            PrimitiveInfo                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void ABP_FoliageSolver_New_C::BndEvt__BP_FoliageSolver_MaterialGPUReadbackMessage_K2Node_ComponentBoundEvent_0_GPUReadbackMessageDelegate__DelegateSignature(TArray<float> Data, const struct FMaterialGPUMessagePrimitiveInfo& PrimitiveInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.BndEvt__BP_FoliageSolver_MaterialGPUReadbackMessage_K2Node_ComponentBoundEvent_0_GPUReadbackMessageDelegate__DelegateSignature");
		
		ABP_FoliageSolver_New_C_BndEvt__BP_FoliageSolver_MaterialGPUReadbackMessage_K2Node_ComponentBoundEvent_0_GPUReadbackMessageDelegate__DelegateSignature_Params params {};
		params.Data = Data;
		params.PrimitiveInfo = PrimitiveInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.GPU_Msg_event_interaction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      event_key                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FSTRUCT_GPUMsg                              event_values                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FoliageSolver_New_C::GPU_Msg_event_interaction(const class FString& event_key, const struct FSTRUCT_GPUMsg& event_values)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.GPU_Msg_event_interaction");
		
		ABP_FoliageSolver_New_C_GPU_Msg_event_interaction_Params params {};
		params.event_key = event_key;
		params.event_values = event_values;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FoliageSolver_New_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.ReceiveTick");
		
		ABP_FoliageSolver_New_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.update_player_source_parms
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::update_player_source_parms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.update_player_source_parms");
		
		ABP_FoliageSolver_New_C_update_player_source_parms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.print_player_pawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::print_player_pawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.print_player_pawn");
		
		ABP_FoliageSolver_New_C_print_player_pawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.AAAAA_OFFSET_PX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::AAAAA_OFFSET_PX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.AAAAA_OFFSET_PX");
		
		ABP_FoliageSolver_New_C_AAAAA_OFFSET_PX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.init_fluids
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::init_fluids()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.init_fluids");
		
		ABP_FoliageSolver_New_C_init_fluids_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.destroy_fluids
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FoliageSolver_New_C::destroy_fluids()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.destroy_fluids");
		
		ABP_FoliageSolver_New_C_destroy_fluids_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.ExecuteUbergraph_BP_FoliageSolver_New
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FoliageSolver_New_C::ExecuteUbergraph_BP_FoliageSolver_New(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.ExecuteUbergraph_BP_FoliageSolver_New");
		
		ABP_FoliageSolver_New_C_ExecuteUbergraph_BP_FoliageSolver_New_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.EventDispatch_GPUMsg_interaction__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      event_key                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FSTRUCT_GPUMsg                              event_values                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FoliageSolver_New_C::EventDispatch_GPUMsg_interaction__DelegateSignature(const class FString& event_key, const struct FSTRUCT_GPUMsg& event_values)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FoliageSolver_New.BP_FoliageSolver_New_C.EventDispatch_GPUMsg_interaction__DelegateSignature");
		
		ABP_FoliageSolver_New_C_EventDispatch_GPUMsg_interaction__DelegateSignature_Params params {};
		params.event_key = event_key;
		params.event_values = event_values;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_FoliageSolver_New_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FoliageSolver_New_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FoliageSolver_New.BP_FoliageSolver_New_C");
		return ptr;
	}

}


