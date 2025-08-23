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
	 * 		Name   -> Function UDS_Cloud_Paint_Container.UDS_Cloud_Paint_Container_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AUDS_Cloud_Paint_Container_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UDS_Cloud_Paint_Container.UDS_Cloud_Paint_Container_C.ReceiveBeginPlay");
		
		AUDS_Cloud_Paint_Container_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function UDS_Cloud_Paint_Container.UDS_Cloud_Paint_Container_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUDS_Cloud_Paint_Container_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UDS_Cloud_Paint_Container.UDS_Cloud_Paint_Container_C.ReceiveEndPlay");
		
		AUDS_Cloud_Paint_Container_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function UDS_Cloud_Paint_Container.UDS_Cloud_Paint_Container_C.ExecuteUbergraph_UDS_Cloud_Paint_Container
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUDS_Cloud_Paint_Container_C::ExecuteUbergraph_UDS_Cloud_Paint_Container(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UDS_Cloud_Paint_Container.UDS_Cloud_Paint_Container_C.ExecuteUbergraph_UDS_Cloud_Paint_Container");
		
		AUDS_Cloud_Paint_Container_C_ExecuteUbergraph_UDS_Cloud_Paint_Container_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUDS_Cloud_Paint_Container_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUDS_Cloud_Paint_Container_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass UDS_Cloud_Paint_Container.UDS_Cloud_Paint_Container_C");
		return ptr;
	}

}


