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
	 * 		Name   -> Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.PackMemberDied
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADino_Character_BP_Pack_C*                   DeadDino                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Pack_C::PackMemberDied(class ADino_Character_BP_Pack_C* DeadDino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.PackMemberDied");
		
		ADino_Character_BP_Pack_C_PackMemberDied_Params params {};
		params.DeadDino = DeadDino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BP_OnSetDeath
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Pack_C::BP_OnSetDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BP_OnSetDeath");
		
		ADino_Character_BP_Pack_C_BP_OnSetDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.Get RadiusToJoinPack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               belongsToOldPack                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             firstTimeRadius                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Pack_C::GetRadiusToJoinPack(bool belongsToOldPack, double* firstTimeRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.Get RadiusToJoinPack");
		
		ADino_Character_BP_Pack_C_GetRadiusToJoinPack_Params params {};
		params.belongsToOldPack = belongsToOldPack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (firstTimeRadius != nullptr)
			*firstTimeRadius = params.firstTimeRadius;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.CanDinoBeAddedToPack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              oldPack                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               canBeAdded                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Pack_C::CanDinoBeAddedToPack(class APrimalDinoCharacter* NewParam, TArray<class AActor*>* oldPack, bool* canBeAdded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.CanDinoBeAddedToPack");
		
		ADino_Character_BP_Pack_C_CanDinoBeAddedToPack_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (oldPack != nullptr)
			*oldPack = params.oldPack;
		if (canBeAdded != nullptr)
			*canBeAdded = params.canBeAdded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.Add Dino to Pack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ActorToAdd                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Pack_C::AddDinotoPack(class AActor* ActorToAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.Add Dino to Pack");
		
		ADino_Character_BP_Pack_C_AddDinotoPack_Params params {};
		params.ActorToAdd = ActorToAdd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.IsValidClassForPack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      joiningActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Pack_C::IsValidClassForPack(class AActor* joiningActor, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.IsValidClassForPack");
		
		ADino_Character_BP_Pack_C_IsValidClassForPack_Params params {};
		params.joiningActor = joiningActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BPTimerServer
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Pack_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BPTimerServer");
		
		ADino_Character_BP_Pack_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.Put Join Pack On Cooldown
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             DurationOfPackPrevention                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Pack_C::PutJoinPackOnCooldown(double DurationOfPackPrevention)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.Put Join Pack On Cooldown");
		
		ADino_Character_BP_Pack_C_PutJoinPackOnCooldown_Params params {};
		params.DurationOfPackPrevention = DurationOfPackPrevention;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.Can Join Pack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanJoin                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Pack_C::CanJoinPack(bool* CanJoin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.Can Join Pack");
		
		ADino_Character_BP_Pack_C_CanJoinPack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanJoin != nullptr)
			*CanJoin = params.CanJoin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BPShouldForceFlee
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ADino_Character_BP_Pack_C::BPShouldForceFlee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BPShouldForceFlee");
		
		ADino_Character_BP_Pack_C_BPShouldForceFlee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.ClearPack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Pack_C::ClearPack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.ClearPack");
		
		ADino_Character_BP_Pack_C_ClearPack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.InitPackDino
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isBeginPlay                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Pack_C::InitPackDino(bool isBeginPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.InitPackDino");
		
		ADino_Character_BP_Pack_C_InitPackDino_Params params {};
		params.isBeginPlay = isBeginPlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.PackRoar
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Pack_C::PackRoar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.PackRoar");
		
		ADino_Character_BP_Pack_C_PackRoar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.UpdatePack
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Pack_C::UpdatePack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.UpdatePack");
		
		ADino_Character_BP_Pack_C_UpdatePack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BPDoAttack
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Pack_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BPDoAttack");
		
		ADino_Character_BP_Pack_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ADino_Character_BP_Pack_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BlueprintCanRiderAttack");
		
		ADino_Character_BP_Pack_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              attackRangeOffset                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherTarget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool ADino_Character_BP_Pack_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BlueprintCanAttack");
		
		ADino_Character_BP_Pack_C_BlueprintCanAttack_Params params {};
		params.AttackIndex = AttackIndex;
		params.Distance = Distance;
		params.attackRangeOffset = attackRangeOffset;
		params.OtherTarget = OtherTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.IsPackLeader
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsLeader                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Pack_C::IsPackLeader(bool* bIsLeader)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.IsPackLeader");
		
		ADino_Character_BP_Pack_C_IsPackLeader_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsLeader != nullptr)
			*bIsLeader = params.bIsLeader;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Pack_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.BPUnstasis");
		
		ADino_Character_BP_Pack_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.GatherPack
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Pack_C::GatherPack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.GatherPack");
		
		ADino_Character_BP_Pack_C_GatherPack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.OverrideRandomWanderLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     originalDestination                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     inVec                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Pack_C::OverrideRandomWanderLocation(const struct FVector& originalDestination, struct FVector* inVec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.OverrideRandomWanderLocation");
		
		ADino_Character_BP_Pack_C_OverrideRandomWanderLocation_Params params {};
		params.originalDestination = originalDestination;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (inVec != nullptr)
			*inVec = params.inVec;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADino_Character_BP_Pack_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.ReceiveBeginPlay");
		
		ADino_Character_BP_Pack_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.ExecuteUbergraph_Dino_Character_BP_Pack
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Pack_C::ExecuteUbergraph_Dino_Character_BP_Pack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Pack.Dino_Character_BP_Pack_C.ExecuteUbergraph_Dino_Character_BP_Pack");
		
		ADino_Character_BP_Pack_C_ExecuteUbergraph_Dino_Character_BP_Pack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADino_Character_BP_Pack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADino_Character_BP_Pack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Dino_Character_BP_Pack.Dino_Character_BP_Pack_C");
		return ptr;
	}

}


