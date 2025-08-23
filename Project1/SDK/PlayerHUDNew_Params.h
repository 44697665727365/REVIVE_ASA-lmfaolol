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
	 * Function PlayerHUDNew.PlayerHUDNew_C.GetAllChildRecursively
	 */
	struct UPlayerHUDNew_C_GetAllChildRecursively_Params
	{
	public:
		class UWidget*                                             oneWidget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		TArray<class UWidget*>                                     AllChildWidget;                                          // 0x0008(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function PlayerHUDNew.PlayerHUDNew_C.FixConsoleIcons
	 */
	struct UPlayerHUDNew_C_FixConsoleIcons_Params
	{	};

	/**
	 * Function PlayerHUDNew.PlayerHUDNew_C.UpdateRunningIcon
	 */
	struct UPlayerHUDNew_C_UpdateRunningIcon_Params
	{	};

	/**
	 * Function PlayerHUDNew.PlayerHUDNew_C.SetElementBarBoostIconHidden
	 */
	struct UPlayerHUDNew_C_SetElementBarBoostIconHidden_Params
	{
	public:
		bool                                                       isHidden;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerHUDNew.PlayerHUDNew_C.OnFastInventoryChangedBP
	 */
	struct UPlayerHUDNew_C_OnFastInventoryChangedBP_Params
	{
	public:
		bool                                                       bActivate;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerHUDNew.PlayerHUDNew_C.OnGamepadActiveChangedBP
	 */
	struct UPlayerHUDNew_C_OnGamepadActiveChangedBP_Params
	{
	public:
		bool                                                       bIsGamepadActive;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerHUDNew.PlayerHUDNew_C.Construct
	 */
	struct UPlayerHUDNew_C_Construct_Params
	{	};

	/**
	 * Function PlayerHUDNew.PlayerHUDNew_C.Tick
	 */
	struct UPlayerHUDNew_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerHUDNew.PlayerHUDNew_C.UpdatedKeybindingBP
	 */
	struct UPlayerHUDNew_C_UpdatedKeybindingBP_Params
	{	};

	/**
	 * Function PlayerHUDNew.PlayerHUDNew_C.ExecuteUbergraph_PlayerHUDNew
	 */
	struct UPlayerHUDNew_C_ExecuteUbergraph_PlayerHUDNew_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
