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
	 * 		Name   -> Function DmgType_Explosion_NoMetal_Dismount.DmgType_Explosion_NoMetal_Dismount_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      Victim                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              IncomingDamage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class AController*                                 EventInstigator                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	float UDmgType_Explosion_NoMetal_Dismount_C::BPAdjustDamage(class AActor* Victim, float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DmgType_Explosion_NoMetal_Dismount.DmgType_Explosion_NoMetal_Dismount_C.BPAdjustDamage");
		
		UDmgType_Explosion_NoMetal_Dismount_C_BPAdjustDamage_Params params {};
		params.Victim = Victim;
		params.IncomingDamage = IncomingDamage;
		params.TheDamageEvent = TheDamageEvent;
		params.EventInstigator = EventInstigator;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDmgType_Explosion_NoMetal_Dismount_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDmgType_Explosion_NoMetal_Dismount_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Explosion_NoMetal_Dismount.DmgType_Explosion_NoMetal_Dismount_C");
		return ptr;
	}

}


