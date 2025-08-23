#pragma once

// Dumped with Dumper-7!

namespace CG
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.UpdateMaxSpeedForUnderwaterHovering
struct ABuff_TekArmor_Shirt_Rework_C_UpdateMaxSpeedForUnderwaterHovering_Params
{
public:
	bool                                         CallFunc_IsTekBuffDisabled_bIsDisabled;            // 0x0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsPlayerUnderWater_result;                // 0x4(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	bool                                         CallFunc_IsPlayerUnderWater_result_1;              // 0x5(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x6(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x7(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x8(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x9(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0xA(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
	uint8                                        Pad_B101[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_VariableSet_SubmergedMaxSpeedModifier_ImplicitCast; // 0xC(0x4)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.SetUnderwaterHovering
struct ABuff_TekArmor_Shirt_Rework_C_SetUnderwaterHovering_Params
{
public:
	bool                                         bNewUnderwaterHovering;                            // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x1(0x1)(BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x2(0x1)(ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x3(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.RegulateScaleFX
struct ABuff_TekArmor_Shirt_Rework_C_RegulateScaleFX_Params
{
public:
	class UParticleSystemComponent*              Psc;                                               // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_X;                            // 0x8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0x10(0x8)(ExportObject, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Abs_ReturnValue;                          // 0x20(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Abs_ReturnValue_1;                        // 0x28(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Abs_ReturnValue_2;                        // 0x30(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x38(0x18)(EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
};

// 0x7 (0x7 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.ShouldUseAutonomousCorrectionOffset
struct ABuff_TekArmor_Shirt_Rework_C_ShouldUseAutonomousCorrectionOffset_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0x1(0x1)(Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsThrusterActive_result;                  // 0x2(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x4(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x5(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x6(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
};

// 0x6 (0x6 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.HideBoostIcon
struct ABuff_TekArmor_Shirt_Rework_C_HideBoostIcon_Params
{
public:
	bool                                         ShouldSet;                                         // 0x0(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         WithValue;                                         // 0x1(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_Can_Element_Decrease_CanDecrease;         // 0x3(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x4(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x5(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.SetJetpackOffset
struct ABuff_TekArmor_Shirt_Rework_C_SetJetpackOffset_Params
{
public:
	struct FTransform                            AddTransform;                                      // 0x0(0x60)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x370 (0x370 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.OnRep_JetPackVFXOffset
struct ABuff_TekArmor_Shirt_Rework_C_OnRep_JetPackVFXOffset_Params
{
public:
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x0(0x1)(ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x1(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_B102[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x8(0x18)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x20(0x18)(BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x38(0x18)(Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakTransform_Location_1;                // 0x50(0x18)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FRotator                              CallFunc_BreakTransform_Rotation_1;                // 0x68(0x18)(BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_BreakTransform_Scale_1;                   // 0x80(0x18)(Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x98(0x18)(Edit, OutParm, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              CallFunc_Multiply_RotatorFloat_ReturnValue;        // 0xB0(0x18)(Edit, ExportObject, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0xC8(0x18)(Edit, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0xE0(0x60)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakTransform_Location_2;                // 0x140(0x18)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FRotator                              CallFunc_BreakTransform_Rotation_2;                // 0x158(0x18)(BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FVector                               CallFunc_BreakTransform_Scale_2;                   // 0x170(0x18)(Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_EqualEqual_VectorVector_ReturnValue;      // 0x188(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_RotatorRotator_ReturnValue;    // 0x189(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_VectorVector_ReturnValue_1;    // 0x18A(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x18B(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x18C(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	uint8                                        Pad_B103[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_AddLocalTransform_SweepHitResult;      // 0x190(0xF0)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	struct FHitResult                            CallFunc_K2_AddLocalTransform_SweepHitResult_1;    // 0x280(0xF0)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference, Interp)
};

// 0x2 (0x2 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.OnInputsPrevented
struct ABuff_TekArmor_Shirt_Rework_C_OnInputsPrevented_Params
{
public:
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.BPOverrideCharacterNewFallVelocity
struct ABuff_TekArmor_Shirt_Rework_C_BPOverrideCharacterNewFallVelocity_Params
{
public:
	struct FVector                               InitialVelocity;                                   // 0x0(0x18)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               Gravity;                                           // 0x18(0x18)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance)
	float                                        DeltaTime;                                         // 0x30(0x4)(BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_B104[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x38(0x18)(Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               CallFunc_BPOverrideCharacterNewFallVelocity_ReturnValue; // 0x50(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
};

// 0x188 (0x188 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.Clamp LocationZ
struct ABuff_TekArmor_Shirt_Rework_C_Clamp_LocationZ_Params
{
public:
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x0(0x1)(ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x1(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_B105[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x8(0x18)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x20(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_B106[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_BreakVector_X;                            // 0x28(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0x30(0x8)(ExportObject, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class UWorld*                                CallFunc_K2_GetWorld_ReturnValue;                  // 0x40(0x8)(Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class AWorldSettings*                        CallFunc_GetWorldSettings_ReturnValue;             // 0x48(0x8)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class APrimalWorldSettings*                  K2Node_DynamicCast_AsPrimal_World_Settings;        // 0x50(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x59(0x1)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x5A(0x1)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	uint8                                        Pad_B107[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x60(0x18)(EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	struct FHitResult                            CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x78(0xF0)(ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_K2_SetActorLocation_ReturnValue;          // 0x168(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_B108[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Greater_DoubleDouble_B_ImplicitCast;      // 0x170(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_MakeVector_Z_ImplicitCast;                // 0x178(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x180(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.IsPlayerInWater
struct ABuff_TekArmor_Shirt_Rework_C_IsPlayerInWater_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_B109[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x8(0x8)(ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class APhysicsVolume*                        CallFunc_GetPhysicsVolume_ReturnValue;             // 0x10(0x8)(ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.IsTekChargeThrusting
struct ABuff_TekArmor_Shirt_Rework_C_IsTekChargeThrusting_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         CallFunc_IsTekArmorUsingAbility__result;           // 0x1(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Greater_ByteByte_ReturnValue;             // 0x2(0x1)(Edit, BlueprintVisible, EditFixedSize, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
};

// 0x2A (0x2A - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.AreChargeThrustingAnimsPlaying
struct ABuff_TekArmor_Shirt_Rework_C_AreChargeThrustingAnimsPlaying_Params
{
public:
	bool                                         CleanUpAnims;                                      // 0x0(0x1)(ConstParm, Net, Parm, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         Result;                                            // 0x1(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         RetVal;                                            // 0x2(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_IsTekArmorUsingAbility__result;           // 0x3(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x4(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_B10A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x8(0x8)(ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x10(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue_1;            // 0x18(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class UAnimMontage*                          CallFunc_GetOverridenMontage_ReturnValue;          // 0x20(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Montage_IsPlaying_ReturnValue;            // 0x28(0x1)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Montage_IsPlaying_ReturnValue_1;          // 0x29(0x1)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
};

// 0x11 (0x11 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.IsPlayerInjured
struct ABuff_TekArmor_Shirt_Rework_C_IsPlayerInjured_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_B10B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimalCharacterStatusComponent*       CallFunc_GetCharacterStatusComponent_ReturnValue;  // 0x8(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsInStatusState_ReturnValue;              // 0x10(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x13 (0x13 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.IsPlayerWaterRunning
struct ABuff_TekArmor_Shirt_Rework_C_IsPlayerWaterRunning_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_B10C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x8(0x8)(ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsTekArmorUsingAbility__result;           // 0x10(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsSubmerged_ReturnValue;                  // 0x11(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x12(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
};

// 0xB (0xB - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.BPSetupForInstigator
struct ABuff_TekArmor_Shirt_Rework_C_BPSetupForInstigator_Params
{
public:
	class AActor*                                ForInstigator;                                     // 0x0(0x8)(Edit, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Can_Element_Decrease_CanDecrease;         // 0x8(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsFirstPerson_ReturnValue;                // 0x9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0xA(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
};

// 0x31 (0x31 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.UpdateBoostIconVisibility
struct ABuff_TekArmor_Shirt_Rework_C_UpdateBoostIconVisibility_Params
{
public:
	bool                                         SetVisible;                                        // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	uint8                                        Pad_B10D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AHUD*                                  CallFunc_GetHUD_ReturnValue;                       // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, DuplicateTransient, SubobjectReference)
	class AShooterHUD*                           K2Node_DynamicCast_AsShooter_HUD;                  // 0x10(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, DuplicateTransient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_B10E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IPlayerHudInterface_C> K2Node_DynamicCast_AsPlayer_Hud_Interface;         // 0x20(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
};

// 0x55 (0x55 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.SetIsChargeThrusting
struct ABuff_TekArmor_Shirt_Rework_C_SetIsChargeThrusting_Params
{
public:
	bool                                         Newval;                                            // 0x0(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_B10F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x8(0x8)(ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue_1;        // 0x11(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	uint8                                        Pad_B110[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x18(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue_1;            // 0x20(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_IsTekArmorUsingAbility__result;           // 0x28(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x29(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2A(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x2B(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Montage_IsPlaying_ReturnValue;            // 0x2C(0x1)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_B111[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          CallFunc_GetOverridenMontage_ReturnValue;          // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x38(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Montage_IsPlaying_ReturnValue_1;          // 0x39(0x1)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Montage_IsPlaying_ReturnValue_2;          // 0x3A(0x1)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x3B(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, NonTransactional)
	float                                        CallFunc_PlayAnimEx_ReturnValue;                   // 0x3C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FWeaponAnim                           K2Node_MakeStruct_WeaponAnim;                      // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_PlayWeaponAnimation_ReturnValue;          // 0x50(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Montage_IsPlaying_ReturnValue_3;          // 0x54(0x1)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
};

// 0xA9 (0xA9 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.CanUseTekAbility
struct ABuff_TekArmor_Shirt_Rework_C_CanUseTekAbility_Params
{
public:
	bool                                         bNotifyIfOutOfElement;                             // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bResult;                                           // 0x1(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_B112[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	char             ForestKaijuClass[0x30];                                  // 0x8(0x30)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	char IceKaijuClass[0x30];                                     // 0x38(0x30)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	bool                                         Ret_val;                                           // 0x68(0x1)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_CanUseTekAbility_bResult;                 // 0x69(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_B113[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_Conv_SoftClassReferenceToClass_ReturnValue; // 0x70(0x8)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UClass*                                CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1; // 0x78(0x8)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	class UClass*                                K2Node_ClassDynamicCast_AsPrimal_Buff;             // 0x80(0x8)(Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x88(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_B114[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_ClassDynamicCast_AsPrimal_Buff_1;           // 0x90(0x8)(Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         K2Node_ClassDynamicCast_bSuccess_1;                // 0x98(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Is_Restricted_Because_Of_Genesis_Map_restricted; // 0x99(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsCharacterHardAttached_ReturnValue;      // 0x9A(0x1)(ConstParm, BlueprintVisible, ZeroConstructor, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_HasBuff_ReturnValue;                      // 0x9B(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x9C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x9D(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x9E(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_HasBuff_ReturnValue_1;                    // 0x9F(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0xA0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0xA1(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0xA2(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_Not_PreBool_ReturnValue_5;                // 0xA3(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xA4(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0xA5(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0xA6(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0xA7(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_BooleanAND_ReturnValue_5;                 // 0xA8(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp, NonTransactional)
};

// 0xD4 (0xD4 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.UpdateThrusterFX
struct ABuff_TekArmor_Shirt_Rework_C_UpdateThrusterFX_Params
{
public:
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x0(0x8)(ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x8(0x1)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x9(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_B115[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABuff_TekArmor_C*                      CallFunc_Get_DefaultTekBuff_ref;                   // 0x10(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	class ABuff_TekArmor_Shirt_Rework_C*         K2Node_DynamicCast_AsBuff_Tek_Armor_Shirt_Rework;  // 0x18(0x8)(ConstParm, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_B116[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x28(0x18)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x40(0x18)(Edit, OutParm, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x58(0x18)(Edit, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue_1;        // 0x70(0x18)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x88(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x89(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_B117[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue_2;        // 0x90(0x18)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsPlayerUnderWater_result;                // 0xA8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	uint8                                        Pad_B118[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_2;       // 0xB0(0x18)(Edit, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsPlayerUnderWater_result_1;              // 0xC8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xC9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0xCA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xCB(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsThrusterActive_result;                  // 0xCC(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	bool                                         CallFunc_IsThrusterActive_result_1;                // 0xCD(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0xCE(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, Interp)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0xCF(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	float                                        CallFunc_SetPitchMultiplier_NewPitchMultiplier_ImplicitCast; // 0xD0(0x4)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x21 (0x21 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.BPDeactivated
struct ABuff_TekArmor_Shirt_Rework_C_BPDeactivated_Params
{
public:
	class AActor*                                ForInstigator;                                     // 0x0(0x8)(Edit, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	class APrimalCharacter*                      CallFunc_GetDefaultPlayer_ref;                     // 0x8(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x10(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UFPVWeaponAnimBP_Base_Carrying_C*      K2Node_DynamicCast_AsFPVWeapon_Anim_BP_Base_Carrying; // 0x18(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x31 (0x31 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.Reset Owning PlayerVariables
struct ABuff_TekArmor_Shirt_Rework_C_Reset_Owning_PlayerVariables_Params
{
public:
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_B119[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetDefaultObject_ReturnValue;             // 0x8(0x8)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	class ABuff_Base_C*                          K2Node_DynamicCast_AsBuff_Base;                    // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_B11A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetDefaultObject_ReturnValue_1;           // 0x20(0x8)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
	class APrimalCharacter*                      K2Node_DynamicCast_AsPrimal_Character;             // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
};

// 0x1C (0x1C - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.UpdateIsSwimming
struct ABuff_TekArmor_Shirt_Rework_C_UpdateIsSwimming_Params
{
public:
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x0(0x1)(ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_B11B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABuff_TekArmor_C*                      CallFunc_Get_DefaultTekBuff_ref;                   // 0x8(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsPlayerUnderWater_result;                // 0x10(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x11(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x12(0x1)(BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_B11C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_VariableSet_BuffTickServerMaxTime_ImplicitCast; // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        K2Node_VariableSet_BuffTickServerMinTime_ImplicitCast; // 0x18(0x4)(Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.ClampPlayerVelocity
struct ABuff_TekArmor_Shirt_Rework_C_ClampPlayerVelocity_Params
{
public:
	double                                       MaxVelocity;                                       // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	bool                                         CallFunc_IsTekArmorUsingAbility__result;           // 0x8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_B11D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x10(0x18)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x28(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0x30(0x18)(ConstParm, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x48(0x1)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_B11E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x50(0x18)(Edit, OutParm, DisableEditOnInstance, SubobjectReference)
};

// 0xAC (0xAC - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.UpdateTekShirtByState
struct ABuff_TekArmor_Shirt_Rework_C_UpdateTekShirtByState_Params
{
public:
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x0(0x8)(ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x8(0x1)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x9(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0xB(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0xC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xD(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0xE(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsTekArmorUsingAbility__result;           // 0xF(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_B11F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x18(0x18)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x30(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_B120[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0x38(0x18)(ConstParm, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x50(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_B121[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x58(0x18)(Edit, OutParm, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x70(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x78(0x1)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x79(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x7A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x7B(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x7C(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x7D(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x7E(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x7F(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x80(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x81(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0x82(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_IsPlayerUnderWater_result;                // 0x83(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x84(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_IsThrusterActive_result;                  // 0x85(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x86(0x1)(ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x87(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x88(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UFPVWeaponAnimBP_Base_Carrying_C*      K2Node_DynamicCast_AsFPVWeapon_Anim_BP_Base_Carrying; // 0x90(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x98(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue_1;        // 0x99(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	uint8                                        Pad_B122[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_VariableSet_AirControl_ImplicitCast;        // 0x9C(0x4)(Edit, ConstParm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	float                                        K2Node_VariableSet_AirControl_ImplicitCast_1;      // 0xA0(0x4)(Edit, ConstParm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference, Interp)
	float                                        CallFunc_FadeIn_FadeInDuration_ImplicitCast;       // 0xA4(0x4)(Edit, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	float                                        CallFunc_FadeOut_FadeOutDuration_ImplicitCast;     // 0xA8(0x4)(Edit, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, DuplicateTransient, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.OnRep_bIsUnderwater
struct ABuff_TekArmor_Shirt_Rework_C_OnRep_bIsUnderwater_Params
{
public:
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x0(0x8)(ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0xA(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xB(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_B123[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APrimalCharacter*                      CallFunc_GetDefaultPlayer_ref;                     // 0x10(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_IsThrusterActive_result;                  // 0x19(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1A(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_B124[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_VariableSet_MaxImpulseVelocityZ_ImplicitCast; // 0x1C(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.RestoreThrusterStateFromCurrentInputs
struct ABuff_TekArmor_Shirt_Rework_C_RestoreThrusterStateFromCurrentInputs_Params
{
public:
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x3 (0x3 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.ResetBoostWhenGrounded
struct ABuff_TekArmor_Shirt_Rework_C_ResetBoostWhenGrounded_Params
{
public:
	bool                                         CallFunc_Can_Element_Decrease_CanDecrease;         // 0x0(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsPlayerGrounded_result;                  // 0x1(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
};

// 0xA3 (0xA3 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.IsPlayerUnderWater
struct ABuff_TekArmor_Shirt_Rework_C_IsPlayerUnderWater_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x1(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_IsPlayerInWaterVolume_result;             // 0x2(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_B125[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_IsPlayerInWaterVolume_waterVolumeTopZ;    // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, GlobalConfig, InstancedReference, SubobjectReference)
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x10(0x8)(ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsPlayerWaterRunning_result;              // 0x18(0x1)(Edit, ExportObject, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	uint8                                        Pad_B126[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x20(0x18)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x38(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_B127[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x40(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x58(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, SubobjectReference)
	struct FVector                               CallFunc_SelectVector_ReturnValue;                 // 0x70(0x18)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector_X;                            // 0x88(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0x90(0x8)(ExportObject, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0x98(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0xA0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xA1(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xA2(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
};

// 0x90 (0x90 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.NetSetCurrentThrusterState
struct ABuff_TekArmor_Shirt_Rework_C_NetSetCurrentThrusterState_Params
{
public:
	enum class E_TekThrusterState                NewState;                                          // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x3(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_B128[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x10(0x18)(EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_B129[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_StaticGetTimeSince_ReturnValue;           // 0x2C(0x4)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x30(0x1)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_B12A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x38(0x8)(ConstParm, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue_1;       // 0x40(0x8)(ConstParm, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	float                                        CallFunc_StaticGetTimeSince_ReturnValue_1;         // 0x48(0x4)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x4C(0x1)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	uint8                                        Pad_B12B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x50(0x8)(ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x58(0x1)(ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsThrusterActive_result;                  // 0x59(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x5A(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x5B(0x1)(BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_B12C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x60(0x18)(EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsPlayerGrounded_result;                  // 0x78(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsPlayerInjured_result;                   // 0x79(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x7A(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_IsPlayerWaterRunning_result;              // 0x7B(0x1)(Edit, ExportObject, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	uint8                                        Pad_B12D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x80(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;    // 0x88(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
};

// 0x1D3 (0x1D3 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.BuffTickServer
struct ABuff_TekArmor_Shirt_Rework_C_BuffTickServer_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bShouldEnableUnderwaterHovering;                   // 0x4(0x1)(Edit, BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	uint8                                        Pad_B12E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CurrentJetImpulse;                                 // 0x8(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x20(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x21(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsPlayerInWaterVolume_result;             // 0x22(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_B12F[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_IsPlayerInWaterVolume_waterVolumeTopZ;    // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsTekArmorUsingAbility__result;           // 0x30(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_B130[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x38(0x8)(ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x40(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_B131[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x48(0x18)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              CallFunc_GetControlRotation_ReturnValue;           // 0x60(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector_X;                            // 0x78(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0x80(0x8)(ExportObject, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0x88(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x90(0x18)(ConstParm, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0xA8(0x1)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_B132[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Dot_VectorVector_ReturnValue;             // 0xB0(0x8)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xB8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0xB9(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_B133[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetVelocity_ReturnValue_1;                // 0xC0(0x18)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0xD8(0x18)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              CallFunc_GetControlRotation_ReturnValue_1;         // 0xF0(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_X_1;                          // 0x108(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Y_1;                          // 0x110(0x8)(ExportObject, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Z_1;                          // 0x118(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_Conv_RotatorToVector_ReturnValue_1;       // 0x120(0x18)(ConstParm, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Dot_VectorVector_ReturnValue_1;           // 0x138(0x8)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Dot_VectorVector_ReturnValue_2;           // 0x140(0x8)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x148(0x1)(ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_IsPlayerWaterRunning_result;              // 0x149(0x1)(Edit, ExportObject, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x14A(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x14B(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsThrusterActive_result;                  // 0x14C(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x14D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x14E(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
	uint8                                        Pad_B134[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APhysicsVolume*                        CallFunc_GetPhysicsVolume_ReturnValue;             // 0x150(0x8)(ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x158(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x159(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_B135[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x160(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;  // 0x168(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue_1;          // 0x169(0x1)(ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	uint8                                        Pad_B136[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x170(0x18)(Edit, OutParm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsPlayerUnderWater_result;                // 0x188(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	uint8                                        Pad_B137[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleFloat_ReturnValue;         // 0x190(0x8)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x198(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x1A0(0x18)(EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x1B8(0x18)(Edit, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1D0(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x1D1(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsPlayerGrounded_result;                  // 0x1D2(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x640 (0x640 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.JetpackBoostClient
struct ABuff_TekArmor_Shirt_Rework_C_JetpackBoostClient_Params
{
public:
	double                                       CurrentBoostScale;                                 // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	class UParticleSystem*                       CurrentBoostFX;                                    // 0x8(0x8)(Edit, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	class UAnimMontage*                          boostAnim;                                         // 0x10(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	bool                                         boostHitGround;                                    // 0x18(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	uint8                                        Pad_B138[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       NewVelocityZ;                                      // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x28(0x18)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x40(0x18)(BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x58(0x18)(Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class ABuff_TekArmor_C*                      CallFunc_Get_DefaultTekBuff_ref;                   // 0x70(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	class ABuff_TekArmor_Shirt_Rework_C*         K2Node_DynamicCast_AsBuff_Tek_Armor_Shirt_Rework;  // 0x78(0x8)(ConstParm, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x80(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_B139[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        Temp_object_Variable;                              // 0x88(0x10)(ConstParm, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x98(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_B13A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue;          // 0xA0(0x18)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	TArray<enum class EObjectTypeQuery>          K2Node_MakeArray_Array;                            // 0xB8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue_1;        // 0xC8(0x18)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0xE0(0x60)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakTransform_Location_1;                // 0x140(0x18)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FRotator                              CallFunc_BreakTransform_Rotation_1;                // 0x158(0x18)(BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_BreakTransform_Scale_1;                   // 0x170(0x18)(Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue_2;        // 0x188(0x18)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FVector                               CallFunc_GetUpVector_ReturnValue;                  // 0x1A0(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x1B8(0x18)(Edit, OutParm, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x1D0(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x1E8(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, SubobjectReference)
	struct FHitResult                            CallFunc_LineTraceSingleForObjects_OutHit;         // 0x200(0xF0)(ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_LineTraceSingleForObjects_ReturnValue;    // 0x2F0(0x1)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_B13B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x2F8(0x18)(EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x310(0x18)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x328(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x329(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_B13C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time;                      // 0x32C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x330(0x4)(ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_B13D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x338(0x18)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x350(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x368(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x380(0x18)(ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Config, SubobjectReference)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x398(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x3A0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x3A8(0x8)(ConstParm, DisableEditOnTemplate, Config, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x3B0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x3B8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x3C0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x3C4(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x3C8(0x4)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_B13E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x3D0(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x3E8(0x18)(Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, SubobjectReference)
	struct FHitResult                            CallFunc_VTraceSingleBP_OutHit;                    // 0x400(0xF0)(ConstParm, BlueprintReadOnly, ZeroConstructor, EditConst, SubobjectReference)
	bool                                         CallFunc_VTraceSingleBP_ReturnValue;               // 0x4F0(0x1)(ConstParm, Net, ZeroConstructor, EditConst, SubobjectReference)
	uint8                                        Pad_B13F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APhysicsVolume*                        K2Node_DynamicCast_AsPhysics_Volume;               // 0x4F8(0x8)(Edit, ConstParm, Net, EditFixedSize, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x500(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BreakHitResult_bBlockingHit_1;            // 0x501(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap_1;         // 0x502(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_B140[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time_1;                    // 0x504(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	float                                        CallFunc_BreakHitResult_Distance_1;                // 0x508(0x4)(ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_B141[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakHitResult_Location_1;                // 0x510(0x18)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint_1;             // 0x528(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_BreakHitResult_Normal_1;                  // 0x540(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal_1;            // 0x558(0x18)(ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat_1;                 // 0x570(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	class AActor*                                CallFunc_BreakHitResult_HitActor_1;                // 0x578(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent_1;            // 0x580(0x8)(ConstParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	class FName                                  CallFunc_BreakHitResult_HitBoneName_1;             // 0x588(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	class FName                                  CallFunc_BreakHitResult_BoneName_1;                // 0x590(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	int32                                        CallFunc_BreakHitResult_HitItem_1;                 // 0x598(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	int32                                        CallFunc_BreakHitResult_ElementIndex_1;            // 0x59C(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	int32                                        CallFunc_BreakHitResult_FaceIndex_1;               // 0x5A0(0x4)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	uint8                                        Pad_B142[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakHitResult_TraceStart_1;              // 0x5A8(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd_1;                // 0x5C0(0x18)(Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x5D8(0x8)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue_1;     // 0x5E0(0x8)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x5E8(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x5E9(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, Interp)
	uint8                                        Pad_B143[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue_1;          // 0x5F0(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x608(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_2;           // 0x620(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue_2;     // 0x638(0x8)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
};

// 0xE8 (0xE8 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.JetpackBoost_Server
struct ABuff_TekArmor_Shirt_Rework_C_JetpackBoost_Server_Params
{
public:
	double                                       NewVelocityZ;                                      // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x8(0x8)(ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsPlayerWaterRunning_result;              // 0x10(0x1)(Edit, ExportObject, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	uint8                                        Pad_B144[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x18(0x18)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_GetPendingMovementInputVector_ReturnValue; // 0x30(0x18)(ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	double                                       CallFunc_BreakVector_X;                            // 0x48(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0x50(0x8)(ExportObject, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0x58(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_PlayAnimEx_ReturnValue;                   // 0x60(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x64(0x1)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_IsSubmerged_ReturnValue;                  // 0x65(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x66(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_IsTekArmorUsingAbility__result;           // 0x67(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x68(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_B145[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x70(0x18)(Edit, OutParm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x88(0x1)(ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_B146[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x90(0x8)(Edit, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x98(0x18)(EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0xB0(0x18)(Edit, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0xC8(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0xE0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
};

// 0xB9 (0xB9 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.Update Thruster Impulse
struct ABuff_TekArmor_Shirt_Rework_C_Update_Thruster_Impulse_Params
{
public:
	struct FVector                               Local_newFallVelocity;                             // 0x0(0x18)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	double                                       NewFallVelocityZ;                                  // 0x18(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x21(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_NotEqual_VectorVector_ReturnValue;        // 0x22(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsThrusterActive_result;                  // 0x23(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x24(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x25(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_B147[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x28(0x18)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x40(0x18)(EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	double                                       CallFunc_BreakVector_X;                            // 0x58(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0x60(0x8)(ExportObject, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0x68(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x70(0x1)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_B148[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Abs_ReturnValue;                          // 0x78(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x80(0x8)(Edit, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x88(0x1)(ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_B149[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x90(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x98(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_FMax_ReturnValue;                         // 0xA0(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_FMax_ReturnValue_1;                       // 0xA8(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0xB0(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0xB8(0x1)(ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

// 0x6 (0x6 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.IsThrusterActive
struct ABuff_TekArmor_Shirt_Rework_C_IsThrusterActive_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x4(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x5(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.OnRep_CurrentThrusterState
struct ABuff_TekArmor_Shirt_Rework_C_OnRep_CurrentThrusterState_Params
{
public:
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
};

// 0x11 (0x11 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.SetCastedArmorPieceRef
struct ABuff_TekArmor_Shirt_Rework_C_SetCastedArmorPieceRef_Params
{
public:
	class UPrimalItemArmor_Base_Tek_C*           CallFunc_GetRelatedTekArmorRef_tekArmorRef;        // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	class UPrimalItemArmor_TekShirt_C*           K2Node_DynamicCast_AsPrimal_Item_Armor_Tek_Shirt;  // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
};

// 0x574 (0x574 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.BuffTickClient
struct ABuff_TekArmor_Shirt_Rework_C_BuffTickClient_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x4(0x1)(ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_B14A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x8(0x8)(ConstParm, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsTimeSince_ReturnValue;                  // 0x10(0x1)(ConstParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsAbilityValid_OutValid;                  // 0x11(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_B14B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x18(0x18)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	class ABuff_TekArmor_C*                      CallFunc_Get_DefaultTekBuff_ref;                   // 0x30(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue_1;        // 0x38(0x18)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_IsTekChargeThrusting_result;              // 0x50(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	bool                                         CallFunc_AreChargeThrustingAnimsPlaying_result;    // 0x51(0x1)(Edit, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x52(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x53(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsPlayerUnderWater_result;                // 0x54(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x55(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x56(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x57(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	class APhysicsVolume*                        CallFunc_GetPhysicsVolume_ReturnValue;             // 0x58(0x8)(ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsTekArmorUsingAbility__result;           // 0x60(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x61(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x62(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x63(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x64(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsPlayerGrounded_result;                  // 0x65(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x66(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_B14C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x68(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	TArray<enum class EObjectTypeQuery>          K2Node_MakeArray_Array;                            // 0x70(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, SubobjectReference)
	TArray<class AActor*>                        K2Node_MakeArray_Array_1;                          // 0x80(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x90(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_SelectFloat_ReturnValue_1;                // 0x98(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0xA0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_GetActorBounds_Origin;                    // 0xA8(0x18)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_GetActorBounds_BoxExtent;                 // 0xC0(0x18)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue_2;        // 0xD8(0x18)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_BreakVector_X;                            // 0xF0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector_Y;                            // 0xF8(0x8)(ExportObject, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector_Z;                            // 0x100(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_BreakVector_X_1;                          // 0x108(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Y_1;                          // 0x110(0x8)(ExportObject, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_BreakVector_Z_1;                          // 0x118(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x120(0x18)(EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x138(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x140(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x158(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x160(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x168(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue_3;        // 0x170(0x18)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
	bool                                         CallFunc_IsThrusterActive_result;                  // 0x188(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	bool                                         CallFunc_IsPlayerUnderWater_result_1;              // 0x189(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x18A(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x18B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_B14D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_SelectVector_ReturnValue;                 // 0x190(0x18)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_SelectVector_ReturnValue_1;               // 0x1A8(0x18)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0x1C0(0x60)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_SelectFloat_ReturnValue_2;                // 0x220(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x228(0x18)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x240(0x18)(BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x258(0x18)(Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_SelectFloat_ReturnValue_3;                // 0x270(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
	struct FVector                               CallFunc_GetUpVector_ReturnValue;                  // 0x278(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               CallFunc_SelectVector_ReturnValue_2;               // 0x290(0x18)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x2A8(0x18)(Edit, OutParm, DisableEditOnInstance, SubobjectReference)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x2C0(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_2;           // 0x2D8(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_BreakVector_X_2;                          // 0x2F0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_BreakVector_Y_2;                          // 0x2F8(0x8)(ExportObject, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_BreakVector_Z_2;                          // 0x300(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	struct FHitResult                            CallFunc_LineTraceSingleForObjects_OutHit;         // 0x308(0xF0)(ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_LineTraceSingleForObjects_ReturnValue;    // 0x3F8(0x1)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x3F9(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x3FA(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x3FB(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	float                                        CallFunc_BreakHitResult_Time;                      // 0x3FC(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x400(0x4)(ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_B14E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x408(0x18)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x420(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x438(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x450(0x18)(ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Config, SubobjectReference)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x468(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x470(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x478(0x8)(ConstParm, DisableEditOnTemplate, Config, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x480(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x488(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x490(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x494(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x498(0x4)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_B14F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x4A0(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, SubobjectReference)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x4B8(0x18)(Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x4D0(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_B150[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APhysicsVolume*                        K2Node_DynamicCast_AsPhysics_Volume;               // 0x4D8(0x8)(Edit, ConstParm, Net, EditFixedSize, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x4E0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue_1;     // 0x4E1(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;  // 0x4E2(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_B151[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_LinePlaneIntersection_OriginNormal_T;     // 0x4E4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, DuplicateTransient, SubobjectReference)
	struct FVector                               CallFunc_LinePlaneIntersection_OriginNormal_Intersection; // 0x4E8(0x18)(Edit, BlueprintVisible, ExportObject, OutParm, Transient, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	bool                                         CallFunc_LinePlaneIntersection_OriginNormal_ReturnValue; // 0x500(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x501(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	uint8                                        Pad_B152[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x508(0x8)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x510(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x511(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x512(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_IsFirstPerson_ReturnValue;                // 0x513(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsPlayerGrounded_result_1;                // 0x514(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x515(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x516(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, NonTransactional)
	uint8                                        Pad_B153[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue_4;                // 0x518(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x520(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_B154[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue_4;        // 0x528(0x18)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_CanUseTekAbility_bResult;                 // 0x540(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Can_Element_Decrease_CanDecrease;         // 0x541(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_B155[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x544(0x4)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x548(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_B156[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SelectInt_ReturnValue_1;                  // 0x54C(0x4)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_5;                 // 0x550(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_IsPlayerUnderWater_result_2;              // 0x551(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue_6;                 // 0x552(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	uint8                                        Pad_B157[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_SelectInt_ReturnValue_2;                  // 0x554(0x4)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_IsThrusterActive_result_1;                // 0x558(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference, Interp)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x559(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_B158[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Client_Consume_Element_After_Time_deltaTime_ImplicitCast; // 0x560(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        K2Node_VariableSet_BuffTickClientMinTime_ImplicitCast; // 0x568(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	float                                        K2Node_VariableSet_BuffTickClientMaxTime_ImplicitCast; // 0x56C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	float                                        CallFunc_ClientStartCameraShake_Scale_ImplicitCast; // 0x570(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
};

// 0x37 (0x37 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.Client_SetThrusterState
struct ABuff_TekArmor_Shirt_Rework_C_Client_SetThrusterState_Params
{
public:
	enum class E_TekThrusterState                NewState;                                          // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Is_Restricted_Because_Of_Genesis_Map_restricted; // 0x2(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_B159[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(Net, EditFixedSize, OutParm, ReturnParm, Config, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x19(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1A(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_IsPlayerInjured_result;                   // 0x1B(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	bool                                         CallFunc_CanUseTekAbility_bResult;                 // 0x1C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsPlayerGrounded_result;                  // 0x1D(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x1E(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1F(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	class FString                                CallFunc_MakeLiteralString_ReturnValue;            // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x31(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x32(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Can_Element_Decrease_CanDecrease;         // 0x33(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Can_Element_Decrease_CanDecrease_1;       // 0x34(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x35(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x36(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
};

// 0xB0 (0xB0 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.JetpackBoost_Start
struct ABuff_TekArmor_Shirt_Rework_C_JetpackBoost_Start_Params
{
public:
	bool                                         bBoostHitGround;                                   // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	uint8                                        Pad_B15A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               GroundFXSpawnLocation;                             // 0x8(0x18)(Edit, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	double                                       NewZVelocity;                                      // 0x20(0x8)(Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	bool                                         CallFunc_IsPlayerUnderWater_result;                // 0x28(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	uint8                                        Pad_B15B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x30(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	float                                        CallFunc_GetSimpleMontageDuration_ReturnValue;     // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	uint8                                        Pad_B15C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x40(0x8)(ConstParm, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Add_DoubleFloat_ReturnValue;              // 0x48(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Add_DoubleFloat_ReturnValue_1;            // 0x50(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x58(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x59(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_B15D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_MakeLiteralString_ReturnValue;            // 0x60(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x70(0x8)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         CallFunc_Can_Element_Decrease_CanDecrease;         // 0x78(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_B15E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_CastToPlayerController_ReturnValue;       // 0x80(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x88(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_B15F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue_1;       // 0x90(0x8)(ConstParm, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	float                                        CallFunc_TimeSince_ReturnValue;                    // 0x98(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x9C(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x9D(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x9E(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_B160[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Add_DoubleFloat_B_ImplicitCast;           // 0xA0(0x4)(Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_B161[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0xA8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_Jump_K2Node_InputActionEvent_4
struct ABuff_TekArmor_Shirt_Rework_C_InpActEvt_Jump_K2Node_InputActionEvent_4_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance)
};

// 0x18 (0x18 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_Jump_K2Node_InputActionEvent_3
struct ABuff_TekArmor_Shirt_Rework_C_InpActEvt_Jump_K2Node_InputActionEvent_3_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance)
};

// 0x18 (0x18 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_Run_K2Node_InputActionEvent_2
struct ABuff_TekArmor_Shirt_Rework_C_InpActEvt_Run_K2Node_InputActionEvent_2_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance)
};

// 0x18 (0x18 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_Run_K2Node_InputActionEvent_1
struct ABuff_TekArmor_Shirt_Rework_C_InpActEvt_Run_K2Node_InputActionEvent_1_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance)
};

// 0x18 (0x18 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_RunToggle_K2Node_InputActionEvent_0
struct ABuff_TekArmor_Shirt_Rework_C_InpActEvt_RunToggle_K2Node_InputActionEvent_0_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance)
};

// 0x18 (0x18 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_1
struct ABuff_TekArmor_Shirt_Rework_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_1_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance)
};

// 0x18 (0x18 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_0
struct ABuff_TekArmor_Shirt_Rework_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_0_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance)
};

// 0x1 (0x1 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.Server_SetThrusterState
struct ABuff_TekArmor_Shirt_Rework_C_Server_SetThrusterState_Params
{
public:
	enum class E_TekThrusterState                NewState;                                          // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.Server_UpdateJetpackVFXOffset
struct ABuff_TekArmor_Shirt_Rework_C_Server_UpdateJetpackVFXOffset_Params
{
public:
	struct FTransform                            NewOffset;                                         // 0x0(0x60)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
};

// 0x218 (0x218 - 0x0)
// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.ExecuteUbergraph_Buff_TekArmor_Shirt_Rework
struct ABuff_TekArmor_Shirt_Rework_C_ExecuteUbergraph_Buff_TekArmor_Shirt_Rework_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, ConstParm, Net, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_B162[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  Temp_struct_Variable;                              // 0x8(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	struct FKey                                  K2Node_InputActionEvent_Key;                       // 0x20(0x18)(Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	struct FKey                                  K2Node_InputKeyEvent_Key_1;                        // 0x38(0x18)(Edit, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
	struct FKey                                  K2Node_InputKeyEvent_Key;                          // 0x50(0x18)(Edit, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	struct FKey                                  Temp_struct_Variable_1;                            // 0x68(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
	struct FKey                                  K2Node_InputActionEvent_Key_3;                     // 0x80(0x18)(Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional)
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x98(0x8)(ConstParm, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	enum class E_TekThrusterState                K2Node_CustomEvent_newState;                       // 0xA0(0x1)(BlueprintVisible, Parm, ReturnParm, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xA1(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         CallFunc_IsPlayerGrounded_result;                  // 0xA2(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_B163[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_4;                     // 0xA8(0x18)(Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xC0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_B164[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_1;                     // 0xC8(0x18)(Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xE0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_B165[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_2;                     // 0xE8(0x18)(Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x100(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x101(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x102(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x103(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_B166[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x108(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_IsPlayerInjured_result;                   // 0x110(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	uint8                                        Pad_B167[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x118(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_IsPlayerGrounded_result_1;                // 0x120(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x121(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, NonTransactional)
	uint8                                        Pad_B168[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AShooterCharacter*                     CallFunc_GetRef_OwningPlayer_player;               // 0x128(0x8)(ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_CanUseTekAbility_bResult;                 // 0x130(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x131(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
	uint8                                        Pad_B169[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  Temp_struct_Variable_2;                            // 0x138(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_5;                // 0x150(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, Interp, NonTransactional)
	bool                                         CallFunc_CanUseTekAbility_bResult_1;               // 0x151(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	bool                                         CallFunc_CanUseTekAbility_bResult_2;               // 0x152(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Is_Restricted_Because_Of_Genesis_Map_restricted; // 0x153(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         CallFunc_IsPlayerGrounded_result_2;                // 0x154(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_6;                // 0x155(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
	bool                                         CallFunc_Is_Restricted_Because_Of_Genesis_Map_restricted_1; // 0x156(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_B16A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x158(0x8)(Net, EditFixedSize, OutParm, ReturnParm, Config, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x160(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x168(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	uint8                                        Pad_B16B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue_1;       // 0x170(0x8)(ConstParm, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
	bool                                         CallFunc_Not_PreBool_ReturnValue_7;                // 0x178(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, EditorOnly)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x179(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	uint8                                        Pad_B16C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_TimeSince_ReturnValue;                    // 0x17C(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x180(0x1)(ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x181(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x182(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	uint8                                        Pad_B16D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_TimeSince_ReturnValue_1;                  // 0x184(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference, Interp)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x188(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x189(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
	uint8                                        Pad_B16E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            K2Node_CustomEvent_NewOffset;                      // 0x190(0x60)(ExportObject, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
	float                                        CallFunc_RetriggerableDelay_Duration_ImplicitCast; // 0x1F0(0x4)(ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CallFunc_Delay_Duration_ImplicitCast;              // 0x1F4(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_RetriggerableDelay_Duration_ImplicitCast_1; // 0x1F8(0x4)(ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
	float                                        CallFunc_RetriggerableDelay_Duration_ImplicitCast_2; // 0x1FC(0x4)(ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
	double                                       CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast; // 0x200(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x208(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, SubobjectReference)
	double                                       CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x210(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

}
}


