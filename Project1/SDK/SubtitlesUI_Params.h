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
	 * Function SubtitlesUI.SubtitlesUI_C.GetSubtitleColors
	 */
	struct USubtitlesUI_C_GetSubtitleColors_Params
	{
	public:
		TArray<struct FSlateColor>                                 Colors;                                                  // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function SubtitlesUI.SubtitlesUI_C.ProcessDynamicMaterialForDialogueIcon
	 */
	struct USubtitlesUI_C_ProcessDynamicMaterialForDialogueIcon_Params
	{	};

	/**
	 * Function SubtitlesUI.SubtitlesUI_C.OnShowSubtitles
	 */
	struct USubtitlesUI_C_OnShowSubtitles_Params
	{	};

	/**
	 * Function SubtitlesUI.SubtitlesUI_C.GetSubtitles
	 */
	struct USubtitlesUI_C_GetSubtitles_Params
	{
	public:
		TArray<class FString>                                      Subtitles;                                               // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function SubtitlesUI.SubtitlesUI_C.ShowSubtitleAtIndex
	 */
	struct USubtitlesUI_C_ShowSubtitleAtIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SubtitlesUI.SubtitlesUI_C.FadeOutSubtitles
	 */
	struct USubtitlesUI_C_FadeOutSubtitles_Params
	{	};

	/**
	 * Function SubtitlesUI.SubtitlesUI_C.AddedToViewport
	 */
	struct USubtitlesUI_C_AddedToViewport_Params
	{	};

	/**
	 * Function SubtitlesUI.SubtitlesUI_C.ShowNextSubtitle
	 */
	struct USubtitlesUI_C_ShowNextSubtitle_Params
	{	};

	/**
	 * Function SubtitlesUI.SubtitlesUI_C.ResetToStart
	 */
	struct USubtitlesUI_C_ResetToStart_Params
	{
	public:
		class FName                                                SubtitleSet;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SubtitlesUI.SubtitlesUI_C.OnHideSubtitles
	 */
	struct USubtitlesUI_C_OnHideSubtitles_Params
	{	};

	/**
	 * Function SubtitlesUI.SubtitlesUI_C.ExecuteUbergraph_SubtitlesUI
	 */
	struct USubtitlesUI_C_ExecuteUbergraph_SubtitlesUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
