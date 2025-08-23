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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass Buff_CreativeModeHelper.Buff_CreativeModeHelper_C
	 * Size -> 0x007F (FullSize[0x0BD8] - InheritedSize[0x0B59])
	 */
	class ABuff_CreativeModeHelper_C : public ABuff_Base_OnlyRelevantToOwner_C
	{
	public:
		unsigned char                                              UnknownData_510B[0x7];                                   // 0x0B59(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0B60(0x0008) ZeroConstructor, Transient, DuplicateTransient
		double                                                     DebugReplicationRadius;                                  // 0x0B68(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DebugServerTraceSpacing;                                 // 0x0B70(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DebugReplication;                                        // 0x0B78(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsFlying;                                                // 0x0B79(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Q91T[0x6];                                   // 0x0B7A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastModeChangeTime;                                      // 0x0B80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     JumpPressTime;                                           // 0x0B88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     OrigMaxFlySpeed;                                         // 0x0B90(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     OrigBrakeDecelFlying;                                    // 0x0B98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              AdminBlinkWeaponItem;                                    // 0x0BA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              AdminBlinkWeaponWeap[0x30];                              // 0x0BA8(0x0030) UNKNOWN PROPERTY: SoftClassProperty

	public:
		bool BPCheckPreventInput(EPrimalCharacterInputType inputType);
		void BPDrawBuffStatusHUD(class AShooterHUD* HUD, float XPos, float YPos, float ScaleMult);
		void BuffTickServer(float DeltaTime);
		void IsNotRidingDino(bool* NotRidingDino);
		void ExecConsoleCommand(const class FString& Command);
		void BPDeactivated(class AActor* ForInstigator);
		void BPActivated(class AActor* ForInstigator);
		void BPSetupForInstigator(class AActor* ForInstigator);
		void InpActEvt_Jump_K2Node_InputActionEvent_6(const struct FKey& Key);
		void InpActEvt_Run_K2Node_InputActionEvent_5(const struct FKey& Key);
		void InpActEvt_Run_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_Ctrl_F1_K2Node_InputKeyEvent_4(const struct FKey& Key);
		void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_G_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_1(const struct FKey& Key);
		void ServerSetFlight(bool IsFlying);
		void ServerSetFlySpeed(double NewSpeed);
		void SetFlySpeed(double NewSpeed);
		void NetServerDestroyStructure(class APrimalStructure* StructureToDestroy);
		void ClientUpdateFlightStatus(bool IsFlying);
		void MultiReplicationDebugData(TArray<struct FHitResult> Hits, TArray<struct FVector> HitStarts, TArray<struct FVector> HitEnds, TArray<struct FTransform> Chars, const struct FVector& Player);
		void BuffTickClient(float DeltaTime);
		void ServerRequestReplicationDebugging(bool Enabled);
		void ExecuteUbergraph_Buff_CreativeModeHelper(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
