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
	 * Function CheatMenuCharacterPresetsButton.CheatMenuCharacterPresetsButton_C.SetValues
	 */
	struct UCheatMenuCharacterPresetsButton_C_SetValues_Params
	{
	public:
		class FText                                                CheatName;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FCheatMenuCharacterLevelPreset                      Levels;                                                  // 0x0018(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCheatMenuCharacterPresetItems                      Items;                                                   // 0x0040(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CheatMenuCharacterPresetsButton.CheatMenuCharacterPresetsButton_C.BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCheatMenuCharacterPresetsButton_C_BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CheatMenuCharacterPresetsButton.CheatMenuCharacterPresetsButton_C.ExecuteUbergraph_CheatMenuCharacterPresetsButton
	 */
	struct UCheatMenuCharacterPresetsButton_C_ExecuteUbergraph_CheatMenuCharacterPresetsButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
