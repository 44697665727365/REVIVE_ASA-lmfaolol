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
	 * Function ChatBoxUI.ChatBoxUI_C.Switch Chat Mode
	 */
	struct UChatBoxUI_C_SwitchChatMode_Params
	{
	public:
		EUINavigation                                              Navigation;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X7XQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatBoxUI.ChatBoxUI_C.BndEvt__ChatBoxUI_Button_42_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UChatBoxUI_C_BndEvt__ChatBoxUI_Button_42_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function ChatBoxUI.ChatBoxUI_C.OnGamepadActiveChangedBP
	 */
	struct UChatBoxUI_C_OnGamepadActiveChangedBP_Params
	{
	public:
		bool                                                       bIsGamepadActive;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChatBoxUI.ChatBoxUI_C.ExecuteUbergraph_ChatBoxUI
	 */
	struct UChatBoxUI_C_ExecuteUbergraph_ChatBoxUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
