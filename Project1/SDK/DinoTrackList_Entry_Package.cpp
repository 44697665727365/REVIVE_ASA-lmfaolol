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
	 * 		Name   -> Function DinoTrackList_Entry.DinoTrackList_Entry_C.OnPaint
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FPaintContext                               Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UDinoTrackList_Entry_C::OnPaint(struct FPaintContext* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTrackList_Entry.DinoTrackList_Entry_C.OnPaint");
		
		UDinoTrackList_Entry_C_OnPaint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoTrackList_Entry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoTrackList_Entry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DinoTrackList_Entry.DinoTrackList_Entry_C");
		return ptr;
	}

}


