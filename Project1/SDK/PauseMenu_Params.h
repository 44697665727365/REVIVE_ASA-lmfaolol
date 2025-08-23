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
	 * Function PauseMenu.PauseMenu_C.RemovedFromViewport
	 */
	struct UPauseMenu_C_RemovedFromViewport_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.Tick
	 */
	struct UPauseMenu_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PauseMenu.PauseMenu_C.BndEvt__PauseMenu_PhotoModeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UPauseMenu_C_BndEvt__PauseMenu_PhotoModeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.AddedToViewport
	 */
	struct UPauseMenu_C_AddedToViewport_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.BndEvt__PauseMenu_ConsoleCommandButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UPauseMenu_C_BndEvt__PauseMenu_ConsoleCommandButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.BndEvt__PauseMenu_ConsoleCommandButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UPauseMenu_C_BndEvt__PauseMenu_ConsoleCommandButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function PauseMenu.PauseMenu_C.ExecuteUbergraph_PauseMenu
	 */
	struct UPauseMenu_C_ExecuteUbergraph_PauseMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PCXG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
