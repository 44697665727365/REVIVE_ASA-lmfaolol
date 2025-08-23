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
	 * 		RVA    -> 0x02588590
	 * 		Name   -> Function cfcore_ui.BindButtonSystem.StartBind
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UBindButtonSystem::StartBind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.BindButtonSystem.StartBind");
		
		UBindButtonSystem_StartBind_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02588330
	 * 		Name   -> Function cfcore_ui.BindButtonSystem.SetViewState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EViewState                                         NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBindButtonSystem::SetViewState(EViewState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.BindButtonSystem.SetViewState");
		
		UBindButtonSystem_SetViewState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02588570
	 * 		Name   -> Function cfcore_ui.BindButtonSystem.EndBind
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UBindButtonSystem::EndBind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.BindButtonSystem.EndBind");
		
		UBindButtonSystem_EndBind_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02588420
	 * 		Name   -> Function cfcore_ui.BindButtonSystem.ControllerAction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBindButtonSystem::ControllerAction(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.BindButtonSystem.ControllerAction");
		
		UBindButtonSystem_ControllerAction_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBindButtonSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBindButtonSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class cfcore_ui.BindButtonSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCFCoreButtonImage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCFCoreButtonImage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class cfcore_ui.CFCoreButtonImage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCFCoreGamepadCursorSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCFCoreGamepadCursorSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class cfcore_ui.CFCoreGamepadCursorSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02589040
	 * 		Name   -> Function cfcore_ui.CFCoreMathHelperFunctionLibrary.Int64_SubOne
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int64_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int64_t UCFCoreMathHelperFunctionLibrary::STATIC_Int64_SubOne(int64_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreMathHelperFunctionLibrary.Int64_SubOne");
		
		UCFCoreMathHelperFunctionLibrary_Int64_SubOne_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02589120
	 * 		Name   -> Function cfcore_ui.CFCoreMathHelperFunctionLibrary.Int64_AddOne
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int64_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int64_t UCFCoreMathHelperFunctionLibrary::STATIC_Int64_AddOne(int64_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreMathHelperFunctionLibrary.Int64_AddOne");
		
		UCFCoreMathHelperFunctionLibrary_Int64_AddOne_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02588E80
	 * 		Name   -> Function cfcore_ui.CFCoreMathHelperFunctionLibrary.Int32_SubOne
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UCFCoreMathHelperFunctionLibrary::STATIC_Int32_SubOne(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreMathHelperFunctionLibrary.Int32_SubOne");
		
		UCFCoreMathHelperFunctionLibrary_Int32_SubOne_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02588F60
	 * 		Name   -> Function cfcore_ui.CFCoreMathHelperFunctionLibrary.Int32_AddOne
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UCFCoreMathHelperFunctionLibrary::STATIC_Int32_AddOne(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreMathHelperFunctionLibrary.Int32_AddOne");
		
		UCFCoreMathHelperFunctionLibrary_Int32_AddOne_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCFCoreMathHelperFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCFCoreMathHelperFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class cfcore_ui.CFCoreMathHelperFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCFCoreRichText.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCFCoreRichText::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class cfcore_ui.CFCoreRichText");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0258AD40
	 * 		Name   -> Function cfcore_ui.CFCoreRichTextBlockImageDecorator.SetImageToMap
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UTexture2DDynamic*                           Image                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ImageUrl                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreRichTextBlockImageDecorator::SetImageToMap(class UTexture2DDynamic* Image, const class FString& ImageUrl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreRichTextBlockImageDecorator.SetImageToMap");
		
		UCFCoreRichTextBlockImageDecorator_SetImageToMap_Params params {};
		params.Image = Image;
		params.ImageUrl = ImageUrl;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCFCoreRichTextBlockImageDecorator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCFCoreRichTextBlockImageDecorator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class cfcore_ui.CFCoreRichTextBlockImageDecorator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0258B2D0
	 * 		Name   -> Function cfcore_ui.CFCoreThemeSettings.CommitThemeData
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UDataTable*                                  themeDataTable                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      themeName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCFCoreThemeRowData                         Data                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCFCoreThemeSettings::STATIC_CommitThemeData(class UDataTable* themeDataTable, const class FString& themeName, const struct FCFCoreThemeRowData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreThemeSettings.CommitThemeData");
		
		UCFCoreThemeSettings_CommitThemeData_Params params {};
		params.themeDataTable = themeDataTable;
		params.themeName = themeName;
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCFCoreThemeSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCFCoreThemeSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class cfcore_ui.CFCoreThemeSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0258B810
	 * 		Name   -> Function cfcore_ui.CFCoreUIBaseModel.OnEventReceived_LibraryProgress
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameModsEvent                                     evt                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLibraryProgress                            progress                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FInstallProgressMod>                 OutModsList                                                (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UCFCoreUIBaseModel::OnEventReceived_LibraryProgress(EGameModsEvent evt, const struct FLibraryProgress& progress, TArray<struct FInstallProgressMod>* OutModsList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUIBaseModel.OnEventReceived_LibraryProgress");
		
		UCFCoreUIBaseModel_OnEventReceived_LibraryProgress_Params params {};
		params.evt = evt;
		params.progress = progress;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutModsList != nullptr)
			*OutModsList = params.OutModsList;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0258BB80
	 * 		Name   -> Function cfcore_ui.CFCoreUIBaseModel.OnEventReceived_Installed
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameModsEvent                                     evt                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FInstalledMod>                       InModsList                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FInstallProgressMod>                 OutModsList                                                (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UCFCoreUIBaseModel::OnEventReceived_Installed(EGameModsEvent evt, TArray<struct FInstalledMod> InModsList, TArray<struct FInstallProgressMod>* OutModsList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUIBaseModel.OnEventReceived_Installed");
		
		UCFCoreUIBaseModel_OnEventReceived_Installed_Params params {};
		params.evt = evt;
		params.InModsList = InModsList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutModsList != nullptr)
			*OutModsList = params.OutModsList;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0258BF00
	 * 		Name   -> Function cfcore_ui.CFCoreUIBaseModel.OnEventReceived
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameModsEvent                                     evt                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FCFCoreMod>                          InModsList                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FInstallProgressMod>                 OutModsList                                                (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UCFCoreUIBaseModel::OnEventReceived(EGameModsEvent evt, TArray<struct FCFCoreMod> InModsList, TArray<struct FInstallProgressMod>* OutModsList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUIBaseModel.OnEventReceived");
		
		UCFCoreUIBaseModel_OnEventReceived_Params params {};
		params.evt = evt;
		params.InModsList = InModsList;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutModsList != nullptr)
			*OutModsList = params.OutModsList;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCFCoreUIBaseModel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCFCoreUIBaseModel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class cfcore_ui.CFCoreUIBaseModel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function cfcore_ui.CFCoreUIBaseView.OnEventBroadcasted
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameModsEvent                                     evt                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FInstallProgressMod>                 ModsList                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		struct FCFCoreApiResponsePagination                pagination                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UCFCoreUIBaseView::OnEventBroadcasted(EGameModsEvent evt, TArray<struct FInstallProgressMod> ModsList, const struct FCFCoreApiResponsePagination& pagination)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUIBaseView.OnEventBroadcasted");
		
		UCFCoreUIBaseView_OnEventBroadcasted_Params params {};
		params.evt = evt;
		params.ModsList = ModsList;
		params.pagination = pagination;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCFCoreUIBaseView.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCFCoreUIBaseView::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class cfcore_ui.CFCoreUIBaseView");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCFCoreUIModel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCFCoreUIModel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class cfcore_ui.CFCoreUIModel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025904D0
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.UpdateMod
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCFCoreMod                                  mod                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCFCoreUISubsystem::UpdateMod(const struct FCFCoreMod& mod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.UpdateMod");
		
		UCFCoreUISubsystem_UpdateMod_Params params {};
		params.mod = mod;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0258F560
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.UnsubscribeViewFromEvents
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     View                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<EGameModsEvent>                             evts                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCFCoreUISubsystem::UnsubscribeViewFromEvents(class UObject* View, TArray<EGameModsEvent> evts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.UnsubscribeViewFromEvents");
		
		UCFCoreUISubsystem_UnsubscribeViewFromEvents_Params params {};
		params.View = View;
		params.evts = evts;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0258F3D0
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.UnsubscribeViewFromEvent
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     View                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGameModsEvent                                     evt                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCFCoreUISubsystem::UnsubscribeViewFromEvent(class UObject* View, EGameModsEvent evt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.UnsubscribeViewFromEvent");
		
		UCFCoreUISubsystem_UnsubscribeViewFromEvent_Params params {};
		params.View = View;
		params.evt = evt;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C15A0
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.UnregisterModelClass
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      modelClass                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCFCoreUISubsystem::UnregisterModelClass(class UClass* modelClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.UnregisterModelClass");
		
		UCFCoreUISubsystem_UnregisterModelClass_Params params {};
		params.modelClass = modelClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025905F0
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.UninstallMod
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCFCoreMod                                  mod                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCFCoreUISubsystem::UninstallMod(const struct FCFCoreMod& mod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.UninstallMod");
		
		UCFCoreUISubsystem_UninstallMod_Params params {};
		params.mod = mod;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0258F940
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.SubscribeViewToEvents
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     View                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<EGameModsEvent>                             evts                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               initializeView                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCFCoreUISubsystem::SubscribeViewToEvents(class UObject* View, TArray<EGameModsEvent> evts, bool initializeView)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.SubscribeViewToEvents");
		
		UCFCoreUISubsystem_SubscribeViewToEvents_Params params {};
		params.View = View;
		params.evts = evts;
		params.initializeView = initializeView;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0258F720
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.SubscribeViewToEvent
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     View                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EGameModsEvent                                     evt                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               initializeView                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCFCoreUISubsystem::SubscribeViewToEvent(class UObject* View, EGameModsEvent evt, bool initializeView)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.SubscribeViewToEvent");
		
		UCFCoreUISubsystem_SubscribeViewToEvent_Params params {};
		params.View = View;
		params.evt = evt;
		params.initializeView = initializeView;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02590A70
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.SetMod
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCFCoreMod                                  mod                                                        (Parm, NativeAccessSpecifierPublic)
	 * 		struct FInstalledMod                               InInstalledMod                                             (Parm, NativeAccessSpecifierPublic)
	 * 		struct FInstalledMod                               OutInstalledMod                                            (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UCFCoreUISubsystem::STATIC_SetMod(const struct FCFCoreMod& mod, const struct FInstalledMod& InInstalledMod, struct FInstalledMod* OutInstalledMod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.SetMod");
		
		UCFCoreUISubsystem_SetMod_Params params {};
		params.mod = mod;
		params.InInstalledMod = InInstalledMod;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutInstalledMod != nullptr)
			*OutInstalledMod = params.OutInstalledMod;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02590150
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.SearchMods
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCFCoreSearchModsFilter                     Filter                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FCFCoreApiRequestPagination                 pagination                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCFCoreUISubsystem::SearchMods(const struct FCFCoreSearchModsFilter& Filter, const struct FCFCoreApiRequestPagination& pagination)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.SearchMods");
		
		UCFCoreUISubsystem_SearchMods_Params params {};
		params.Filter = Filter;
		params.pagination = pagination;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025909F0
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.ReleaseUIController
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCFCoreUISubsystem::ReleaseUIController()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.ReleaseUIController");
		
		UCFCoreUISubsystem_ReleaseUIController_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0258FE40
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.RegisterModelClass
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      modelClass                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCFCoreUISubsystem::RegisterModelClass(class UClass* modelClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.RegisterModelClass");
		
		UCFCoreUISubsystem_RegisterModelClass_Params params {};
		params.modelClass = modelClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025908E0
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.RegisterErrorDelegate
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              errorDelegate                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreUISubsystem::RegisterErrorDelegate(const class FScriptDelegate& errorDelegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.RegisterErrorDelegate");
		
		UCFCoreUISubsystem_RegisterErrorDelegate_Params params {};
		params.errorDelegate = errorDelegate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0258DE80
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.OnUninstall
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FInstalledMod                               InstalledMod                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCFCoreUISubsystem::OnUninstall(const struct FInstalledMod& InstalledMod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.OnUninstall");
		
		UCFCoreUISubsystem_OnUninstall_Params params {};
		params.InstalledMod = InstalledMod;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0258D280
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.OnSearchModsError
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FCFCoreError                                Error                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCFCoreUISubsystem::OnSearchModsError(const struct FCFCoreError& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.OnSearchModsError");
		
		UCFCoreUISubsystem_OnSearchModsError_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0258DB90
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.OnSearchMods
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		TArray<struct FCFCoreMod>                          mods                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FCFCoreApiResponsePagination                pagination                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UCFCoreUISubsystem::OnSearchMods(TArray<struct FCFCoreMod> mods, const struct FCFCoreApiResponsePagination& pagination)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.OnSearchMods");
		
		UCFCoreUISubsystem_OnSearchMods_Params params {};
		params.mods = mods;
		params.pagination = pagination;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0258D280
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.OnMyModsError
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FCFCoreError                                Error                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCFCoreUISubsystem::OnMyModsError(const struct FCFCoreError& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.OnMyModsError");
		
		UCFCoreUISubsystem_OnMyModsError_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0258D9A0
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.OnMyMods
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		TArray<struct FCFCoreMod>                          mods                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCFCoreUISubsystem::OnMyMods(TArray<struct FCFCoreMod> mods)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.OnMyMods");
		
		UCFCoreUISubsystem_OnMyMods_Params params {};
		params.mods = mods;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0258D280
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.OnModUninstallError
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FCFCoreError                                Error                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCFCoreUISubsystem::OnModUninstallError(const struct FCFCoreError& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.OnModUninstallError");
		
		UCFCoreUISubsystem_OnModUninstallError_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0258D3B0
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.OnModInstallError
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FCFCoreError                                Error                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FCFCoreMod                                  InstallingMod                                              (Parm, NativeAccessSpecifierPublic)
	 */
	void UCFCoreUISubsystem::OnModInstallError(const struct FCFCoreError& Error, const struct FCFCoreMod& InstallingMod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.OnModInstallError");
		
		UCFCoreUISubsystem_OnModInstallError_Params params {};
		params.Error = Error;
		params.InstallingMod = InstallingMod;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0258E300
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.OnInstallProgress
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FLibraryProgress                            progress                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCFCoreUISubsystem::OnInstallProgress(const struct FLibraryProgress& progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.OnInstallProgress");
		
		UCFCoreUISubsystem_OnInstallProgress_Params params {};
		params.progress = progress;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0258D7B0
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.OnGetModsByIds
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		TArray<struct FCFCoreMod>                          mods                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCFCoreUISubsystem::OnGetModsByIds(TArray<struct FCFCoreMod> mods)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.OnGetModsByIds");
		
		UCFCoreUISubsystem_OnGetModsByIds_Params params {};
		params.mods = mods;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0258D280
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.OnGetInstalledModsError
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FCFCoreError                                Error                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCFCoreUISubsystem::OnGetInstalledModsError(const struct FCFCoreError& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.OnGetInstalledModsError");
		
		UCFCoreUISubsystem_OnGetInstalledModsError_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0258D640
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.OnGetInstalledMods
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		TArray<struct FInstalledMod>                       installedMods                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCFCoreUISubsystem::OnGetInstalledMods(TArray<struct FInstalledMod> installedMods)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.OnGetInstalledMods");
		
		UCFCoreUISubsystem_OnGetInstalledMods_Params params {};
		params.installedMods = installedMods;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0258E000
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.OnFinishedUpdating
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FInstalledMod                               updatedMod                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCFCoreUISubsystem::OnFinishedUpdating(const struct FInstalledMod& updatedMod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.OnFinishedUpdating");
		
		UCFCoreUISubsystem_OnFinishedUpdating_Params params {};
		params.updatedMod = updatedMod;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0258E180
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.OnFinishedInstalling
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FInstalledMod                               InstalledMod                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCFCoreUISubsystem::OnFinishedInstalling(const struct FInstalledMod& InstalledMod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.OnFinishedInstalling");
		
		UCFCoreUISubsystem_OnFinishedInstalling_Params params {};
		params.InstalledMod = InstalledMod;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0258DE20
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.OnCancelModInstallationSuccess
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCFCoreUISubsystem::OnCancelModInstallationSuccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.OnCancelModInstallationSuccess");
		
		UCFCoreUISubsystem_OnCancelModInstallationSuccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0258D280
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.OnCancelModInstallation
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FCFCoreError                                Error                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCFCoreUISubsystem::OnCancelModInstallation(const struct FCFCoreError& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.OnCancelModInstallation");
		
		UCFCoreUISubsystem_OnCancelModInstallation_Params params {};
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0258E420
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.MakeFInstallProgressModFromID
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FInstallProgressMod UCFCoreUISubsystem::STATIC_MakeFInstallProgressModFromID(int64_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.MakeFInstallProgressModFromID");
		
		UCFCoreUISubsystem_MakeFInstallProgressModFromID_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0258F0B0
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.MakeFInstallProgressMod
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCFCoreMod                                  mod                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FInstallProgressMod UCFCoreUISubsystem::STATIC_MakeFInstallProgressMod(const struct FCFCoreMod& mod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.MakeFInstallProgressMod");
		
		UCFCoreUISubsystem_MakeFInstallProgressMod_Params params {};
		params.mod = mod;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0258FF30
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.IsAnyModInstalling
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UCFCoreUISubsystem::IsAnyModInstalling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.IsAnyModInstalling");
		
		UCFCoreUISubsystem_IsAnyModInstalling_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02590740
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.InstallMod
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCFCoreMod                                  mod                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCFCoreUISubsystem::InstallMod(const struct FCFCoreMod& mod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.InstallMod");
		
		UCFCoreUISubsystem_InstallMod_Params params {};
		params.mod = mod;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02590A50
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.InitializeUIController
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCFCoreUISubsystem::InitializeUIController()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.InitializeUIController");
		
		UCFCoreUISubsystem_InitializeUIController_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0258F200
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.InitializeModView
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     View                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCFCoreMod                                  mod                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UCFCoreUISubsystem::InitializeModView(class UObject* View, const struct FCFCoreMod& mod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.InitializeModView");
		
		UCFCoreUISubsystem_InitializeModView_Params params {};
		params.View = View;
		params.mod = mod;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0258FFF0
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.GetMyMods
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCFCoreUISubsystem::GetMyMods()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.GetMyMods");
		
		UCFCoreUISubsystem_GetMyMods_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0258FBA0
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.GetModById
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FInstallProgressMod                         OutMod                                                     (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		int64_t                                            ID                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCFCoreUISubsystem::GetModById(struct FInstallProgressMod* OutMod, int64_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.GetModById");
		
		UCFCoreUISubsystem_GetModById_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMod != nullptr)
			*OutMod = params.OutMod;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025908A0
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.GetInstalledMods
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCFCoreUISubsystem::GetInstalledMods()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.GetInstalledMods");
		
		UCFCoreUISubsystem_GetInstalledMods_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025903D0
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.CancelModInstallation
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCFCoreMod                                  mod                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCFCoreUISubsystem::CancelModInstallation(const struct FCFCoreMod& mod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.CancelModInstallation");
		
		UCFCoreUISubsystem_CancelModInstallation_Params params {};
		params.mod = mod;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02590030
	 * 		Name   -> Function cfcore_ui.CFCoreUISubsystem.ApiGetModsById
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<int64_t>                                    modIds                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCFCoreUISubsystem::ApiGetModsById(TArray<int64_t> modIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreUISubsystem.ApiGetModsById");
		
		UCFCoreUISubsystem_ApiGetModsById_Params params {};
		params.modIds = modIds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCFCoreUISubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCFCoreUISubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class cfcore_ui.CFCoreUISubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02592170
	 * 		Name   -> Function cfcore_ui.CFCoreVirtualCursorFunctionLibrary.IsCursorOverInteractableWidget
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UCFCoreVirtualCursorFunctionLibrary::STATIC_IsCursorOverInteractableWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreVirtualCursorFunctionLibrary.IsCursorOverInteractableWidget");
		
		UCFCoreVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02592490
	 * 		Name   -> Function cfcore_ui.CFCoreVirtualCursorFunctionLibrary.EnableVirtualCursor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreVirtualCursorFunctionLibrary::STATIC_EnableVirtualCursor(class APlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreVirtualCursorFunctionLibrary.EnableVirtualCursor");
		
		UCFCoreVirtualCursorFunctionLibrary_EnableVirtualCursor_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025922A0
	 * 		Name   -> Function cfcore_ui.CFCoreVirtualCursorFunctionLibrary.DisableVirtualCursor
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreVirtualCursorFunctionLibrary::STATIC_DisableVirtualCursor(class APlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore_ui.CFCoreVirtualCursorFunctionLibrary.DisableVirtualCursor");
		
		UCFCoreVirtualCursorFunctionLibrary_DisableVirtualCursor_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCFCoreVirtualCursorFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCFCoreVirtualCursorFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class cfcore_ui.CFCoreVirtualCursorFunctionLibrary");
		return ptr;
	}

}


