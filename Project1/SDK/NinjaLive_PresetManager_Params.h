#pragma once

/**
 * Name: Ark_Survival_Ascended
 * Version: 0.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.MarkForSave_UE426_BugWorkaround
	 */
	struct ANinjaLive_PresetManager_C_MarkForSave_UE426_BugWorkaround_Params
	{
	public:
		class UObject*                                             CurrentAsset;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.ConvertToPowerOfTwo
	 */
	struct ANinjaLive_PresetManager_C_ConvertToPowerOfTwo_Params
	{
	public:
		int32_t                                                    In;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Out;                                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.MarkNewFilesAsUnsaved
	 */
	struct ANinjaLive_PresetManager_C_MarkNewFilesAsUnsaved_Params
	{
	public:
		TArray<struct FAssetData>                                  ArrayOfUnsaveAssetData;                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.DataTable_SingleKeyPicker_DT
	 */
	struct ANinjaLive_PresetManager_C_DataTable_SingleKeyPicker_DT_Params
	{
	public:
		class UDataTable*                                          DataTableIn;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FString                                              KeyToPick;                                               // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              PickedKeyValue;                                          // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       NotFound;                                                // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.AssetDataFromObject
	 */
	struct ANinjaLive_PresetManager_C_AssetDataFromObject_Params
	{
	public:
		class UObject*                                             InputObject;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FAssetData                                          ComboAssetData;                                          // 0x0008(0x0068)  (Parm, OutParm, HasGetValueTypeHash)
		class FName                                                ObjectPath;                                              // 0x0070(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                PackageName;                                             // 0x0078(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                PackagePath;                                             // 0x0080(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                AssetName;                                               // 0x0088(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                AssetClass;                                              // 0x0090(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.Preset_to_InternalCSV_to_DT_Saver
	 */
	struct ANinjaLive_PresetManager_C_Preset_to_InternalCSV_to_DT_Saver_Params
	{
	public:
		bool                                                       OverWriteFlag;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_58XW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              VarAsString;                                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              SelectedItem;                                            // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		TArray<class FName>                                        AssetPaths;                                              // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FName                                                AssetName;                                               // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.RenderTargetExportSingleV2
	 */
	struct ANinjaLive_PresetManager_C_RenderTargetExportSingleV2_Params
	{
	public:
		class UTextureRenderTarget2D*                              TextureRenderTarget;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       InternalSave;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SRGB;                                                    // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       NoAlpha;                                                 // 0x000A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SaveWithDialog;                                          // 0x000B(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                InternalFilePath;                                        // 0x000C(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ExternalFilePath;                                        // 0x0014(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ASI7[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Filename;                                                // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Extension;                                               // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.RenderTargetExportSingleV1
	 */
	struct ANinjaLive_PresetManager_C_RenderTargetExportSingleV1_Params
	{
	public:
		class UTextureRenderTarget2D*                              TextureRenderTarget;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       InternalSave;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SRGB;                                                    // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       NoAlpha;                                                 // 0x000A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SaveWithDialog;                                          // 0x000B(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                InternalFilePath;                                        // 0x000C(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ExternalFilePath;                                        // 0x0014(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_01LN[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Filename;                                                // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Extension;                                               // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                SavedAssetPath;                                          // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FAssetData                                          SavedAssetData;                                          // 0x0048(0x0068)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.SetAssetNameAndPath
	 */
	struct ANinjaLive_PresetManager_C_SetAssetNameAndPath_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FName                                                AssetTrimmedName;                                        // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                AssetPath;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.UserConstructionScript
	 */
	struct ANinjaLive_PresetManager_C_UserConstructionScript_Params
	{	};

	/**
	 * Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_6
	 */
	struct ANinjaLive_PresetManager_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_6_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5
	 */
	struct ANinjaLive_PresetManager_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4
	 */
	struct ANinjaLive_PresetManager_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_3
	 */
	struct ANinjaLive_PresetManager_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_2
	 */
	struct ANinjaLive_PresetManager_C_InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_1
	 */
	struct ANinjaLive_PresetManager_C_InpActEvt_MiddleMouseButton_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.ReceiveTick
	 */
	struct ANinjaLive_PresetManager_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.ReceiveBeginPlay
	 */
	struct ANinjaLive_PresetManager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.WriteDataTableFunction
	 */
	struct ANinjaLive_PresetManager_C_WriteDataTableFunction_Params
	{
	public:
		class UDataTable*                                          InputTable;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FString                                              InputData;                                               // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.OnDensityMapSave
	 */
	struct ANinjaLive_PresetManager_C_OnDensityMapSave_Params
	{
	public:
		bool                                                       SavePaintBuffer;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLive_PresetManager.NinjaLive_PresetManager_C.ExecuteUbergraph_NinjaLive_PresetManager
	 */
	struct ANinjaLive_PresetManager_C_ExecuteUbergraph_NinjaLive_PresetManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
