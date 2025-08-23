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
	 * Function UDS_Cloud_Paint_Container.UDS_Cloud_Paint_Container_C.ReceiveBeginPlay
	 */
	struct AUDS_Cloud_Paint_Container_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function UDS_Cloud_Paint_Container.UDS_Cloud_Paint_Container_C.ReceiveEndPlay
	 */
	struct AUDS_Cloud_Paint_Container_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UDS_Cloud_Paint_Container.UDS_Cloud_Paint_Container_C.ExecuteUbergraph_UDS_Cloud_Paint_Container
	 */
	struct AUDS_Cloud_Paint_Container_C_ExecuteUbergraph_UDS_Cloud_Paint_Container_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JC5B[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
