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
	 * 		Name   -> Function PreviewScene_Explore_Note.PreviewScene_Explore_Note_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void APreviewScene_Explore_Note_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PreviewScene_Explore_Note.PreviewScene_Explore_Note_C.ReceiveBeginPlay");
		
		APreviewScene_Explore_Note_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PreviewScene_Explore_Note.PreviewScene_Explore_Note_C.NotifyPreviewSceneUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APreviewScene_Explore_Note_C::NotifyPreviewSceneUpdated(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PreviewScene_Explore_Note.PreviewScene_Explore_Note_C.NotifyPreviewSceneUpdated");
		
		APreviewScene_Explore_Note_C_NotifyPreviewSceneUpdated_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PreviewScene_Explore_Note.PreviewScene_Explore_Note_C.ExecuteUbergraph_PreviewScene_Explore_Note
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APreviewScene_Explore_Note_C::ExecuteUbergraph_PreviewScene_Explore_Note(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PreviewScene_Explore_Note.PreviewScene_Explore_Note_C.ExecuteUbergraph_PreviewScene_Explore_Note");
		
		APreviewScene_Explore_Note_C_ExecuteUbergraph_PreviewScene_Explore_Note_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APreviewScene_Explore_Note_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APreviewScene_Explore_Note_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PreviewScene_Explore_Note.PreviewScene_Explore_Note_C");
		return ptr;
	}

}


