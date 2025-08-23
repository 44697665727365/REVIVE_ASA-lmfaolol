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
	 * Function UDS_Digital_Clock.UDS_Digital_Clock_C.Update Temp
	 */
	struct UUDS_Digital_Clock_C_UpdateTemp_Params
	{	};

	/**
	 * Function UDS_Digital_Clock.UDS_Digital_Clock_C.Update Time
	 */
	struct UUDS_Digital_Clock_C_UpdateTime_Params
	{	};

	/**
	 * Function UDS_Digital_Clock.UDS_Digital_Clock_C.Construct
	 */
	struct UUDS_Digital_Clock_C_Construct_Params
	{	};

	/**
	 * Function UDS_Digital_Clock.UDS_Digital_Clock_C.Tick
	 */
	struct UUDS_Digital_Clock_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UDS_Digital_Clock.UDS_Digital_Clock_C.ExecuteUbergraph_UDS_Digital_Clock
	 */
	struct UUDS_Digital_Clock_C_ExecuteUbergraph_UDS_Digital_Clock_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_85ZA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
