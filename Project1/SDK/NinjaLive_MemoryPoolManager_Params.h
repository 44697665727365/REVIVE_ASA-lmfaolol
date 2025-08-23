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
	 * Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.MemCount
	 */
	struct ANinjaLive_MemoryPoolManager_C_MemCount_Params
	{
	public:
		int32_t                                                    NumberOfChannels;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ResolutionX;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ResolutionY;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.SetRenderTargetAttribs
	 */
	struct ANinjaLive_MemoryPoolManager_C_SetRenderTargetAttribs_Params
	{
	public:
		class UTextureRenderTarget2D*                              InputPin;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       Clamping;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KZPW[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTextureRenderTarget2D*                              RT;                                                      // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.UserConstructionScript
	 */
	struct ANinjaLive_MemoryPoolManager_C_UserConstructionScript_Params
	{	};

	/**
	 * Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.ReceiveTick
	 */
	struct ANinjaLive_MemoryPoolManager_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.ReceiveBeginPlay
	 */
	struct ANinjaLive_MemoryPoolManager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.PrintMemStatus
	 */
	struct ANinjaLive_MemoryPoolManager_C_PrintMemStatus_Params
	{
	public:
		class UObject*                                             Consumer;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                                     MemConsumption;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       TakenOrReturned;                                         // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.ExecuteUbergraph_NinjaLive_MemoryPoolManager
	 */
	struct ANinjaLive_MemoryPoolManager_C_ExecuteUbergraph_NinjaLive_MemoryPoolManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
