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
	 * Function TutorialUI.TutorialUI_C.RemovedFromViewport
	 */
	struct UTutorialUI_C_RemovedFromViewport_Params
	{	};

	/**
	 * Function TutorialUI.TutorialUI_C.AddedToViewport
	 */
	struct UTutorialUI_C_AddedToViewport_Params
	{	};

	/**
	 * Function TutorialUI.TutorialUI_C.ExecuteUbergraph_TutorialUI
	 */
	struct UTutorialUI_C_ExecuteUbergraph_TutorialUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
