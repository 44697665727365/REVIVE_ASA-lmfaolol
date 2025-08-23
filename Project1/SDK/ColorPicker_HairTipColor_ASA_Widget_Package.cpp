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
	 * 		Name   -> Function ColorPicker_HairTipColor_ASA_Widget.ColorPicker_HairTipColor_ASA_Widget_C.UpdateColor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UColorPicker_HairTipColor_ASA_Widget_C::UpdateColor(const struct FVector2D& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ColorPicker_HairTipColor_ASA_Widget.ColorPicker_HairTipColor_ASA_Widget_C.UpdateColor");
		
		UColorPicker_HairTipColor_ASA_Widget_C_UpdateColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ColorPicker_HairTipColor_ASA_Widget.ColorPicker_HairTipColor_ASA_Widget_C.ExecuteUbergraph_ColorPicker_HairTipColor_ASA_Widget
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UColorPicker_HairTipColor_ASA_Widget_C::ExecuteUbergraph_ColorPicker_HairTipColor_ASA_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ColorPicker_HairTipColor_ASA_Widget.ColorPicker_HairTipColor_ASA_Widget_C.ExecuteUbergraph_ColorPicker_HairTipColor_ASA_Widget");
		
		UColorPicker_HairTipColor_ASA_Widget_C_ExecuteUbergraph_ColorPicker_HairTipColor_ASA_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UColorPicker_HairTipColor_ASA_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UColorPicker_HairTipColor_ASA_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ColorPicker_HairTipColor_ASA_Widget.ColorPicker_HairTipColor_ASA_Widget_C");
		return ptr;
	}

}


