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
	 * Function ShooterHudBP.ShooterHudBP_C.BPCustomAddHUDNotification
	 */
	struct AShooterHudBP_C_BPCustomAddHUDNotification_Params
	{
	public:
		class FString                                              NotificationString;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FColor                                              NotificationColor;                                       // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UYGU[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMaterialInterface*                                  NotificationMaterial;                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          NotificationTexture;                                     // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		float                                                      DisplayTime;                                             // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DisplayScale;                                            // 0x002C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsSingleton;                                            // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5KI7[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    MessageTypeID;                                           // 0x0034(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Priority;                                                // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x003C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ShooterHudBP.ShooterHudBP_C.GetAdditionalExplorerNoteDynamicMaterialParams
	 */
	struct AShooterHudBP_C_GetAdditionalExplorerNoteDynamicMaterialParams_Params
	{
	public:
		struct FExplorerNoteEntry                                  ExplorerNote;                                            // 0x0000(0x0110)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FNameScalarPair>                             ScalarMaterialParams;                                    // 0x0110(0x0010)  (Parm, OutParm)
		TArray<struct FNameColorPair>                              ColorMaterialParams;                                     // 0x0120(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function ShooterHudBP.ShooterHudBP_C.BPForceReinitUI
	 */
	struct AShooterHudBP_C_BPForceReinitUI_Params
	{	};

	/**
	 * Function ShooterHudBP.ShooterHudBP_C.ExecuteUbergraph_ShooterHudBP
	 */
	struct AShooterHudBP_C_ExecuteUbergraph_ShooterHudBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
