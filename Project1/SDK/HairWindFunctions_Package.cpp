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
	 * 		Name   -> Function HairWindFunctions.HairWindFunctions_C.CalculateWind
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             PlayerSpeed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             WindFrequency                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             GameSeconds                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             WindAmount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     GlobalWindDirection                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             GlobalWindIntensity                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             MinWindFrequency                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             MaxWindFrequency                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             MinWindIntensity                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             MinRainyIntensity                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             MaxRainyIntensity                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Wind                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHairWindFunctions_C::STATIC_CalculateWind(double PlayerSpeed, double WindFrequency, double GameSeconds, double WindAmount, const struct FVector& GlobalWindDirection, double GlobalWindIntensity, double MinWindFrequency, double MaxWindFrequency, double MinWindIntensity, double MinRainyIntensity, double MaxRainyIntensity, class UObject* __WorldContext, struct FVector* Wind)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HairWindFunctions.HairWindFunctions_C.CalculateWind");
		
		UHairWindFunctions_C_CalculateWind_Params params {};
		params.PlayerSpeed = PlayerSpeed;
		params.WindFrequency = WindFrequency;
		params.GameSeconds = GameSeconds;
		params.WindAmount = WindAmount;
		params.GlobalWindDirection = GlobalWindDirection;
		params.GlobalWindIntensity = GlobalWindIntensity;
		params.MinWindFrequency = MinWindFrequency;
		params.MaxWindFrequency = MaxWindFrequency;
		params.MinWindIntensity = MinWindIntensity;
		params.MinRainyIntensity = MinRainyIntensity;
		params.MaxRainyIntensity = MaxRainyIntensity;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Wind != nullptr)
			*Wind = params.Wind;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHairWindFunctions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHairWindFunctions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HairWindFunctions.HairWindFunctions_C");
		return ptr;
	}

}


