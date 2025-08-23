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
	 * 		Name   -> Function ChangeCameraModeUI_Widget.ChangeCameraModeUI_Widget_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChangeCameraModeUI_Widget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChangeCameraModeUI_Widget.ChangeCameraModeUI_Widget_C.Tick");
		
		UChangeCameraModeUI_Widget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ChangeCameraModeUI_Widget.ChangeCameraModeUI_Widget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UChangeCameraModeUI_Widget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChangeCameraModeUI_Widget.ChangeCameraModeUI_Widget_C.Construct");
		
		UChangeCameraModeUI_Widget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ChangeCameraModeUI_Widget.ChangeCameraModeUI_Widget_C.OnGamepadActiveChangedBP
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsGamepadActive                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChangeCameraModeUI_Widget_C::OnGamepadActiveChangedBP(bool bIsGamepadActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChangeCameraModeUI_Widget.ChangeCameraModeUI_Widget_C.OnGamepadActiveChangedBP");
		
		UChangeCameraModeUI_Widget_C_OnGamepadActiveChangedBP_Params params {};
		params.bIsGamepadActive = bIsGamepadActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ChangeCameraModeUI_Widget.ChangeCameraModeUI_Widget_C.ExecuteUbergraph_ChangeCameraModeUI_Widget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChangeCameraModeUI_Widget_C::ExecuteUbergraph_ChangeCameraModeUI_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChangeCameraModeUI_Widget.ChangeCameraModeUI_Widget_C.ExecuteUbergraph_ChangeCameraModeUI_Widget");
		
		UChangeCameraModeUI_Widget_C_ExecuteUbergraph_ChangeCameraModeUI_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChangeCameraModeUI_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChangeCameraModeUI_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChangeCameraModeUI_Widget.ChangeCameraModeUI_Widget_C");
		return ptr;
	}

}


