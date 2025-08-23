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
	 * Function ProximitySound.ProximitySound_C.PlaySound
	 */
	struct UProximitySound_C_PlaySound_Params
	{
	public:
		class USoundBase*                                          SoundToPlay;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       SoundValid;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_II9G[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ProximitySound.ProximitySound_C.CheckOverlap
	 */
	struct UProximitySound_C_CheckOverlap_Params
	{	};

	/**
	 * Function ProximitySound.ProximitySound_C.ReceiveBeginPlay
	 */
	struct UProximitySound_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ProximitySound.ProximitySound_C.ReceiveTick
	 */
	struct UProximitySound_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ProximitySound.ProximitySound_C.ExecuteUbergraph_ProximitySound
	 */
	struct UProximitySound_C_ExecuteUbergraph_ProximitySound_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
