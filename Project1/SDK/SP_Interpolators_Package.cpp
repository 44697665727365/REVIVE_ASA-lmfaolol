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
	 * 		RVA    -> 0x025E5D40
	 * 		Name   -> Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetIIRInterpolatorVector
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FIIRInterpolatorVector                      Interpolator                                               (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USPInterpolatorsBPLibrary::STATIC_ResetIIRInterpolatorVector(struct FIIRInterpolatorVector* Interpolator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetIIRInterpolatorVector");
		
		USPInterpolatorsBPLibrary_ResetIIRInterpolatorVector_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Interpolator != nullptr)
			*Interpolator = params.Interpolator;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025E5D40
	 * 		Name   -> Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetIIRInterpolatorRotator
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FIIRInterpolatorRotator                     Interpolator                                               (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USPInterpolatorsBPLibrary::STATIC_ResetIIRInterpolatorRotator(struct FIIRInterpolatorRotator* Interpolator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetIIRInterpolatorRotator");
		
		USPInterpolatorsBPLibrary_ResetIIRInterpolatorRotator_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Interpolator != nullptr)
			*Interpolator = params.Interpolator;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025E6450
	 * 		Name   -> Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetIIRInterpolatorFloat
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FIIRInterpolatorFloat                       Interpolator                                               (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USPInterpolatorsBPLibrary::STATIC_ResetIIRInterpolatorFloat(struct FIIRInterpolatorFloat* Interpolator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetIIRInterpolatorFloat");
		
		USPInterpolatorsBPLibrary_ResetIIRInterpolatorFloat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Interpolator != nullptr)
			*Interpolator = params.Interpolator;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025E56A0
	 * 		Name   -> Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetDoubleIIRInterpolatorVector
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FDoubleIIRInterpolatorVector                Interpolator                                               (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USPInterpolatorsBPLibrary::STATIC_ResetDoubleIIRInterpolatorVector(struct FDoubleIIRInterpolatorVector* Interpolator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetDoubleIIRInterpolatorVector");
		
		USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorVector_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Interpolator != nullptr)
			*Interpolator = params.Interpolator;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025E56A0
	 * 		Name   -> Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetDoubleIIRInterpolatorRotator
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FDoubleIIRInterpolatorRotator               Interpolator                                               (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USPInterpolatorsBPLibrary::STATIC_ResetDoubleIIRInterpolatorRotator(struct FDoubleIIRInterpolatorRotator* Interpolator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetDoubleIIRInterpolatorRotator");
		
		USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorRotator_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Interpolator != nullptr)
			*Interpolator = params.Interpolator;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025E5270
	 * 		Name   -> Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetDoubleIIRInterpolatorFloat
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FDoubleIIRInterpolatorFloat                 Interpolator                                               (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USPInterpolatorsBPLibrary::STATIC_ResetDoubleIIRInterpolatorFloat(struct FDoubleIIRInterpolatorFloat* Interpolator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetDoubleIIRInterpolatorFloat");
		
		USPInterpolatorsBPLibrary_ResetDoubleIIRInterpolatorFloat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Interpolator != nullptr)
			*Interpolator = params.Interpolator;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025E4BA0
	 * 		Name   -> Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetCritDampedSpringInterpolatorVector
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCritDampSpringInterpolatorVector           Interpolator                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USPInterpolatorsBPLibrary::STATIC_ResetCritDampedSpringInterpolatorVector(struct FCritDampSpringInterpolatorVector* Interpolator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetCritDampedSpringInterpolatorVector");
		
		USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorVector_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Interpolator != nullptr)
			*Interpolator = params.Interpolator;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025E4BA0
	 * 		Name   -> Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetCritDampedSpringInterpolatorRotator
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCritDampSpringInterpolatorRotator          Interpolator                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USPInterpolatorsBPLibrary::STATIC_ResetCritDampedSpringInterpolatorRotator(struct FCritDampSpringInterpolatorRotator* Interpolator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetCritDampedSpringInterpolatorRotator");
		
		USPInterpolatorsBPLibrary_ResetCritDampedSpringInterpolatorRotator_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Interpolator != nullptr)
			*Interpolator = params.Interpolator;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025E6C20
	 * 		Name   -> Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetAccelInterpolatorVector
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAccelerationInterpolatorVector             Interpolator                                               (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USPInterpolatorsBPLibrary::STATIC_ResetAccelInterpolatorVector(struct FAccelerationInterpolatorVector* Interpolator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetAccelInterpolatorVector");
		
		USPInterpolatorsBPLibrary_ResetAccelInterpolatorVector_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Interpolator != nullptr)
			*Interpolator = params.Interpolator;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025E67F0
	 * 		Name   -> Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetAccelInterpolatorRotator
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAccelerationInterpolatorRotator            Interpolator                                               (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USPInterpolatorsBPLibrary::STATIC_ResetAccelInterpolatorRotator(struct FAccelerationInterpolatorRotator* Interpolator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetAccelInterpolatorRotator");
		
		USPInterpolatorsBPLibrary_ResetAccelInterpolatorRotator_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Interpolator != nullptr)
			*Interpolator = params.Interpolator;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025E6FE0
	 * 		Name   -> Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetAccelInterpolatorFloat
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAccelerationInterpolatorFloat              Interpolator                                               (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USPInterpolatorsBPLibrary::STATIC_ResetAccelInterpolatorFloat(struct FAccelerationInterpolatorFloat* Interpolator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Interpolators.SPInterpolatorsBPLibrary.ResetAccelInterpolatorFloat");
		
		USPInterpolatorsBPLibrary_ResetAccelInterpolatorFloat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Interpolator != nullptr)
			*Interpolator = params.Interpolator;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025E61A0
	 * 		Name   -> Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalIIRInterpolatorVector
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FIIRInterpolatorVector                      Interpolator                                               (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewGoal                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector USPInterpolatorsBPLibrary::STATIC_EvalIIRInterpolatorVector(struct FIIRInterpolatorVector* Interpolator, const struct FVector& NewGoal, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalIIRInterpolatorVector");
		
		USPInterpolatorsBPLibrary_EvalIIRInterpolatorVector_Params params {};
		params.NewGoal = NewGoal;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Interpolator != nullptr)
			*Interpolator = params.Interpolator;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025E5EA0
	 * 		Name   -> Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalIIRInterpolatorRotator
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FIIRInterpolatorRotator                     Interpolator                                               (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    NewGoal                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRotator USPInterpolatorsBPLibrary::STATIC_EvalIIRInterpolatorRotator(struct FIIRInterpolatorRotator* Interpolator, const struct FRotator& NewGoal, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalIIRInterpolatorRotator");
		
		USPInterpolatorsBPLibrary_EvalIIRInterpolatorRotator_Params params {};
		params.NewGoal = NewGoal;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Interpolator != nullptr)
			*Interpolator = params.Interpolator;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025E6560
	 * 		Name   -> Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalIIRInterpolatorFloat
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FIIRInterpolatorFloat                       Interpolator                                               (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              NewGoal                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USPInterpolatorsBPLibrary::STATIC_EvalIIRInterpolatorFloat(struct FIIRInterpolatorFloat* Interpolator, float NewGoal, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalIIRInterpolatorFloat");
		
		USPInterpolatorsBPLibrary_EvalIIRInterpolatorFloat_Params params {};
		params.NewGoal = NewGoal;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Interpolator != nullptr)
			*Interpolator = params.Interpolator;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025E5A70
	 * 		Name   -> Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalDoubleIIRInterpolatorVector
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FDoubleIIRInterpolatorVector                Interpolator                                               (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewGoal                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector USPInterpolatorsBPLibrary::STATIC_EvalDoubleIIRInterpolatorVector(struct FDoubleIIRInterpolatorVector* Interpolator, const struct FVector& NewGoal, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalDoubleIIRInterpolatorVector");
		
		USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorVector_Params params {};
		params.NewGoal = NewGoal;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Interpolator != nullptr)
			*Interpolator = params.Interpolator;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025E57A0
	 * 		Name   -> Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalDoubleIIRInterpolatorRotator
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FDoubleIIRInterpolatorRotator               Interpolator                                               (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    NewGoal                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRotator USPInterpolatorsBPLibrary::STATIC_EvalDoubleIIRInterpolatorRotator(struct FDoubleIIRInterpolatorRotator* Interpolator, const struct FRotator& NewGoal, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalDoubleIIRInterpolatorRotator");
		
		USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorRotator_Params params {};
		params.NewGoal = NewGoal;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Interpolator != nullptr)
			*Interpolator = params.Interpolator;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025E53D0
	 * 		Name   -> Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalDoubleIIRInterpolatorFloat
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FDoubleIIRInterpolatorFloat                 Interpolator                                               (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              NewGoal                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USPInterpolatorsBPLibrary::STATIC_EvalDoubleIIRInterpolatorFloat(struct FDoubleIIRInterpolatorFloat* Interpolator, float NewGoal, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalDoubleIIRInterpolatorFloat");
		
		USPInterpolatorsBPLibrary_EvalDoubleIIRInterpolatorFloat_Params params {};
		params.NewGoal = NewGoal;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Interpolator != nullptr)
			*Interpolator = params.Interpolator;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025E4F90
	 * 		Name   -> Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalCritDampedSpringInterpolatorVector
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FCritDampSpringInterpolatorVector           Interpolator                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewGoal                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector USPInterpolatorsBPLibrary::STATIC_EvalCritDampedSpringInterpolatorVector(struct FCritDampSpringInterpolatorVector* Interpolator, const struct FVector& NewGoal, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalCritDampedSpringInterpolatorVector");
		
		USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorVector_Params params {};
		params.NewGoal = NewGoal;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Interpolator != nullptr)
			*Interpolator = params.Interpolator;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025E4CB0
	 * 		Name   -> Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalCritDampedSpringInterpolatorRotator
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FCritDampSpringInterpolatorRotator          Interpolator                                               (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    NewGoal                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRotator USPInterpolatorsBPLibrary::STATIC_EvalCritDampedSpringInterpolatorRotator(struct FCritDampSpringInterpolatorRotator* Interpolator, const struct FRotator& NewGoal, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalCritDampedSpringInterpolatorRotator");
		
		USPInterpolatorsBPLibrary_EvalCritDampedSpringInterpolatorRotator_Params params {};
		params.NewGoal = NewGoal;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Interpolator != nullptr)
			*Interpolator = params.Interpolator;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025E6D20
	 * 		Name   -> Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalAccelInterpolatorVector
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FAccelerationInterpolatorVector             Interpolator                                               (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NewGoal                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector USPInterpolatorsBPLibrary::STATIC_EvalAccelInterpolatorVector(struct FAccelerationInterpolatorVector* Interpolator, const struct FVector& NewGoal, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalAccelInterpolatorVector");
		
		USPInterpolatorsBPLibrary_EvalAccelInterpolatorVector_Params params {};
		params.NewGoal = NewGoal;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Interpolator != nullptr)
			*Interpolator = params.Interpolator;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025E68F0
	 * 		Name   -> Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalAccelInterpolatorRotator
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FAccelerationInterpolatorRotator            Interpolator                                               (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    NewGoal                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRotator USPInterpolatorsBPLibrary::STATIC_EvalAccelInterpolatorRotator(struct FAccelerationInterpolatorRotator* Interpolator, const struct FRotator& NewGoal, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalAccelInterpolatorRotator");
		
		USPInterpolatorsBPLibrary_EvalAccelInterpolatorRotator_Params params {};
		params.NewGoal = NewGoal;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Interpolator != nullptr)
			*Interpolator = params.Interpolator;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025E70E0
	 * 		Name   -> Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalAccelInterpolatorFloat
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAccelerationInterpolatorFloat              Interpolator                                               (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              NewGoal                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USPInterpolatorsBPLibrary::STATIC_EvalAccelInterpolatorFloat(struct FAccelerationInterpolatorFloat* Interpolator, float NewGoal, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Interpolators.SPInterpolatorsBPLibrary.EvalAccelInterpolatorFloat");
		
		USPInterpolatorsBPLibrary_EvalAccelInterpolatorFloat_Params params {};
		params.NewGoal = NewGoal;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Interpolator != nullptr)
			*Interpolator = params.Interpolator;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USPInterpolatorsBPLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USPInterpolatorsBPLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SP_Interpolators.SPInterpolatorsBPLibrary");
		return ptr;
	}

}


