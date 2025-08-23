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
	 * Function UDS_Island.UDS_Island_C.AbsorptionColor
	 */
	struct AUDS_Island_C_AbsorptionColor_Params
	{	};

	/**
	 * Function UDS_Island.UDS_Island_C.UserConstructionScript
	 */
	struct AUDS_Island_C_UserConstructionScript_Params
	{	};

	/**
	 * Function UDS_Island.UDS_Island_C.ReceiveTick
	 */
	struct AUDS_Island_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UDS_Island.UDS_Island_C.SequencerUpdate
	 */
	struct AUDS_Island_C_SequencerUpdate_Params
	{	};

	/**
	 * Function UDS_Island.UDS_Island_C.ReceiveBeginPlay
	 */
	struct AUDS_Island_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function UDS_Island.UDS_Island_C.ExecuteUbergraph_UDS_Island
	 */
	struct AUDS_Island_C_ExecuteUbergraph_UDS_Island_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
