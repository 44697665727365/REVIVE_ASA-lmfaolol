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
	 * 		Name   -> Function BPL_ASA_WaterSIm.BPL_ASA_WaterSIm_C.Get Water Sim RTMap
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<class FString, class UTextureRenderTarget2D*> RenderTargetsMap                                           (Parm, OutParm)
	 */
	void UBPL_ASA_WaterSIm_C::STATIC_GetWaterSimRTMap(class UObject* WorldContextObject, class UObject* __WorldContext, TMap<class FString, class UTextureRenderTarget2D*>* RenderTargetsMap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPL_ASA_WaterSIm.BPL_ASA_WaterSIm_C.Get Water Sim RTMap");
		
		UBPL_ASA_WaterSIm_C_GetWaterSimRTMap_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RenderTargetsMap != nullptr)
			*RenderTargetsMap = params.RenderTargetsMap;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPL_ASA_WaterSIm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPL_ASA_WaterSIm_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPL_ASA_WaterSIm.BPL_ASA_WaterSIm_C");
		return ptr;
	}

}


