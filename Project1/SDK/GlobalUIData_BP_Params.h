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
	 * Function GlobalUIData_BP.GlobalUIData_BP_C.BPGetHUDElements_Module_FuelOrAmmo_ExtraBar
	 */
	struct UGlobalUIData_BP_C_BPGetHUDElements_Module_FuelOrAmmo_ExtraBar_Params
	{
	public:
		int32_t                                                    SlotOffset;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SlotSpan;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StateIndex;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B6BZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     progress;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              ExtendedInfoText;                                        // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FHUDElement                                         OutHUDElement;                                           // 0x0028(0x01B0)  (Parm, OutParm)
	};

	/**
	 * Function GlobalUIData_BP.GlobalUIData_BP_C.BPGetHUDElements_Module_FuelOrAmmo
	 */
	struct UGlobalUIData_BP_C_BPGetHUDElements_Module_FuelOrAmmo_Params
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StateIndex;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     progress;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              MainText;                                                // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ExtendedInfoText;                                        // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UTexture2D*                                          Icon;                                                    // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FHUDElement                                         OutHUDElement;                                           // 0x0038(0x01B0)  (Parm, OutParm)
	};

	/**
	 * Function GlobalUIData_BP.GlobalUIData_BP_C.BPGetHUDElements_Module_Struggle
	 */
	struct UGlobalUIData_BP_C_BPGetHUDElements_Module_Struggle_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                                     StruggleProgressPercent;                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              RichTextOverride;                                        // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class AActor*                                              Instigator;                                              // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		TArray<struct FHUDElement>                                 Elements;                                                // 0x0028(0x0010)  (Parm, OutParm)
		struct FHUDRichTextOverlayData                             OutHUDRichTextOverlay;                                   // 0x0038(0x0070)  (Parm, OutParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
