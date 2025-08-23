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
	 * 		Name   -> Function CharacterStatsPanel.CharacterStatsPanel_C.BndEvt__CharacterStatsPanel_ShowBuffs_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCharacterStatsPanel_C::BndEvt__CharacterStatsPanel_ShowBuffs_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterStatsPanel.CharacterStatsPanel_C.BndEvt__CharacterStatsPanel_ShowBuffs_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UCharacterStatsPanel_C_BndEvt__CharacterStatsPanel_ShowBuffs_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function CharacterStatsPanel.CharacterStatsPanel_C.BndEvt__CharacterStatsPanel_ShowBuffs_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCharacterStatsPanel_C::BndEvt__CharacterStatsPanel_ShowBuffs_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterStatsPanel.CharacterStatsPanel_C.BndEvt__CharacterStatsPanel_ShowBuffs_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UCharacterStatsPanel_C_BndEvt__CharacterStatsPanel_ShowBuffs_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function CharacterStatsPanel.CharacterStatsPanel_C.ExecuteUbergraph_CharacterStatsPanel
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharacterStatsPanel_C::ExecuteUbergraph_CharacterStatsPanel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterStatsPanel.CharacterStatsPanel_C.ExecuteUbergraph_CharacterStatsPanel");
		
		UCharacterStatsPanel_C_ExecuteUbergraph_CharacterStatsPanel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterStatsPanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterStatsPanel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CharacterStatsPanel.CharacterStatsPanel_C");
		return ptr;
	}

}


