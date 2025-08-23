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
	 * 		RVA    -> 0x0259C700
	 * 		Name   -> Function Sentry.SentryAttachment.InitializeWithPath
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ContentType                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentryAttachment::InitializeWithPath(const class FString& Path, const class FString& Filename, const class FString& ContentType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryAttachment.InitializeWithPath");
		
		USentryAttachment_InitializeWithPath_Params params {};
		params.Path = Path;
		params.Filename = Filename;
		params.ContentType = ContentType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259C940
	 * 		Name   -> Function Sentry.SentryAttachment.InitializeWithData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              Data                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ContentType                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentryAttachment::InitializeWithData(TArray<unsigned char> Data, const class FString& Filename, const class FString& ContentType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryAttachment.InitializeWithData");
		
		USentryAttachment_InitializeWithData_Params params {};
		params.Data = Data;
		params.Filename = Filename;
		params.ContentType = ContentType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259C5C0
	 * 		Name   -> Function Sentry.SentryAttachment.GetPath
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString USentryAttachment::GetPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryAttachment.GetPath");
		
		USentryAttachment_GetPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259C520
	 * 		Name   -> Function Sentry.SentryAttachment.GetFilename
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString USentryAttachment::GetFilename()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryAttachment.GetFilename");
		
		USentryAttachment_GetFilename_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259C660
	 * 		Name   -> Function Sentry.SentryAttachment.GetData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<unsigned char> USentryAttachment::GetData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryAttachment.GetData");
		
		USentryAttachment_GetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259C480
	 * 		Name   -> Function Sentry.SentryAttachment.GetContentType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString USentryAttachment::GetContentType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryAttachment.GetContentType");
		
		USentryAttachment_GetContentType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USentryAttachment.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USentryAttachment::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Sentry.SentryAttachment");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259D320
	 * 		Name   -> Function Sentry.SentryBreadcrumb.SetType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Type                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentryBreadcrumb::SetType(const class FString& Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryBreadcrumb.SetType");
		
		USentryBreadcrumb_SetType_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259D420
	 * 		Name   -> Function Sentry.SentryBreadcrumb.SetMessage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentryBreadcrumb::SetMessage(const class FString& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryBreadcrumb.SetMessage");
		
		USentryBreadcrumb_SetMessage_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259CDF0
	 * 		Name   -> Function Sentry.SentryBreadcrumb.SetLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ESentryLevel                                       Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentryBreadcrumb::SetLevel(ESentryLevel Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryBreadcrumb.SetLevel");
		
		USentryBreadcrumb_SetLevel_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259D000
	 * 		Name   -> Function Sentry.SentryBreadcrumb.SetData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TMap<class FString, class FString>                 Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USentryBreadcrumb::SetData(TMap<class FString, class FString> Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryBreadcrumb.SetData");
		
		USentryBreadcrumb_SetData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259D220
	 * 		Name   -> Function Sentry.SentryBreadcrumb.SetCategory
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Category                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentryBreadcrumb::SetCategory(const class FString& Category)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryBreadcrumb.SetCategory");
		
		USentryBreadcrumb_SetCategory_Params params {};
		params.Category = Category;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259C480
	 * 		Name   -> Function Sentry.SentryBreadcrumb.GetType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString USentryBreadcrumb::GetType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryBreadcrumb.GetType");
		
		USentryBreadcrumb_GetType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259C5C0
	 * 		Name   -> Function Sentry.SentryBreadcrumb.GetMessage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString USentryBreadcrumb::GetMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryBreadcrumb.GetMessage");
		
		USentryBreadcrumb_GetMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259CDB0
	 * 		Name   -> Function Sentry.SentryBreadcrumb.GetLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	ESentryLevel USentryBreadcrumb::GetLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryBreadcrumb.GetLevel");
		
		USentryBreadcrumb_GetLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259CEE0
	 * 		Name   -> Function Sentry.SentryBreadcrumb.GetData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TMap<class FString, class FString> USentryBreadcrumb::GetData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryBreadcrumb.GetData");
		
		USentryBreadcrumb_GetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259D180
	 * 		Name   -> Function Sentry.SentryBreadcrumb.GetCategory
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString USentryBreadcrumb::GetCategory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryBreadcrumb.GetCategory");
		
		USentryBreadcrumb_GetCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USentryBreadcrumb.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USentryBreadcrumb::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Sentry.SentryBreadcrumb");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259D420
	 * 		Name   -> Function Sentry.SentryEvent.SetMessage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentryEvent::SetMessage(const class FString& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryEvent.SetMessage");
		
		USentryEvent_SetMessage_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259DAB0
	 * 		Name   -> Function Sentry.SentryEvent.SetLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ESentryLevel                                       Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentryEvent::SetLevel(ESentryLevel Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryEvent.SetLevel");
		
		USentryEvent_SetLevel_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259C5C0
	 * 		Name   -> Function Sentry.SentryEvent.GetMessage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString USentryEvent::GetMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryEvent.GetMessage");
		
		USentryEvent_GetMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259DA70
	 * 		Name   -> Function Sentry.SentryEvent.GetLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	ESentryLevel USentryEvent::GetLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryEvent.GetLevel");
		
		USentryEvent_GetLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USentryEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USentryEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Sentry.SentryEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259C660
	 * 		Name   -> Function Sentry.SentryId.ToString
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString USentryId::ToString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryId.ToString");
		
		USentryId_ToString_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USentryId.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USentryId::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Sentry.SentryId");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259E300
	 * 		Name   -> Function Sentry.SentryLibrary.StringToBytesArray
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InString                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> USentryLibrary::STATIC_StringToBytesArray(const class FString& InString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryLibrary.StringToBytesArray");
		
		USentryLibrary_StringToBytesArray_Params params {};
		params.InString = InString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259DED0
	 * 		Name   -> Function Sentry.SentryLibrary.SaveStringToFile
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InString                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USentryLibrary::STATIC_SaveStringToFile(const class FString& InString, const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryLibrary.SaveStringToFile");
		
		USentryLibrary_SaveStringToFile_Params params {};
		params.InString = InString;
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259EDD0
	 * 		Name   -> Function Sentry.SentryLibrary.CreateSentryUserFeedback
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USentryId*                                   EventId                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      email                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Comments                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USentryUserFeedback* USentryLibrary::STATIC_CreateSentryUserFeedback(class USentryId* EventId, const class FString& Name, const class FString& email, const class FString& Comments)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryLibrary.CreateSentryUserFeedback");
		
		USentryLibrary_CreateSentryUserFeedback_Params params {};
		params.EventId = EventId;
		params.Name = Name;
		params.email = email;
		params.Comments = Comments;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259F110
	 * 		Name   -> Function Sentry.SentryLibrary.CreateSentryUser
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      email                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      username                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      IpAddress                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class USentryUser* USentryLibrary::STATIC_CreateSentryUser(const class FString& email, const class FString& ID, const class FString& username, const class FString& IpAddress, TMap<class FString, class FString> Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryLibrary.CreateSentryUser");
		
		USentryLibrary_CreateSentryUser_Params params {};
		params.email = email;
		params.ID = ID;
		params.username = username;
		params.IpAddress = IpAddress;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259F600
	 * 		Name   -> Function Sentry.SentryLibrary.CreateSentryEvent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESentryLevel                                       Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USentryEvent* USentryLibrary::STATIC_CreateSentryEvent(const class FString& Message, ESentryLevel Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryLibrary.CreateSentryEvent");
		
		USentryLibrary_CreateSentryEvent_Params params {};
		params.Message = Message;
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259E980
	 * 		Name   -> Function Sentry.SentryLibrary.CreateSentryBreadcrumb
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Type                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Category                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		ESentryLevel                                       Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USentryBreadcrumb* USentryLibrary::STATIC_CreateSentryBreadcrumb(const class FString& Message, const class FString& Type, const class FString& Category, TMap<class FString, class FString> Data, ESentryLevel Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryLibrary.CreateSentryBreadcrumb");
		
		USentryLibrary_CreateSentryBreadcrumb_Params params {};
		params.Message = Message;
		params.Type = Type;
		params.Category = Category;
		params.Data = Data;
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259E4C0
	 * 		Name   -> Function Sentry.SentryLibrary.CreateSentryAttachmentWithPath
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ContentType                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USentryAttachment* USentryLibrary::STATIC_CreateSentryAttachmentWithPath(const class FString& Path, const class FString& Filename, const class FString& ContentType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryLibrary.CreateSentryAttachmentWithPath");
		
		USentryLibrary_CreateSentryAttachmentWithPath_Params params {};
		params.Path = Path;
		params.Filename = Filename;
		params.ContentType = ContentType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259E720
	 * 		Name   -> Function Sentry.SentryLibrary.CreateSentryAttachmentWithData
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              Data                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ContentType                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USentryAttachment* USentryLibrary::STATIC_CreateSentryAttachmentWithData(TArray<unsigned char> Data, const class FString& Filename, const class FString& ContentType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryLibrary.CreateSentryAttachmentWithData");
		
		USentryLibrary_CreateSentryAttachmentWithData_Params params {};
		params.Data = Data;
		params.Filename = Filename;
		params.ContentType = ContentType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259E0D0
	 * 		Name   -> Function Sentry.SentryLibrary.ByteArrayToString
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              Array                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString USentryLibrary::STATIC_ByteArrayToString(TArray<unsigned char> Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryLibrary.ByteArrayToString");
		
		USentryLibrary_ByteArrayToString_Params params {};
		params.Array = Array;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USentryLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USentryLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Sentry.SentryLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A1200
	 * 		Name   -> Function Sentry.SentryScope.SetTagValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentryScope::SetTagValue(const class FString& Key, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryScope.SetTagValue");
		
		USentryScope_SetTagValue_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A0E10
	 * 		Name   -> Function Sentry.SentryScope.SetTags
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TMap<class FString, class FString>                 Tags                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USentryScope::SetTags(TMap<class FString, class FString> Tags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryScope.SetTags");
		
		USentryScope_SetTags_Params params {};
		params.Tags = Tags;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A06E0
	 * 		Name   -> Function Sentry.SentryScope.SetLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ESentryLevel                                       Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentryScope::SetLevel(ESentryLevel Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryScope.SetLevel");
		
		USentryScope_SetLevel_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A0880
	 * 		Name   -> Function Sentry.SentryScope.SetFingerprint
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FString>                              fingerprint                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USentryScope::SetFingerprint(TArray<class FString> fingerprint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryScope.SetFingerprint");
		
		USentryScope_SetFingerprint_Params params {};
		params.fingerprint = fingerprint;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A0170
	 * 		Name   -> Function Sentry.SentryScope.SetExtraValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentryScope::SetExtraValue(const class FString& Key, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryScope.SetExtraValue");
		
		USentryScope_SetExtraValue_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259FD80
	 * 		Name   -> Function Sentry.SentryScope.SetExtras
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TMap<class FString, class FString>                 Extras                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USentryScope::SetExtras(TMap<class FString, class FString> Extras)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryScope.SetExtras");
		
		USentryScope_SetExtras_Params params {};
		params.Extras = Extras;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A0A50
	 * 		Name   -> Function Sentry.SentryScope.SetEnvironment
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      environment                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentryScope::SetEnvironment(const class FString& environment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryScope.SetEnvironment");
		
		USentryScope_SetEnvironment_Params params {};
		params.environment = environment;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A0BF0
	 * 		Name   -> Function Sentry.SentryScope.SetDist
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Dist                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentryScope::SetDist(const class FString& Dist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryScope.SetDist");
		
		USentryScope_SetDist_Params params {};
		params.Dist = Dist;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A0440
	 * 		Name   -> Function Sentry.SentryScope.SetContext
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 Values                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USentryScope::SetContext(const class FString& Key, TMap<class FString, class FString> Values)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryScope.SetContext");
		
		USentryScope_SetContext_Params params {};
		params.Key = Key;
		params.Values = Values;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A0F90
	 * 		Name   -> Function Sentry.SentryScope.RemoveTag
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentryScope::RemoveTag(const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryScope.RemoveTag");
		
		USentryScope_RemoveTag_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259FF00
	 * 		Name   -> Function Sentry.SentryScope.RemoveExtra
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentryScope::RemoveExtra(const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryScope.RemoveExtra");
		
		USentryScope_RemoveExtra_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A0340
	 * 		Name   -> Function Sentry.SentryScope.RemoveContext
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentryScope::RemoveContext(const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryScope.RemoveContext");
		
		USentryScope_RemoveContext_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A1090
	 * 		Name   -> Function Sentry.SentryScope.GetTagValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USentryScope::GetTagValue(const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryScope.GetTagValue");
		
		USentryScope_GetTagValue_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A0CF0
	 * 		Name   -> Function Sentry.SentryScope.GetTags
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TMap<class FString, class FString> USentryScope::GetTags()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryScope.GetTags");
		
		USentryScope_GetTags_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A0690
	 * 		Name   -> Function Sentry.SentryScope.GetLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	ESentryLevel USentryScope::GetLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryScope.GetLevel");
		
		USentryScope_GetLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A07E0
	 * 		Name   -> Function Sentry.SentryScope.GetFingerprint
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class FString> USentryScope::GetFingerprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryScope.GetFingerprint");
		
		USentryScope_GetFingerprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A0000
	 * 		Name   -> Function Sentry.SentryScope.GetExtraValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USentryScope::GetExtraValue(const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryScope.GetExtraValue");
		
		USentryScope_GetExtraValue_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259FC60
	 * 		Name   -> Function Sentry.SentryScope.GetExtras
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TMap<class FString, class FString> USentryScope::GetExtras()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryScope.GetExtras");
		
		USentryScope_GetExtras_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A09B0
	 * 		Name   -> Function Sentry.SentryScope.GetEnvironment
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString USentryScope::GetEnvironment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryScope.GetEnvironment");
		
		USentryScope_GetEnvironment_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A0B50
	 * 		Name   -> Function Sentry.SentryScope.GetDist
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString USentryScope::GetDist()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryScope.GetDist");
		
		USentryScope_GetDist_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A14E0
	 * 		Name   -> Function Sentry.SentryScope.ClearBreadcrumbs
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USentryScope::ClearBreadcrumbs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryScope.ClearBreadcrumbs");
		
		USentryScope_ClearBreadcrumbs_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A13C0
	 * 		Name   -> Function Sentry.SentryScope.ClearAttachments
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USentryScope::ClearAttachments()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryScope.ClearAttachments");
		
		USentryScope_ClearAttachments_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259FC30
	 * 		Name   -> Function Sentry.SentryScope.Clear
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USentryScope::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryScope.Clear");
		
		USentryScope_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A1510
	 * 		Name   -> Function Sentry.SentryScope.AddBreadcrumb
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USentryBreadcrumb*                           Breadcrumb                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentryScope::AddBreadcrumb(class USentryBreadcrumb* Breadcrumb)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryScope.AddBreadcrumb");
		
		USentryScope_AddBreadcrumb_Params params {};
		params.Breadcrumb = Breadcrumb;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A13F0
	 * 		Name   -> Function Sentry.SentryScope.AddAttachment
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USentryAttachment*                           Attachment                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentryScope::AddAttachment(class USentryAttachment* Attachment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryScope.AddAttachment");
		
		USentryScope_AddAttachment_Params params {};
		params.Attachment = Attachment;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USentryScope.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USentryScope::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Sentry.SentryScope");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USentrySettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USentrySettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Sentry.SentrySettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A29D0
	 * 		Name   -> Function Sentry.SentrySubsystem.SetUser
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USentryUser*                                 User                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentrySubsystem::SetUser(class USentryUser* User)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.SetUser");
		
		USentrySubsystem_SetUser_Params params {};
		params.User = User;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A2490
	 * 		Name   -> Function Sentry.SentrySubsystem.SetTag
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentrySubsystem::SetTag(const class FString& Key, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.SetTag");
		
		USentrySubsystem_SetTag_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A2290
	 * 		Name   -> Function Sentry.SentrySubsystem.SetLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ESentryLevel                                       Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentrySubsystem::SetLevel(ESentryLevel Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.SetLevel");
		
		USentrySubsystem_SetLevel_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A2650
	 * 		Name   -> Function Sentry.SentrySubsystem.SetContext
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 Values                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USentrySubsystem::SetContext(const class FString& Key, TMap<class FString, class FString> Values)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.SetContext");
		
		USentrySubsystem_SetContext_Params params {};
		params.Key = Key;
		params.Values = Values;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A29A0
	 * 		Name   -> Function Sentry.SentrySubsystem.RemoveUser
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USentrySubsystem::RemoveUser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.RemoveUser");
		
		USentrySubsystem_RemoveUser_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A2390
	 * 		Name   -> Function Sentry.SentrySubsystem.RemoveTag
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentrySubsystem::RemoveTag(const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.RemoveTag");
		
		USentrySubsystem_RemoveTag_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A3BD0
	 * 		Name   -> Function Sentry.SentrySubsystem.InitializeWithSettings
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              OnConfigureSettings                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentrySubsystem::InitializeWithSettings(const class FScriptDelegate& OnConfigureSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.InitializeWithSettings");
		
		USentrySubsystem_InitializeWithSettings_Params params {};
		params.OnConfigureSettings = OnConfigureSettings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A3DA0
	 * 		Name   -> Function Sentry.SentrySubsystem.Initialize
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USentrySubsystem::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.Initialize");
		
		USentrySubsystem_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A2890
	 * 		Name   -> Function Sentry.SentrySubsystem.ConfigureScope
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              OnConfigureScope                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentrySubsystem::ConfigureScope(const class FScriptDelegate& OnConfigureScope)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.ConfigureScope");
		
		USentrySubsystem_ConfigureScope_Params params {};
		params.OnConfigureScope = OnConfigureScope;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A3BA0
	 * 		Name   -> Function Sentry.SentrySubsystem.Close
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USentrySubsystem::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.Close");
		
		USentrySubsystem_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A3620
	 * 		Name   -> Function Sentry.SentrySubsystem.ClearBreadcrumbs
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USentrySubsystem::ClearBreadcrumbs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.ClearBreadcrumbs");
		
		USentrySubsystem_ClearBreadcrumbs_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A2AC0
	 * 		Name   -> Function Sentry.SentrySubsystem.CaptureUserFeedbackWithParams
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USentryId*                                   EventId                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      email                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Comments                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentrySubsystem::CaptureUserFeedbackWithParams(class USentryId* EventId, const class FString& email, const class FString& Comments, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.CaptureUserFeedbackWithParams");
		
		USentrySubsystem_CaptureUserFeedbackWithParams_Params params {};
		params.EventId = EventId;
		params.email = email;
		params.Comments = Comments;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A2E00
	 * 		Name   -> Function Sentry.SentrySubsystem.CaptureUserFeedback
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USentryUserFeedback*                         UserFeedback                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentrySubsystem::CaptureUserFeedback(class USentryUserFeedback* UserFeedback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.CaptureUserFeedback");
		
		USentrySubsystem_CaptureUserFeedback_Params params {};
		params.UserFeedback = UserFeedback;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A31D0
	 * 		Name   -> Function Sentry.SentrySubsystem.CaptureMessageWithScope
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnConfigureScope                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESentryLevel                                       Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USentryId* USentrySubsystem::CaptureMessageWithScope(const class FString& Message, const class FScriptDelegate& OnConfigureScope, ESentryLevel Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.CaptureMessageWithScope");
		
		USentrySubsystem_CaptureMessageWithScope_Params params {};
		params.Message = Message;
		params.OnConfigureScope = OnConfigureScope;
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A3460
	 * 		Name   -> Function Sentry.SentrySubsystem.CaptureMessage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESentryLevel                                       Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USentryId* USentrySubsystem::CaptureMessage(const class FString& Message, ESentryLevel Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.CaptureMessage");
		
		USentrySubsystem_CaptureMessage_Params params {};
		params.Message = Message;
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A2EF0
	 * 		Name   -> Function Sentry.SentrySubsystem.CaptureEventWithScope
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class USentryEvent*                                Event                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnConfigureScope                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USentryId* USentrySubsystem::CaptureEventWithScope(class USentryEvent* Event, const class FScriptDelegate& OnConfigureScope)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.CaptureEventWithScope");
		
		USentrySubsystem_CaptureEventWithScope_Params params {};
		params.Event = Event;
		params.OnConfigureScope = OnConfigureScope;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A30C0
	 * 		Name   -> Function Sentry.SentrySubsystem.CaptureEvent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USentryEvent*                                Event                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USentryId* USentrySubsystem::CaptureEvent(class USentryEvent* Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.CaptureEvent");
		
		USentrySubsystem_CaptureEvent_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A3650
	 * 		Name   -> Function Sentry.SentrySubsystem.AddBreadcrumbWithParams
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Category                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Type                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		ESentryLevel                                       Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentrySubsystem::AddBreadcrumbWithParams(const class FString& Message, const class FString& Category, const class FString& Type, TMap<class FString, class FString> Data, ESentryLevel Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.AddBreadcrumbWithParams");
		
		USentrySubsystem_AddBreadcrumbWithParams_Params params {};
		params.Message = Message;
		params.Category = Category;
		params.Type = Type;
		params.Data = Data;
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A3AB0
	 * 		Name   -> Function Sentry.SentrySubsystem.AddBreadcrumb
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USentryBreadcrumb*                           Breadcrumb                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentrySubsystem::AddBreadcrumb(class USentryBreadcrumb* Breadcrumb)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentrySubsystem.AddBreadcrumb");
		
		USentrySubsystem_AddBreadcrumb_Params params {};
		params.Breadcrumb = Breadcrumb;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USentrySubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USentrySubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Sentry.SentrySubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259D220
	 * 		Name   -> Function Sentry.SentryUser.SetUsername
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      username                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentryUser::SetUsername(const class FString& username)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryUser.SetUsername");
		
		USentryUser_SetUsername_Params params {};
		params.username = username;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A0F90
	 * 		Name   -> Function Sentry.SentryUser.SetIpAddress
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      IpAddress                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentryUser::SetIpAddress(const class FString& IpAddress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryUser.SetIpAddress");
		
		USentryUser_SetIpAddress_Params params {};
		params.IpAddress = IpAddress;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259D320
	 * 		Name   -> Function Sentry.SentryUser.SetId
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentryUser::SetId(const class FString& ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryUser.SetId");
		
		USentryUser_SetId_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259D420
	 * 		Name   -> Function Sentry.SentryUser.SetEmail
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      email                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentryUser::SetEmail(const class FString& email)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryUser.SetEmail");
		
		USentryUser_SetEmail_Params params {};
		params.email = email;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A45B0
	 * 		Name   -> Function Sentry.SentryUser.SetData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TMap<class FString, class FString>                 Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USentryUser::SetData(TMap<class FString, class FString> Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryUser.SetData");
		
		USentryUser_SetData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259D180
	 * 		Name   -> Function Sentry.SentryUser.GetUsername
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString USentryUser::GetUsername()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryUser.GetUsername");
		
		USentryUser_GetUsername_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A4730
	 * 		Name   -> Function Sentry.SentryUser.GetIpAddress
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString USentryUser::GetIpAddress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryUser.GetIpAddress");
		
		USentryUser_GetIpAddress_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259C480
	 * 		Name   -> Function Sentry.SentryUser.GetId
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString USentryUser::GetId()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryUser.GetId");
		
		USentryUser_GetId_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259C5C0
	 * 		Name   -> Function Sentry.SentryUser.GetEmail
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString USentryUser::GetEmail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryUser.GetEmail");
		
		USentryUser_GetEmail_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025A4490
	 * 		Name   -> Function Sentry.SentryUser.GetData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TMap<class FString, class FString> USentryUser::GetData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryUser.GetData");
		
		USentryUser_GetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USentryUser.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USentryUser::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Sentry.SentryUser");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259D420
	 * 		Name   -> Function Sentry.SentryUserFeedback.SetName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentryUserFeedback::SetName(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryUserFeedback.SetName");
		
		USentryUserFeedback_SetName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259D320
	 * 		Name   -> Function Sentry.SentryUserFeedback.SetEmail
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      email                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentryUserFeedback::SetEmail(const class FString& email)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryUserFeedback.SetEmail");
		
		USentryUserFeedback_SetEmail_Params params {};
		params.email = email;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259D220
	 * 		Name   -> Function Sentry.SentryUserFeedback.SetComment
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Comments                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentryUserFeedback::SetComment(const class FString& Comments)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryUserFeedback.SetComment");
		
		USentryUserFeedback_SetComment_Params params {};
		params.Comments = Comments;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013CFC10
	 * 		Name   -> Function Sentry.SentryUserFeedback.Initialize
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USentryId*                                   EventId                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USentryUserFeedback::Initialize(class USentryId* EventId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryUserFeedback.Initialize");
		
		USentryUserFeedback_Initialize_Params params {};
		params.EventId = EventId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259C5C0
	 * 		Name   -> Function Sentry.SentryUserFeedback.GetName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString USentryUserFeedback::GetName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryUserFeedback.GetName");
		
		USentryUserFeedback_GetName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259C480
	 * 		Name   -> Function Sentry.SentryUserFeedback.GetEmail
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString USentryUserFeedback::GetEmail()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryUserFeedback.GetEmail");
		
		USentryUserFeedback_GetEmail_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0259D180
	 * 		Name   -> Function Sentry.SentryUserFeedback.GetComment
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString USentryUserFeedback::GetComment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sentry.SentryUserFeedback.GetComment");
		
		USentryUserFeedback_GetComment_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USentryUserFeedback.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USentryUserFeedback::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Sentry.SentryUserFeedback");
		return ptr;
	}

}


