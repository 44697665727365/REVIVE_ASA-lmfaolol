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
	 * Function CharacterTrackFilter_Base.CharacterTrackFilter_Base_C.GetActorsToSearchThrough_BP
	 */
	struct UCharacterTrackFilter_Base_C_GetActorsToSearchThrough_BP_Params
	{
	public:
		class AShooterPlayerController*                            SPC;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function CharacterTrackFilter_Base.CharacterTrackFilter_Base_C.ShouldActorBeTracked
	 */
	struct UCharacterTrackFilter_Base_C_ShouldActorBeTracked_Params
	{
	public:
		class AActor*                                              InvestigatedActor;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CustomTameSelectionType;                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DinoGroup;                                               // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              CustomTameSearchText;                                    // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class AShooterGameMode*                                    GameMode;                                                // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class APlayerState*                                        PlayerState;                                             // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AShooterCharacter*                                   RequestingplayerShooterCharacter;                        // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       DebugEnabled;                                            // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Handled;                                                 // 0x0039(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x003A(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CharacterTrackFilter_Base.CharacterTrackFilter_Base_C.GetActorsToSearchThrough
	 */
	struct UCharacterTrackFilter_Base_C_GetActorsToSearchThrough_Params
	{
	public:
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function CharacterTrackFilter_Base.CharacterTrackFilter_Base_C.Is In Dino Group
	 */
	struct UCharacterTrackFilter_Base_C_IsInDinoGroup_Params
	{
	public:
		class AActor*                                              checkedactor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class APlayerState*                                        playerstate;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DinoGroupNum;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isfavorited;                                             // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsInGroup;                                               // 0x0015(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
