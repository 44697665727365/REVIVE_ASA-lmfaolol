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
	 * 		Name   -> Function BP_VFX_AN_blood_test.BP_VFX_AN_blood_test_C.LR_FB Offset
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FVector                                     FrontOffset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     BackOffset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Offset                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_VFX_AN_blood_test_C::LR_FBOffset(const struct FVector& FrontOffset, const struct FVector& BackOffset, struct FVector* Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VFX_AN_blood_test.BP_VFX_AN_blood_test_C.LR_FB Offset");
		
		UBP_VFX_AN_blood_test_C_LR_FBOffset_Params params {};
		params.FrontOffset = FrontOffset;
		params.BackOffset = BackOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Offset != nullptr)
			*Offset = params.Offset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_VFX_AN_blood_test.BP_VFX_AN_blood_test_C.NewFunction_1
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Condition2                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_VFX_AN_blood_test_C::NewFunction_1(bool Condition, bool Condition2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VFX_AN_blood_test.BP_VFX_AN_blood_test_C.NewFunction_1");
		
		UBP_VFX_AN_blood_test_C_NewFunction_1_Params params {};
		params.Condition = Condition;
		params.Condition2 = Condition2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_VFX_AN_blood_test.BP_VFX_AN_blood_test_C.Do Trace
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SKMeshComp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             BabyScale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             FootPrintSize                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HitBool                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  OutHit                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void UBP_VFX_AN_blood_test_C::DoTrace(class USkeletalMeshComponent* SKMeshComp, class AActor* InputPin, double BabyScale, bool IsPlayer, double* FootPrintSize, bool* HitBool, struct FHitResult* OutHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VFX_AN_blood_test.BP_VFX_AN_blood_test_C.Do Trace");
		
		UBP_VFX_AN_blood_test_C_DoTrace_Params params {};
		params.SKMeshComp = SKMeshComp;
		params.InputPin = InputPin;
		params.BabyScale = BabyScale;
		params.IsPlayer = IsPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FootPrintSize != nullptr)
			*FootPrintSize = params.FootPrintSize;
		if (HitBool != nullptr)
			*HitBool = params.HitBool;
		if (OutHit != nullptr)
			*OutHit = params.OutHit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_VFX_AN_blood_test.BP_VFX_AN_blood_test_C.Spawn_Sound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class USceneComponent*                             Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Speed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAudio_Ground_Collection                    StepSounds                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_VFX_AN_blood_test_C::Spawn_Sound(class USceneComponent* Actor, const struct FVector& Location, double Speed, double Size, const struct FAudio_Ground_Collection& StepSounds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VFX_AN_blood_test.BP_VFX_AN_blood_test_C.Spawn_Sound");
		
		UBP_VFX_AN_blood_test_C_Spawn_Sound_Params params {};
		params.Actor = Actor;
		params.Location = Location;
		params.Speed = Speed;
		params.Size = Size;
		params.StepSounds = StepSounds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_VFX_AN_blood_test.BP_VFX_AN_blood_test_C.Spawn_Anim_Notify
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent, Const)
	 */
	void UBP_VFX_AN_blood_test_C::Spawn_Anim_Notify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VFX_AN_blood_test.BP_VFX_AN_blood_test_C.Spawn_Anim_Notify");
		
		UBP_VFX_AN_blood_test_C_Spawn_Anim_Notify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_VFX_AN_blood_test.BP_VFX_AN_blood_test_C.Received_NotifyBegin
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TotalDuration                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAnimNotifyEventReference                   EventReference                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	bool UBP_VFX_AN_blood_test_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, const struct FAnimNotifyEventReference& EventReference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VFX_AN_blood_test.BP_VFX_AN_blood_test_C.Received_NotifyBegin");
		
		UBP_VFX_AN_blood_test_C_Received_NotifyBegin_Params params {};
		params.MeshComp = MeshComp;
		params.Animation = Animation;
		params.TotalDuration = TotalDuration;
		params.EventReference = EventReference;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_VFX_AN_blood_test.BP_VFX_AN_blood_test_C.Received_NotifyEnd
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAnimNotifyEventReference                   EventReference                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	bool UBP_VFX_AN_blood_test_C::Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VFX_AN_blood_test.BP_VFX_AN_blood_test_C.Received_NotifyEnd");
		
		UBP_VFX_AN_blood_test_C_Received_NotifyEnd_Params params {};
		params.MeshComp = MeshComp;
		params.Animation = Animation;
		params.EventReference = EventReference;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_VFX_AN_blood_test.BP_VFX_AN_blood_test_C.GetNotifyName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class FString UBP_VFX_AN_blood_test_C::GetNotifyName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VFX_AN_blood_test.BP_VFX_AN_blood_test_C.GetNotifyName");
		
		UBP_VFX_AN_blood_test_C_GetNotifyName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_VFX_AN_blood_test.BP_VFX_AN_blood_test_C.Received_NotifyTick
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FrameDeltaTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAnimNotifyEventReference                   EventReference                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	bool UBP_VFX_AN_blood_test_C::Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, const struct FAnimNotifyEventReference& EventReference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VFX_AN_blood_test.BP_VFX_AN_blood_test_C.Received_NotifyTick");
		
		UBP_VFX_AN_blood_test_C_Received_NotifyTick_Params params {};
		params.MeshComp = MeshComp;
		params.Animation = Animation;
		params.FrameDeltaTime = FrameDeltaTime;
		params.EventReference = EventReference;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_VFX_AN_blood_test.BP_VFX_AN_blood_test_C.NewEventDispatcher__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_VFX_AN_blood_test_C::NewEventDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_VFX_AN_blood_test.BP_VFX_AN_blood_test_C.NewEventDispatcher__DelegateSignature");
		
		UBP_VFX_AN_blood_test_C_NewEventDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_VFX_AN_blood_test_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_VFX_AN_blood_test_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_VFX_AN_blood_test.BP_VFX_AN_blood_test_C");
		return ptr;
	}

}


