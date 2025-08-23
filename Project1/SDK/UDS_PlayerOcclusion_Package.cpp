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
	 * 		Name   -> Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.Test Point for Occlusion
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class AActor*>                              ActorstoIgnore                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     TestLocation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<double>                                     OcclusionProfile                                           (Parm, OutParm)
	 * 		double                                             OverallOcclusion                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUDS_PlayerOcclusion_C::TestPointforOcclusion(TArray<class AActor*>* ActorstoIgnore, const struct FVector& TestLocation, TArray<double>* OcclusionProfile, double* OverallOcclusion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.Test Point for Occlusion");
		
		UUDS_PlayerOcclusion_C_TestPointforOcclusion_Params params {};
		params.TestLocation = TestLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorstoIgnore != nullptr)
			*ActorstoIgnore = params.ActorstoIgnore;
		if (OcclusionProfile != nullptr)
			*OcclusionProfile = params.OcclusionProfile;
		if (OverallOcclusion != nullptr)
			*OverallOcclusion = params.OverallOcclusion;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.Set Target Fully Unoccluded
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUDS_PlayerOcclusion_C::SetTargetFullyUnoccluded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.Set Target Fully Unoccluded");
		
		UUDS_PlayerOcclusion_C_SetTargetFullyUnoccluded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.Set Target Fully Occluded
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUDS_PlayerOcclusion_C::SetTargetFullyOccluded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.Set Target Fully Occluded");
		
		UUDS_PlayerOcclusion_C_SetTargetFullyOccluded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.Get Occlusion Location
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void UUDS_PlayerOcclusion_C::GetOcclusionLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.Get Occlusion Location");
		
		UUDS_PlayerOcclusion_C_GetOcclusionLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.Get Starting Occlusion Profile
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUDS_PlayerOcclusion_C::GetStartingOcclusionProfile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.Get Starting Occlusion Profile");
		
		UUDS_PlayerOcclusion_C_GetStartingOcclusionProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UUDS_PlayerOcclusion_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.Initialize");
		
		UUDS_PlayerOcclusion_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.Update Current Occlusion Profile
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void UUDS_PlayerOcclusion_C::UpdateCurrentOcclusionProfile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.Update Current Occlusion Profile");
		
		UUDS_PlayerOcclusion_C_UpdateCurrentOcclusionProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.Update Target Occlusion Profile
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UUDS_PlayerOcclusion_C::UpdateTargetOcclusionProfile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.Update Target Occlusion Profile");
		
		UUDS_PlayerOcclusion_C_UpdateTargetOcclusionProfile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUDS_PlayerOcclusion_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.ReceiveTick");
		
		UUDS_PlayerOcclusion_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.ExecuteUbergraph_UDS_PlayerOcclusion
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUDS_PlayerOcclusion_C::ExecuteUbergraph_UDS_PlayerOcclusion(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.ExecuteUbergraph_UDS_PlayerOcclusion");
		
		UUDS_PlayerOcclusion_C_ExecuteUbergraph_UDS_PlayerOcclusion_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUDS_PlayerOcclusion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUDS_PlayerOcclusion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass UDS_PlayerOcclusion.UDS_PlayerOcclusion_C");
		return ptr;
	}

}


