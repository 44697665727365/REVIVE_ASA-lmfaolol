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
	 * Function HoverDrone.HoverDroneMovementComponent.StopForceFacing
	 */
	struct UHoverDroneMovementComponent_StopForceFacing_Params
	{	};

	/**
	 * Function HoverDrone.HoverDroneMovementComponent.SetCurrentFOV
	 */
	struct UHoverDroneMovementComponent_SetCurrentFOV_Params
	{
	public:
		float                                                      NewFOV;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoverDrone.HoverDroneMovementComponent.ForceFacing
	 */
	struct UHoverDroneMovementComponent_ForceFacing_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoverDrone.HoverDroneMovementComponent.AddVelocity
	 */
	struct UHoverDroneMovementComponent_AddVelocity_Params
	{
	public:
		struct FVector                                             VelocityImpulse;                                         // 0x0000(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoverDrone.HoverDroneMovementComponent.AddRotationalVelocity
	 */
	struct UHoverDroneMovementComponent_AddRotationalVelocity_Params
	{
	public:
		struct FRotator                                            RotationalVel;                                           // 0x0000(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoverDrone.HoverDronePawn.TurnAccel
	 */
	struct AHoverDronePawn_TurnAccel_Params
	{
	public:
		float                                                      Val;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoverDrone.HoverDronePawn.SetToDefaultDroneSpeedIndex
	 */
	struct AHoverDronePawn_SetToDefaultDroneSpeedIndex_Params
	{	};

	/**
	 * Function HoverDrone.HoverDronePawn.SetDroneSpeedIndex
	 */
	struct AHoverDronePawn_SetDroneSpeedIndex_Params
	{
	public:
		int32_t                                                    SpeedIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoverDrone.HoverDronePawn.SetAllowSpeedChange
	 */
	struct AHoverDronePawn_SetAllowSpeedChange_Params
	{
	public:
		bool                                                       bOnOff;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoverDrone.HoverDronePawn.MoveUp
	 */
	struct AHoverDronePawn_MoveUp_Params
	{
	public:
		float                                                      Val;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoverDrone.HoverDronePawn.LookUpAccel
	 */
	struct AHoverDronePawn_LookUpAccel_Params
	{
	public:
		float                                                      Val;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoverDrone.HoverDronePawn.IsMaintainingConstantAltitude
	 */
	struct AHoverDronePawn_IsMaintainingConstantAltitude_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoverDrone.HoverDronePawn.GetTiltedDroneRotation
	 */
	struct AHoverDronePawn_GetTiltedDroneRotation_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TOCL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoverDrone.HoverDronePawn.GetDroneSpeedIndex
	 */
	struct AHoverDronePawn_GetDroneSpeedIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoverDrone.HoverDronePawn.GetAltitude
	 */
	struct AHoverDronePawn_GetAltitude_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HoverDrone.HoverDronePawn.EndLookat
	 */
	struct AHoverDronePawn_EndLookat_Params
	{	};

	/**
	 * Function HoverDrone.HoverDronePawn.BeginLookat
	 */
	struct AHoverDronePawn_BeginLookat_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
