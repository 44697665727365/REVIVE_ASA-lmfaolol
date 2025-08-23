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
	 * Function FinalCreditsUI.FinalCreditsUI_C.ConditionallySetupSkipButton
	 */
	struct UFinalCreditsUI_C_ConditionallySetupSkipButton_Params
	{	};

	/**
	 * Function FinalCreditsUI.FinalCreditsUI_C.Play Credits Music
	 */
	struct UFinalCreditsUI_C_PlayCreditsMusic_Params
	{	};

	/**
	 * Function FinalCreditsUI.FinalCreditsUI_C.OnMoviePlaybackFinished
	 */
	struct UFinalCreditsUI_C_OnMoviePlaybackFinished_Params
	{
	public:
		class FString                                              MoviePath;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bPlaybackWasCancelled;                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_496O[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FinalCreditsUI.FinalCreditsUI_C.Construct
	 */
	struct UFinalCreditsUI_C_Construct_Params
	{	};

	/**
	 * Function FinalCreditsUI.FinalCreditsUI_C.Tick
	 */
	struct UFinalCreditsUI_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FinalCreditsUI.FinalCreditsUI_C.CloseButtonEvent
	 */
	struct UFinalCreditsUI_C_CloseButtonEvent_Params
	{	};

	/**
	 * Function FinalCreditsUI.FinalCreditsUI_C.RemovedFromViewport
	 */
	struct UFinalCreditsUI_C_RemovedFromViewport_Params
	{	};

	/**
	 * Function FinalCreditsUI.FinalCreditsUI_C.AddedToViewport
	 */
	struct UFinalCreditsUI_C_AddedToViewport_Params
	{	};

	/**
	 * Function FinalCreditsUI.FinalCreditsUI_C.BndEvt__FinalCreditsUI_CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UFinalCreditsUI_C_BndEvt__FinalCreditsUI_CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function FinalCreditsUI.FinalCreditsUI_C.ExecuteUbergraph_FinalCreditsUI
	 */
	struct UFinalCreditsUI_C_ExecuteUbergraph_FinalCreditsUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FinalCreditsUI.FinalCreditsUI_C.OnCreditsClosed__DelegateSignature
	 */
	struct UFinalCreditsUI_C_OnCreditsClosed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
