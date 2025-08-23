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
	 * 		RVA    -> 0x028BC720
	 * 		Name   -> Function MetasoundFrontend.MetasoundParameterPack.SetTrigger
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               OnlyIfExists                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESetParamResult UMetasoundParameterPack::SetTrigger(const class FName& ParameterName, bool OnlyIfExists)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetasoundFrontend.MetasoundParameterPack.SetTrigger");
		
		UMetasoundParameterPack_SetTrigger_Params params {};
		params.ParameterName = ParameterName;
		params.OnlyIfExists = OnlyIfExists;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x028BC930
	 * 		Name   -> Function MetasoundFrontend.MetasoundParameterPack.SetString
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InValue                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               OnlyIfExists                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESetParamResult UMetasoundParameterPack::SetString(const class FName& ParameterName, const class FString& InValue, bool OnlyIfExists)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetasoundFrontend.MetasoundParameterPack.SetString");
		
		UMetasoundParameterPack_SetString_Params params {};
		params.ParameterName = ParameterName;
		params.InValue = InValue;
		params.OnlyIfExists = OnlyIfExists;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x028BCED0
	 * 		Name   -> Function MetasoundFrontend.MetasoundParameterPack.SetInt
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               OnlyIfExists                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESetParamResult UMetasoundParameterPack::SetInt(const class FName& ParameterName, int32_t InValue, bool OnlyIfExists)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetasoundFrontend.MetasoundParameterPack.SetInt");
		
		UMetasoundParameterPack_SetInt_Params params {};
		params.ParameterName = ParameterName;
		params.InValue = InValue;
		params.OnlyIfExists = OnlyIfExists;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x028BCC10
	 * 		Name   -> Function MetasoundFrontend.MetasoundParameterPack.SetFloat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               OnlyIfExists                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESetParamResult UMetasoundParameterPack::SetFloat(const class FName& ParameterName, float InValue, bool OnlyIfExists)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetasoundFrontend.MetasoundParameterPack.SetFloat");
		
		UMetasoundParameterPack_SetFloat_Params params {};
		params.ParameterName = ParameterName;
		params.InValue = InValue;
		params.OnlyIfExists = OnlyIfExists;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x028BD180
	 * 		Name   -> Function MetasoundFrontend.MetasoundParameterPack.SetBool
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               OnlyIfExists                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ESetParamResult UMetasoundParameterPack::SetBool(const class FName& ParameterName, bool InValue, bool OnlyIfExists)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetasoundFrontend.MetasoundParameterPack.SetBool");
		
		UMetasoundParameterPack_SetBool_Params params {};
		params.ParameterName = ParameterName;
		params.InValue = InValue;
		params.OnlyIfExists = OnlyIfExists;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x028BD3D0
	 * 		Name   -> Function MetasoundFrontend.MetasoundParameterPack.MakeMetasoundParameterPack
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class UMetasoundParameterPack* UMetasoundParameterPack::STATIC_MakeMetasoundParameterPack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetasoundFrontend.MetasoundParameterPack.MakeMetasoundParameterPack");
		
		UMetasoundParameterPack_MakeMetasoundParameterPack_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x028BB680
	 * 		Name   -> Function MetasoundFrontend.MetasoundParameterPack.HasTrigger
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMetasoundParameterPack::HasTrigger(const class FName& ParameterName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetasoundFrontend.MetasoundParameterPack.HasTrigger");
		
		UMetasoundParameterPack_HasTrigger_Params params {};
		params.ParameterName = ParameterName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x028BB7D0
	 * 		Name   -> Function MetasoundFrontend.MetasoundParameterPack.HasString
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMetasoundParameterPack::HasString(const class FName& ParameterName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetasoundFrontend.MetasoundParameterPack.HasString");
		
		UMetasoundParameterPack_HasString_Params params {};
		params.ParameterName = ParameterName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x028BBA70
	 * 		Name   -> Function MetasoundFrontend.MetasoundParameterPack.HasInt
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMetasoundParameterPack::HasInt(const class FName& ParameterName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetasoundFrontend.MetasoundParameterPack.HasInt");
		
		UMetasoundParameterPack_HasInt_Params params {};
		params.ParameterName = ParameterName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x028BB920
	 * 		Name   -> Function MetasoundFrontend.MetasoundParameterPack.HasFloat
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMetasoundParameterPack::HasFloat(const class FName& ParameterName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetasoundFrontend.MetasoundParameterPack.HasFloat");
		
		UMetasoundParameterPack_HasFloat_Params params {};
		params.ParameterName = ParameterName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x028BBBC0
	 * 		Name   -> Function MetasoundFrontend.MetasoundParameterPack.HasBool
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMetasoundParameterPack::HasBool(const class FName& ParameterName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetasoundFrontend.MetasoundParameterPack.HasBool");
		
		UMetasoundParameterPack_HasBool_Params params {};
		params.ParameterName = ParameterName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x028BBD10
	 * 		Name   -> Function MetasoundFrontend.MetasoundParameterPack.GetTrigger
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESetParamResult                                    Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMetasoundParameterPack::GetTrigger(const class FName& ParameterName, ESetParamResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetasoundFrontend.MetasoundParameterPack.GetTrigger");
		
		UMetasoundParameterPack_GetTrigger_Params params {};
		params.ParameterName = ParameterName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x028BBF00
	 * 		Name   -> Function MetasoundFrontend.MetasoundParameterPack.GetString
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESetParamResult                                    Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UMetasoundParameterPack::GetString(const class FName& ParameterName, ESetParamResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetasoundFrontend.MetasoundParameterPack.GetString");
		
		UMetasoundParameterPack_GetString_Params params {};
		params.ParameterName = ParameterName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x028BC340
	 * 		Name   -> Function MetasoundFrontend.MetasoundParameterPack.GetInt
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESetParamResult                                    Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMetasoundParameterPack::GetInt(const class FName& ParameterName, ESetParamResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetasoundFrontend.MetasoundParameterPack.GetInt");
		
		UMetasoundParameterPack_GetInt_Params params {};
		params.ParameterName = ParameterName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x028BC160
	 * 		Name   -> Function MetasoundFrontend.MetasoundParameterPack.GetFloat
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESetParamResult                                    Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMetasoundParameterPack::GetFloat(const class FName& ParameterName, ESetParamResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetasoundFrontend.MetasoundParameterPack.GetFloat");
		
		UMetasoundParameterPack_GetFloat_Params params {};
		params.ParameterName = ParameterName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x028BC530
	 * 		Name   -> Function MetasoundFrontend.MetasoundParameterPack.GetBool
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESetParamResult                                    Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMetasoundParameterPack::GetBool(const class FName& ParameterName, ESetParamResult* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MetasoundFrontend.MetasoundParameterPack.GetBool");
		
		UMetasoundParameterPack_GetBool_Params params {};
		params.ParameterName = ParameterName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMetasoundParameterPack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMetasoundParameterPack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MetasoundFrontend.MetasoundParameterPack");
		return ptr;
	}

}


