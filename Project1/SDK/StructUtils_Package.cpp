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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPropertyBagMissingObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPropertyBagMissingObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StructUtils.PropertyBagMissingObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPropertyBag.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPropertyBag::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StructUtils.PropertyBag");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023EDB20
	 * 		Name   -> Function StructUtils.StructUtilsFunctionLibrary.SetInstancedStructValue
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FInstancedStruct                            InstancedStruct                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStructUtilsFunctionLibrary::STATIC_SetInstancedStructValue(struct FInstancedStruct* InstancedStruct, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructUtils.StructUtilsFunctionLibrary.SetInstancedStructValue");
		
		UStructUtilsFunctionLibrary_SetInstancedStructValue_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InstancedStruct != nullptr)
			*InstancedStruct = params.InstancedStruct;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023ED370
	 * 		Name   -> Function StructUtils.StructUtilsFunctionLibrary.Reset
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FInstancedStruct                            InstancedStruct                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UScriptStruct*                               StructType                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStructUtilsFunctionLibrary::STATIC_Reset(struct FInstancedStruct* InstancedStruct, class UScriptStruct* StructType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructUtils.StructUtilsFunctionLibrary.Reset");
		
		UStructUtilsFunctionLibrary_Reset_Params params {};
		params.StructType = StructType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InstancedStruct != nullptr)
			*InstancedStruct = params.InstancedStruct;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023ECC20
	 * 		Name   -> Function StructUtils.StructUtilsFunctionLibrary.NotEqual_InstancedStruct
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FInstancedStruct                            A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FInstancedStruct                            B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UStructUtilsFunctionLibrary::STATIC_NotEqual_InstancedStruct(const struct FInstancedStruct& A, const struct FInstancedStruct& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructUtils.StructUtilsFunctionLibrary.NotEqual_InstancedStruct");
		
		UStructUtilsFunctionLibrary_NotEqual_InstancedStruct_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023ED7F0
	 * 		Name   -> Function StructUtils.StructUtilsFunctionLibrary.MakeInstancedStruct
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FInstancedStruct UStructUtilsFunctionLibrary::STATIC_MakeInstancedStruct(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructUtils.StructUtilsFunctionLibrary.MakeInstancedStruct");
		
		UStructUtilsFunctionLibrary_MakeInstancedStruct_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023ECA90
	 * 		Name   -> Function StructUtils.StructUtilsFunctionLibrary.IsValid_InstancedStruct
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FInstancedStruct                            InstancedStruct                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UStructUtilsFunctionLibrary::STATIC_IsValid_InstancedStruct(const struct FInstancedStruct& InstancedStruct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructUtils.StructUtilsFunctionLibrary.IsValid_InstancedStruct");
		
		UStructUtilsFunctionLibrary_IsValid_InstancedStruct_Params params {};
		params.InstancedStruct = InstancedStruct;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023ED1E0
	 * 		Name   -> Function StructUtils.StructUtilsFunctionLibrary.IsInstancedStructValid
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FInstancedStruct                            InstancedStruct                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	EStructUtilsResult UStructUtilsFunctionLibrary::STATIC_IsInstancedStructValid(const struct FInstancedStruct& InstancedStruct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructUtils.StructUtilsFunctionLibrary.IsInstancedStructValid");
		
		UStructUtilsFunctionLibrary_IsInstancedStructValid_Params params {};
		params.InstancedStruct = InstancedStruct;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023EDFE0
	 * 		Name   -> Function StructUtils.StructUtilsFunctionLibrary.GetInstancedStructValue
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		EStructUtilsResult                                 ExecResult                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FInstancedStruct                            InstancedStruct                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStructUtilsFunctionLibrary::STATIC_GetInstancedStructValue(EStructUtilsResult* ExecResult, const struct FInstancedStruct& InstancedStruct, int32_t* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructUtils.StructUtilsFunctionLibrary.GetInstancedStructValue");
		
		UStructUtilsFunctionLibrary_GetInstancedStructValue_Params params {};
		params.InstancedStruct = InstancedStruct;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ExecResult != nullptr)
			*ExecResult = params.ExecResult;
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023ECF00
	 * 		Name   -> Function StructUtils.StructUtilsFunctionLibrary.EqualEqual_InstancedStruct
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FInstancedStruct                            A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FInstancedStruct                            B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UStructUtilsFunctionLibrary::STATIC_EqualEqual_InstancedStruct(const struct FInstancedStruct& A, const struct FInstancedStruct& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructUtils.StructUtilsFunctionLibrary.EqualEqual_InstancedStruct");
		
		UStructUtilsFunctionLibrary_EqualEqual_InstancedStruct_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStructUtilsFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStructUtilsFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StructUtils.StructUtilsFunctionLibrary");
		return ptr;
	}

}


