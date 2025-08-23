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
	 * Function CheatMapJumpButton.CheatMapJumpButton_C.SetMapJumpInfo
	 */
	struct UCheatMapJumpButton_C_SetMapJumpInfo_Params
	{
	public:
		struct FCheatMapJumpInfo                                   Info;                                                    // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function CheatMapJumpButton.CheatMapJumpButton_C.BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCheatMapJumpButton_C_BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CheatMapJumpButton.CheatMapJumpButton_C.ExecuteUbergraph_CheatMapJumpButton
	 */
	struct UCheatMapJumpButton_C_ExecuteUbergraph_CheatMapJumpButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AMPY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
