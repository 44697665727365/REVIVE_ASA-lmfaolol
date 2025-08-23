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
	 * 		Name   -> Function MinimapWidget_ASA.MinimapWidget_ASA_C.TraceGroundLocation
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     WithLocation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Found                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Z                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMinimapWidget_ASA_C::TraceGroundLocation(const struct FVector& WithLocation, bool* Found, double* Z)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimapWidget_ASA.MinimapWidget_ASA_C.TraceGroundLocation");
		
		UMinimapWidget_ASA_C_TraceGroundLocation_Params params {};
		params.WithLocation = WithLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Found != nullptr)
			*Found = params.Found;
		if (Z != nullptr)
			*Z = params.Z;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MinimapWidget_ASA.MinimapWidget_ASA_C.Get Render Scale for POI
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FVector2D UMinimapWidget_ASA_C::GetRenderScaleforPOI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimapWidget_ASA.MinimapWidget_ASA_C.Get Render Scale for POI");
		
		UMinimapWidget_ASA_C_GetRenderScaleforPOI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MinimapWidget_ASA.MinimapWidget_ASA_C.IncrementCacheOverride
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Qty                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMinimapWidget_ASA_C::IncrementCacheOverride(int32_t Qty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimapWidget_ASA.MinimapWidget_ASA_C.IncrementCacheOverride");
		
		UMinimapWidget_ASA_C_IncrementCacheOverride_Params params {};
		params.Qty = Qty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MinimapWidget_ASA.MinimapWidget_ASA_C.UpdateCachedData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UMinimapWidget_ASA_C::UpdateCachedData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimapWidget_ASA.MinimapWidget_ASA_C.UpdateCachedData");
		
		UMinimapWidget_ASA_C_UpdateCachedData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MinimapWidget_ASA.MinimapWidget_ASA_C.GetLocationWIthCoords
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   Coords                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMinimapWidget_ASA_C::GetLocationWIthCoords(const struct FVector2D& Coords, struct FVector* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimapWidget_ASA.MinimapWidget_ASA_C.GetLocationWIthCoords");
		
		UMinimapWidget_ASA_C_GetLocationWIthCoords_Params params {};
		params.Coords = Coords;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MinimapWidget_ASA.MinimapWidget_ASA_C.CalculateWorldLocationMinimap
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   Vector                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Loc                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMinimapWidget_ASA_C::CalculateWorldLocationMinimap(const struct FVector2D& Vector, struct FVector* Loc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimapWidget_ASA.MinimapWidget_ASA_C.CalculateWorldLocationMinimap");
		
		UMinimapWidget_ASA_C_CalculateWorldLocationMinimap_Params params {};
		params.Vector = Vector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Loc != nullptr)
			*Loc = params.Loc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MinimapWidget_ASA.MinimapWidget_ASA_C.GetAllPois
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FPointOfInterestData>                MarkPOIs                                                   (Parm, OutParm)
	 */
	void UMinimapWidget_ASA_C::GetAllPois(TArray<struct FPointOfInterestData>* MarkPOIs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimapWidget_ASA.MinimapWidget_ASA_C.GetAllPois");
		
		UMinimapWidget_ASA_C_GetAllPois_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MarkPOIs != nullptr)
			*MarkPOIs = params.MarkPOIs;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MinimapWidget_ASA.MinimapWidget_ASA_C.LocAndRotYourself
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   InPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMinimapWidget_ASA_C::LocAndRotYourself(const struct FVector2D& InPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimapWidget_ASA.MinimapWidget_ASA_C.LocAndRotYourself");
		
		UMinimapWidget_ASA_C_LocAndRotYourself_Params params {};
		params.InPosition = InPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MinimapWidget_ASA.MinimapWidget_ASA_C.UpdateOwnPlayerMark
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMinimapWidget_ASA_C::UpdateOwnPlayerMark()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimapWidget_ASA.MinimapWidget_ASA_C.UpdateOwnPlayerMark");
		
		UMinimapWidget_ASA_C_UpdateOwnPlayerMark_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MinimapWidget_ASA.MinimapWidget_ASA_C.GeneratePOIs
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UMinimapWidget_ASA_C::GeneratePOIs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimapWidget_ASA.MinimapWidget_ASA_C.GeneratePOIs");
		
		UMinimapWidget_ASA_C_GeneratePOIs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MinimapWidget_ASA.MinimapWidget_ASA_C.GetMinimapLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               NoUseScaleMinimap                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Coords                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector2D UMinimapWidget_ASA_C::GetMinimapLocation(const struct FVector& InputPin, bool NoUseScaleMinimap, struct FVector2D* Coords)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimapWidget_ASA.MinimapWidget_ASA_C.GetMinimapLocation");
		
		UMinimapWidget_ASA_C_GetMinimapLocation_Params params {};
		params.InputPin = InputPin;
		params.NoUseScaleMinimap = NoUseScaleMinimap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Coords != nullptr)
			*Coords = params.Coords;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MinimapWidget_ASA.MinimapWidget_ASA_C.Get Current MiniMap Data
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMapData                                    CurrentMinimapData                                         (Parm, OutParm)
	 */
	void UMinimapWidget_ASA_C::GetCurrentMiniMapData(struct FMapData* CurrentMinimapData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimapWidget_ASA.MinimapWidget_ASA_C.Get Current MiniMap Data");
		
		UMinimapWidget_ASA_C_GetCurrentMiniMapData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentMinimapData != nullptr)
			*CurrentMinimapData = params.CurrentMinimapData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MinimapWidget_ASA.MinimapWidget_ASA_C.GetMiniMapData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FMapData>                            Minimaps                                                   (Parm, OutParm)
	 */
	void UMinimapWidget_ASA_C::GetMiniMapData(TArray<struct FMapData>* Minimaps)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimapWidget_ASA.MinimapWidget_ASA_C.GetMiniMapData");
		
		UMinimapWidget_ASA_C_GetMiniMapData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Minimaps != nullptr)
			*Minimaps = params.Minimaps;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MinimapWidget_ASA.MinimapWidget_ASA_C.GetPawnLoc
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     WorldLocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMinimapWidget_ASA_C::GetPawnLoc(class APrimalCharacter* Pawn, struct FVector* WorldLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimapWidget_ASA.MinimapWidget_ASA_C.GetPawnLoc");
		
		UMinimapWidget_ASA_C_GetPawnLoc_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WorldLocation != nullptr)
			*WorldLocation = params.WorldLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MinimapWidget_ASA.MinimapWidget_ASA_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UMinimapWidget_ASA_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimapWidget_ASA.MinimapWidget_ASA_C.Construct");
		
		UMinimapWidget_ASA_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MinimapWidget_ASA.MinimapWidget_ASA_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMinimapWidget_ASA_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimapWidget_ASA.MinimapWidget_ASA_C.Tick");
		
		UMinimapWidget_ASA_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MinimapWidget_ASA.MinimapWidget_ASA_C.UpdateZoomMap
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Zoom                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMinimapWidget_ASA_C::UpdateZoomMap(double Zoom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimapWidget_ASA.MinimapWidget_ASA_C.UpdateZoomMap");
		
		UMinimapWidget_ASA_C_UpdateZoomMap_Params params {};
		params.Zoom = Zoom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MinimapWidget_ASA.MinimapWidget_ASA_C.AssignOnHandleMark
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMapMarkWidget_ASA_C*                        ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UMinimapWidget_ASA_C::AssignOnHandleMark(class UMapMarkWidget_ASA_C* ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimapWidget_ASA.MinimapWidget_ASA_C.AssignOnHandleMark");
		
		UMinimapWidget_ASA_C_AssignOnHandleMark_Params params {};
		params.ref = ref;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MinimapWidget_ASA.MinimapWidget_ASA_C.HandleTracking_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMinimapMark                                Mark                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsTracking                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMinimapWidget_ASA_C::HandleTracking_Event(const struct FMinimapMark& Mark, bool IsTracking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimapWidget_ASA.MinimapWidget_ASA_C.HandleTracking_Event");
		
		UMinimapWidget_ASA_C_HandleTracking_Event_Params params {};
		params.Mark = Mark;
		params.IsTracking = IsTracking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MinimapWidget_ASA.MinimapWidget_ASA_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMinimapWidget_ASA_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimapWidget_ASA.MinimapWidget_ASA_C.PreConstruct");
		
		UMinimapWidget_ASA_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MinimapWidget_ASA.MinimapWidget_ASA_C.HaandleEditMark_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMinimapMark                                Mark                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMinimapWidget_ASA_C::HaandleEditMark_Event(const struct FMinimapMark& Mark)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimapWidget_ASA.MinimapWidget_ASA_C.HaandleEditMark_Event");
		
		UMinimapWidget_ASA_C_HaandleEditMark_Event_Params params {};
		params.Mark = Mark;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MinimapWidget_ASA.MinimapWidget_ASA_C.ExecuteUbergraph_MinimapWidget_ASA
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMinimapWidget_ASA_C::ExecuteUbergraph_MinimapWidget_ASA(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimapWidget_ASA.MinimapWidget_ASA_C.ExecuteUbergraph_MinimapWidget_ASA");
		
		UMinimapWidget_ASA_C_ExecuteUbergraph_MinimapWidget_ASA_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MinimapWidget_ASA.MinimapWidget_ASA_C.HandleEditMark__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMinimapMark                                Mark                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMinimapWidget_ASA_C::HandleEditMark__DelegateSignature(const struct FMinimapMark& Mark)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimapWidget_ASA.MinimapWidget_ASA_C.HandleEditMark__DelegateSignature");
		
		UMinimapWidget_ASA_C_HandleEditMark__DelegateSignature_Params params {};
		params.Mark = Mark;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MinimapWidget_ASA.MinimapWidget_ASA_C.RefreshCachedData__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UMinimapWidget_ASA_C::RefreshCachedData__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimapWidget_ASA.MinimapWidget_ASA_C.RefreshCachedData__DelegateSignature");
		
		UMinimapWidget_ASA_C_RefreshCachedData__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MinimapWidget_ASA.MinimapWidget_ASA_C.RefreshTracking__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMinimapMark                                Mark                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsTracking                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMinimapWidget_ASA_C::RefreshTracking__DelegateSignature(const struct FMinimapMark& Mark, bool IsTracking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MinimapWidget_ASA.MinimapWidget_ASA_C.RefreshTracking__DelegateSignature");
		
		UMinimapWidget_ASA_C_RefreshTracking__DelegateSignature_Params params {};
		params.Mark = Mark;
		params.IsTracking = IsTracking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMinimapWidget_ASA_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMinimapWidget_ASA_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MinimapWidget_ASA.MinimapWidget_ASA_C");
		return ptr;
	}

}


