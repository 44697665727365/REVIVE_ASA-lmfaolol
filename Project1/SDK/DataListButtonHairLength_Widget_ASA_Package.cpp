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
	 * 		Name   -> Function DataListButtonHairLength_Widget_ASA.DataListButtonHairLength_Widget_ASA_C.ExtraSetupWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalUserWidget*                           UserWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDataListButtonHairLength_Widget_ASA_C::ExtraSetupWidget(class UPrimalUserWidget* UserWidget, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListButtonHairLength_Widget_ASA.DataListButtonHairLength_Widget_ASA_C.ExtraSetupWidget");
		
		UDataListButtonHairLength_Widget_ASA_C_ExtraSetupWidget_Params params {};
		params.UserWidget = UserWidget;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DataListButtonHairLength_Widget_ASA.DataListButtonHairLength_Widget_ASA_C.GetQuantityMeshes
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	int32_t UDataListButtonHairLength_Widget_ASA_C::GetQuantityMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListButtonHairLength_Widget_ASA.DataListButtonHairLength_Widget_ASA_C.GetQuantityMeshes");
		
		UDataListButtonHairLength_Widget_ASA_C_GetQuantityMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DataListButtonHairLength_Widget_ASA.DataListButtonHairLength_Widget_ASA_C.SetupTextValue
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        ReturnText                                                 (Parm, OutParm)
	 */
	void UDataListButtonHairLength_Widget_ASA_C::SetupTextValue(const class FText& Text, class FText* ReturnText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListButtonHairLength_Widget_ASA.DataListButtonHairLength_Widget_ASA_C.SetupTextValue");
		
		UDataListButtonHairLength_Widget_ASA_C_SetupTextValue_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnText != nullptr)
			*ReturnText = params.ReturnText;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DataListButtonHairLength_Widget_ASA.DataListButtonHairLength_Widget_ASA_C.RefreshHairData
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            HairIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isFemale                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDataListButtonHairLength_Widget_ASA_C::RefreshHairData(int32_t HairIndex, bool isFemale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListButtonHairLength_Widget_ASA.DataListButtonHairLength_Widget_ASA_C.RefreshHairData");
		
		UDataListButtonHairLength_Widget_ASA_C_RefreshHairData_Params params {};
		params.HairIndex = HairIndex;
		params.isFemale = isFemale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DataListButtonHairLength_Widget_ASA.DataListButtonHairLength_Widget_ASA_C.ExecuteUbergraph_DataListButtonHairLength_Widget_ASA
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDataListButtonHairLength_Widget_ASA_C::ExecuteUbergraph_DataListButtonHairLength_Widget_ASA(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListButtonHairLength_Widget_ASA.DataListButtonHairLength_Widget_ASA_C.ExecuteUbergraph_DataListButtonHairLength_Widget_ASA");
		
		UDataListButtonHairLength_Widget_ASA_C_ExecuteUbergraph_DataListButtonHairLength_Widget_ASA_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDataListButtonHairLength_Widget_ASA_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataListButtonHairLength_Widget_ASA_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListButtonHairLength_Widget_ASA.DataListButtonHairLength_Widget_ASA_C");
		return ptr;
	}

}


