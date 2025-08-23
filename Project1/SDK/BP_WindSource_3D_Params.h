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
	 * Function BP_WindSource_3D.BP_WindSource_3D_C.set_visibility
	 */
	struct ABP_WindSource_3D_C_set_visibility_Params
	{	};

	/**
	 * Function BP_WindSource_3D.BP_WindSource_3D_C.trigger_periodic
	 */
	struct ABP_WindSource_3D_C_trigger_periodic_Params
	{	};

	/**
	 * Function BP_WindSource_3D.BP_WindSource_3D_C.dummy_motion
	 */
	struct ABP_WindSource_3D_C_dummy_motion_Params
	{	};

	/**
	 * Function BP_WindSource_3D.BP_WindSource_3D_C.follow_actor_pos
	 */
	struct ABP_WindSource_3D_C_follow_actor_pos_Params
	{	};

	/**
	 * Function BP_WindSource_3D.BP_WindSource_3D_C.calc_velocity
	 */
	struct ABP_WindSource_3D_C_calc_velocity_Params
	{	};

	/**
	 * Function BP_WindSource_3D.BP_WindSource_3D_C.UserConstructionScript
	 */
	struct ABP_WindSource_3D_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_WindSource_3D.BP_WindSource_3D_C.event_loop
	 */
	struct ABP_WindSource_3D_C_event_loop_Params
	{	};

	/**
	 * Function BP_WindSource_3D.BP_WindSource_3D_C.ReceiveTick
	 */
	struct ABP_WindSource_3D_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WindSource_3D.BP_WindSource_3D_C.ReceiveBeginPlay
	 */
	struct ABP_WindSource_3D_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_WindSource_3D.BP_WindSource_3D_C.ExecuteUbergraph_BP_WindSource_3D
	 */
	struct ABP_WindSource_3D_C_ExecuteUbergraph_BP_WindSource_3D_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZG4N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
