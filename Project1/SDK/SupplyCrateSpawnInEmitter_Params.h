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
	 * Function SupplyCrateSpawnInEmitter.SupplyCrateSpawnInEmitter_C.InitColor
	 */
	struct ASupplyCrateSpawnInEmitter_C_InitColor_Params
	{	};

	/**
	 * Function SupplyCrateSpawnInEmitter.SupplyCrateSpawnInEmitter_C.SetupEmitter
	 */
	struct ASupplyCrateSpawnInEmitter_C_SetupEmitter_Params
	{
	public:
		class AActor*                                              FromActor;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SupplyCrateSpawnInEmitter.SupplyCrateSpawnInEmitter_C.UpdateEmitter
	 */
	struct ASupplyCrateSpawnInEmitter_C_UpdateEmitter_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Alpha;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              FromActor;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SupplyCrateSpawnInEmitter.SupplyCrateSpawnInEmitter_C.ExecuteUbergraph_SupplyCrateSpawnInEmitter
	 */
	struct ASupplyCrateSpawnInEmitter_C_ExecuteUbergraph_SupplyCrateSpawnInEmitter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
