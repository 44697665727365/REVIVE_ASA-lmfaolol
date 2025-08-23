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
	 * Function ConsoleCommand.ConsoleCommand_C.BPHighlightWidgetOnStart
	 */
	struct UConsoleCommand_C_BPHighlightWidgetOnStart_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ConsoleCommand.ConsoleCommand_C.BPCycleHighlighted
	 */
	struct UConsoleCommand_C_BPCycleHighlighted_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ConsoleCommand.ConsoleCommand_C.Tick
	 */
	struct UConsoleCommand_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ConsoleCommand.ConsoleCommand_C.BndEvt__ConsoleCommand_CloseButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
	 */
	struct UConsoleCommand_C_BndEvt__ConsoleCommand_CloseButton_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function ConsoleCommand.ConsoleCommand_C.ExecuteUbergraph_ConsoleCommand
	 */
	struct UConsoleCommand_C_ExecuteUbergraph_ConsoleCommand_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
