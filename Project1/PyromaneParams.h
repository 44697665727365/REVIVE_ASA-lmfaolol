#pragma once
#include "pch.h"
namespace CG::Params
{

	// Function FireLion_Character_BP.FireLion_Character_BP_C.AttemptSetLavaWalking
	// 0x0038 (0x0038 - 0x0000)
	struct FireLion_Character_BP_C_AttemptSetLavaWalking final
	{
	public:
		bool                                          Active;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A743[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_GetCapsuleTopLocation_ReturnValue;        // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_LavaWaterPhysicsVolCheck_ReturnValue;     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A744[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		class APhysicsVolume* CallFunc_GetPhysicsVolume_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GetIsPhysicsVolumeLava_IsLava;            // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.AttemptTameOnFireBoost
	// 0x0038 (0x0038 - 0x0000)
	struct FireLion_Character_BP_C_AttemptTameOnFireBoost final
	{
	public:
		bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A745[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		class APlayerController* CallFunc_GetOwnerController_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A746[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class AShooterPlayerController* CallFunc_PCToSPC_ReturnValue;                      // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsWildSlow_ReturnValue;                   // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A747[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.AttemptTeleportAfterWildRiding
	// 0x02C0 (0x02C0 - 0x0000)
	struct FireLion_Character_BP_C_AttemptTeleportAfterWildRiding final
	{
	public:
		int32                                         LocalCount;                                        // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsWildSlow_ReturnValue;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsAlive_ReturnValue;                      // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A748[0x5];                                     // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
		class AController* CallFunc_GetController_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A749[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController;     // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A74A[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		class AGameModeBase* CallFunc_GetGameMode_ReturnValue;                  // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A74B[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode;            // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A74C[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWorld* CallFunc_K2_GetWorld_ReturnValue;                  // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		TArray<class AActor*>                         CallFunc_ServerOctreeOverlapActors_ReturnValue;    // 0x0078(0x0010)(ReferenceParm)
		struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor* CallFunc_Array_Get_Item;                           // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_NearlyEqual_VectorVector_ReturnValue;     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A74D[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character;             // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A74E[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class AController* CallFunc_GetController_ReturnValue_1;              // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_AreTribesAllied_ReturnValue;              // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x00FB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_2;        // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A74F[0x3];                                     // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0100(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A750[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		struct FTeleportDestination                   K2Node_MakeStruct_TeleportDestination;             // 0x0120(0x0040)()
		int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0164(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A751[0x3];                                     // 0x0165(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0168(0x0010)(ReferenceParm)
		class AGameStateBase* CallFunc_GetGameState_ReturnValue;                 // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AShooterGameState* K2Node_DynamicCast_AsShooter_Game_State;           // 0x0180(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A752[0x7];                                     // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		struct FMassTeleportData                      CallFunc_StartMassTeleport_MassTeleportData;       // 0x0190(0x0120)()
		bool                                          CallFunc_StartMassTeleport_ReturnValue;            // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A753[0x3];                                     // 0x02B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         CallFunc_ServerOctreeOverlapActors_Radius_ImplicitCast; // 0x02B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.AttemptWaterJump
	// 0x0138 (0x0138 - 0x0000)
	struct FireLion_Character_BP_C_AttemptWaterJump final
	{
	public:
		struct FVector                                CallFunc_GetCapsuleTopLocation_ReturnValue;        // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_LavaWaterPhysicsVolCheck_ReturnValue;     // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A754[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_Vector_Normal2D_ReturnValue;              // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APhysicsVolume* CallFunc_GetPhysicsVolume_ReturnValue;             // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GetIsPhysicsVolumeLava_IsLava;            // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A755[0x6];                                     // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_PlayAnimEx_ReturnValue;                   // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A756[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_Vector_Normal2D_ReturnValue_1;            // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_VSize_ReturnValue;                        // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A757[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_SelectVector_ReturnValue;                 // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x00E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x00F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0110(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_MakeVector_Z_ImplicitCast;                // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast; // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BlueprintAdjustOutputDamage
	// 0x01A0 (0x01A0 - 0x0000)
	struct FireLion_Character_BP_C_BlueprintAdjustOutputDamage final
	{
	public:
		int32                                         AttackIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         OriginalDamageAmount;                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor* HitActor;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		TSubclassOf<class UDamageType>                OutDamageType;                                     // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		float                                         OutDamageImpulse;                                  // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         ReturnValue;                                       // 0x001C(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FDinoAttackInfo                        CallFunc_Array_Get_Item;                           // 0x0020(0x0150)()
		double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A758[0x4];                                     // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_SelectFloat_A_ImplicitCast;               // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Multiply_DoubleFloat_B_ImplicitCast;      // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BlueprintAnimNotifyCustomEvent
	// 0x0040 (0x0040 - 0x0000)
	struct FireLion_Character_BP_C_BlueprintAnimNotifyCustomEvent final
	{
	public:
		class FName                                   CustomEventName;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMeshComponent* MeshComp;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UAnimSequenceBase* Animation;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		const class UAnimNotify* AnimNotifyObject;                                  // 0x0018(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UNiagaraSystem* FootprintToUse;                                    // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          IsDoused;                                          // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchName_CmpSuccess_1;                    // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsPlayerControlled_ReturnValue;           // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A759[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue;           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsPlayerControlled_ReturnValue_1;         // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENetworkModeResult                            CallFunc_CanRunCosmeticEvents_OutNetworkMode;      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENetworkModeResult                            CallFunc_IsRunningOnServer_OutNetworkMode;         // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BlueprintCanAttack
	// 0x0020 (0x0020 - 0x0000)
	struct FireLion_Character_BP_C_BlueprintCanAttack final
	{
	public:
		int32                                         AttackIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         Distance;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         Param_AttackRangeOffset;                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A75A[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class AActor* OtherTarget;                                       // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_SharedCanAttack_ReturnValue;              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BlueprintCanRiderAttack
	// 0x0008 (0x0008 - 0x0000)
	struct FireLion_Character_BP_C_BlueprintCanRiderAttack final
	{
	public:
		int32                                         AttackIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_SharedCanAttack_ReturnValue;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BlueprintDrawFloatingHUD
	// 0x0130 (0x0130 - 0x0000)
	struct FireLion_Character_BP_C_BlueprintDrawFloatingHUD final
	{
	public:
		class AShooterHUD* HUD;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		float                                         CenterX;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CenterY;                                           // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         DrawScale;                                         // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A75B[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class AGameStateBase* CallFunc_GetGameState_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Add_DoubleFloat_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AShooterGameState* CallFunc_GameStateBaseToShooterGameState_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_GetNetworkTimeDelta_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_FMax_ReturnValue;                         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsTimeSince_Network_ReturnValue;          // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A75C[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		class FString                                 CallFunc_BPFormatAsTime_ReturnValue;               // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A75D[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A75E[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue;    // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A75F[0x6];                                     // 0x008A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1;  // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller_1;  // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A760[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FColor                                 K2Node_MakeStruct_Color;                           // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_BPDrawTextCentered_ReturnValue;           // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsBaby_ReturnValue;                       // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BPIsConscious_ReturnValue;                // 0x00C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A761[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A762[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsWildSlow_ReturnValue;                   // 0x00E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00E3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsBaby_ReturnValue_1;                     // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x00E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A763[0x2];                                     // 0x00E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         CallFunc_BPDrawTextCentered_ReturnValue_1;         // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BPIsConscious_ReturnValue_1;              // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BPIsTamed_ReturnValue;                    // 0x00ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x00EE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x00EF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A764[0x2];                                     // 0x00F2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		struct FColor                                 K2Node_MakeStruct_Color_1;                         // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_5;                 // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A765[0x6];                                     // 0x00FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_BPDrawTextCentered_Y_ImplicitCast;        // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A766[0x4];                                     // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1;   // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast_1;        // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_BPDrawTextCentered_Y_ImplicitCast_1;      // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BP_GetCustomModifier_MaxSpeed
	// 0x0040 (0x0040 - 0x0000)
	struct FireLion_Character_BP_C_BP_GetCustomModifier_MaxSpeed final
	{
	public:
		float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A767[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GetIsInLavaSwimmingState_ReturnValue;     // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A768[0x5];                                     // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_ReturnValue_2;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Multiply_DoubleFloat_B_ImplicitCast;      // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BP_GetCustomModifier_RotationRate
	// 0x0038 (0x0038 - 0x0000)
	struct FireLion_Character_BP_C_BP_GetCustomModifier_RotationRate final
	{
	public:
		float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A769[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A76A[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_ReturnValue_2;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BP_InterceptMoveForward
	// 0x0020 (0x0020 - 0x0000)
	struct FireLion_Character_BP_C_BP_InterceptMoveForward final
	{
	public:
		float                                         AxisValue;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A76B[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_GetCurveValue_ReturnValue;                // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A76C[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BP_OnSetDeath
	// 0x0050 (0x0050 - 0x0000)
	struct FireLion_Character_BP_C_BP_OnSetDeath final
	{
	public:
		bool                                          CallFunc_IsMeshGameplayRelevant_ReturnValue;       // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BPIsTamed_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A76D[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGameModeBase* CallFunc_GetGameMode_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode;            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A76E[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_GetPersistentTimeInSeconds_ReturnValue;   // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Add_DoubleFloat_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENetworkModeResult                            CallFunc_IsRunningOnServer_OutNetworkMode;         // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Add_DoubleFloat_B_ImplicitCast;           // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BP_OnStartCarried
	// 0x0010 (0x0010 - 0x0000)
	struct FireLion_Character_BP_C_BP_OnStartCarried final
	{
	public:
		class APrimalDinoCharacter* ADino;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		ENetworkModeResult                            CallFunc_IsRunningOnServer_OutNetworkMode;         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BP_OnTamedOrderReceived
	// 0x0020 (0x0020 - 0x0000)
	struct FireLion_Character_BP_C_BP_OnTamedOrderReceived final
	{
	public:
		class APrimalCharacter* FromCharacter;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		EDinoTamedOrder                               OrderType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          bForce;                                            // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A76F[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		class AActor* EnemyTarget;                                       // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          OrderNotExecuted;                                  // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_CurrentlyHasRider_ReturnValue;            // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPAdjustAttackIndex
	// 0x0010 (0x0010 - 0x0000)
	struct FireLion_Character_BP_C_BPAdjustAttackIndex final
	{
	public:
		int32                                         AttackIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         ReturnValue;                                       // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A770[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPAdjustDamage
	// 0x01E0 (0x01E0 - 0x0000)
	struct FireLion_Character_BP_C_BPAdjustDamage final
	{
	public:
		float                                         IncomingDamage;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A771[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		struct FDamageEvent                           TheDamageEvent;                                    // 0x0008(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
		class AController* EventInstigator;                                   // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AActor* DamageCauser;                                      // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          bIsPointDamage;                                    // 0x0038(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A772[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		struct FHitResult                             PointHitInfo;                                      // 0x0040(0x00F0)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		float                                         ReturnValue;                                       // 0x0130(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsPlayerController_ReturnValue;           // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0135(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsTimeSince_Network_ReturnValue;          // 0x0136(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A773[0x1];                                     // 0x0137(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A774[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A775[0x3];                                     // 0x0159(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         CallFunc_GetMaxHealth_ReturnValue;                 // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A776[0x3];                                     // 0x0161(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         CallFunc_GetHealth_ReturnValue;                    // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0170(0x0008)(NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A777[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_CancelCurrentAttack_ReturnValue;          // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsWildSlow_ReturnValue;                   // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x018A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A778[0x1];                                     // 0x018B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         CallFunc_PlayAnimEx_ReturnValue;                   // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A779[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_GetNetworkTimeInSeconds_ReturnValue;      // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;    // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A77A[0x6];                                     // 0x01A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_2;    // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsTimeSince_ReturnValue;                  // 0x01B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x01B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A77B[0x4];                                     // 0x01B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_A_ImplicitCast;      // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Multiply_DoubleFloat_B_ImplicitCast;      // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Subtract_DoubleFloat_A_ImplicitCast;      // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_K2_SetTimer_Time_ImplicitCast;            // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast;  // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPCanMountOnCharacter
	// 0x0028 (0x0028 - 0x0000)
	struct FireLion_Character_BP_C_BPCanMountOnCharacter final
	{
	public:
		class APrimalCharacter* Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A77C[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsBaby_ReturnValue;                       // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BPIsConscious_ReturnValue;                // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_5;                 // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPCharacterSleeped
	// 0x0002 (0x0002 - 0x0000)
	struct FireLion_Character_BP_C_BPCharacterSleeped final
	{
	public:
		ENetworkModeResult                            CallFunc_IsRunningOnServer_OutNetworkMode;         // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPClientDoMultiUse
	// 0x0030 (0x0030 - 0x0000)
	struct FireLion_Character_BP_C_BPClientDoMultiUse final
	{
	public:
		class APlayerController* ForPC;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32                                         ClientUseIndex;                                    // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A77D[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A77E[0x5];                                     // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
		class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller_1;  // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPClientHandleNetExecCommand
	// 0x00A0 (0x00A0 - 0x0000)
	struct FireLion_Character_BP_C_BPClientHandleNetExecCommand final
	{
	public:
		class FName                                   CommandName;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FBPNetExecParams                       ExecParams;                                        // 0x0008(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class APlayerController* ForPC;                                             // 0x0080(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          ReturnValue;                                       // 0x0088(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A77F[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_CanSwapShoulderRide_ReturnValue;          // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_CanSwapShoulderRide_IsGestating;          // 0x009B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPDoAttack
	// 0x0180 (0x0180 - 0x0000)
	struct FireLion_Character_BP_C_BPDoAttack final
	{
	public:
		int32                                         AttackIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsWildSlow_ReturnValue;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A780[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FDinoAttackInfo                        CallFunc_Array_Get_Item;                           // 0x0010(0x0150)()
		double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_ModifyCurrentStatusValue_ReturnValue;     // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A781[0x4];                                     // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_ModifyCurrentStatusValue_Amount_ImplicitCast; // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPDrawToRiderHUD
	// 0x0638 (0x0638 - 0x0000)
	struct FireLion_Character_BP_C_BPDrawToRiderHUD final
	{
	public:
		class AShooterHUD* HUD;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		TArray<class APrimalCharacter*>               LocalChars;                                        // 0x0008(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
		int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue;    // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A782[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_ShouldShowExtendedHUDInfo_ReturnValue;    // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A783[0x5];                                     // 0x003B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
		class AShooterPlayerCameraManager* K2Node_DynamicCast_AsShooter_Player_Camera_Manager; // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A784[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         Temp_int_Array_Index_Variable;                     // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_GetCameraAimViewPoint_OutCamLoc;          // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                               CallFunc_GetCameraAimViewPoint_OutCamRot;          // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_GetGameTimeInSeconds_ReturnValue_1;       // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_CanFireAbsorb_ReturnValue;                // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A785[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_GetGameTimeInSeconds_ReturnValue_2;       // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsTimeSince_ReturnValue;                  // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A786[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_BreakVector2D_X;                          // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_BreakVector2D_Y;                          // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_BreakVector2D_X_1;                        // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_BreakVector2D_Y_1;                        // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TSubclassOf<class UObject>                    CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x0108(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class UClass* K2Node_ClassDynamicCast_AsPrimal_Buff;             // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A787[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0120(0x0010)(ConstParm, ReferenceParm)
		class UWorld* CallFunc_K2_GetWorld_ReturnValue;                  // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class APrimalCharacter* CallFunc_Array_Get_Item;                           // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A788[0x4];                                     // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class APrimalBuff* CallFunc_GetBuff_ReturnValue;                      // 0x0148(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A789[0x6];                                     // 0x0152(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		class ABuff_FireLion_OnFire_C* K2Node_DynamicCast_AsBuff_Fire_Lion_on_Fire;       // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A78A[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_GetFloatingHUDLocation_ReturnValue;       // 0x0168(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0180(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x01A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                              CallFunc_ProjectWorldLocationToScreenOrScreenEdgePosition_ScreenPosition; // 0x01B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_ProjectWorldLocationToScreenOrScreenEdgePosition_OnScreen; // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_ProjectWorldLocationToScreenOrScreenEdgePosition_ReturnValue; // 0x01C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A78B[0x6];                                     // 0x01CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_VSize_ReturnValue;                        // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A78C[0x7];                                     // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue_2;       // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue_3;       // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue_4;       // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue_5;       // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue_6;       // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue_7;       // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue_8;       // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0230(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue_9;       // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_BreakVector2D_X_2;                        // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_BreakVector2D_Y_2;                        // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_BreakVector2D_X_3;                        // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_BreakVector2D_Y_3;                        // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Add_DoubleFloat_ReturnValue;              // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Add_DoubleFloat_ReturnValue_1;            // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Add_DoubleFloat_ReturnValue_2;            // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Add_DoubleFloat_ReturnValue_3;            // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Add_DoubleFloat_ReturnValue_4;            // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Add_DoubleFloat_ReturnValue_5;            // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0298(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_2;               // 0x02A8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_GetTotalCurrentStacks_Num;                // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x02BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x02C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A78D[0x3];                                     // 0x02C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x02CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_GetTotalCurrentStacks_Num_1;              // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Array_Get_Item_1;                         // 0x02D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Conv_IntToDouble_ReturnValue_2;           // 0x02D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A78E[0x4];                                     // 0x02E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x02E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Conv_IntToDouble_ReturnValue_3;           // 0x02F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue;              // 0x02F8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Divide_DoubleFloat_ReturnValue_1;         // 0x0308(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_FClamp01_ReturnValue;                     // 0x0310(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_FClamp01_ReturnValue_1;                   // 0x0318(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue_10;      // 0x0320(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue_11;      // 0x0328(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_3;               // 0x0330(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_4;               // 0x0340(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0350(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A78F[0x3];                                     // 0x0351(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0354(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x0359(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A790[0x6];                                     // 0x035A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0360(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x0378(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class APrimalCharacter*>               CallFunc_GetCharsToFireAbsorb_Chars;               // 0x0390(0x0010)(ReferenceParm)
		int32                                         CallFunc_GetCharsToFireAbsorb_TotalStacks;         // 0x03A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A791[0x4];                                     // 0x03A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_VSize_ReturnValue_1;                      // 0x03A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Add_DoubleFloat_ReturnValue_6;            // 0x03B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x03B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x03D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x03E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                             CallFunc_CapsuleTraceSingle_OutHit;                // 0x0400(0x00F0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
		bool                                          CallFunc_CapsuleTraceSingle_ReturnValue;           // 0x04F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x04F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x04F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A792[0x1];                                     // 0x04F3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         CallFunc_BreakHitResult_Time;                      // 0x04F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_BreakHitResult_Distance;                  // 0x04F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A793[0x4];                                     // 0x04FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0500(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0518(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0530(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0548(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;                   // 0x0560(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AActor* CallFunc_BreakHitResult_HitActor;                  // 0x0568(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;              // 0x0570(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0578(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0580(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0588(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x058C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0590(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A794[0x4];                                     // 0x0594(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0598(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x05B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character;             // 0x05C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x05D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GetCanFireAbsorbCharacter_ReturnValue;    // 0x05D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A795[0x2];                                     // 0x05D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_GetCanFireAbsorbCharacter_NumStacks;      // 0x05D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x05D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A796[0x4];                                     // 0x05DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_MapRangeClamped_InRangeB_ImplicitCast;    // 0x05E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x05E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Multiply_DoubleFloat_B_ImplicitCast;      // 0x05EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1;    // 0x05F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Multiply_DoubleFloat_B_ImplicitCast_2;    // 0x05F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Multiply_DoubleFloat_B_ImplicitCast_3;    // 0x05F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Add_DoubleFloat_B_ImplicitCast;           // 0x05FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Add_DoubleFloat_B_ImplicitCast_1;         // 0x0600(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Add_DoubleFloat_B_ImplicitCast_2;         // 0x0604(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Add_DoubleFloat_B_ImplicitCast_3;         // 0x0608(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Add_DoubleFloat_B_ImplicitCast_4;         // 0x060C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Add_DoubleFloat_B_ImplicitCast_5;         // 0x0610(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Divide_DoubleFloat_B_ImplicitCast_1;      // 0x0614(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_LinearColorLerp_Alpha_ImplicitCast;       // 0x0618(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Multiply_DoubleFloat_B_ImplicitCast_4;    // 0x061C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Multiply_DoubleFloat_B_ImplicitCast_5;    // 0x0620(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A797[0x4];                                     // 0x0624(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Add_DoubleFloat_A_ImplicitCast;           // 0x0628(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Add_DoubleFloat_B_ImplicitCast_6;         // 0x0630(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPGetCrosshairColor
	// 0x0050 (0x0050 - 0x0000)
	struct FireLion_Character_BP_C_BPGetCrosshairColor final
	{
	public:
		struct FLinearColor                           ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BPIsTamed_ReturnValue;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A798[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_FClamp01_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue;              // 0x0030(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Divide_DoubleFloat_A_ImplicitCast;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_LinearColorLerp_Alpha_ImplicitCast;       // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPGetHUDElements
	// 0x0ED8 (0x0ED8 - 0x0000)
	struct FireLion_Character_BP_C_BPGetHUDElements final
	{
	public:
		class APlayerController* ForPC;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		TArray<struct FHUDElement>                    OutElements;                                       // 0x0008(0x0010)(Parm, OutParm)
		bool                                          ShouldShowTameText;                                // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A799[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		TArray<struct FHUDElement>                    RetElements;                                       // 0x0020(0x0010)(Edit, BlueprintVisible)
		struct FHUDElement                            LocalElement;                                      // 0x0030(0x01B0)(Edit, BlueprintVisible)
		TArray<class APrimalCharacter*>               CallFunc_GetCharsToFireAbsorb_Chars;               // 0x01E0(0x0010)(ReferenceParm)
		int32                                         CallFunc_GetCharsToFireAbsorb_TotalStacks;         // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A79A[0x4];                                     // 0x01F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class APlayerController* CallFunc_GetOwnerController_ReturnValue;           // 0x01F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A79B[0x7];                                     // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x0208(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A79C[0x3];                                     // 0x0211(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AShooterHUD* CallFunc_GetShooterHUD_ReturnValue;                // 0x0218(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FString                                 CallFunc_SelectString_ReturnValue;                 // 0x0220(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		TArray<struct FHUDRichTextOverlayData>        CallFunc_BPGetHUDRichTextOverlays_ReturnValue;     // 0x0230(0x0010)(ReferenceParm)
		bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A79D[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class AShooterHUD* CallFunc_GetShooterHUD_ReturnValue_1;              // 0x0248(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_ShouldShowExtendedHUDInfo_ReturnValue;    // 0x0251(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BPIsTamed_ReturnValue;                    // 0x0252(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A79E[0x5];                                     // 0x0253(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
		struct FDinoAttackInfo                        CallFunc_Array_Get_Item;                           // 0x0258(0x0150)()
		double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x03A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Add_DoubleFloat_ReturnValue;              // 0x03B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_GetNetworkTimeInSeconds_ReturnValue;      // 0x03B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x03C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A79F[0x4];                                     // 0x03C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x03C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x03D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x03D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7A0[0x2];                                     // 0x03D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_SelectInt_ReturnValue_1;                  // 0x03D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x03D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_SelectInt_ReturnValue_2;                  // 0x03E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x03E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7A1[0x3];                                     // 0x03E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		struct FHUDRichTextOverlayData                CallFunc_BPSetHUDRichTextOverlayDisplayText_OutOverlay; // 0x03E8(0x0070)()
		double                                        CallFunc_GetNetworkTimeInSeconds_ReturnValue_1;    // 0x0458(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0460(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_DegSin_ReturnValue;                       // 0x0468(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_MapRangeUnclamped_ReturnValue;            // 0x0470(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GetIsInLavaSwimmingState_ReturnValue;     // 0x0478(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7A2[0x3];                                     // 0x0479(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue;              // 0x047C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsPrimalCharWalking_ReturnValue;          // 0x048C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7A3[0x3];                                     // 0x048D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		struct FHUDRichTextOverlayData                CallFunc_BPSetHUDRichTextOverlayDefaultTextColor_OutOverlay; // 0x0490(0x0070)()
		bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0500(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7A4[0x7];                                     // 0x0501(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		struct FHUDRichTextOverlayData                CallFunc_BPSetHUDRichTextOverlayInstigator_OutOverlay; // 0x0508(0x0070)()
		bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0578(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0579(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7A5[0x6];                                     // 0x057A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_FMax_ReturnValue;                         // 0x0580(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsTimeSince_Network_ReturnValue;          // 0x0588(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7A6[0x7];                                     // 0x0589(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Add_DoubleFloat_ReturnValue_1;            // 0x0590(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Add_DoubleFloat_ReturnValue_2;            // 0x0598(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x05A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7A7[0x7];                                     // 0x05A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_SelectFloat_ReturnValue_2;                // 0x05A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGameStateBase* CallFunc_GetGameState_ReturnValue;                 // 0x05B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue;   // 0x05B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AShooterGameState* CallFunc_GameStateBaseToShooterGameState_ReturnValue; // 0x05C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_GetNetworkTimeDelta_ReturnValue;          // 0x05C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_MapRangeClamped_ReturnValue_1;            // 0x05D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_FMax_ReturnValue_1;                       // 0x05D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x05E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7A8[0x4];                                     // 0x05E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class FString                                 CallFunc_BPFormatAsTime_ReturnValue;               // 0x05E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		double                                        CallFunc_BreakVector2D_X;                          // 0x05F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_BreakVector2D_Y;                          // 0x0600(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0608(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0618(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x061C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0620(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Array_Add_ReturnValue_3;                  // 0x0630(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BPIsTamed_ReturnValue_1;                  // 0x0634(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7A9[0x3];                                     // 0x0635(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x0638(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                   CallFunc_Conv_DoubleToText_ReturnValue;            // 0x0640(0x0018)()
		class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0658(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0668(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		class FString                                 CallFunc_SelectString_ReturnValue_1;               // 0x0678(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0688(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_FClamp01_ReturnValue;                     // 0x0690(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x0698(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_3;      // 0x06A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x06A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                   CallFunc_Conv_DoubleToText_ReturnValue_1;          // 0x06B0(0x0018)()
		double                                        CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x06C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x06D0(0x0050)(HasGetValueTypeHash)
		double                                        CallFunc_FClamp01_ReturnValue_1;                   // 0x0720(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0728(0x0010)(ReferenceParm)
		double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_4;      // 0x0738(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                   CallFunc_Format_ReturnValue;                       // 0x0740(0x0018)()
		class FText                                   CallFunc_Conv_DoubleToText_ReturnValue_2;          // 0x0758(0x0018)()
		class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0770(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0780(0x0050)(HasGetValueTypeHash)
		class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x07D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x07E0(0x0010)(ReferenceParm)
		class FString                                 CallFunc_Conv_TextToString_ReturnValue_2;          // 0x07F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0800(0x0018)()
		class FString                                 CallFunc_Conv_TextToString_ReturnValue_3;          // 0x0818(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		class FString                                 CallFunc_Conv_TextToString_ReturnValue_4;          // 0x0828(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0838(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x0848(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x0858(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;              // 0x0868(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		class FString                                 CallFunc_SelectString_ReturnValue_2;               // 0x0878(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue;         // 0x0888(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0898(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7AA[0x3];                                     // 0x0899(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_Array_Add_ReturnValue_4;                  // 0x089C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_GetNetworkTimeInSeconds_ReturnValue_2;    // 0x08A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_2;               // 0x08A8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue_1;       // 0x08B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FDinoAttackInfo                        CallFunc_Array_Get_Item_1;                         // 0x08C8(0x0150)()
		bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0A18(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7AB[0x7];                                     // 0x0A19(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Add_DoubleFloat_ReturnValue_3;            // 0x0A20(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x0A28(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7AC[0x7];                                     // 0x0A29(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_MapRangeClamped_ReturnValue_2;            // 0x0A30(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;            // 0x0A38(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7AD[0x7];                                     // 0x0A39(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class UPrimalGlobalUIData* CallFunc_BPGetGlobalUIData_ReturnValue;            // 0x0A40(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x0A48(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7AE[0x7];                                     // 0x0A49(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class UGlobalUIData_BP_C* K2Node_DynamicCast_AsGlobal_UIData_BP;             // 0x0A50(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0A58(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7AF[0x3];                                     // 0x0A59(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_SelectInt_ReturnValue_3;                  // 0x0A5C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHUDElement                            CallFunc_BPGetHUDElements_Module_FuelOrAmmo_OutHUDElement; // 0x0A60(0x01B0)()
		int32                                         CallFunc_SelectInt_ReturnValue_4;                  // 0x0C10(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7B0[0x4];                                     // 0x0C14(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_SelectFloat_ReturnValue_3;                // 0x0C18(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHUDElement                            CallFunc_BPGetHUDElements_Module_FuelOrAmmo_OutHUDElement_1; // 0x0C20(0x01B0)()
		bool                                          CallFunc_Less_DoubleDouble_ReturnValue_2;          // 0x0DD0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7B1[0x7];                                     // 0x0DD1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0DD8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleDouble_ReturnValue_5;      // 0x0DE0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Sin_ReturnValue;                          // 0x0DE8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x0DF0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Abs_ReturnValue;                          // 0x0DF8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_FClamp01_ReturnValue_2;                   // 0x0E00(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_MapRangeClamped_ReturnValue_3;            // 0x0E08(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue_1;            // 0x0E10(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                           CallFunc_Multiply_LinearColorLinearColor_ReturnValue; // 0x0E20(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                           CallFunc_LinearColorLerp_ReturnValue_2;            // 0x0E30(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x0E40(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                           CallFunc_SelectColor_ReturnValue_1;                // 0x0E50(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_B_ImplicitCast;               // 0x0E60(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_A_ImplicitCast;               // 0x0E68(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Add_DoubleFloat_B_ImplicitCast;           // 0x0E70(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_LinearColorLerp_Alpha_ImplicitCast;       // 0x0E74(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast; // 0x0E78(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x0E80(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_IsTimeSince_Network_CheckTimeSince_ImplicitCast; // 0x0E88(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Add_DoubleFloat_B_ImplicitCast_1;         // 0x0E8C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Add_DoubleFloat_B_ImplicitCast_2;         // 0x0E90(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7B2[0x4];                                     // 0x0E94(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_MapRangeClamped_Value_ImplicitCast;       // 0x0E98(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_LinearColorLerp_Alpha_ImplicitCast_1;     // 0x0EA0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_SetHUDElementProgress_NewProgress_ImplicitCast; // 0x0EA4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x0EA8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x0EB0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0EB8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0EC0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Divide_DoubleFloat_A_ImplicitCast;        // 0x0EC8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_SetHUDElementProgress_NewProgress_ImplicitCast_1; // 0x0ED0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_LinearColorLerp_Alpha_ImplicitCast_2;     // 0x0ED4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPGetMultiUseEntries
	// 0x0440 (0x0440 - 0x0000)
	struct FireLion_Character_BP_C_BPGetMultiUseEntries final
	{
	public:
		class APlayerController* ForPC;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		TArray<struct FMultiUseEntry>                 MultiUseEntries;                                   // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		TArray<struct FMultiUseEntry>                 ReturnValue;                                       // 0x0018(0x0010)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
		TArray<struct FMultiUseEntry>                 RetEntries;                                        // 0x0028(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
		class FString                                 Temp_string_Variable;                              // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		class AHUD* CallFunc_GetHUD_ReturnValue;                       // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AShooterCharacter* CallFunc_GetShooterCharacterFromController_ReturnValue; // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AShooterHUD* CallFunc_HUDToShooterHUD_ReturnValue;              // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_CanManualTransform_ReturnValue;           // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_CanManualTransform_IsGestating;           // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7B3[0x6];                                     // 0x0062(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		struct FMultiUseEntry                         K2Node_MakeStruct_MultiUseEntry;                   // 0x0068(0x0078)(ContainsInstancedReference)
		class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7B4[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class FString                                 Temp_string_Variable_1;                            // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		class FString                                 Temp_string_Variable_2;                            // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		int32                                         Temp_int_Variable;                                 // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7B5[0x4];                                     // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class FString                                 Temp_string_Variable_3;                            // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		class FString                                 Temp_string_Variable_4;                            // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		class FString                                 Temp_string_Variable_5;                            // 0x0138(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		class FString                                 Temp_string_Variable_6;                            // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		int32                                         Temp_int_Array_Index_Variable;                     // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         Temp_int_Loop_Counter_Variable;                    // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7B6[0x4];                                     // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class FString                                 K2Node_Select_Default;                             // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		class FString                                 Temp_string_Variable_7;                            // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		int32                                         Temp_int_Variable_1;                               // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7B7[0x4];                                     // 0x0194(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class UTexture2D* Temp_object_Variable;                              // 0x0198(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		bool                                          CallFunc_CanUpdateIsLazing_ReturnValue;            // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7B8[0x7];                                     // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class FString                                 CallFunc_SelectString_ReturnValue;                 // 0x01A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		bool                                          CallFunc_PlayerOwnsDLCType_ReturnValue;            // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7B9[0x7];                                     // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		struct FMultiUseEntry                         K2Node_MakeStruct_MultiUseEntry_1;                 // 0x01C0(0x0078)(ContainsInstancedReference)
		class UPrimalGameData* CallFunc_BPGetGameData_ReturnValue;                // 0x0238(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7BA[0x4];                                     // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class UTexture2D* Temp_object_Variable_1;                            // 0x0248(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class UTexture2D* CallFunc_Array_Get_Item;                           // 0x0250(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UTexture2D* CallFunc_Array_Get_Item_1;                         // 0x0258(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7BB[0x4];                                     // 0x0264(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		struct FMultiUseEntry                         K2Node_MakeStruct_MultiUseEntry_2;                 // 0x0268(0x0078)(ContainsInstancedReference)
		int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x02E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7BC[0x3];                                     // 0x02E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		class FString                                 K2Node_Select_Default_1;                           // 0x02E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		bool                                          Temp_bool_Variable;                                // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7BD[0x7];                                     // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0300(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0310(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		class UTexture2D* K2Node_Select_Default_2;                           // 0x0320(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		struct FMultiUseEntry                         K2Node_MakeStruct_MultiUseEntry_3;                 // 0x0328(0x0078)(ContainsInstancedReference)
		int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x03A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsBaby_ReturnValue;                       // 0x03A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BPIsConscious_ReturnValue;                // 0x03A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x03A6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7BE[0x1];                                     // 0x03A7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_Array_Add_ReturnValue_3;                  // 0x03A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          Temp_bool_Variable_1;                              // 0x03AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x03AD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x03AE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7BF[0x1];                                     // 0x03AF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
		class FString                                 K2Node_Select_Default_3;                           // 0x03B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		struct FMultiUseEntry                         K2Node_MakeStruct_MultiUseEntry_4;                 // 0x03C0(0x0078)(ContainsInstancedReference)
		int32                                         CallFunc_Array_Add_ReturnValue_4;                  // 0x0438(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPGetRidingMultiUseEntries
	// 0x0100 (0x0100 - 0x0000)
	struct FireLion_Character_BP_C_BPGetRidingMultiUseEntries final
	{
	public:
		class APlayerController* ForPC;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		TArray<struct FMultiUseEntry>                 MultiUseEntries;                                   // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		TArray<struct FMultiUseEntry>                 ReturnValue;                                       // 0x0018(0x0010)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
		TArray<struct FMultiUseEntry>                 RetEntries;                                        // 0x0028(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
		class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7C0[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class FString                                 CallFunc_GetDinoDescriptiveName_ReturnValue;       // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		bool                                          CallFunc_CanSwapShoulderRide_ReturnValue;          // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_CanSwapShoulderRide_IsGestating;          // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7C1[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		class FString                                 CallFunc_SelectString_ReturnValue;                 // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		struct FMultiUseEntry                         K2Node_MakeStruct_MultiUseEntry;                   // 0x0080(0x0078)(ContainsInstancedReference)
		int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPHandleControllerInitiatedAttack
	// 0x0018 (0x0018 - 0x0000)
	struct FireLion_Character_BP_C_BPHandleControllerInitiatedAttack final
	{
	public:
		int32                                         AttackIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7C2[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
		struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0008(0x0008)(NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPHandleLaunchMountedDino
	// 0x0120 (0x0120 - 0x0000)
	struct FireLion_Character_BP_C_BPHandleLaunchMountedDino final
	{
	public:
		class AShooterCharacter* FromCharacter;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          IsFromRidingDino;                                  // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          ReturnValue;                                       // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7C3[0x5];                                     // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
		class APlayerController* CallFunc_GetOwnerController_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7C4[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_GetPlayerViewPointNoModifiers_out_Location; // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                               CallFunc_GetPlayerViewPointNoModifiers_out_Rotation; // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsInputKeyDown_ReturnValue;               // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7C5[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_BreakVector_X;                            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_BreakVector_Y;                            // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_BreakVector_Z;                            // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsInputKeyDown_ReturnValue_1;             // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7C6[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		struct FBPNetExecParams                       K2Node_MakeStruct_BPNetExecParams;                 // 0x0098(0x0078)()
		bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0112(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7C7[0x1];                                     // 0x0113(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         K2Node_MakeStruct_FloatParam1_ImplicitCast;        // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         K2Node_MakeStruct_FloatParam2_ImplicitCast;        // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         K2Node_MakeStruct_FloatParam3_ImplicitCast;        // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPHandleOnStopTargeting
	// 0x0038 (0x0038 - 0x0000)
	struct FireLion_Character_BP_C_BPHandleOnStopTargeting final
	{
	public:
		bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7C8[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_GetFireDashAttackDirection_Direction;     // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7C9[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class UWorld* CallFunc_K2_GetWorld_ReturnValue;                  // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsTimeSince_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPHandlePoop
	// 0x0001 (0x0001 - 0x0000)
	struct FireLion_Character_BP_C_BPHandlePoop final
	{
	public:
		bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPHandleRightShoulderButton
	// 0x0002 (0x0002 - 0x0000)
	struct FireLion_Character_BP_C_BPHandleRightShoulderButton final
	{
	public:
		bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsTimeSince_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPIgnoreAttachedSoundMultipliers
	// 0x0010 (0x0010 - 0x0000)
	struct FireLion_Character_BP_C_BPIgnoreAttachedSoundMultipliers final
	{
	public:
		class USoundBase* ForSound;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPModifyAimOffsetNoTarget
	// 0x0050 (0x0050 - 0x0000)
	struct FireLion_Character_BP_C_BPModifyAimOffsetNoTarget final
	{
	public:
		struct FRotator                               Aim;                                               // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                               ReturnValue;                                       // 0x0018(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7CA[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		struct FRotator                               CallFunc_SelectRotator_ReturnValue;                // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	};
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPModifyAimOffsetTargetLocation
	// 0x00C8 (0x00C8 - 0x0000)
	struct FireLion_Character_BP_C_BPModifyAimOffsetTargetLocation final
	{
	public:
		struct FVector                                AimTargetLocation;                                 // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                ReturnValue;                                       // 0x0018(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7CB[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_SelectVector_ReturnValue;                 // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPModifyDesiredRotation
	// 0x0070 (0x0070 - 0x0000)
	struct FireLion_Character_BP_C_BPModifyDesiredRotation final
	{
	public:
		float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7CC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		struct FRotator                               InDesiredRotation;                                 // 0x0008(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                               OutDesiredRotation;                                // 0x0020(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                          ReturnValue;                                       // 0x0038(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7CD[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		struct FRotator                               CallFunc_RemovePitchAndRollFromRotator_ReturnValue; // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	};
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPNotifyClearRider
	// 0x0050 (0x0050 - 0x0000)
	struct FireLion_Character_BP_C_BPNotifyClearRider final
	{
	public:
		class AShooterCharacter* RiderClearing;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AController* CallFunc_GetController_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsLocallyControlledByPlayer_ReturnValue;  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7CE[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		class AShooterHUD* CallFunc_GetShooterHUD_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;    // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsPVEServer_ReturnValue;                  // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7CF[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_GetNetworkTimeInSeconds_ReturnValue;      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_2;    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7D0[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_GetUntamedTargetingTeam_ReturnValue;      // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsWildSlow_ReturnValue;                   // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsWildSlow_ReturnValue_1;                 // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENetworkModeResult                            CallFunc_IsRunningOnServer_OutNetworkMode;         // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPNotifySetRider
	// 0x00D0 (0x00D0 - 0x0000)
	struct FireLion_Character_BP_C_BPNotifySetRider final
	{
	public:
		class AShooterCharacter* RiderSetting;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class APlayerController* CallFunc_GetOwnerController_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsLocallyControlledByPlayer_ReturnValue;  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7D1[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class AShooterPlayerController* CallFunc_PCToSPC_ReturnValue;                      // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7D2[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue;   // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0030(0x0060)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APhysicsVolume* CallFunc_GetPhysicsVolumeToCheckForRefreshFireActive_PhysicsVolume; // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsWildSlow_ReturnValue;                   // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7D3[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x00B0(0x0008)(NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_GetNetworkTimeInSeconds_ReturnValue;      // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsWildSlow_ReturnValue_1;                 // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENetworkModeResult                            CallFunc_IsRunningOnServer_OutNetworkMode;         // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_K2_SetTimer_Time_ImplicitCast;            // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPOnClearMountedDino
	// 0x0078 (0x0078 - 0x0000)
	struct FireLion_Character_BP_C_BPOnClearMountedDino final
	{
	public:
		int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7D4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		TArray<class USceneComponent*>                CallFunc_GetChildrenComponents_Children;           // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
		int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7D5[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class USceneComponent* CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component;      // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7D6[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7D7[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENetworkModeResult                            CallFunc_IsRunningOnServer_OutNetworkMode;         // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7D8[0x1];                                     // 0x0073(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         CallFunc_SetMorphTarget_Value_ImplicitCast;        // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPOnDinoStartled
	// 0x0010 (0x0010 - 0x0000)
	struct FireLion_Character_BP_C_BPOnDinoStartled final
	{
	public:
		class UAnimMontage* StartledAnimPlayed;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          bFromAIController;                                 // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPOnLethalDamage
	// 0x0040 (0x0040 - 0x0000)
	struct FireLion_Character_BP_C_BPOnLethalDamage final
	{
	public:
		float                                         KillingDamage;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7D9[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		struct FDamageEvent                           DamageEvent;                                       // 0x0008(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class AController* Killer;                                            // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AActor* DamageCauser;                                      // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          bPreventDeath;                                     // 0x0038(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsBaby_ReturnValue;                       // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENetworkModeResult                            CallFunc_IsRunningOnServer_OutNetworkMode;         // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPOnMovementModeChangedNotify
	// 0x0020 (0x0020 - 0x0000)
	struct FireLion_Character_BP_C_BPOnMovementModeChangedNotify final
	{
	public:
		EMovementMode                                 PrevMovementMode;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         PreviousCustomMode;                                // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GetIsInLavaSwimmingState_ReturnValue;     // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsPrimalCharWalking_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7DA[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_GetNetworkTimeInSeconds_ReturnValue;      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsPrimalCharSwimming_ReturnValue;         // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsPrimalCharWalking_ReturnValue_1;        // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENetworkModeResult                            CallFunc_IsRunningOnServer_OutNetworkMode;         // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPOnRefreshColorization
	// 0x0218 (0x0218 - 0x0000)
	struct FireLion_Character_BP_C_BPOnRefreshColorization final
	{
	public:
		TArray<struct FLinearColor>                   Colors;                                            // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class UMaterialInstanceDynamic*>       LocalMIDs;                                         // 0x0010(0x0010)(Edit, BlueprintVisible)
		int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         Temp_int_Loop_Counter_Variable_3;                  // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         Temp_int_Array_Index_Variable_3;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		int32                                         Temp_int_Loop_Counter_Variable_4;                  // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7DB[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class USkeletalMesh* CallFunc_GetSkeletalMeshAsset_ReturnValue;         // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         Temp_int_Loop_Counter_Variable_5;                  // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         Temp_int_Array_Index_Variable_4;                   // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMesh* Temp_object_Variable;                              // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class USkeletalMesh* Temp_object_Variable_1;                            // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          Temp_bool_Variable;                                // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7DC[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         Temp_int_Array_Index_Variable_5;                   // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMesh* K2Node_Select_Default;                             // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7DD[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class UMaterialInstanceDynamic* CallFunc_Array_Get_Item;                           // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7DE[0x6];                                     // 0x00CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		TArray<class UMaterialInterface*>             CallFunc_GetMaterials_ReturnValue;                 // 0x00D0(0x0010)(ReferenceParm)
		class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_1;                         // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UMaterialInterface* CallFunc_Array_Get_Item_2;                         // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7DF[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7E0[0x3];                                     // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic;    // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7E1[0x3];                                     // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7E2[0x3];                                     // 0x011D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		struct FLinearColor                           CallFunc_Array_Get_Item_3;                         // 0x0120(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7E3[0x3];                                     // 0x0135(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_IntInt_ReturnValue_4;                // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7E4[0x3];                                     // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		class UMaterialInterface* CallFunc_GetMaterial_ReturnValue;                  // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1;  // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7E5[0x3];                                     // 0x0179(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x017C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                   CallFunc_MakeLiteralName_ReturnValue_1;            // 0x0184(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                           CallFunc_K2_GetVectorParameterValue_ReturnValue;   // 0x018C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7E6[0x4];                                     // 0x019C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class FString                                 CallFunc_Conv_NameToString_ReturnValue_1;          // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x01B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class USkeletalMeshComponent*>         K2Node_MakeArray_Array;                            // 0x01C8(0x0010)(ReferenceParm, ContainsInstancedReference)
		class USkeletalMeshComponent* CallFunc_Array_Get_Item_4;                         // 0x01D8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Array_Length_ReturnValue_5;               // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7E7[0x4];                                     // 0x01E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class UMaterialInterface* CallFunc_GetOverlayMaterial_ReturnValue;           // 0x01E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_IntInt_ReturnValue_5;                // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7E8[0x7];                                     // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x01F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7E9[0x4];                                     // 0x0204(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic_2;  // 0x0208(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7EA[0x3];                                     // 0x0211(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_Array_Add_ReturnValue_3;                  // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPOnSetMountedDino
	// 0x0018 (0x0018 - 0x0000)
	struct FireLion_Character_BP_C_BPOnSetMountedDino final
	{
	public:
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7EB[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character;            // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENetworkModeResult                            CallFunc_IsRunningOnServer_OutNetworkMode;         // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPOverrideAttachedSoundPitchMultiplier
	// 0x0020 (0x0020 - 0x0000)
	struct FireLion_Character_BP_C_BPOverrideAttachedSoundPitchMultiplier final
	{
	public:
		float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7EC[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7ED[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_SelectFloat_A_ImplicitCast;               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPOverrideAttachedSoundVolumeMultiplier
	// 0x0018 (0x0018 - 0x0000)
	struct FireLion_Character_BP_C_BPOverrideAttachedSoundVolumeMultiplier final
	{
	public:
		float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7EE[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         K2Node_FunctionResult_ReturnValue_ImplicitCast;    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPOverrideCameraPivotLocationInterpParams
	// 0x0180 (0x0180 - 0x0000)
	struct FireLion_Character_BP_C_BPOverrideCameraPivotLocationInterpParams final
	{
	public:
		struct FPrimalCameraParams                    CameraParams;                                      // 0x0000(0x00D8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FPrimalCameraPivotZInterpOverrides     PivotZInterpOverrides;                             // 0x00D8(0x0034)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FPrimalCameraInterpParams              LastInterpParamsX;                                 // 0x010C(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FPrimalCameraInterpParams              LastInterpParamsY;                                 // 0x0118(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FPrimalCameraInterpParams              LastInterpParamsZ;                                 // 0x0124(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FPrimalCameraInterpParams              OutInterpParamsX;                                  // 0x0130(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FPrimalCameraInterpParams              OutInterpParamsY;                                  // 0x013C(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FPrimalCameraInterpParams              OutInterpParamsZ;                                  // 0x0148(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		bool                                          ReturnValue;                                       // 0x0154(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BPOverrideCameraPivotLocationInterpParams_ReturnValue; // 0x0155(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7EF[0x2];                                     // 0x0156(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FPrimalCameraInterpParams              K2Node_MakeStruct_PrimalCameraInterpParams;        // 0x0160(0x000C)(NoDestructor)
		bool                                          CallFunc_IsFalling_ReturnValue;                    // 0x016C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7F0[0x3];                                     // 0x016D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Multiply_DoubleFloat_A_ImplicitCast;      // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         K2Node_MakeStruct_SpringStiffness_ImplicitCast;    // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPOverrideGetAttackAnimationIndex
	// 0x0060 (0x0060 - 0x0000)
	struct FireLion_Character_BP_C_BPOverrideGetAttackAnimationIndex final
	{
	public:
		int32                                         AttackIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7F1[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		TArray<class UAnimMontage*>                   AnimationArray;                                    // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32                                         ReturnValue;                                       // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7F2[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_Conv_BoolToInt_ReturnValue;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7F3[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsPrimalCharWalking_ReturnValue;          // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7F4[0x1];                                     // 0x002F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_SelectInt_ReturnValue_1;                  // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7F5[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_VSize_ReturnValue;                        // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPOverrideInventoryAccessInput
	// 0x0003 (0x0003 - 0x0000)
	struct FireLion_Character_BP_C_BPOverrideInventoryAccessInput final
	{
	public:
		bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsTimeSince_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPPreventClearMountCapsuleResizing
	// 0x0001 (0x0001 - 0x0000)
	struct FireLion_Character_BP_C_BPPreventClearMountCapsuleResizing final
	{
	public:
		bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPPreventFallDamage
	// 0x00F8 (0x00F8 - 0x0000)
	struct FireLion_Character_BP_C_BPPreventFallDamage final
	{
	public:
		struct FHitResult                             HitResult;                                         // 0x0000(0x00F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		float                                         FallDamageAmount;                                  // 0x00F0(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          ReturnValue;                                       // 0x00F4(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPPreventRiding
	// 0x0028 (0x0028 - 0x0000)
	struct FireLion_Character_BP_C_BPPreventRiding final
	{
	public:
		class AShooterCharacter* ByPawn;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          bDontCheckDistance;                                // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          ReturnValue;                                       // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7F6[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsTimeSince_Network_ReturnValue;          // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsWildSlow_ReturnValue;                   // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_4;                  // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_IsTimeSince_Network_CheckTimeSince_ImplicitCast; // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPServerHandleNetExecCommand
	// 0x00B0 (0x00B0 - 0x0000)
	struct FireLion_Character_BP_C_BPServerHandleNetExecCommand final
	{
	public:
		class APlayerController* FromPC;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FName                                   CommandName;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FBPNetExecParams                       ExecParams;                                        // 0x0010(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                          ReturnValue;                                       // 0x0088(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENetworkModeResult                            CallFunc_IsRunningOnServer_OutNetworkMode;         // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7F7[0x5];                                     // 0x008B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
		class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character;             // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_ReceiveFireAbsorb_ShouldAbsorbFireFromTargetVFXPlay; // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7F8[0x5];                                     // 0x009B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_ReceiveFireAbsorb_HealthAmount_ImplicitCast; // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_ReceiveFireAbsorb_EnergyAmount_ImplicitCast; // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPSetupTamed
	// 0x0020 (0x0020 - 0x0000)
	struct FireLion_Character_BP_C_BPSetupTamed final
	{
	public:
		bool                                          bWasJustTamed;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7F9[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class APhysicsVolume* CallFunc_GetPhysicsVolumeToCheckForRefreshFireActive_PhysicsVolume; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FTimerHandle                           CallFunc_K2_SetTimerForNextTick_ReturnValue;       // 0x0010(0x0008)(NoDestructor, HasGetValueTypeHash)
		ENetworkModeResult                            CallFunc_IsRunningOnServer_OutNetworkMode;         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPTimerServer
	// 0x0020 (0x0020 - 0x0000)
	struct FireLion_Character_BP_C_BPTimerServer final
	{
	public:
		class APhysicsVolume* CallFunc_GetPhysicsVolumeToCheckForRefreshFireActive_PhysicsVolume; // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BPIsTamed_ReturnValue;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsAlive_ReturnValue;                      // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7FA[0x1];                                     // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         CallFunc_Subtract_DoubleFloat_B_ImplicitCast;      // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPTryMultiUse
	// 0x0128 (0x0128 - 0x0000)
	struct FireLion_Character_BP_C_BPTryMultiUse final
	{
	public:
		class APlayerController* ForPC;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32                                         UseIndex;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          ReturnValue;                                       // 0x000C(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7FB[0x1];                                     // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7FC[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7FD[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller_1;  // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7FE[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class AShooterCharacter* CallFunc_GetShooterCharacterFromController_ReturnValue; // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_CanSwapShoulderRide_ReturnValue;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_CanSwapShoulderRide_IsGestating;          // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_CanManualTransform_ReturnValue;           // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_CanManualTransform_IsGestating;           // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0047(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_CanUpdateIsLazing_ReturnValue;            // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A7FF[0x5];                                     // 0x004B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
		class AActor* CallFunc_GetTamedFollowTarget_ReturnValue;         // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A800[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A801[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_BreakVector_X;                            // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_BreakVector_Y;                            // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_BreakVector_Z;                            // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character;            // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A802[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_GetActorForwardVector_ReturnValue_1;      // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A803[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_BreakVector_X_1;                          // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_BreakVector_Y_1;                          // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_BreakVector_Z_1;                          // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x00F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A804[0x6];                                     // 0x0112(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character_1;          // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsBaby_ReturnValue;                       // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0122(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BPIsConscious_ReturnValue;                // 0x0123(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0124(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x0125(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0126(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x0127(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.CanAIManuallyFireAbsorb
	// 0x0048 (0x0048 - 0x0000)
	struct FireLion_Character_BP_C_CanAIManuallyFireAbsorb final
	{
	public:
		bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A805[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		TArray<class AActor*>                         LocalActors;                                       // 0x0008(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
		float                                         CallFunc_GetHealthPercentage_ReturnValue;          // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A806[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		TArray<class APrimalCharacter*>               CallFunc_GetCharsToFireAbsorb_Chars;               // 0x0020(0x0010)(ReferenceParm)
		int32                                         CallFunc_GetCharsToFireAbsorb_TotalStacks;         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A807[0x2];                                     // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A808[0x1];                                     // 0x003F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.CanFireAbsorb
	// 0x0038 (0x0038 - 0x0000)
	struct FireLion_Character_BP_C_CanFireAbsorb final
	{
	public:
		bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A809[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		TArray<class AActor*>                         LocalActors;                                       // 0x0008(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
		TArray<class APrimalCharacter*>               CallFunc_GetCharsToFireAbsorb_Chars;               // 0x0018(0x0010)(ReferenceParm)
		int32                                         CallFunc_GetCharsToFireAbsorb_TotalStacks;         // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.CanManualTransform
	// 0x0048 (0x0048 - 0x0000)
	struct FireLion_Character_BP_C_CanManualTransform final
	{
	public:
		class AActor* CallingActor;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          IsGestating;                                       // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          HasRoomToTransform;                                // 0x000A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A80A[0x5];                                     // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
		TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm)
		double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Has_Room_to_Transform_HasRoom;            // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsBaby_ReturnValue;                       // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BPIsConscious_ReturnValue;                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsCharacterHardAttached_ReturnValue;      // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_4;                  // 0x0037(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_5;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_6;                  // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_7;                  // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_8;                  // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A80B[0x2];                                     // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.CanSwapShoulderRide
	// 0x0078 (0x0078 - 0x0000)
	struct FireLion_Character_BP_C_CanSwapShoulderRide final
	{
	public:
		class AShooterPlayerController* ByPC;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          IsGestating;                                       // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A80C[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		class AShooterCharacter* CallFunc_GetShooterCharacterFromController_ReturnValue; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BPIsConscious_ReturnValue;                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A80D[0x5];                                     // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
		TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0020(0x0010)(ReferenceParm)
		bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Has_Room_to_Transform_HasRoom;            // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A80E[0x5];                                     // 0x0033(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsPrimalCharFalling_ReturnValue;          // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsBaby_ReturnValue;                       // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BPIsConscious_ReturnValue_1;              // 0x0047(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_4;                  // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_5;                  // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_6;                  // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x004E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x004F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A80F[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character;            // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A810[0x5];                                     // 0x0063(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;    // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.CanUpdateIsLazing
	// 0x0038 (0x0038 - 0x0000)
	struct FireLion_Character_BP_C_CanUpdateIsLazing final
	{
	public:
		bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A811[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GetIsInLavaSwimmingState_ReturnValue;     // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A812[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_GetGameTimeInSeconds_ReturnValue_1;       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsPrimalCharWalking_ReturnValue;          // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsCharacterHardAttached_ReturnValue;      // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BPIsConscious_ReturnValue;                // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_4;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_5;                  // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_6;                  // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_7;                  // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.CanUseFireTrail
	// 0x0016 (0x0016 - 0x0000)
	struct FireLion_Character_BP_C_CanUseFireTrail final
	{
	public:
		bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BPIsTamed_ReturnValue;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsBaby_ReturnValue;                       // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsWildSlow_ReturnValue;                   // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BPIsConscious_ReturnValue;                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsPrimalCharWalking_ReturnValue;          // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_5;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_6;                 // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_7;                 // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_8;                 // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_9;                 // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.CheckFireActiveDeactivateBuffs
	// 0x00C0 (0x00C0 - 0x0000)
	struct FireLion_Character_BP_C_CheckFireActiveDeactivateBuffs final
	{
	public:
		TArray<class APrimalBuff*>                    LocalBuffs;                                        // 0x0000(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
		TArray<class APrimalCharacter*>               LocalChars;                                        // 0x0010(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
		int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APrimalCharacter* CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A813[0x2];                                     // 0x004E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		TArray<class APrimalBuff*>                    CallFunc_GetBuffs_TheBuffs;                        // 0x0050(0x0010)(ReferenceParm)
		int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A814[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character;            // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A815[0x1];                                     // 0x0073(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Array_Add_ReturnValue_3;                  // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A816[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class APrimalBuff* CallFunc_Array_Get_Item_1;                         // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A817[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class UClass* CallFunc_GetObjectClass_ReturnValue;               // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Array_Add_ReturnValue_4;                  // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_IsChildOfClassesSoftRef_ReturnValue;      // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A818[0x2];                                     // 0x00AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         CallFunc_GetGameTimeSinceCreation_ReturnValue;     // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A819[0x5];                                     // 0x00B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.ClearDaze
	// 0x0001 (0x0001 - 0x0000)
	struct FireLion_Character_BP_C_ClearDaze final
	{
	public:
		bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.ClientOnActivateFireBoost_InitialTrigger
	// 0x0008 (0x0008 - 0x0000)
	struct FireLion_Character_BP_C_ClientOnActivateFireBoost_InitialTrigger final
	{
	public:
		class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.ClientOnReActivateFireLoopingFX_LikeWhenNoLongerDoused
	// 0x0008 (0x0008 - 0x0000)
	struct FireLion_Character_BP_C_ClientOnReActivateFireLoopingFX_LikeWhenNoLongerDoused final
	{
	public:
		class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue;           // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.DoFireAbsorb
	// 0x0090 (0x0090 - 0x0000)
	struct FireLion_Character_BP_C_DoFireAbsorb final
	{
	public:
		int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A81A[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TSubclassOf<class UObject>                    CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		TArray<class AActor*>                         CallFunc_ServerOctreeOverlapActors_ReturnValue;    // 0x0030(0x0010)(ReferenceParm)
		class UClass* K2Node_ClassDynamicCast_AsPrimal_Buff;             // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A81B[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class AActor* CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A81C[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character;             // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A81D[0x6];                                     // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		class APrimalBuff* CallFunc_GetBuff_ReturnValue;                      // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A81E[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class ABuff_FireLion_OnFire_C* K2Node_DynamicCast_AsBuff_Fire_Lion_on_Fire;       // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GetCanFireAbsorbCharacter_ReturnValue;    // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A81F[0x2];                                     // 0x008A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_GetCanFireAbsorbCharacter_NumStacks;      // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.DoFireDashExplosion
	// 0x0198 (0x0198 - 0x0000)
	struct FireLion_Character_BP_C_DoFireDashExplosion final
	{
	public:
		bool                                          Force;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          VisualsOnly;                                       // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          AtActorLoc;                                        // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A820[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
		class FName                                   Temp_name_Variable;                                // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A821[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		TArray<class AActor*>                         Temp_object_Variable;                              // 0x0010(0x0010)(ConstParm, ReferenceParm)
		TArray<class AActor*>                         Temp_object_Variable_1;                            // 0x0020(0x0010)(ConstParm, ReferenceParm)
		class FName                                   Temp_name_Variable_1;                              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          Temp_bool_Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A822[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class USceneComponent* Temp_object_Variable_2;                            // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class FName                                   K2Node_Select_Default;                             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          Temp_bool_Variable_1;                              // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A823[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                Temp_struct_Variable;                              // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          Temp_bool_Variable_2;                              // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A824[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                K2Node_Select_Default_1;                           // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AController* CallFunc_GetCharacterController_ReturnValue;       // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x00D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_ApplyRadialDamage_ReturnValue;            // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BPIsConscious_ReturnValue;                // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A825[0x6];                                     // 0x00F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A826[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class USceneComponent* K2Node_Select_Default_2;                           // 0x0108(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A827[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class AController* CallFunc_GetCharacterController_ReturnValue_1;     // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGameStateBase* CallFunc_GetGameState_ReturnValue;                 // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_ApplyRadialDamage_ReturnValue_1;          // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A828[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0140(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass* CallFunc_ClassAssetResolve_ReturnValue;            // 0x0158(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A829[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_SelectFloat_A_ImplicitCast;               // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Multiply_DoubleFloat_B_ImplicitCast;      // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_ApplyRadialDamage_DamageRadius_ImplicitCast; // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_ApplyRadialDamage_BaseDamage_ImplicitCast; // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A82A[0x4];                                     // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_SelectFloat_A_ImplicitCast_1;             // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1;    // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_ApplyRadialDamage_DamageRadius_ImplicitCast_1; // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_ApplyRadialDamage_BaseDamage_ImplicitCast_1; // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.EnableTimerOnFireDisabledBuff
	// 0x0028 (0x0028 - 0x0000)
	struct FireLion_Character_BP_C_EnableTimerOnFireDisabledBuff final
	{
	public:
		bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A82B[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class UClass* CallFunc_ClassAssetResolve_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A82C[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class APrimalBuff* CallFunc_GetBuff_ReturnValue;                      // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_ResetBuffStart_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_ResetBuffStart_ReturnValue_1;             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A82D[0x1];                                     // 0x0023(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         K2Node_VariableSet_DeactivateAfterTime_ImplicitCast; // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.ExecuteUbergraph_FireLion_Character_BP
	// 0x04A0 (0x04A0 - 0x0000)
	struct FireLion_Character_BP_C_ExecuteUbergraph_FireLion_Character_BP final
	{
	public:
		int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_CustomEvent_Grow_1;                         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_CustomEvent_PlayAnim_1;                     // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A82E[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Divide_DoubleFloat_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AShooterCharacter* K2Node_CustomEvent_ShooterChar_1;                  // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_CustomEvent_Riding;                         // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A82F[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                K2Node_CustomEvent_LaunchDirection_1;              // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;                 // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                               CallFunc_NormalizeRotator_ReturnValue;             // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A830[0x6];                                     // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		class APhysicsVolume* K2Node_CustomEvent_NewVolume;                      // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                K2Node_CustomEvent_Direction;                      // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_CustomEvent_active;                         // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_CustomEvent_Grow;                           // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_CustomEvent_PlayAnim;                       // 0x00A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A831[0x5];                                     // 0x00A3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x00B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_VSize_ReturnValue;                        // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                K2Node_CustomEvent_LaunchDirection;                // 0x00E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AShooterCharacter* K2Node_CustomEvent_ShooterChar;                    // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A832[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_DinoMountOnMe_ReturnValue;                // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMovementMode                                 CallFunc_GetPrimalCharMovementMode_ReturnValue;    // 0x011A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A833[0x1];                                     // 0x011B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         Temp_int_Loop_Counter_Variable;                    // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A834[0x2];                                     // 0x0122(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENetworkModeResult                            CallFunc_IsRunningOnServer_OutNetworkMode;         // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENetworkModeResult                            CallFunc_IsRunningOnServer_OutNetworkMode_1;       // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x012A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x012B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENetworkModeResult                            CallFunc_IsRunningOnServer_OutNetworkMode_2;       // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchEnum_CmpSuccess_2;                    // 0x012D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A835[0x2];                                     // 0x012E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         CallFunc_PlayAnimEx_ReturnValue;                   // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A836[0x4];                                     // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_FMax_ReturnValue;                         // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0148(0x0008)(NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_CustomEvent_Enable;                         // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A837[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0158(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_BreakVector_X;                            // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_BreakVector_Y;                            // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_BreakVector_Z;                            // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        K2Node_CustomEvent_Health;                         // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        K2Node_CustomEvent_Stam;                           // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0198(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_GetVelocity_ReturnValue_1;                // 0x01B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                             K2Node_Event_Hit;                                  // 0x01C8(0x00F0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		double                                        CallFunc_BreakVector_X_1;                          // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_BreakVector_Y_1;                          // 0x02C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_BreakVector_Z_1;                          // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x02D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         Temp_int_Array_Index_Variable_1;                   // 0x02E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A838[0x4];                                     // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		struct FKey                                   K2Node_InputActionEvent_Key;                       // 0x02F0(0x0018)(HasGetValueTypeHash)
		double                                        CallFunc_Lerp_ReturnValue;                         // 0x0308(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Lerp_ReturnValue_1;                       // 0x0310(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Lerp_ReturnValue_2;                       // 0x0318(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_ReturnValue_2;                // 0x0320(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue_1;        // 0x0328(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FKey                                   K2Node_InputActionEvent_Key_1;                     // 0x0340(0x0018)(HasGetValueTypeHash)
		class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0358(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1;        // 0x0360(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		TArray<class USceneComponent*>                CallFunc_GetChildrenComponents_Children;           // 0x0368(0x0010)(ReferenceParm, ContainsInstancedReference)
		TArray<class USceneComponent*>                CallFunc_GetChildrenComponents_Children_1;         // 0x0378(0x0010)(ReferenceParm, ContainsInstancedReference)
		class USceneComponent* CallFunc_Array_Get_Item;                           // 0x0388(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class USceneComponent* CallFunc_Array_Get_Item_1;                         // 0x0390(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component;      // 0x0398(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A839[0x7];                                     // 0x03A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component_1;    // 0x03A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x03B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A83A[0x3];                                     // 0x03B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x03B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x03B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A83B[0x4];                                     // 0x03BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		struct FKey                                   K2Node_InputActionEvent_Key_2;                     // 0x03C0(0x0018)(HasGetValueTypeHash)
		bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x03D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A83C[0x7];                                     // 0x03D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		struct FKey                                   K2Node_InputActionEvent_Key_3;                     // 0x03E0(0x0018)(HasGetValueTypeHash)
		struct FKey                                   Temp_struct_Variable;                              // 0x03F8(0x0018)(HasGetValueTypeHash)
		struct FKey                                   K2Node_InputActionEvent_Key_4;                     // 0x0410(0x0018)(HasGetValueTypeHash)
		struct FKey                                   K2Node_InputActionEvent_Key_5;                     // 0x0428(0x0018)(HasGetValueTypeHash)
		bool                                          K2Node_CustomEvent_IsLazing;                       // 0x0440(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_CustomEvent_Startle;                        // 0x0441(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_CustomEvent_Instant;                        // 0x0442(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A83D[0x1];                                     // 0x0443(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
		char K2Node_CreateDelegate_OutputDelegate[0x10];              // 0x0444(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0454(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0458(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A83E[0x3];                                     // 0x0459(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x045C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_NotEqual_DoubleDouble_ReturnValue_1;      // 0x0460(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A83F[0x3];                                     // 0x0461(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         CallFunc_SetMorphTarget_Value_ImplicitCast;        // 0x0464(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Divide_DoubleFloat_B_ImplicitCast;        // 0x0468(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_SetPlayRate_NewRate_ImplicitCast;         // 0x046C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_A_ImplicitCast;      // 0x0470(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_K2_SetTimer_Time_ImplicitCast;            // 0x0478(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A840[0x4];                                     // 0x047C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Lerp_Alpha_ImplicitCast;                  // 0x0480(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Lerp_Alpha_ImplicitCast_1;                // 0x0488(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Lerp_Alpha_ImplicitCast_2;                // 0x0490(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_SetMorphTarget_Value_ImplicitCast_1;      // 0x0498(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.FireBoostTick
	// 0x0038 (0x0038 - 0x0000)
	struct FireLion_Character_BP_C_FireBoostTick final
	{
	public:
		double                                        DeltaSeconds;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_GetNetworkTimeInSeconds_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GetIsInLavaSwimmingState_ReturnValue;     // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A841[0x5];                                     // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsTimeSince_Network_ReturnValue;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A842[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         CallFunc_Multiply_DoubleFloat_B_ImplicitCast;      // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_IsTimeSince_Network_CheckTimeSince_ImplicitCast; // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.FireDashTick
	// 0x0458 (0x0458 - 0x0000)
	struct FireLion_Character_BP_C_FireDashTick final
	{
	public:
		bool                                          CallFunc_IsTimeSince_ReturnValue;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A843[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A844[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWorld* CallFunc_K2_GetWorld_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APhysicsVolume* CallFunc_GetWaterVolumeAtPoint_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AController* CallFunc_GetCharacterController_ReturnValue;       // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GetIsPhysicsVolumeLava_IsLava;            // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A845[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		class UWorld* CallFunc_K2_GetWorld_ReturnValue_1;                // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FDinoAttackInfo                        CallFunc_Array_Get_Item;                           // 0x0060(0x0150)()
		struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x01B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x01C8(0x0010)(ConstParm, ReferenceParm)
		struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x01D8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BPIsConscious_ReturnValue;                // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A846[0x7];                                     // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		TArray<struct FHitResult>                     CallFunc_SphereTraceMulti_OutHits;                 // 0x01F8(0x0010)(ReferenceParm, ContainsInstancedReference)
		bool                                          CallFunc_SphereTraceMulti_ReturnValue;             // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A847[0x6];                                     // 0x020A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		struct FHitResult                             CallFunc_Array_Get_Item_1;                         // 0x0210(0x00F0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
		int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0300(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0304(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0305(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A848[0x2];                                     // 0x0306(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         CallFunc_BreakHitResult_Time;                      // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_BreakHitResult_Distance;                  // 0x030C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0310(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0328(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0340(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0358(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;                   // 0x0370(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AActor* CallFunc_BreakHitResult_HitActor;                  // 0x0378(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;              // 0x0380(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0388(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0390(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0398(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x039C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x03A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A849[0x4];                                     // 0x03A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x03A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x03C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x03D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A84A[0x7];                                     // 0x03D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character;             // 0x03E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x03E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_AddToMeleeSwingHurtList_ReturnValue;      // 0x03E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A84B[0x2];                                     // 0x03EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         CallFunc_ApplyDamage_ReturnValue;                  // 0x03EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsActorInMeleeSwingHurtList_ReturnValue;  // 0x03F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsAlive_ReturnValue;                      // 0x03F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x03F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsHostileTo_ReturnValue;                  // 0x03F3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x03F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A84C[0x3];                                     // 0x03F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x03F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0410(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A84D[0x7];                                     // 0x0411(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_VSizeXY_ReturnValue;                      // 0x0418(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_BreakVector_X;                            // 0x0420(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_BreakVector_Y;                            // 0x0428(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_BreakVector_Z;                            // 0x0430(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0438(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0439(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsPrimalCharWalking_ReturnValue;          // 0x043A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x043B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsTimeSince_Network_ReturnValue;          // 0x043C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x043D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x043E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x043F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x0440(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A84E[0x3];                                     // 0x0441(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast;  // 0x0444(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_ApplyDamage_BaseDamage_ImplicitCast;      // 0x0448(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_SphereTraceMulti_Radius_ImplicitCast;     // 0x044C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_IsTimeSince_Network_CheckTimeSince_ImplicitCast; // 0x0450(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.FireSourceTick
	// 0x0160 (0x0160 - 0x0000)
	struct FireLion_Character_BP_C_FireSourceTick final
	{
	public:
		int32                                         LocalNum;                                          // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         Temp_int_Variable;                                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BPIsTamed_ReturnValue;                    // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A84F[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Conv_IntToDouble_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A850[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_TimeSince_ReturnValue;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A851[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_FMin_ReturnValue;                         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Add_DoubleFloat_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A852[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue_2;       // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_ModifyCurrentStatusValue_ReturnValue;     // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A853[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_GetGameTimeInSeconds_ReturnValue_1;       // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsBaby_ReturnValue;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A854[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Add_DoubleFloat_ReturnValue_1;            // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BPIsConscious_ReturnValue;                // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A855[0x6];                                     // 0x008A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		TSubclassOf<class UObject>                    CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x0090(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class UClass* K2Node_ClassDynamicCast_AsPrimal_Item;             // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A856[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A857[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Array_Get_Item;                           // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A858[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		TArray<class AActor*>                         CallFunc_ServerOctreeOverlapActors_ReturnValue;    // 0x00D8(0x0010)(ReferenceParm)
		bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A859[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class AActor* CallFunc_Array_Get_Item_1;                         // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A85A[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class APrimalStructureItemContainer* K2Node_DynamicCast_AsPrimal_Structure_Item_Container; // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A85B[0x6];                                     // 0x010A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Add_DoubleFloat_ReturnValue_2;            // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Add_DoubleFloat_ReturnValue_3;            // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A85C[0x3];                                     // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_IsChildOfClasses_ReturnValue;             // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A85D[0x2];                                     // 0x012A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A85E[0x3];                                     // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         CallFunc_Multiply_DoubleFloat_B_ImplicitCast;      // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_FMin_B_ImplicitCast;                      // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_FMin_A_ImplicitCast;                      // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Add_DoubleFloat_B_ImplicitCast;           // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1;    // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_ModifyCurrentStatusValue_Amount_ImplicitCast; // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Add_DoubleFloat_B_ImplicitCast_1;         // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_ServerOctreeOverlapActors_Radius_ImplicitCast; // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.FireTrailTick
	// 0x01F0 (0x01F0 - 0x0000)
	struct FireLion_Character_BP_C_FireTrailTick final
	{
	public:
		double                                        DeltaSeconds;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BPIsTamed_ReturnValue;                    // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A85F[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_PlayAnimEx_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A860[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BPIsTamed_ReturnValue_1;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A861[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A862[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A863[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue_2;       // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                               CallFunc_RemovePitchAndRollFromRotator_ReturnValue; // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                CallFunc_GetCapsuleBottomLocation_ReturnValue;     // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A864[0x8];                                     // 0x00B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
		struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00C0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_CanUseFireTrail_ReturnValue;              // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A865[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class UObject* CallFunc_GetDefaultObject_ReturnValue;             // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A866[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class APrimalBuff* K2Node_DynamicCast_AsPrimal_Buff;                  // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A867[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0148(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue_3;       // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0168(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A868[0x7];                                     // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_VSize_ReturnValue;                        // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A869[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class UClass* CallFunc_ClassAssetResolve_ReturnValue;            // 0x0198(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class APrimalBuff* CallFunc_FinishSpawningActor_ReturnValue;          // 0x01A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A86A[0x2];                                     // 0x01B2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         CallFunc_Multiply_DoubleFloat_B_ImplicitCast;      // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_A_ImplicitCast;      // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         K2Node_VariableSet_AoEApplyDamage_ImplicitCast;    // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A86B[0x4];                                     // 0x01C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_SelectFloat_A_ImplicitCast;               // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1;    // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A86C[0x4];                                     // 0x01D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_NotEqual_DoubleDouble_A_ImplicitCast;     // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1;    // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         K2Node_VariableSet_AoEApplyDamage_ImplicitCast_1;  // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.GetCanFireAbsorbCharacter
	// 0x0068 (0x0068 - 0x0000)
	struct FireLion_Character_BP_C_GetCanFireAbsorbCharacter final
	{
	public:
		class APrimalCharacter* Char;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A86D[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         NumStacks;                                         // 0x000C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class AActor*>                         LocalActors;                                       // 0x0010(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue_1;      // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A86E[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		TSubclassOf<class UObject>                    CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class UClass* K2Node_ClassDynamicCast_AsPrimal_Buff;             // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A86F[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class APrimalBuff* CallFunc_GetBuff_ReturnValue;                      // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A870[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class ABuff_FireLion_OnFire_C* K2Node_DynamicCast_AsBuff_Fire_Lion_on_Fire;       // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A871[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A872[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_Array_Get_Item;                           // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.GetCharsToFireAbsorb
	// 0x00E0 (0x00E0 - 0x0000)
	struct FireLion_Character_BP_C_GetCharsToFireAbsorb final
	{
	public:
		TArray<class APrimalCharacter*>               Chars;                                             // 0x0000(0x0010)(Parm, OutParm)
		int32                                         TotalStacks;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         LocalStacks;                                       // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class APrimalCharacter*>               RetChars;                                          // 0x0018(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
		TArray<class AActor*>                         LocalActors;                                       // 0x0028(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
		int32                                         Temp_int_Array_Index_Variable;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A873[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		TArray<class AActor*>                         Temp_object_Variable;                              // 0x0048(0x0010)(ConstParm, ReferenceParm)
		TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;                            // 0x0058(0x0010)(ConstParm, ReferenceParm)
		class AActor* CallFunc_Array_Get_Item;                           // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A874[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character;             // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A875[0x2];                                     // 0x0082(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GetCanFireAbsorbCharacter_ReturnValue;    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A876[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_GetCanFireAbsorbCharacter_NumStacks;      // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENetworkModeResult                            CallFunc_IsRunningOnServer_OutNetworkMode;         // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A877[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A878[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class AActor*>                         CallFunc_SphereOverlapActors_OutActors;            // 0x00B8(0x0010)(ReferenceParm)
		bool                                          CallFunc_SphereOverlapActors_ReturnValue;          // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A879[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		TArray<class AActor*>                         CallFunc_ServerOctreeOverlapActors_ReturnValue;    // 0x00D0(0x0010)(ReferenceParm)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.GetDeathAnim
	// 0x0038 (0x0038 - 0x0000)
	struct FireLion_Character_BP_C_GetDeathAnim final
	{
	public:
		float                                         KillingDamage;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A87A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                ImpactVelocity;                                    // 0x0008(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn* InstigatingPawn;                                   // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AActor* DamageCauser;                                      // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UAnimationAsset* ReturnValue;                                       // 0x0030(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.GetFireDashAttackDirection
	// 0x0208 (0x0208 - 0x0000)
	struct FireLion_Character_BP_C_GetFireDashAttackDirection final
	{
	public:
		struct FVector                                Direction;                                         // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsPrimalCharWalking_ReturnValue;          // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A87B[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A87C[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_BreakRotator_Roll;                        // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_BreakRotator_Pitch;                       // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_BreakRotator_Yaw;                         // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A87D[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x00D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0100(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A87E[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_ClampVectorSize_ReturnValue;              // 0x0120(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_LeadTargetPosition_ReturnValue;           // 0x0138(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController* CallFunc_GetOwnerController_ReturnValue;           // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0158(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0170(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A87F[0x7];                                     // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class AShooterPlayerCameraManager* K2Node_DynamicCast_AsShooter_Player_Camera_Manager; // 0x0190(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A880[0x6];                                     // 0x019A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_GetCameraAimViewPoint_OutCamLoc;          // 0x01A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                               CallFunc_GetCameraAimViewPoint_OutCamRot;          // 0x01B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x01D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                   CallFunc_GetCameraStyle_ReturnValue;               // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A881[0x3];                                     // 0x01F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         CallFunc_LeadTargetPosition_ProjSpeed_ImplicitCast; // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_MakeVector_Z_ImplicitCast;                // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_MakeRotator_Pitch_ImplicitCast;           // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.GetIsInLavaSwimmingState
	// 0x0020 (0x0020 - 0x0000)
	struct FireLion_Character_BP_C_GetIsInLavaSwimmingState final
	{
	public:
		int32                                         CheckType;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A882[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_Clamp_ReturnValue;                        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A883[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		class APhysicsVolume* CallFunc_GetPhysicsVolume_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GetIsPhysicsVolumeLava_IsLava;            // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsPrimalCharSwimming_ReturnValue;         // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.GetIsPhysicsVolumeLava
	// 0x0028 (0x0028 - 0x0000)
	struct FireLion_Character_BP_C_GetIsPhysicsVolumeLava final
	{
	public:
		class APhysicsVolume* PhysicsVolume;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          IsLava;                                            // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A884[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		class APainCausingVolume* K2Node_DynamicCast_AsPain_Causing_Volume;          // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A885[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_IsChildOfClassesSoftRef_ReturnValue;      // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.GetPhysicsVolumeToCheckForRefreshFireActive
	// 0x0020 (0x0020 - 0x0000)
	struct FireLion_Character_BP_C_GetPhysicsVolumeToCheckForRefreshFireActive final
	{
	public:
		class APhysicsVolume* PhysicsVolume;                                     // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A886[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class APhysicsVolume* CallFunc_GetPhysicsVolume_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class APhysicsVolume* CallFunc_GetPhysicsVolume_ReturnValue_1;           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.Has Room to Transform
	// 0x02D0 (0x02D0 - 0x0000)
	struct FireLion_Character_BP_C_Has_Room_to_Transform final
	{
	public:
		class AActor* ActorToUseLoc;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		TArray<class AActor*>                         ActorsToIgnore;                                    // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                          HasRoom;                                           // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A887[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_GetUnscaledCapsuleRadius_ReturnValue;     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_GetUnscaledCapsuleHalfHeight_ReturnValue; // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                             CallFunc_VTraceSingleBP_OutHit;                    // 0x00A8(0x00F0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
		bool                                          CallFunc_VTraceSingleBP_ReturnValue;               // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A888[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_Add_VectorVector_ReturnValue_2;           // 0x01A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                             CallFunc_CapsuleTraceSingle_OutHit;                // 0x01B8(0x00F0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
		bool                                          CallFunc_CapsuleTraceSingle_ReturnValue;           // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A889[0x7];                                     // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Multiply_DoubleFloat_A_ImplicitCast;      // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_MakeVector_Z_ImplicitCast;                // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_MakeVector_Z_ImplicitCast_1;              // 0x02C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_CapsuleTraceSingle_Radius_ImplicitCast;   // 0x02C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_4
	// 0x0018 (0x0018 - 0x0000)
	struct FireLion_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_4 final
	{
	public:
		struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_5
	// 0x0018 (0x0018 - 0x0000)
	struct FireLion_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_5 final
	{
	public:
		struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_0
	// 0x0018 (0x0018 - 0x0000)
	struct FireLion_Character_BP_C_InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_0 final
	{
	public:
		struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_3
	// 0x0018 (0x0018 - 0x0000)
	struct FireLion_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_3 final
	{
	public:
		struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_2
	// 0x0018 (0x0018 - 0x0000)
	struct FireLion_Character_BP_C_InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_2 final
	{
	public:
		struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.InpActEvt_Poop_K2Node_InputActionEvent_1
	// 0x0018 (0x0018 - 0x0000)
	struct FireLion_Character_BP_C_InpActEvt_Poop_K2Node_InputActionEvent_1 final
	{
	public:
		struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.IsWildFireLionInRain
	// 0x0078 (0x0078 - 0x0000)
	struct FireLion_Character_BP_C_IsWildFireLionInRain final
	{
	public:
		bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsTimeSince_Network_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsWildSlow_ReturnValue;                   // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A88A[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		class UWorld* CallFunc_K2_GetWorld_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ADayCycleManager* CallFunc_GetDayCycleManager_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BPFastTrace_ReturnValue;                  // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsRainingAtLocation_ReturnValue;          // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A88B[0x5];                                     // 0x004B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWorld* CallFunc_K2_GetWorld_ReturnValue_1;                // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsIndoorsAtLoc_ReturnValue;               // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.LavaWalkingTick
	// 0x00D0 (0x00D0 - 0x0000)
	struct FireLion_Character_BP_C_LavaWalkingTick final
	{
	public:
		ENetworkModeResult                            CallFunc_IsRunningOnServer_OutNetworkMode;         // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A88C[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		class APhysicsVolume* CallFunc_GetPhysicsVolume_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GetIsPhysicsVolumeLava_IsLava;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A88D[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_GetCapsuleBottomLocation_ReturnValue;     // 0x0020(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_GetCapsuleBottomLocation_ReturnValue_1;   // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_LavaWaterPhysicsVolCheck_ReturnValue;     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GetShouldUpdatePhysicsVolume_ReturnValue; // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A88E[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		class APhysicsVolume* CallFunc_GetPhysicsVolume_ReturnValue_1;           // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UWorld* CallFunc_K2_GetWorld_ReturnValue;                  // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_GetCapsuleTopLocation_ReturnValue;        // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APhysicsVolume* CallFunc_GetWaterVolumeAtPoint_ReturnValue;        // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_LavaWaterPhysicsVolCheck_ReturnValue_1;   // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsOwningClient_ReturnValue;               // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GetShouldUpdatePhysicsVolume_ReturnValue_1; // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENetModeBP                                    CallFunc_SwitchNetworkMode_OutNetworkMode;         // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GetShouldUpdatePhysicsVolume_ReturnValue_2; // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x008E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GetShouldUpdatePhysicsVolume_ReturnValue_3; // 0x008F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsTimeSince_ReturnValue;                  // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A88F[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A890[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_GetCapsuleBottomLocation_ReturnValue_2;   // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_LavaWaterPhysicsVolCheck_ReturnValue_2;   // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.LavaWaterPhysicsVolCheck
	// 0x04E8 (0x04E8 - 0x0000)
	struct FireLion_Character_BP_C_LavaWaterPhysicsVolCheck final
	{
	public:
		bool                                          IsForExit;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A891[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        Distance;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                FromLocation;                                      // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          DoTraceForUpdate;                                  // 0x0028(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          ReturnValue;                                       // 0x0029(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          LocalOtherOfType;                                  // 0x002A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A892[0x1];                                     // 0x002B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         Temp_int_Array_Index_Variable;                     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class AActor*>                         Temp_object_Variable;                              // 0x0060(0x0010)(ConstParm, ReferenceParm)
		struct FVector                                CallFunc_GetCapsuleTopLocation_ReturnValue;        // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A893[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class APhysicsVolume* CallFunc_GetPhysicsVolume_ReturnValue;             // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A894[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		TArray<EObjectTypeQuery>                      K2Node_MakeArray_Array;                            // 0x00A0(0x0010)(ConstParm, ReferenceParm)
		class UWorld* CallFunc_K2_GetWorld_ReturnValue;                  // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UWorld* CallFunc_K2_GetWorld_ReturnValue_1;                // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsPointUnderwater_ReturnValue;            // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A895[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		TArray<class AActor*>                         Temp_object_Variable_1;                            // 0x00C8(0x0010)(ConstParm, ReferenceParm)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A896[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWorld* CallFunc_K2_GetWorld_ReturnValue_2;                // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                             CallFunc_LineTraceSingle_OutHit;                   // 0x0100(0x00F0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
		bool                                          CallFunc_LineTraceSingle_ReturnValue;              // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x01F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x01F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A897[0x1];                                     // 0x01F3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         CallFunc_BreakHitResult_Time;                      // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_BreakHitResult_Distance;                  // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A898[0x4];                                     // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0200(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0218(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0230(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0248(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;                   // 0x0260(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AActor* CallFunc_BreakHitResult_HitActor;                  // 0x0268(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;              // 0x0270(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                   CallFunc_BreakHitResult_BoneName;                  // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0288(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x028C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A899[0x4];                                     // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0298(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x02B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x02C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_SelectVector_ReturnValue;                 // 0x02E0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APhysicsVolume* CallFunc_GetWaterVolumeAtPoint_ReturnValue;        // 0x02F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		TArray<struct FHitResult>                     CallFunc_LineTraceMultiForObjects_OutHits;         // 0x0300(0x0010)(ReferenceParm, ContainsInstancedReference)
		bool                                          CallFunc_LineTraceMultiForObjects_ReturnValue;     // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GetIsPhysicsVolumeLava_IsLava;            // 0x0311(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A89A[0x6];                                     // 0x0312(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		struct FHitResult                             CallFunc_Array_Get_Item;                           // 0x0318(0x00F0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
		int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0408(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BreakHitResult_bBlockingHit_1;            // 0x040C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BreakHitResult_bInitialOverlap_1;         // 0x040D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A89B[0x2];                                     // 0x040E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         CallFunc_BreakHitResult_Time_1;                    // 0x0410(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_BreakHitResult_Distance_1;                // 0x0414(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_BreakHitResult_Location_1;                // 0x0418(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_BreakHitResult_ImpactPoint_1;             // 0x0430(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_BreakHitResult_Normal_1;                  // 0x0448(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_BreakHitResult_ImpactNormal_1;            // 0x0460(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1;                 // 0x0478(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AActor* CallFunc_BreakHitResult_HitActor_1;                // 0x0480(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1;            // 0x0488(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class FName                                   CallFunc_BreakHitResult_HitBoneName_1;             // 0x0490(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                   CallFunc_BreakHitResult_BoneName_1;                // 0x0498(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_BreakHitResult_HitItem_1;                 // 0x04A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_BreakHitResult_ElementIndex_1;            // 0x04A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_BreakHitResult_FaceIndex_1;               // 0x04A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A89C[0x4];                                     // 0x04AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_BreakHitResult_TraceStart_1;              // 0x04B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_BreakHitResult_TraceEnd_1;                // 0x04C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x04E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x04E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x04E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.Multi_EnableTimerOnFireDisabledBuff
	// 0x0001 (0x0001 - 0x0000)
	struct FireLion_Character_BP_C_Multi_EnableTimerOnFireDisabledBuff final
	{
	public:
		bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.Multi_ResizeFireLion
	// 0x0002 (0x0002 - 0x0000)
	struct FireLion_Character_BP_C_Multi_ResizeFireLion final
	{
	public:
		bool                                          Grow;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          PlayAnim;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.Multi_SetIsLazing
	// 0x0003 (0x0003 - 0x0000)
	struct FireLion_Character_BP_C_Multi_SetIsLazing final
	{
	public:
		bool                                          IsLazing;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          Startle;                                           // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          Instant;                                           // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.Multi_SetWildRidingStatValues
	// 0x0010 (0x0010 - 0x0000)
	struct FireLion_Character_BP_C_Multi_SetWildRidingStatValues final
	{
	public:
		double                                        Health;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        Stam;                                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.Multi_SwapShoulderRide
	// 0x0028 (0x0028 - 0x0000)
	struct FireLion_Character_BP_C_Multi_SwapShoulderRide final
	{
	public:
		class AShooterCharacter* ShooterChar;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          Riding;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A89D[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                LaunchDirection;                                   // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.OnFireLionJumpPressed
	// 0x0080 (0x0080 - 0x0000)
	struct FireLion_Character_BP_C_OnFireLionJumpPressed final
	{
	public:
		struct FVector                                CallFunc_GetCapsuleTopLocation_ReturnValue;        // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_GetCapsuleTopLocation_ReturnValue_1;      // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_LavaWaterPhysicsVolCheck_ReturnValue;     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_LavaWaterPhysicsVolCheck_ReturnValue_1;   // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A89E[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsTimeSince_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A89F[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_GetGameTimeInSeconds_ReturnValue_1;       // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_GetGameTimeInSeconds_ReturnValue_2;       // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsTimeSince_ReturnValue_1;                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsPrimalCharSwimming_ReturnValue;         // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8A0[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		class APhysicsVolume* CallFunc_GetPhysicsVolume_ReturnValue;             // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GetIsPhysicsVolumeLava_IsLava;            // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8A1[0x6];                                     // 0x006A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_GetGameTimeInSeconds_ReturnValue_3;       // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsTimeSince_ReturnValue_2;                // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.OnLanded
	// 0x00F0 (0x00F0 - 0x0000)
	struct FireLion_Character_BP_C_OnLanded final
	{
	public:
		struct FHitResult                             Hit;                                               // 0x0000(0x00F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.OnPhysicsVolumeChanged
	// 0x0008 (0x0008 - 0x0000)
	struct FireLion_Character_BP_C_OnPhysicsVolumeChanged final
	{
	public:
		class APhysicsVolume* NewVolume;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.OnRep_bIsSmallLion
	// 0x0008 (0x0008 - 0x0000)
	struct FireLion_Character_BP_C_OnRep_bIsSmallLion final
	{
	public:
		double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.OnSecAttackPressed
	// 0x0001 (0x0001 - 0x0000)
	struct FireLion_Character_BP_C_OnSecAttackPressed final
	{
	public:
		bool                                          CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.OnUpdateMountedDinoMeshHiding
	// 0x0001 (0x0001 - 0x0000)
	struct FireLion_Character_BP_C_OnUpdateMountedDinoMeshHiding final
	{
	public:
		bool                                          bShouldBeVisible;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.ReceiveBeginPlay
	// 0x0030 (0x0030 - 0x0000)
	struct FireLion_Character_BP_C_ReceiveBeginPlay final
	{
	public:
		class APhysicsVolume* CallFunc_GetPhysicsVolumeToCheckForRefreshFireActive_PhysicsVolume; // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BPIsTamed_ReturnValue;                    // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8A2[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		struct FTimerHandle                           CallFunc_K2_SetTimerForNextTick_ReturnValue;       // 0x0010(0x0008)(NoDestructor, HasGetValueTypeHash)
		ENetworkModeResult                            CallFunc_IsRunningOnServer_OutNetworkMode;         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENetworkModeResult                            CallFunc_CanRunCosmeticEvents_OutNetworkMode;      // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsBaby_ReturnValue;                       // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8A3[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		class UWorld* CallFunc_K2_GetWorld_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.ReceiveFireAbsorb
	// 0x00B0 (0x00B0 - 0x0000)
	struct FireLion_Character_BP_C_ReceiveFireAbsorb final
	{
	public:
		double                                        HealthAmount;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        EnergyAmount;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APrimalCharacter* FromCharacter;                                     // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          ShouldAbsorbFireFromTargetVFXPlay;                 // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          RiderIsAllied;                                     // 0x0019(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8A4[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Set_Contains_ReturnValue;                 // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsAlliedWithOtherTeam_ReturnValue;        // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8A5[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_NotEqual_DoubleDouble_ReturnValue_1;      // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8A6[0x5];                                     // 0x004B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
		class UAnimMontage* CallFunc_GetAttackAnim_Anim;                       // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_PlayAnimEx_ReturnValue;                   // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8A7[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_VSize_ReturnValue;                        // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x009B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsAlliedWithOtherTeam_ReturnValue_1;      // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8A8[0x2];                                     // 0x009E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         CallFunc_ModifyCurrentStatusValue_ReturnValue;     // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_ModifyCurrentStatusValue_Amount_ImplicitCast; // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_LessEqual_DoubleDouble_B_ImplicitCast;    // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.ReceiveHit
	// 0x0160 (0x0160 - 0x0000)
	struct FireLion_Character_BP_C_ReceiveHit final
	{
	public:
		class UPrimitiveComponent* MyComp;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class AActor* Other;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent* OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                          bSelfMoved;                                        // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8A9[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                HitLocation;                                       // 0x0020(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                HitNormal;                                         // 0x0038(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                NormalImpulse;                                     // 0x0050(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                             Hit;                                               // 0x0068(0x00F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		bool                                          CallFunc_IsPrimalCharacter_ReturnValue;            // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENetworkModeResult                            CallFunc_IsRunningOnServer_OutNetworkMode;         // 0x015A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x015B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.ReceiveTick
	// 0x0028 (0x0028 - 0x0000)
	struct FireLion_Character_BP_C_ReceiveTick final
	{
	public:
		float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_GetImmersionDepth_ReturnValue;            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UShooterCharacterMovement* K2Node_DynamicCast_AsShooter_Character_Movement;   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENetworkModeResult                            CallFunc_IsRunningOnServer_OutNetworkMode;         // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8AA[0x5];                                     // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_FireTrailTick_DeltaSeconds_ImplicitCast;  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_FireBoostTick_DeltaSeconds_ImplicitCast;  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.RefreshFireActive
	// 0x0030 (0x0030 - 0x0000)
	struct FireLion_Character_BP_C_RefreshFireActive final
	{
	public:
		class APhysicsVolume* PhysicsVolume;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GetIsPhysicsVolumeLava_IsLava;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8AB[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		struct FTimerHandle                           CallFunc_K2_SetTimerForNextTick_ReturnValue;       // 0x0010(0x0008)(NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsWildSlow_ReturnValue;                   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsWildFireLionInRain_ReturnValue;         // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_K2_IsTimerActive_ReturnValue;             // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_K2_IsTimerActive_ReturnValue_1;           // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_K2_IsTimerActive_ReturnValue_2;           // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8AC[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_K2_SetTimer_Time_ImplicitCast;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.RefreshFireVisuals
	// 0x0660 (0x0660 - 0x0000)
	struct FireLion_Character_BP_C_RefreshFireVisuals final
	{
	public:
		bool                                          Instant;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          ShouldShowFireFX;                                  // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8AD[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        LocalFloat;                                        // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                               LocalRot;                                          // 0x0010(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue_1;      // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8AE[0x2];                                     // 0x0046(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_GetActorScale3D_ReturnValue;              // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_BreakVector3f_X;                          // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_BreakVector3f_Y;                          // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_BreakVector3f_Z;                          // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8AF[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_GetActorScale3D_ReturnValue_1;            // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_BreakVector3f_X_1;                        // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_BreakVector3f_Y_1;                        // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_BreakVector3f_Z_1;                        // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsActive_ReturnValue;                     // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x009E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8B0[0x1];                                     // 0x009F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         Temp_int_Array_Index_Variable_3;                   // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         Temp_int_Loop_Counter_Variable_3;                  // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         Temp_int_Array_Index_Variable_4;                   // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         Temp_int_Loop_Counter_Variable_4;                  // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_BreakVector3f_X_2;                        // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_BreakVector3f_Y_2;                        // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_BreakVector3f_Z_2;                        // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue_2;      // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue_3;      // 0x00C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00C6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsActive_ReturnValue_1;                   // 0x00C7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8B1[0x6];                                     // 0x00CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_ReturnValue_2;                // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8B2[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_BreakVector2D_X;                          // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_BreakVector2D_Y;                          // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_ReturnValue_3;                // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8B3[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_BreakVector2D_X_1;                        // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_BreakVector2D_Y_1;                        // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_ReturnValue_4;                // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_BreakVector2D_X_2;                        // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_BreakVector2D_Y_2;                        // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_ReturnValue_5;                // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_FInterpTo_Constant_ReturnValue;           // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_ReturnValue_6;                // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_NotEqual_DoubleDouble_ReturnValue_1;      // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8B4[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_FClamp_ReturnValue;                       // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8B5[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		TArray<class UNiagaraComponent*>              K2Node_MakeArray_Array;                            // 0x0170(0x0010)(ReferenceParm, ContainsInstancedReference)
		bool                                          CallFunc_NotEqual_DoubleDouble_ReturnValue_2;      // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8B6[0x3];                                     // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8B7[0x3];                                     // 0x0189(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         Temp_int_Loop_Counter_Variable_5;                  // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8B8[0x3];                                     // 0x0191(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UNiagaraComponent*>              K2Node_MakeArray_Array_1;                          // 0x0198(0x0010)(ReferenceParm, ContainsInstancedReference)
		double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue_1;       // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UNiagaraComponent* CallFunc_Array_Get_Item;                           // 0x01B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsActive_ReturnValue_2;                   // 0x01BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8B9[0x2];                                     // 0x01BE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x01C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8BA[0x3];                                     // 0x01D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         CallFunc_BreakRotator_Roll;                        // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_BreakRotator_Pitch;                       // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_BreakRotator_Yaw;                         // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                               CallFunc_GetSocketRotation_ReturnValue;            // 0x01E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
		int32                                         Temp_int_Array_Index_Variable_5;                   // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8BB[0x4];                                     // 0x0204(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class UNiagaraComponent* CallFunc_Array_Get_Item_1;                         // 0x0208(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_BreakRotator_Roll_1;                      // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_BreakRotator_Pitch_1;                     // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_BreakRotator_Yaw_1;                       // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8BC[0x4];                                     // 0x021C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x0228(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_WrapAngle_ReturnValue;                    // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8BD[0x4];                                     // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Add_DoubleFloat_ReturnValue;              // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Subtract_DoubleFloat_ReturnValue_1;       // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_WrapAngle_ReturnValue_1;                  // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_WrapAngle_ReturnValue_2;                  // 0x025C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_ClampAngle_ReturnValue;                   // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Add_DoubleFloat_ReturnValue_1;            // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_WrapAngle_ReturnValue_3;                  // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0274(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8BE[0x3];                                     // 0x0275(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_ClampAngle_ReturnValue_1;                 // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0280(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                CallFunc_GetTargetingLocation_ReturnValue;         // 0x0298(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                               CallFunc_RInterpTo_ReturnValue;                    // 0x02B0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x02C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x02E0(0x00F0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
		bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x03D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsActive_ReturnValue_3;                   // 0x03D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8BF[0x6];                                     // 0x03D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_2;                         // 0x03D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_3;                         // 0x03E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_K2_GetScalarParameterValue_ReturnValue;   // 0x03E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_K2_GetScalarParameterValue_ReturnValue_1; // 0x03EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x03F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x03F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x03F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x03F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8C0[0x6];                                     // 0x03FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_4;                         // 0x0400(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x0408(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_IntInt_ReturnValue_4;                // 0x040C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8C1[0x3];                                     // 0x040D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_Array_Length_ReturnValue_5;               // 0x0410(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_IntInt_ReturnValue_5;                // 0x0414(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8C2[0x3];                                     // 0x0415(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		TArray<class UMaterialInterface*>             CallFunc_GetMaterials_ReturnValue;                 // 0x0418(0x0010)(ReferenceParm)
		class UMaterialInterface* CallFunc_Array_Get_Item_5;                         // 0x0428(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Array_Length_ReturnValue_6;               // 0x0430(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8C3[0x4];                                     // 0x0434(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic;    // 0x0438(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0440(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_IntInt_ReturnValue_6;                // 0x0441(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8C4[0x2];                                     // 0x0442(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x0444(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0448(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0460(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_Normal_ReturnValue_1;                     // 0x0478(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0490(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_VSize_ReturnValue;                        // 0x04A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x04B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_FClamp01_ReturnValue;                     // 0x04C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue_2;       // 0x04C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x04D0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_FInterpTo_Constant_ReturnValue_1;         // 0x04E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_Normal_ReturnValue_2;                     // 0x04F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_ReturnValue_7;                // 0x0508(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0510(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_FClamp_ReturnValue_1;                     // 0x0528(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_Divide_VectorVector_ReturnValue;          // 0x0530(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_Normal_ReturnValue_3;                     // 0x0548(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsActive_ReturnValue_4;                   // 0x0560(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8C5[0x7];                                     // 0x0561(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_GetWorldDeltaSeconds_ReturnValue_3;       // 0x0568(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_FInterpTo_Constant_ReturnValue_2;         // 0x0570(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x0578(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8C6[0x7];                                     // 0x0579(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_SelectFloat_ReturnValue_8;                // 0x0580(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_FClamp_ReturnValue_2;                     // 0x0588(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0590(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8C7[0x3];                                     // 0x0591(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector3f                              CallFunc_BreakVector3f_InVec_ImplicitCast;         // 0x0594(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector3f                              CallFunc_BreakVector3f_InVec_ImplicitCast_1;       // 0x05A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector3f                              CallFunc_BreakVector3f_InVec_ImplicitCast_2;       // 0x05AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Add_DoubleFloat_B_ImplicitCast;           // 0x05B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Subtract_DoubleFloat_B_ImplicitCast;      // 0x05BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_RInterpTo_DeltaTime_ImplicitCast;         // 0x05C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Add_DoubleFloat_B_ImplicitCast_1;         // 0x05C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1;    // 0x05C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x05CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_ClampAngle_AngleDegrees_ImplicitCast;     // 0x05D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_ClampAngle_AngleDegrees_ImplicitCast_1;   // 0x05D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Add_DoubleFloat_A_ImplicitCast;           // 0x05E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Subtract_DoubleFloat_A_ImplicitCast;      // 0x05E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Add_DoubleFloat_A_ImplicitCast_1;         // 0x05F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Subtract_DoubleFloat_A_ImplicitCast_1;    // 0x05F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_WrapAngle_degrees_ImplicitCast;           // 0x0600(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8C8[0x4];                                     // 0x0604(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_ClampAngle_MinAngleDegrees_ImplicitCast;  // 0x0608(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_WrapAngle_degrees_ImplicitCast_1;         // 0x0610(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_WrapAngle_degrees_ImplicitCast_2;         // 0x0614(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_ClampAngle_MaxAngleDegrees_ImplicitCast;  // 0x0618(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_ClampAngle_MinAngleDegrees_ImplicitCast_1; // 0x0620(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x0628(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_WrapAngle_degrees_ImplicitCast_3;         // 0x062C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_ClampAngle_MaxAngleDegrees_ImplicitCast_1; // 0x0630(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_MakeRotator_Pitch_ImplicitCast;           // 0x0638(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x063C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_FInterpTo_Constant_Current_ImplicitCast;  // 0x0640(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_FInterpTo_Constant_Current_ImplicitCast_1; // 0x0648(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         K2Node_MakeStruct_A_ImplicitCast;                  // 0x0650(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1; // 0x0654(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_VLerp_Alpha_ImplicitCast;                 // 0x0658(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.RefreshIsFireDashing
	// 0x0018 (0x0018 - 0x0000)
	struct FireLion_Character_BP_C_RefreshIsFireDashing final
	{
	public:
		class UObject* CallFunc_GetDefaultObject_ReturnValue;             // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ECollisionChannel                             CallFunc_GetCollisionObjectType_ReturnValue;       // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.RefreshLavaSwimmingVals
	// 0x0028 (0x0028 - 0x0000)
	struct FireLion_Character_BP_C_RefreshLavaSwimmingVals final
	{
	public:
		float                                         CallFunc_BPGetCurrentStatusValue_ReturnValue;      // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_BPGetMaxStatusValue_ReturnValue;          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8C9[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         CallFunc_ModifyCurrentStatusValue_ReturnValue;     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GetIsInLavaSwimmingState_ReturnValue;     // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8CA[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_NotEqual_DoubleDouble_A_ImplicitCast;     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_NotEqual_DoubleDouble_B_ImplicitCast;     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.RefreshLavaWalking
	// 0x0060 (0x0060 - 0x0000)
	struct FireLion_Character_BP_C_RefreshLavaWalking final
	{
	public:
		class APhysicsVolume* PhysicsVolume;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          IsCurrentlyInWaterOrLavaVolume;                    // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GetIsInLavaSwimmingState_ReturnValue;     // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GetIsPhysicsVolumeLava_IsLava;            // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8CB[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_GetCapsuleTopLocation_ReturnValue;        // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_LavaWaterPhysicsVolCheck_ReturnValue;     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsTimeSince_ReturnValue;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BPIsConscious_ReturnValue;                // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsTimeSince_Network_ReturnValue;          // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsPrimalCharFalling_ReturnValue;          // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8CC[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         CallFunc_PlayAnimEx_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8CD[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_GetCapsuleBottomLocation_ReturnValue;     // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_LavaWaterPhysicsVolCheck_ReturnValue_1;   // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.RefreshMovementVars
	// 0x0158 (0x0158 - 0x0000)
	struct FireLion_Character_BP_C_RefreshMovementVars final
	{
	public:
		bool                                          IsCurrentlyInWaterOrLavaVolume;                    // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8CE[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8CF[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_ReturnValue_2;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_ReturnValue_3;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_ReturnValue_4;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_ReturnValue_5;                // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_ReturnValue_6;                // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_ReturnValue_7;                // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UShooterCharacterMovement* K2Node_DynamicCast_AsShooter_Character_Movement;   // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8D0[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class UObject* CallFunc_GetDefaultObject_ReturnValue;             // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_ReturnValue_8;                // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8D1[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class UShooterCharacterMovement* K2Node_DynamicCast_AsShooter_Character_Movement_1; // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8D2[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_ReturnValue_9;                // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_ReturnValue_10;               // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_ReturnValue_11;               // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue_2;       // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_ReturnValue_12;               // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue_3;       // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         K2Node_VariableSet_SwimmingOrFlyingStaminaConsumptionRate_ImplicitCast; // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         K2Node_VariableSet_SwimmingRunSpeedModifier_ImplicitCast; // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         K2Node_VariableSet_WaterSubmergedDepthThreshold_ImplicitCast; // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         K2Node_VariableSet_AddForwardVelocityOnJump_ImplicitCast; // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         K2Node_VariableSet_BrakingDecelerationSwimming_ImplicitCast; // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         K2Node_VariableSet_Buoyancy_ImplicitCast;          // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         K2Node_VariableSet_OutofWaterZ_ImplicitCast;       // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         K2Node_VariableSet_MaxStepHeight_ImplicitCast;     // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Multiply_DoubleFloat_B_ImplicitCast;      // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1;    // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Multiply_DoubleFloat_B_ImplicitCast_2;    // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Multiply_DoubleFloat_B_ImplicitCast_3;    // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_A_ImplicitCast;      // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_B_ImplicitCast;               // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         K2Node_VariableSet_MaxWalkSpeed_ImplicitCast;      // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         K2Node_VariableSet_JumpZVelocity_ImplicitCast;     // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_B_ImplicitCast_1;             // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_B_ImplicitCast_2;             // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         K2Node_VariableSet_TamedSwimmingAccelZMultiplier_ImplicitCast; // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         K2Node_VariableSet_SwimmingAccelZMultiplier_ImplicitCast; // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1;    // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_A_ImplicitCast_2;    // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         K2Node_VariableSet_MaxFlySpeed_ImplicitCast;       // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         K2Node_VariableSet_MaxSwimSpeed_ImplicitCast;      // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_A_ImplicitCast_3;    // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         K2Node_VariableSet_MaxWalkSpeedCrouched_ImplicitCast; // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.ResizeFireLion
	// 0x0002 (0x0002 - 0x0000)
	struct FireLion_Character_BP_C_ResizeFireLion final
	{
	public:
		bool                                          Grow;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          PlayAnim;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.RidingTick
	// 0x0088 (0x0088 - 0x0000)
	struct FireLion_Character_BP_C_RidingTick final
	{
	public:
		float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GetIsInLavaSwimmingState_ReturnValue;     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsPrimalCharWalking_ReturnValue;          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsWildSlow_ReturnValue;                   // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8D3[0x1];                                     // 0x000B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
		struct FColor                                 CallFunc_Conv_LinearColorToColor_ReturnValue;      // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                           CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerController* CallFunc_GetOwnerController_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsTimeSince_ReturnValue;                  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8D4[0x5];                                     // 0x0033(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
		class UAnimMontage* CallFunc_GetAttackAnim_Anim;                       // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue;            // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UAnimMontage* CallFunc_GetAttackAnim_Anim_1;                     // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8D5[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_GetFireDashAttackDirection_Direction;     // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_NearlyEqual_VectorVector_ReturnValue;     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsLocallyControlledByPlayer_ReturnValue;  // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8D6[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast; // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.Server_AttemptSetLavaWalking
	// 0x0001 (0x0001 - 0x0000)
	struct FireLion_Character_BP_C_Server_AttemptSetLavaWalking final
	{
	public:
		bool                                          Active;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.Server_SetFireDashDirection
	// 0x0018 (0x0018 - 0x0000)
	struct FireLion_Character_BP_C_Server_SetFireDashDirection final
	{
	public:
		struct FVector                                Direction;                                         // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.Server_SwapShoulderRide
	// 0x0020 (0x0020 - 0x0000)
	struct FireLion_Character_BP_C_Server_SwapShoulderRide final
	{
	public:
		struct FVector                                LaunchDirection;                                   // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AShooterCharacter* ShooterChar;                                       // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.SetFireActive
	// 0x0004 (0x0004 - 0x0000)
	struct FireLion_Character_BP_C_SetFireActive final
	{
	public:
		bool                                          Active;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue_1;        // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.SetFireBoostActive
	// 0x0003 (0x0003 - 0x0000)
	struct FireLion_Character_BP_C_SetFireBoostActive final
	{
	public:
		bool                                          Active;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.SetFireDashActive
	// 0x0138 (0x0138 - 0x0000)
	struct FireLion_Character_BP_C_SetFireDashActive final
	{
	public:
		bool                                          Set;                                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue_1;        // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue_2;        // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMovementMode                                 Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMovementMode                                 Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMovementMode                                 Temp_byte_Variable_2;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMovementMode                                 Temp_byte_Variable_3;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsPrimalCharSwimming_ReturnValue;         // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsPrimalCharWalking_ReturnValue;          // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8D7[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class UAnimMontage* CallFunc_GetAttackAnim_Anim;                       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UAnimMontage* CallFunc_GetAttackAnim_Anim_1;                     // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_GetNetworkTimeInSeconds_ReturnValue;      // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_GetNetworkTimeInSeconds_ReturnValue_1;    // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8D8[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_GetFireDashAttackDirection_Direction;     // 0x0038(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsPrimalCharWalking_ReturnValue_1;        // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsPrimalCharSwimming_ReturnValue_1;       // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0056(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsPrimalCharSwimming_ReturnValue_2;       // 0x0057(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMovementMode                                 K2Node_Select_Default;                             // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8D9[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          Temp_bool_Variable_1;                              // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8DA[0x6];                                     // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		class UAnimMontage* K2Node_Select_Default_1;                           // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsPrimalCharFalling_ReturnValue;          // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8DB[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         CallFunc_PlayAnimEx_ReturnValue;                   // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          Temp_bool_Variable_2;                              // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8DC[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0098(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMovementMode                                 K2Node_Select_Default_2;                           // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8DD[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_BreakVector_X;                            // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_BreakVector_Y;                            // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_BreakVector_Z;                            // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue_1;        // 0x00E8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_FMin_ReturnValue;                         // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0108(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x0120(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.SetFireTrailActive
	// 0x0005 (0x0005 - 0x0000)
	struct FireLion_Character_BP_C_SetFireTrailActive final
	{
	public:
		bool                                          Active;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue_1;        // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.SetIsSmallLion
	// 0x0003 (0x0003 - 0x0000)
	struct FireLion_Character_BP_C_SetIsSmallLion final
	{
	public:
		bool                                          IsSmall;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsPrimalCharFalling_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.SetLavaWalking
	// 0x0018 (0x0018 - 0x0000)
	struct FireLion_Character_BP_C_SetLavaWalking final
	{
	public:
		bool                                          Active;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8DE[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.SetWildRidingStatValues
	// 0x0030 (0x0030 - 0x0000)
	struct FireLion_Character_BP_C_SetWildRidingStatValues final
	{
	public:
		double                                        Health;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        Stam;                                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_ModifyCurrentStatusValue_ReturnValue;     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_BPGetCurrentStatusValue_ReturnValue;      // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_ModifyCurrentStatusValue_ReturnValue_1;   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8DF[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         CallFunc_ModifyCurrentStatusValue_Amount_ImplicitCast; // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_ModifyCurrentStatusValue_Amount_ImplicitCast_1; // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.SharedCanAttack
	// 0x0660 (0x0660 - 0x0000)
	struct FireLion_Character_BP_C_SharedCanAttack final
	{
	public:
		int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          ReturnValue;                                       // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsPlayerControlled_ReturnValue;           // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8E0[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_GetNetworkTimeInSeconds_ReturnValue;      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BPIsTamed_ReturnValue;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8E1[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		struct FDinoAttackInfo                        CallFunc_Array_Get_Item;                           // 0x0018(0x0150)()
		double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsTimeSince_Network_ReturnValue;          // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsTimeSince_Network_ReturnValue_1;        // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8E2[0x2];                                     // 0x0172(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         CallFunc_GetScaledCapsuleRadius_ReturnValue;       // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_CanAIManuallyFireAbsorb_ReturnValue;      // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8E3[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsPlayerControlled_ReturnValue_1;         // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8E4[0x3];                                     // 0x0189(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         CallFunc_GetHorizontalDistanceTo_ReturnValue;      // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_GetHorizontalDotProductTo_ReturnValue;    // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0195(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsDead_ReturnValue;                       // 0x0196(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0197(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FDinoAttackInfo                        CallFunc_Array_Get_Item_1;                         // 0x0198(0x0150)()
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_InRange_FloatFloat_ReturnValue;           // 0x02E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x02EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsPrimalCharSwimming_ReturnValue;         // 0x02EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x02EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8E5[0x3];                                     // 0x02ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         CallFunc_BPGetCurrentStatusValue_ReturnValue;      // 0x02F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x02F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8E6[0x3];                                     // 0x02F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		struct FDinoAttackInfo                        CallFunc_Array_Get_Item_2;                         // 0x02F8(0x0150)()
		bool                                          CallFunc_IsWildSlow_ReturnValue;                   // 0x0448(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0449(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x044A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x044B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x044C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x044D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x044E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GetIsInLavaSwimmingState_ReturnValue;     // 0x044F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FDinoAttackInfo                        CallFunc_Array_Get_Item_3;                         // 0x0450(0x0150)()
		bool                                          CallFunc_IsPrimalCharWalking_ReturnValue;          // 0x05A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x05A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8E7[0x6];                                     // 0x05A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x05A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsTimeSince_Network_ReturnValue_2;        // 0x05B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8E8[0x7];                                     // 0x05B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class APlayerController* CallFunc_GetOwnerController_ReturnValue;           // 0x05B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BPIsTamed_ReturnValue_1;                  // 0x05C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x05C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;  // 0x05C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsWildSlow_ReturnValue_1;                 // 0x05C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BPIsTamed_ReturnValue_2;                  // 0x05C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x05C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x05C6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsTimeSince_Network_ReturnValue_3;        // 0x05C7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_4;                 // 0x05C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_CanFireAbsorb_ReturnValue;                // 0x05C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x05CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x05CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_5;                 // 0x05CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GetIsInLavaSwimmingState_ReturnValue_1;   // 0x05CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_6;                 // 0x05CE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x05CF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x05D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsPrimalCharacter_ReturnValue;            // 0x05D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsDead_ReturnValue_1;                     // 0x05D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x05D3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_7;                 // 0x05D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2;  // 0x05D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_8;                 // 0x05D6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue_3;  // 0x05D7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_9;                 // 0x05D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_4;                  // 0x05D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_10;                // 0x05DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_CanUseFireTrail_ReturnValue;              // 0x05DB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_4;                // 0x05DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_11;                // 0x05DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_5;                // 0x05DE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_5;                  // 0x05DF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_B_ImplicitCast;               // 0x05E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_A_ImplicitCast;               // 0x05E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_IsTimeSince_Network_CheckTimeSince_ImplicitCast; // 0x05F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8E9[0x4];                                     // 0x05F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Multiply_DoubleFloat_A_ImplicitCast;      // 0x05F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x0600(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_InRange_FloatFloat_Value_ImplicitCast;    // 0x0608(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_InRange_FloatFloat_Min_ImplicitCast;      // 0x0610(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_InRange_FloatFloat_Max_ImplicitCast;      // 0x0618(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x0620(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast; // 0x0628(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_B_ImplicitCast_1;             // 0x0630(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_A_ImplicitCast_1;             // 0x0638(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_IsTimeSince_Network_CheckTimeSince_ImplicitCast_1; // 0x0640(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8EA[0x4];                                     // 0x0644(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast_1; // 0x0648(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast_1; // 0x0650(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_IsTimeSince_Network_CheckTimeSince_ImplicitCast_2; // 0x0658(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.SpawnFireBreathVFX
	// 0x0120 (0x0120 - 0x0000)
	struct FireLion_Character_BP_C_SpawnFireBreathVFX final
	{
	public:
		struct FRotator                               CallFunc_GetSocketRotation_ReturnValue;            // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8EB[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x0028(0x00F0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
		bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.SpawnMeleeTrailVFX
	// 0x0028 (0x0028 - 0x0000)
	struct FireLion_Character_BP_C_SpawnMeleeTrailVFX final
	{
	public:
		int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8EC[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		class UNiagaraSystem* K2Node_Select_Default;                             // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FName                                   CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8ED[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.SwapShoulderRide
	// 0x0058 (0x0058 - 0x0000)
	struct FireLion_Character_BP_C_SwapShoulderRide final
	{
	public:
		struct FVector                                LaunchDirection;                                   // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AShooterCharacter* ShooterChar;                                       // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsTimeSince_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8EE[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class APlayerController* CallFunc_GetOwnerController_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8EF[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller;    // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_CanSwapShoulderRide_ReturnValue;          // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_CanSwapShoulderRide_IsGestating;          // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8F0[0x1];                                     // 0x0047(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.TamingTick
	// 0x00C0 (0x00C0 - 0x0000)
	struct FireLion_Character_BP_C_TamingTick final
	{
	public:
		bool                                          CallFunc_IsTimeSince_ReturnValue;                  // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8F1[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_TimeSince_ReturnValue;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8F2[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_FMin_ReturnValue;                         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_GetGameTimeInSeconds_ReturnValue_1;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_FMax_ReturnValue;                         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Add_DoubleFloat_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Add_DoubleFloat_ReturnValue_1;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8F3[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsTimeSince_Network_ReturnValue;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8F4[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Add_DoubleFloat_ReturnValue_2;            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_FClamp01_ReturnValue;                     // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_GetHealthPercentage_ReturnValue;          // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsWildSlow_ReturnValue;                   // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8F5[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Add_DoubleFloat_ReturnValue_3;            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_2;       // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Greater_DoubleDouble_ReturnValue_3;       // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8F6[0x6];                                     // 0x0082(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_FMin_B_ImplicitCast;                      // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_FMin_A_ImplicitCast;                      // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Multiply_DoubleFloat_B_ImplicitCast;      // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Add_DoubleFloat_B_ImplicitCast;           // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Add_DoubleFloat_B_ImplicitCast_1;         // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_IsTimeSince_Network_CheckTimeSince_ImplicitCast; // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Add_DoubleFloat_A_ImplicitCast;           // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Add_DoubleFloat_B_ImplicitCast_2;         // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         K2Node_VariableSet_TameIneffectivenessModifier_ImplicitCast; // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.UpdateAffinityFromFireEnergy
	// 0x0078 (0x0078 - 0x0000)
	struct FireLion_Character_BP_C_UpdateAffinityFromFireEnergy final
	{
	public:
		double                                        Amount;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AGameModeBase* CallFunc_GetGameMode_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AShooterGameMode* K2Node_DynamicCast_AsShooter_Game_Mode;            // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8F7[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleFloat_ReturnValue_1;       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Add_DoubleFloat_ReturnValue;              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsWildSlow_ReturnValue;                   // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8F8[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_FClamp_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8F9[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_FClamp_Max_ImplicitCast;                  // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Multiply_DoubleFloat_B_ImplicitCast;      // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8FA[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Add_DoubleFloat_A_ImplicitCast;           // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Add_DoubleFloat_B_ImplicitCast;           // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         K2Node_VariableSet_CurrentTameAffinity_ImplicitCast; // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.UpdateAllowMating
	// 0x0028 (0x0028 - 0x0000)
	struct FireLion_Character_BP_C_UpdateAllowMating final
	{
	public:
		bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENetworkModeResult                            CallFunc_IsRunningOnServer_OutNetworkMode;         // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ENetworkModeResult                            CallFunc_IsRunningOnServer_OutNetworkMode_1;       // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8FB[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BPIsTamed_ReturnValue;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8FC[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.UpdateFireDisabledBuff
	// 0x0030 (0x0030 - 0x0000)
	struct FireLion_Character_BP_C_UpdateFireDisabledBuff final
	{
	public:
		bool                                          Add;                                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8FD[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class UClass* CallFunc_ClassAssetResolve_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8FE[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class APrimalBuff* CallFunc_GetBuff_ReturnValue;                      // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.UpdateFireEnergy
	// 0x0058 (0x0058 - 0x0000)
	struct FireLion_Character_BP_C_UpdateFireEnergy final
	{
	public:
		double                                        Amount;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A8FF[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_GetNetworkTimeInSeconds_ReturnValue;      // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A900[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class APhysicsVolume* CallFunc_GetPhysicsVolume_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GetIsPhysicsVolumeLava_IsLava;            // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A901[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character;            // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A902[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Add_DoubleFloat_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_FClamp01_ReturnValue;                     // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Add_DoubleFloat_B_ImplicitCast;           // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.UpdateFireLionAI
	// 0x0180 (0x0180 - 0x0000)
	struct FireLion_Character_BP_C_UpdateFireLionAI final
	{
	public:
		class APrimalCharacter* LocalTargetChar;                                   // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_CanManualTransform_ReturnValue;           // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_CanManualTransform_IsGestating;           // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A903[0x5];                                     // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                CallFunc_GetCapsuleBottomLocation_ReturnValue;     // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_GetCapsuleTopLocation_ReturnValue;        // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_BreakVector_X;                            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_BreakVector_Y;                            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_BreakVector_Z;                            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_BreakVector_X_1;                          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_BreakVector_Y_1;                          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_BreakVector_Z_1;                          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GetIsInLavaSwimmingState_ReturnValue;     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_GetIsInLavaSwimmingState_ReturnValue_1;   // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A904[0x6];                                     // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Subtract_DoubleFloat_ReturnValue;         // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A905[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class AActor* CallFunc_GetTamedFollowTarget_ReturnValue;         // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A906[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character;             // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A907[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class AController* CallFunc_GetController_ReturnValue;                // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController;     // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_CanUseFireTrail_ReturnValue;              // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A908[0x6];                                     // 0x00D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		class AActor* CallFunc_GetTarget_ReturnValue;                    // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character_1;           // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsFleeing_ReturnValue;                    // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsPlayerControlled_ReturnValue;           // 0x00EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A909[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class AController* CallFunc_GetController_ReturnValue_1;              // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController_1;   // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EPathFollowingStatus                          CallFunc_GetMoveStatus_ReturnValue;                // 0x0102(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0103(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A90A[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class AActor* CallFunc_GetTarget_ReturnValue_1;                  // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A90B[0x2];                                     // 0x0112(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0114(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                   CallFunc_MakeLiteralName_ReturnValue_1;            // 0x011C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A90C[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class AController* CallFunc_GetController_ReturnValue_2;              // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AController* CallFunc_GetController_ReturnValue_3;              // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UObject* CallFunc_GetDefaultObject_ReturnValue;             // 0x0138(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController_2;   // 0x0140(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A90D[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController_3;   // 0x0150(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A90E[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class APrimalDinoAIController* K2Node_DynamicCast_AsPrimal_Dino_AIController_4;   // 0x0160(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A90F[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_SelectFloat_A_ImplicitCast;               // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         K2Node_VariableSet_GroundAttackSpeedOverride_ImplicitCast; // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Subtract_DoubleFloat_B_ImplicitCast;      // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.UpdateHUDHelper
	// 0x0030 (0x0030 - 0x0000)
	struct FireLion_Character_BP_C_UpdateHUDHelper final
	{
	public:
		class AShooterCharacter* ShooterChar;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          Remove;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A910[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue;   // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsLocallyControlledByPlayer_ReturnValue;  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A911[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		class APlayerController* CallFunc_GetOwnerController_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UPrimalUserWidget* CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.UpdateIsLazing
	// 0x0060 (0x0060 - 0x0000)
	struct FireLion_Character_BP_C_UpdateIsLazing final
	{
	public:
		bool                                          Startle;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          Instant;                                           // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A912[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Add_DoubleFloat_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsMontagePlaying_ReturnValue;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A913[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_GetGameTimeInSeconds_ReturnValue_1;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Add_DoubleFloat_ReturnValue_1;            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_PlayAnimEx_ReturnValue;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A914[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1;            // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_PlayAnimEx_ReturnValue_1;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_PlayAnimEx_ReturnValue_2;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_Add_DoubleFloat_B_ImplicitCast;           // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.UpdateLaunchVelocityVals
	// 0x0001 (0x0001 - 0x0000)
	struct FireLion_Character_BP_C_UpdateLaunchVelocityVals final
	{
	public:
		bool                                          ForSwap;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.UpdateMountedBuff
	// 0x0060 (0x0060 - 0x0000)
	struct FireLion_Character_BP_C_UpdateMountedBuff final
	{
	public:
		bool                                          Add;                                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A915[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class AShooterCharacter* MountedChar;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A916[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		TSubclassOf<class UObject>                    CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class UClass* CallFunc_ClassAssetResolve_ReturnValue;            // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UClass* K2Node_ClassDynamicCast_AsPrimal_Buff;             // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A917[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class APrimalBuff* CallFunc_GetBuff_ReturnValue;                      // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue;                // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A918[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class ABuff_FireLionMounted_C* K2Node_DynamicCast_AsBuff_Fire_Lion_Mounted;       // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.UpdateNaturalArmor
	// 0x0110 (0x0110 - 0x0000)
	struct FireLion_Character_BP_C_UpdateNaturalArmor final
	{
	public:
		class UPrimalItem* LocalItem;                                         // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		ENetworkModeResult                            CallFunc_IsRunningOnServer_OutNetworkMode;         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BPIsTamed_ReturnValue;                    // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A919[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		class UPrimalGameData* CallFunc_BPGetGameData_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FPrimalItemQuality                     CallFunc_Array_Get_Item;                           // 0x0020(0x0030)()
		class UClass* CallFunc_ClassAssetResolve_ReturnValue;            // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A91A[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UPrimalItem*>                    CallFunc_GiveItemToCharacter_ReturnValue;          // 0x0070(0x0010)(ReferenceParm)
		class UPrimalItem* CallFunc_Array_Get_Item_1;                         // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A91B[0x2];                                     // 0x008A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		struct FItemStatInfo                          CallFunc_GetItemStatInfo_ReturnValue;              // 0x008C(0x0024)(NoDestructor)
		double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A91C[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_FFloor_ReturnValue;                       // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A91D[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		TArray<class UPrimalItem*>                    CallFunc_FindAllItemsOfType_ReturnValue;           // 0x00D0(0x0010)(ReferenceParm)
		class UPrimalItem* CallFunc_Array_Get_Item_2;                         // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A91E[0x3];                                     // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A91F[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_OverrideItemRating_rating_ImplicitCast;   // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A920[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.UpdateRiderBuff
	// 0x0050 (0x0050 - 0x0000)
	struct FireLion_Character_BP_C_UpdateRiderBuff final
	{
	public:
		bool                                          Add;                                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A921[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class AShooterCharacter* Param_Rider;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A922[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class UClass* CallFunc_ClassAssetResolve_ReturnValue;            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		TSubclassOf<class UObject>                    CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class APrimalBuff* CallFunc_GetBuff_ReturnValue;                      // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UClass* K2Node_ClassDynamicCast_AsPrimal_Buff;             // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_ClassDynamicCast_bSuccess;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A923[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue;                // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.UpdateSmallLionBoneModifiers
	// 0x01A8 (0x01A8 - 0x0000)
	struct FireLion_Character_BP_C_UpdateSmallLionBoneModifiers final
	{
	public:
		TArray<struct FBoneModifierNamed>             LocalModifiers;                                    // 0x0000(0x0010)(Edit, BlueprintVisible)
		int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A924[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		char CallFunc_GetWeightedBoneNames_ReturnValue[0x50];         // 0x0020(0x0050)()
		struct FBoneModifierRange                     CallFunc_Array_Get_Item;                           // 0x0070(0x0070)(NoDestructor)
		int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A925[0x3];                                     // 0x00E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		struct FBoneModifier                          K2Node_MakeStruct_BoneModifier;                    // 0x00E8(0x0058)(NoDestructor)
		struct FBoneModifierNamed                     K2Node_MakeStruct_BoneModifierNamed;               // 0x0140(0x0060)(NoDestructor)
		bool                                          CallFunc_Set_Contains_ReturnValue;                 // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A926[0x3];                                     // 0x01A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.UpdateTamingVars
	// 0x0130 (0x0130 - 0x0000)
	struct FireLion_Character_BP_C_UpdateTamingVars final
	{
	public:
		class AShooterPlayerController* PC;                                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          Clear;                                             // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A927[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class AShooterPlayerState* K2Node_DynamicCast_AsShooter_Player_State;         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A928[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class FString                                 CallFunc_GetNetPlayerName_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsInTribe_ReturnValue;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A929[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class FString                                 CallFunc_BreakTribeData_TribeName;                 // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		int32                                         CallFunc_BreakTribeData_OwnerPlayerDataID;         // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_BreakTribeData_TribeID;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FString>                         CallFunc_BreakTribeData_MembersPlayerName;         // 0x0050(0x0010)(ReferenceParm)
		TArray<int32>                                 CallFunc_BreakTribeData_MembersPlayerDataID;       // 0x0060(0x0010)(ReferenceParm)
		TArray<int32>                                 CallFunc_BreakTribeData_TribeAdmins;               // 0x0070(0x0010)(ReferenceParm)
		bool                                          CallFunc_BreakTribeData_bSetGovernment;            // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A92A[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		struct FTribeGovernment                       CallFunc_BreakTribeData_TribeGovernment;           // 0x0084(0x0014)(NoDestructor)
		TArray<struct FPrimalPlayerCharacterConfigStructReplicated> CallFunc_BreakTribeData_MembersConfigs;            // 0x0098(0x0010)(ReferenceParm)
		bool                                          CallFunc_IsAtPersonalTameLimit_ReturnValue;        // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A92B[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class FString                                 CallFunc_SelectString_ReturnValue;                 // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;    // 0x00C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_2;    // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x00C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00C6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue_1;        // 0x00C7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A92C[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_FMax_ReturnValue;                         // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue_3;    // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A92D[0x2];                                     // 0x00E2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_Len_ReturnValue;                          // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A92E[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class FString                                 CallFunc_SelectString_ReturnValue_1;               // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
		double                                        CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1; // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_2; // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_3; // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_FMax_A_ImplicitCast;                      // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         K2Node_VariableSet_CurrentTameAffinity_ImplicitCast; // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.UpdateWildRidingStats
	// 0x00A0 (0x00A0 - 0x0000)
	struct FireLion_Character_BP_C_UpdateWildRidingStats final
	{
	public:
		float                                         LocalDelta;                                        // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_BPGetCurrentStatusValue_ReturnValue;      // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_BPGetMaxStatusValue_ReturnValue;          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_BPGetCurrentStatusValue_ReturnValue_1;    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_ModifyCurrentStatusValue_ReturnValue;     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A92F[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A930[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_BPGetCurrentStatusValue_ReturnValue_2;    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_BPGetCurrentStatusValue_ReturnValue_3;    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsRunning_ReturnValue;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A931[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_ModifyCurrentStatusValue_ReturnValue_1;   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_TimeSince_ReturnValue;                    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsWildSlow_ReturnValue;                   // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A932[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Multi_SetWildRidingStatValues_Stam_ImplicitCast; // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multi_SetWildRidingStatValues_Health_ImplicitCast; // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_K2_SetTimer_Time_ImplicitCast;            // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A933[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_Multi_SetWildRidingStatValues_Stam_ImplicitCast_1; // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multi_SetWildRidingStatValues_Health_ImplicitCast_1; // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_ModifyCurrentStatusValue_Amount_ImplicitCast; // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.AllowPlayMontage
	// 0x0040 (0x0040 - 0x0000)
	struct FireLion_Character_BP_C_AllowPlayMontage final
	{
	public:
		class UAnimMontage* AnimMontage;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsPrimalCharWalking_ReturnValue;          // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A934[0x5];                                     // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_DoubleDouble_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A935[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		class UAnimMontage* CallFunc_GetAttackAnim_Anim;                       // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_3;    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_4;    // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A936[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		class UAnimMontage* CallFunc_GetAttackAnim_Anim_1;                     // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_5;    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.BPOverrideFloatingHUDLocation
	// 0x0060 (0x0060 - 0x0000)
	struct FireLion_Character_BP_C_BPOverrideFloatingHUDLocation final
	{
	public:
		struct FVector                                ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_GetActorScale3D_ReturnValue;              // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	

	// Function FireLion_Character_BP.FireLion_Character_BP_C.GetAttackAnim
	// 0x0178 (0x0178 - 0x0000)
	struct FireLion_Character_BP_C_GetAttackAnim final
	{
	public:
		int32                                         AttackIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         AnimIndex;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAnimMontage* Anim;                                              // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A937[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		struct FDinoAttackInfo                        CallFunc_Array_Get_Item;                           // 0x0018(0x0150)()
		bool                                          CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A938[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class UAnimMontage* CallFunc_Array_Get_Item_1;                         // 0x0170(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};
	
	
	
	
	
	
	
	
	

}

