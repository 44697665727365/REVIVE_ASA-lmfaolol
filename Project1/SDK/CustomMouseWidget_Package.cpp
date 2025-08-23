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
	 * 		Name   -> Function CustomMouseWidget.CustomMouseWidget_C.SetInnerRingScales
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             scale0                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             scale1                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             scale2                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomMouseWidget_C::SetInnerRingScales(double scale0, double scale1, double scale2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomMouseWidget.CustomMouseWidget_C.SetInnerRingScales");
		
		UCustomMouseWidget_C_SetInnerRingScales_Params params {};
		params.scale0 = scale0;
		params.scale1 = scale1;
		params.scale2 = scale2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function CustomMouseWidget.CustomMouseWidget_C.SetPointerColorAdd
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Add                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomMouseWidget_C::SetPointerColorAdd(double Add)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomMouseWidget.CustomMouseWidget_C.SetPointerColorAdd");
		
		UCustomMouseWidget_C_SetPointerColorAdd_Params params {};
		params.Add = Add;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function CustomMouseWidget.CustomMouseWidget_C.ShowReticule
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomMouseWidget_C::ShowReticule(bool show)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomMouseWidget.CustomMouseWidget_C.ShowReticule");
		
		UCustomMouseWidget_C_ShowReticule_Params params {};
		params.show = show;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function CustomMouseWidget.CustomMouseWidget_C.SetPointerScale
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomMouseWidget_C::SetPointerScale(double NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomMouseWidget.CustomMouseWidget_C.SetPointerScale");
		
		UCustomMouseWidget_C_SetPointerScale_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function CustomMouseWidget.CustomMouseWidget_C.SetArrowAlpha
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             LeftRightAlpha                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             UpDownAlpha                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               useArrow                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomMouseWidget_C::SetArrowAlpha(double LeftRightAlpha, double UpDownAlpha, bool useArrow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomMouseWidget.CustomMouseWidget_C.SetArrowAlpha");
		
		UCustomMouseWidget_C_SetArrowAlpha_Params params {};
		params.LeftRightAlpha = LeftRightAlpha;
		params.UpDownAlpha = UpDownAlpha;
		params.useArrow = useArrow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function CustomMouseWidget.CustomMouseWidget_C.UseCircle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCustomMouseWidget_C::UseCircle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomMouseWidget.CustomMouseWidget_C.UseCircle");
		
		UCustomMouseWidget_C_UseCircle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function CustomMouseWidget.CustomMouseWidget_C.useArrow
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UCustomMouseWidget_C::useArrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomMouseWidget.CustomMouseWidget_C.useArrow");
		
		UCustomMouseWidget_C_useArrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function CustomMouseWidget.CustomMouseWidget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UCustomMouseWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomMouseWidget.CustomMouseWidget_C.Construct");
		
		UCustomMouseWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function CustomMouseWidget.CustomMouseWidget_C.ExecuteUbergraph_CustomMouseWidget
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomMouseWidget_C::ExecuteUbergraph_CustomMouseWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomMouseWidget.CustomMouseWidget_C.ExecuteUbergraph_CustomMouseWidget");
		
		UCustomMouseWidget_C_ExecuteUbergraph_CustomMouseWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomMouseWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomMouseWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CustomMouseWidget.CustomMouseWidget_C");
		return ptr;
	}

}


