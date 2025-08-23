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
	 * 		Name   -> Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.MarkForSave_UE426_BugWorkaround
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     CurrentAsset                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ANinjaLive_PresetManager_C::MarkForSave_UE426_BugWorkaround(class UObject* CurrentAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.MarkForSave_UE426_BugWorkaround");
		
		ANinjaLive_PresetManager_C_MarkForSave_UE426_BugWorkaround_Params params {};
		params.CurrentAsset = CurrentAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.ConvertToPowerOfTwo
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            In                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANinjaLive_PresetManager_C::ConvertToPowerOfTwo(int32_t In, int32_t* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.ConvertToPowerOfTwo");
		
		ANinjaLive_PresetManager_C_ConvertToPowerOfTwo_Params params {};
		params.In = In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.MarkNewFilesAsUnsaved
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FAssetData>                          ArrayOfUnsaveAssetData                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ANinjaLive_PresetManager_C::MarkNewFilesAsUnsaved(TArray<struct FAssetData>* ArrayOfUnsaveAssetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.MarkNewFilesAsUnsaved");
		
		ANinjaLive_PresetManager_C_MarkNewFilesAsUnsaved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ArrayOfUnsaveAssetData != nullptr)
			*ArrayOfUnsaveAssetData = params.ArrayOfUnsaveAssetData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.DataTable_SingleKeyPicker_DT
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDataTable*                                  DataTableIn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      KeyToPick                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      PickedKeyValue                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               NotFound                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANinjaLive_PresetManager_C::DataTable_SingleKeyPicker_DT(class UDataTable* DataTableIn, const class FString& KeyToPick, class FString* PickedKeyValue, bool* NotFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.DataTable_SingleKeyPicker_DT");
		
		ANinjaLive_PresetManager_C_DataTable_SingleKeyPicker_DT_Params params {};
		params.DataTableIn = DataTableIn;
		params.KeyToPick = KeyToPick;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PickedKeyValue != nullptr)
			*PickedKeyValue = params.PickedKeyValue;
		if (NotFound != nullptr)
			*NotFound = params.NotFound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.AssetDataFromObject
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     InputObject                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAssetData                                  ComboAssetData                                             (Parm, OutParm, HasGetValueTypeHash)
	 * 		class FName                                        ObjectPath                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        PackageName                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        PackagePath                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        AssetName                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        AssetClass                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANinjaLive_PresetManager_C::AssetDataFromObject(class UObject* InputObject, struct FAssetData* ComboAssetData, class FName* ObjectPath, class FName* PackageName, class FName* PackagePath, class FName* AssetName, class FName* AssetClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.AssetDataFromObject");
		
		ANinjaLive_PresetManager_C_AssetDataFromObject_Params params {};
		params.InputObject = InputObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ComboAssetData != nullptr)
			*ComboAssetData = params.ComboAssetData;
		if (ObjectPath != nullptr)
			*ObjectPath = params.ObjectPath;
		if (PackageName != nullptr)
			*PackageName = params.PackageName;
		if (PackagePath != nullptr)
			*PackagePath = params.PackagePath;
		if (AssetName != nullptr)
			*AssetName = params.AssetName;
		if (AssetClass != nullptr)
			*AssetClass = params.AssetClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.Preset_to_InternalCSV_to_DT_Saver
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               OverWriteFlag                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      VarAsString                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		TArray<class FName>                                AssetPaths                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FName                                        AssetName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANinjaLive_PresetManager_C::Preset_to_InternalCSV_to_DT_Saver(bool OverWriteFlag, const class FString& VarAsString, const class FString& SelectedItem, TArray<class FName>* AssetPaths, const class FName& AssetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.Preset_to_InternalCSV_to_DT_Saver");
		
		ANinjaLive_PresetManager_C_Preset_to_InternalCSV_to_DT_Saver_Params params {};
		params.OverWriteFlag = OverWriteFlag;
		params.VarAsString = VarAsString;
		params.SelectedItem = SelectedItem;
		params.AssetName = AssetName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AssetPaths != nullptr)
			*AssetPaths = params.AssetPaths;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.RenderTargetExportSingleV2
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      TextureRenderTarget                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InternalSave                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SRGB                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               NoAlpha                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SaveWithDialog                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        InternalFilePath                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ExternalFilePath                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Filename                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Extension                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ANinjaLive_PresetManager_C::RenderTargetExportSingleV2(class UTextureRenderTarget2D* TextureRenderTarget, bool InternalSave, bool SRGB, bool NoAlpha, bool SaveWithDialog, const class FName& InternalFilePath, const class FName& ExternalFilePath, const class FString& Filename, const class FString& Extension)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.RenderTargetExportSingleV2");
		
		ANinjaLive_PresetManager_C_RenderTargetExportSingleV2_Params params {};
		params.TextureRenderTarget = TextureRenderTarget;
		params.InternalSave = InternalSave;
		params.SRGB = SRGB;
		params.NoAlpha = NoAlpha;
		params.SaveWithDialog = SaveWithDialog;
		params.InternalFilePath = InternalFilePath;
		params.ExternalFilePath = ExternalFilePath;
		params.Filename = Filename;
		params.Extension = Extension;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.RenderTargetExportSingleV1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      TextureRenderTarget                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               InternalSave                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SRGB                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               NoAlpha                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SaveWithDialog                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        InternalFilePath                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        ExternalFilePath                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Filename                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Extension                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FName                                        SavedAssetPath                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAssetData                                  SavedAssetData                                             (Parm, OutParm, HasGetValueTypeHash)
	 */
	void ANinjaLive_PresetManager_C::RenderTargetExportSingleV1(class UTextureRenderTarget2D* TextureRenderTarget, bool InternalSave, bool SRGB, bool NoAlpha, bool SaveWithDialog, const class FName& InternalFilePath, const class FName& ExternalFilePath, const class FString& Filename, const class FString& Extension, class FName* SavedAssetPath, struct FAssetData* SavedAssetData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.RenderTargetExportSingleV1");
		
		ANinjaLive_PresetManager_C_RenderTargetExportSingleV1_Params params {};
		params.TextureRenderTarget = TextureRenderTarget;
		params.InternalSave = InternalSave;
		params.SRGB = SRGB;
		params.NoAlpha = NoAlpha;
		params.SaveWithDialog = SaveWithDialog;
		params.InternalFilePath = InternalFilePath;
		params.ExternalFilePath = ExternalFilePath;
		params.Filename = Filename;
		params.Extension = Extension;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SavedAssetPath != nullptr)
			*SavedAssetPath = params.SavedAssetPath;
		if (SavedAssetData != nullptr)
			*SavedAssetData = params.SavedAssetData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.SetAssetNameAndPath
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        AssetTrimmedName                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        AssetPath                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANinjaLive_PresetManager_C::SetAssetNameAndPath(class UObject* Object, class FName* AssetTrimmedName, class FName* AssetPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.SetAssetNameAndPath");
		
		ANinjaLive_PresetManager_C_SetAssetNameAndPath_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AssetTrimmedName != nullptr)
			*AssetTrimmedName = params.AssetTrimmedName;
		if (AssetPath != nullptr)
			*AssetPath = params.AssetPath;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ANinjaLive_PresetManager_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.UserConstructionScript");
		
		ANinjaLive_PresetManager_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_6
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ANinjaLive_PresetManager_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_6(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_6");
		
		ANinjaLive_PresetManager_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_6_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ANinjaLive_PresetManager_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5");
		
		ANinjaLive_PresetManager_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ANinjaLive_PresetManager_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4");
		
		ANinjaLive_PresetManager_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ANinjaLive_PresetManager_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_3");
		
		ANinjaLive_PresetManager_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ANinjaLive_PresetManager_C::InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_2");
		
		ANinjaLive_PresetManager_C_InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ANinjaLive_PresetManager_C::InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_1");
		
		ANinjaLive_PresetManager_C_InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANinjaLive_PresetManager_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.ReceiveTick");
		
		ANinjaLive_PresetManager_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ANinjaLive_PresetManager_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.ReceiveBeginPlay");
		
		ANinjaLive_PresetManager_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.WriteDataTableFunction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDataTable*                                  InputTable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InputData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ANinjaLive_PresetManager_C::WriteDataTableFunction(class UDataTable* InputTable, const class FString& InputData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.WriteDataTableFunction");
		
		ANinjaLive_PresetManager_C_WriteDataTableFunction_Params params {};
		params.InputTable = InputTable;
		params.InputData = InputData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.OnDensityMapSave
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               SavePaintBuffer                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANinjaLive_PresetManager_C::OnDensityMapSave(bool SavePaintBuffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.OnDensityMapSave");
		
		ANinjaLive_PresetManager_C_OnDensityMapSave_Params params {};
		params.SavePaintBuffer = SavePaintBuffer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.ExecuteUbergraph_NinjaLive_PresetManager
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANinjaLive_PresetManager_C::ExecuteUbergraph_NinjaLive_PresetManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.ExecuteUbergraph_NinjaLive_PresetManager");
		
		ANinjaLive_PresetManager_C_ExecuteUbergraph_NinjaLive_PresetManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANinjaLive_PresetManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANinjaLive_PresetManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NinjaLive_PresetManager.NinjaLive_PresetManager_C");
		return ptr;
	}

}


