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
	 * Function ChangeCameraModeUI_Widget.ChangeCameraModeUI_Widget_C.Tick
	 */
	struct UChangeCameraModeUI_Widget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChangeCameraModeUI_Widget.ChangeCameraModeUI_Widget_C.Construct
	 */
	struct UChangeCameraModeUI_Widget_C_Construct_Params
	{	};

	/**
	 * Function ChangeCameraModeUI_Widget.ChangeCameraModeUI_Widget_C.OnGamepadActiveChangedBP
	 */
	struct UChangeCameraModeUI_Widget_C_OnGamepadActiveChangedBP_Params
	{
	public:
		bool                                                       bIsGamepadActive;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ChangeCameraModeUI_Widget.ChangeCameraModeUI_Widget_C.ExecuteUbergraph_ChangeCameraModeUI_Widget
	 */
	struct UChangeCameraModeUI_Widget_C_ExecuteUbergraph_ChangeCameraModeUI_Widget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
