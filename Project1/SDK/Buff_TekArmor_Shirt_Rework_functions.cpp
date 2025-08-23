#include "pch.h"
//// Dumped with Dumper-7!

////---------------------------------------------------------------------------------------------------------------------
//// FUNCTIONS
////---------------------------------------------------------------------------------------------------------------------
//
//
//// BlueprintGeneratedClass Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C
//// (Actor)
//
//class UClass* ABuff_TekArmor_Shirt_Rework_C::StaticClass()
//{
//	static class UClass* Clss = nullptr;
//
//	if (!Clss)
//		Clss = UObject::FindClass("Buff_TekArmor_Shirt_Rework_C");
//
//	return Clss;
//}
//
//
//// Buff_TekArmor_Shirt_Rework_C Buff_TekArmor_Shirt_Rework.Default__Buff_TekArmor_Shirt_Rework_C
//// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)
//
////class ABuff_TekArmor_Shirt_Rework_C* ABuff_TekArmor_Shirt_Rework_C::GetDefaultObj()
////{
////	static class ABuff_TekArmor_Shirt_Rework_C* Default = nullptr;
////
////	if (!Default)
////		Default = static_cast<ABuff_TekArmor_Shirt_Rework_C*>(ABuff_TekArmor_Shirt_Rework_C::StaticClass()->DefaultObject);
////
////	return Default;
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.UpdateMaxSpeedForUnderwaterHovering
//// (Public, BlueprintCallable, BlueprintEvent)
//// Parameters:
//// bool                               CallFunc_IsTekBuffDisabled_bIsDisabled                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
//// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_IsPlayerUnderWater_result                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// bool                               CallFunc_IsPlayerUnderWater_result_1                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference, Interp)
//// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// bool                               CallFunc_BooleanAND_ReturnValue                                  (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
//// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
//// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
//// float                              K2Node_VariableSet_SubmergedMaxSpeedModifier_ImplicitCast        (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//
////bool ABuff_TekArmor_Shirt_Rework_C::UpdateMaxSpeedForUnderwaterHovering(bool* CallFunc_Not_PreBool_ReturnValue, float* K2Node_VariableSet_SubmergedMaxSpeedModifier_ImplicitCast)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "UpdateMaxSpeedForUnderwaterHovering");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_UpdateMaxSpeedForUnderwaterHovering_Params Parms{};
////
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	if (CallFunc_Not_PreBool_ReturnValue != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue = Parms.CallFunc_Not_PreBool_ReturnValue;
////
////	if (K2Node_VariableSet_SubmergedMaxSpeedModifier_ImplicitCast != nullptr)
////		*K2Node_VariableSet_SubmergedMaxSpeedModifier_ImplicitCast = Parms.K2Node_VariableSet_SubmergedMaxSpeedModifier_ImplicitCast;
////
////	return Parms.ReturnValue;
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.SetUnderwaterHovering
//// (Public, BlueprintCallable, BlueprintEvent)
//// Parameters:
//// bool                               bNewUnderwaterHovering                                           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
//// bool                               CallFunc_IsServer_ReturnValue                                    (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
//// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
////
////bool ABuff_TekArmor_Shirt_Rework_C::SetUnderwaterHovering(bool CallFunc_IsServer_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "SetUnderwaterHovering");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_SetUnderwaterHovering_Params Parms{};
////
////	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
////	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	return Parms.ReturnValue;
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.RegulateScaleFX
//// (Public, BlueprintCallable, BlueprintEvent)
//// Parameters:
//// class UParticleSystemComponent*    Psc                                                              (Edit, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, SubobjectReference)
//// double                             CallFunc_BreakVector_X                                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
//// double                             CallFunc_BreakVector_Y                                           (ExportObject, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
//// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
//// double                             CallFunc_Abs_ReturnValue                                         (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
//// double                             CallFunc_Abs_ReturnValue_1                                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
//// double                             CallFunc_Abs_ReturnValue_2                                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
//// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
//
////class UParticleSystemComponent* ABuff_TekArmor_Shirt_Rework_C::RegulateScaleFX(double* CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double* CallFunc_BreakVector_Z, double* CallFunc_Abs_ReturnValue, double* CallFunc_Abs_ReturnValue_1, double* CallFunc_Abs_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "RegulateScaleFX");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_RegulateScaleFX_Params Parms{};
////
////	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
////	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	if (CallFunc_BreakVector_X != nullptr)
////		*CallFunc_BreakVector_X = Parms.CallFunc_BreakVector_X;
////
////	if (CallFunc_BreakVector_Z != nullptr)
////		*CallFunc_BreakVector_Z = Parms.CallFunc_BreakVector_Z;
////
////	if (CallFunc_Abs_ReturnValue != nullptr)
////		*CallFunc_Abs_ReturnValue = Parms.CallFunc_Abs_ReturnValue;
////
////	if (CallFunc_Abs_ReturnValue_1 != nullptr)
////		*CallFunc_Abs_ReturnValue_1 = Parms.CallFunc_Abs_ReturnValue_1;
////
////	if (CallFunc_Abs_ReturnValue_2 != nullptr)
////		*CallFunc_Abs_ReturnValue_2 = Parms.CallFunc_Abs_ReturnValue_2;
////
////	return Parms.ReturnValue;
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.ShouldUseAutonomousCorrectionOffset
//// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
//// Parameters:
//// bool                               ReturnValue                                                      (Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
//// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
//// bool                               CallFunc_IsThrusterActive_result                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
//// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_BooleanAND_ReturnValue                                  (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
//
////bool ABuff_TekArmor_Shirt_Rework_C::ShouldUseAutonomousCorrectionOffset(bool* CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "ShouldUseAutonomousCorrectionOffset");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_ShouldUseAutonomousCorrectionOffset_Params Parms{};
////
////	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	if (CallFunc_Not_PreBool_ReturnValue != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue = Parms.CallFunc_Not_PreBool_ReturnValue;
////
////	return Parms.ReturnValue;
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.HideBoostIcon
//// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
//// Parameters:
//// bool                               ShouldSet                                                        (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               WithValue                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//// bool                               CallFunc_Can_Element_Decrease_CanDecrease                        (ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
//// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//
////bool ABuff_TekArmor_Shirt_Rework_C::HideBoostIcon(bool* WithValue, bool CallFunc_Can_Element_Decrease_CanDecrease, bool* CallFunc_Not_PreBool_ReturnValue)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "HideBoostIcon");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_HideBoostIcon_Params Parms{};
////
////	Parms.CallFunc_Can_Element_Decrease_CanDecrease = CallFunc_Can_Element_Decrease_CanDecrease;
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	if (WithValue != nullptr)
////		*WithValue = Parms.WithValue;
////
////	if (CallFunc_Not_PreBool_ReturnValue != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue = Parms.CallFunc_Not_PreBool_ReturnValue;
////
////	return Parms.ReturnValue;
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.SetJetpackOffset
//// (Public, BlueprintCallable, BlueprintEvent)
//// Parameters:
//// struct FTransform                  AddTransform                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
////
////void ABuff_TekArmor_Shirt_Rework_C::SetJetpackOffset(const struct FTransform& AddTransform)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "SetJetpackOffset");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_SetJetpackOffset_Params Parms{};
////
////	Parms.AddTransform = AddTransform;
////
////	UObject::ProcessEvent(Func, &Parms);
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.OnRep_JetPackVFXOffset
//// (HasDefaults, BlueprintCallable, BlueprintEvent)
//// Parameters:
//// bool                               CallFunc_IsServer_ReturnValue                                    (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
//// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, SubobjectReference)
//// struct FVector                     CallFunc_BreakTransform_Location                                 (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
//// struct FVector                     CallFunc_BreakTransform_Scale                                    (Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
//// struct FVector                     CallFunc_BreakTransform_Location_1                               (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
//// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
//// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
//// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (Edit, OutParm, DisableEditOnInstance, SubobjectReference)
//// struct FRotator                    CallFunc_Multiply_RotatorFloat_ReturnValue                       (Edit, ExportObject, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
//// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (Edit, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
//// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
//// struct FVector                     CallFunc_BreakTransform_Location_2                               (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
//// struct FRotator                    CallFunc_BreakTransform_Rotation_2                               (BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
//// struct FVector                     CallFunc_BreakTransform_Scale_2                                  (Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
//// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue                     (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_EqualEqual_RotatorRotator_ReturnValue                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue_1                   (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
//// bool                               CallFunc_BooleanAND_ReturnValue                                  (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
//// struct FHitResult                  CallFunc_K2_AddLocalTransform_SweepHitResult                     (ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// struct FHitResult                  CallFunc_K2_AddLocalTransform_SweepHitResult_1                   (ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference, Interp)
////
////struct FHitResult ABuff_TekArmor_Shirt_Rework_C::OnRep_JetPackVFXOffset(bool CallFunc_IsServer_ReturnValue, bool* CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FVector& CallFunc_BreakTransform_Location_1, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, struct FRotator* CallFunc_Multiply_RotatorFloat_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_2)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "OnRep_JetPackVFXOffset");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_OnRep_JetPackVFXOffset_Params Parms{};
////
////	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
////	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
////	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
////	Parms.CallFunc_BreakTransform_Location_2 = CallFunc_BreakTransform_Location_2;
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	if (CallFunc_IsDedicatedServer_ReturnValue != nullptr)
////		*CallFunc_IsDedicatedServer_ReturnValue = Parms.CallFunc_IsDedicatedServer_ReturnValue;
////
////	if (CallFunc_Multiply_VectorFloat_ReturnValue != nullptr)
////		*CallFunc_Multiply_VectorFloat_ReturnValue = std::move(Parms.CallFunc_Multiply_VectorFloat_ReturnValue);
////
////	if (CallFunc_Multiply_RotatorFloat_ReturnValue != nullptr)
////		*CallFunc_Multiply_RotatorFloat_ReturnValue = std::move(Parms.CallFunc_Multiply_RotatorFloat_ReturnValue);
////
////	if (CallFunc_Multiply_VectorFloat_ReturnValue_1 != nullptr)
////		*CallFunc_Multiply_VectorFloat_ReturnValue_1 = std::move(Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1);
////
////	return Parms.ReturnValue;
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.OnInputsPrevented
//// (Public, BlueprintCallable, BlueprintEvent)
//// Parameters:
//// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
//
////bool ABuff_TekArmor_Shirt_Rework_C::OnInputsPrevented(bool* CallFunc_Not_PreBool_ReturnValue)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "OnInputsPrevented");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_OnInputsPrevented_Params Parms{};
////
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	if (CallFunc_Not_PreBool_ReturnValue != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue = Parms.CallFunc_Not_PreBool_ReturnValue;
////
////	return Parms.ReturnValue;
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.BPOverrideCharacterNewFallVelocity
//// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
//// Parameters:
//// struct FVector                     InitialVelocity                                                  (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
//// struct FVector                     Gravity                                                          (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance)
//// float                              DeltaTime                                                        (BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
//// struct FVector                     ReturnValue                                                      (Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
//// struct FVector                     CallFunc_BPOverrideCharacterNewFallVelocity_ReturnValue          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//
////struct FVector ABuff_TekArmor_Shirt_Rework_C::BPOverrideCharacterNewFallVelocity(const struct FVector& InitialVelocity, float DeltaTime)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "BPOverrideCharacterNewFallVelocity");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_BPOverrideCharacterNewFallVelocity_Params Parms{};
////
////	Parms.InitialVelocity = InitialVelocity;
////	Parms.DeltaTime = DeltaTime;
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	return Parms.ReturnValue;
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.Clamp LocationZ
//// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
//// Parameters:
//// bool                               CallFunc_IsServer_ReturnValue                                    (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
//// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// double                             CallFunc_BreakVector_X                                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
//// double                             CallFunc_BreakVector_Y                                           (ExportObject, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
//// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
//// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
//// class AWorldSettings*              CallFunc_GetWorldSettings_ReturnValue                            (Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//// class APrimalWorldSettings*        K2Node_DynamicCast_AsPrimal_World_Settings                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, SubobjectReference)
//// bool                               K2Node_DynamicCast_bSuccess                                      (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
//// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
//// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
//// double                             CallFunc_Greater_DoubleDouble_B_ImplicitCast                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// double                             CallFunc_MakeVector_Z_ImplicitCast                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
//// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
//
////double ABuff_TekArmor_Shirt_Rework_C::Clamp_LocationZ(bool CallFunc_IsServer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double* CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double* CallFunc_BreakVector_Z, class UWorld** CallFunc_K2_GetWorld_ReturnValue, class APrimalWorldSettings** K2Node_DynamicCast_AsPrimal_World_Settings, const struct FVector& CallFunc_MakeVector_ReturnValue, struct FHitResult* CallFunc_K2_SetActorLocation_SweepHitResult, bool* CallFunc_K2_SetActorLocation_ReturnValue, double CallFunc_MakeVector_Z_ImplicitCast)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "Clamp LocationZ");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_Clamp_LocationZ_Params Parms{};
////
////	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
////	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
////	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
////	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
////	Parms.CallFunc_MakeVector_Z_ImplicitCast = CallFunc_MakeVector_Z_ImplicitCast;
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	if (CallFunc_BreakVector_X != nullptr)
////		*CallFunc_BreakVector_X = Parms.CallFunc_BreakVector_X;
////
////	if (CallFunc_BreakVector_Z != nullptr)
////		*CallFunc_BreakVector_Z = Parms.CallFunc_BreakVector_Z;
////
////	if (CallFunc_K2_GetWorld_ReturnValue != nullptr)
////		*CallFunc_K2_GetWorld_ReturnValue = Parms.CallFunc_K2_GetWorld_ReturnValue;
////
////	if (K2Node_DynamicCast_AsPrimal_World_Settings != nullptr)
////		*K2Node_DynamicCast_AsPrimal_World_Settings = Parms.K2Node_DynamicCast_AsPrimal_World_Settings;
////
////	if (CallFunc_K2_SetActorLocation_SweepHitResult != nullptr)
////		*CallFunc_K2_SetActorLocation_SweepHitResult = std::move(Parms.CallFunc_K2_SetActorLocation_SweepHitResult);
////
////	if (CallFunc_K2_SetActorLocation_ReturnValue != nullptr)
////		*CallFunc_K2_SetActorLocation_ReturnValue = Parms.CallFunc_K2_SetActorLocation_ReturnValue;
////
////	return Parms.ReturnValue;
////
////}
////
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.IsPlayerInWater
//// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
//// Parameters:
//// bool                               Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst)
//// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// class APhysicsVolume*              CallFunc_GetPhysicsVolume_ReturnValue                            (ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
////
////class APhysicsVolume* ABuff_TekArmor_Shirt_Rework_C::IsPlayerInWater(bool Result, class AShooterCharacter* CallFunc_GetRef_OwningPlayer_player)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "IsPlayerInWater");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_IsPlayerInWater_Params Parms{};
////
////	Parms.Result = Result;
////	Parms.CallFunc_GetRef_OwningPlayer_player = CallFunc_GetRef_OwningPlayer_player;
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	return Parms.ReturnValue;
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.IsTekChargeThrusting
//// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
//// Parameters:
//// bool                               Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst)
//// bool                               CallFunc_IsTekArmorUsingAbility__result                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_Greater_ByteByte_ReturnValue                            (Edit, BlueprintVisible, EditFixedSize, GlobalConfig, InstancedReference, SubobjectReference)
//// bool                               CallFunc_BooleanAND_ReturnValue                                  (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
////
////bool ABuff_TekArmor_Shirt_Rework_C::IsTekChargeThrusting(bool Result, bool CallFunc_Greater_ByteByte_ReturnValue)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "IsTekChargeThrusting");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_IsTekChargeThrusting_Params Parms{};
////
////	Parms.Result = Result;
////	Parms.CallFunc_Greater_ByteByte_ReturnValue = CallFunc_Greater_ByteByte_ReturnValue;
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	return Parms.ReturnValue;
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.AreChargeThrustingAnimsPlaying
//// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
//// Parameters:
//// bool                               CleanUpAnims                                                     (ConstParm, Net, Parm, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
//// bool                               Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst)
//// bool                               RetVal                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//// bool                               CallFunc_IsTekArmorUsingAbility__result                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
//// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
//// class UAnimMontage*                CallFunc_GetOverridenMontage_ReturnValue                         (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_Montage_IsPlaying_ReturnValue                           (Edit, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_Montage_IsPlaying_ReturnValue_1                         (Edit, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
////
////bool ABuff_TekArmor_Shirt_Rework_C::AreChargeThrustingAnimsPlaying(bool Result, bool* CallFunc_Not_PreBool_ReturnValue, class AShooterCharacter* CallFunc_GetRef_OwningPlayer_player, class UAnimMontage** CallFunc_GetOverridenMontage_ReturnValue)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "AreChargeThrustingAnimsPlaying");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_AreChargeThrustingAnimsPlaying_Params Parms{};
////
////	Parms.Result = Result;
////	Parms.CallFunc_GetRef_OwningPlayer_player = CallFunc_GetRef_OwningPlayer_player;
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	if (CallFunc_Not_PreBool_ReturnValue != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue = Parms.CallFunc_Not_PreBool_ReturnValue;
////
////	if (CallFunc_GetOverridenMontage_ReturnValue != nullptr)
////		*CallFunc_GetOverridenMontage_ReturnValue = Parms.CallFunc_GetOverridenMontage_ReturnValue;
////
////	return Parms.ReturnValue;
////
////}
////
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.IsPlayerInjured
//// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
//// Parameters:
//// bool                               Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst)
//// class UPrimalCharacterStatusComponent*CallFunc_GetCharacterStatusComponent_ReturnValue                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_IsInStatusState_ReturnValue                             (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
////
////class UPrimalCharacterStatusComponent* ABuff_TekArmor_Shirt_Rework_C::IsPlayerInjured(bool Result, bool CallFunc_IsInStatusState_ReturnValue)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "IsPlayerInjured");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_IsPlayerInjured_Params Parms{};
////
////	Parms.Result = Result;
////	Parms.CallFunc_IsInStatusState_ReturnValue = CallFunc_IsInStatusState_ReturnValue;
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	return Parms.ReturnValue;
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.IsPlayerWaterRunning
//// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
//// Parameters:
//// bool                               Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst)
//// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_IsTekArmorUsingAbility__result                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_IsSubmerged_ReturnValue                                 (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_BooleanAND_ReturnValue                                  (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//
////bool ABuff_TekArmor_Shirt_Rework_C::IsPlayerWaterRunning(bool Result, class AShooterCharacter* CallFunc_GetRef_OwningPlayer_player, bool* CallFunc_IsSubmerged_ReturnValue)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "IsPlayerWaterRunning");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_IsPlayerWaterRunning_Params Parms{};
////
////	Parms.Result = Result;
////	Parms.CallFunc_GetRef_OwningPlayer_player = CallFunc_GetRef_OwningPlayer_player;
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	if (CallFunc_IsSubmerged_ReturnValue != nullptr)
////		*CallFunc_IsSubmerged_ReturnValue = Parms.CallFunc_IsSubmerged_ReturnValue;
////
////	return Parms.ReturnValue;
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.BPSetupForInstigator
//// (Event, Public, BlueprintCallable, BlueprintEvent)
//// Parameters:
//// class AActor*                      ForInstigator                                                    (Edit, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
//// bool                               CallFunc_Can_Element_Decrease_CanDecrease                        (ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_IsFirstPerson_ReturnValue                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
//// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
////
////bool ABuff_TekArmor_Shirt_Rework_C::BPSetupForInstigator(class AActor** ForInstigator, bool CallFunc_Can_Element_Decrease_CanDecrease, bool* CallFunc_IsFirstPerson_ReturnValue)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "BPSetupForInstigator");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_BPSetupForInstigator_Params Parms{};
////
////	Parms.CallFunc_Can_Element_Decrease_CanDecrease = CallFunc_Can_Element_Decrease_CanDecrease;
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	if (ForInstigator != nullptr)
////		*ForInstigator = Parms.ForInstigator;
////
////	if (CallFunc_IsFirstPerson_ReturnValue != nullptr)
////		*CallFunc_IsFirstPerson_ReturnValue = Parms.CallFunc_IsFirstPerson_ReturnValue;
////
////	return Parms.ReturnValue;
////
////}
////
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.UpdateBoostIconVisibility
//// (Public, BlueprintCallable, BlueprintEvent)
//// Parameters:
//// bool                               SetVisible                                                       (Edit, ConstParm, BlueprintVisible, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, DuplicateTransient, SubobjectReference)
//// class AShooterHUD*                 K2Node_DynamicCast_AsShooter_HUD                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, DuplicateTransient, SubobjectReference)
//// bool                               K2Node_DynamicCast_bSuccess                                      (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// TScriptInterface<class IPlayerHudInterface_C>K2Node_DynamicCast_AsPlayer_Hud_Interface                        (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// bool                               K2Node_DynamicCast_bSuccess_1                                    (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
////
////bool ABuff_TekArmor_Shirt_Rework_C::UpdateBoostIconVisibility(bool SetVisible, class AShooterHUD** K2Node_DynamicCast_AsShooter_HUD)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "UpdateBoostIconVisibility");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_UpdateBoostIconVisibility_Params Parms{};
////
////	Parms.SetVisible = SetVisible;
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	if (K2Node_DynamicCast_AsShooter_HUD != nullptr)
////		*K2Node_DynamicCast_AsShooter_HUD = Parms.K2Node_DynamicCast_AsShooter_HUD;
////
////	return Parms.ReturnValue;
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.SetIsChargeThrusting
//// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
//// Parameters:
//// bool                               Newval                                                           (ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
//// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//// bool                               CallFunc_IsLocallyControlled_ReturnValue_1                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
//// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
//// bool                               CallFunc_IsTekArmorUsingAbility__result                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, SubobjectReference)
//// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
//// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, Interp)
//// bool                               CallFunc_Montage_IsPlaying_ReturnValue                           (Edit, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
//// class UAnimMontage*                CallFunc_GetOverridenMontage_ReturnValue                         (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, RepNotify, Interp)
//// bool                               CallFunc_Montage_IsPlaying_ReturnValue_1                         (Edit, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
//// bool                               CallFunc_Montage_IsPlaying_ReturnValue_2                         (Edit, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
//// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, NonTransactional)
//// float                              CallFunc_PlayAnimEx_ReturnValue                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
//// struct FWeaponAnim                 K2Node_MakeStruct_WeaponAnim                                     (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
//// float                              CallFunc_PlayWeaponAnimation_ReturnValue                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_Montage_IsPlaying_ReturnValue_3                         (Edit, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
//
////bool ABuff_TekArmor_Shirt_Rework_C::SetIsChargeThrusting(class AShooterCharacter* CallFunc_GetRef_OwningPlayer_player, bool* CallFunc_IsDedicatedServer_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_1, class UAnimMontage** CallFunc_GetOverridenMontage_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_2, bool* CallFunc_Not_PreBool_ReturnValue_3, float* CallFunc_PlayAnimEx_ReturnValue, const struct FWeaponAnim& K2Node_MakeStruct_WeaponAnim)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "SetIsChargeThrusting");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_SetIsChargeThrusting_Params Parms{};
////
////	Parms.CallFunc_GetRef_OwningPlayer_player = CallFunc_GetRef_OwningPlayer_player;
////	Parms.K2Node_MakeStruct_WeaponAnim = K2Node_MakeStruct_WeaponAnim;
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	if (CallFunc_IsDedicatedServer_ReturnValue != nullptr)
////		*CallFunc_IsDedicatedServer_ReturnValue = Parms.CallFunc_IsDedicatedServer_ReturnValue;
////
////	if (CallFunc_Not_PreBool_ReturnValue != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue = Parms.CallFunc_Not_PreBool_ReturnValue;
////
////	if (CallFunc_Not_PreBool_ReturnValue_1 != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue_1 = Parms.CallFunc_Not_PreBool_ReturnValue_1;
////
////	if (CallFunc_GetOverridenMontage_ReturnValue != nullptr)
////		*CallFunc_GetOverridenMontage_ReturnValue = Parms.CallFunc_GetOverridenMontage_ReturnValue;
////
////	if (CallFunc_Not_PreBool_ReturnValue_2 != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue_2 = Parms.CallFunc_Not_PreBool_ReturnValue_2;
////
////	if (CallFunc_Not_PreBool_ReturnValue_3 != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue_3 = Parms.CallFunc_Not_PreBool_ReturnValue_3;
////
////	if (CallFunc_PlayAnimEx_ReturnValue != nullptr)
////		*CallFunc_PlayAnimEx_ReturnValue = Parms.CallFunc_PlayAnimEx_ReturnValue;
////
////	return Parms.ReturnValue;
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.CanUseTekAbility
//// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
//// Parameters:
//// bool                               bNotifyIfOutOfElement                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               bResult                                                          (Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// TSoftClassPtr<class APrimalBuff>   ForestKaijuClass                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// TSoftClassPtr<class APrimalBuff>   IceKaijuClass                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// bool                               Ret_val                                                          (Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
//// bool                               CallFunc_CanUseTekAbility_bResult                                (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
//// class UClass*                      CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// class UClass*                      CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1            (ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
//// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Buff                            (Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               K2Node_ClassDynamicCast_bSuccess                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
//// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Buff_1                          (Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
//// bool                               K2Node_ClassDynamicCast_bSuccess_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
//// bool                               CallFunc_Is_Restricted_Because_Of_Genesis_Map_restricted         (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
//// bool                               CallFunc_IsCharacterHardAttached_ReturnValue                     (ConstParm, BlueprintVisible, ZeroConstructor, GlobalConfig, InstancedReference, SubobjectReference)
//// bool                               CallFunc_HasBuff_ReturnValue                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, SubobjectReference)
//// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
//// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, Interp)
//// bool                               CallFunc_BooleanAND_ReturnValue                                  (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//// bool                               CallFunc_HasBuff_ReturnValue_1                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, SubobjectReference, Interp)
//// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, RepNotify, Interp)
//// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, NonTransactional)
//// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
//// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, Interp, NonTransactional)
//// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
//// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
//// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
//// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
//// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp, NonTransactional)
//
////bool ABuff_TekArmor_Shirt_Rework_C::CanUseTekAbility(bool* bResult, TSoftClassPtr<class APrimalBuff> IceKaijuClass, bool Ret_val, class UClass** CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass** CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1, bool* CallFunc_Is_Restricted_Because_Of_Genesis_Map_restricted, bool CallFunc_IsCharacterHardAttached_ReturnValue, bool* CallFunc_HasBuff_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_1, bool* CallFunc_HasBuff_ReturnValue_1, bool* CallFunc_Not_PreBool_ReturnValue_2, bool* CallFunc_Not_PreBool_ReturnValue_3, bool* CallFunc_Not_PreBool_ReturnValue_4, bool* CallFunc_Not_PreBool_ReturnValue_5)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "CanUseTekAbility");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_CanUseTekAbility_Params Parms{};
////
////	Parms.IceKaijuClass = IceKaijuClass;
////	Parms.Ret_val = Ret_val;
////	Parms.CallFunc_IsCharacterHardAttached_ReturnValue = CallFunc_IsCharacterHardAttached_ReturnValue;
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	if (bResult != nullptr)
////		*bResult = Parms.bResult;
////
////	if (CallFunc_Conv_SoftClassReferenceToClass_ReturnValue != nullptr)
////		*CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
////
////	if (CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1 != nullptr)
////		*CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1 = Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1;
////
////	if (CallFunc_Is_Restricted_Because_Of_Genesis_Map_restricted != nullptr)
////		*CallFunc_Is_Restricted_Because_Of_Genesis_Map_restricted = Parms.CallFunc_Is_Restricted_Because_Of_Genesis_Map_restricted;
////
////	if (CallFunc_HasBuff_ReturnValue != nullptr)
////		*CallFunc_HasBuff_ReturnValue = Parms.CallFunc_HasBuff_ReturnValue;
////
////	if (CallFunc_Not_PreBool_ReturnValue != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue = Parms.CallFunc_Not_PreBool_ReturnValue;
////
////	if (CallFunc_Not_PreBool_ReturnValue_1 != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue_1 = Parms.CallFunc_Not_PreBool_ReturnValue_1;
////
////	if (CallFunc_HasBuff_ReturnValue_1 != nullptr)
////		*CallFunc_HasBuff_ReturnValue_1 = Parms.CallFunc_HasBuff_ReturnValue_1;
////
////	if (CallFunc_Not_PreBool_ReturnValue_2 != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue_2 = Parms.CallFunc_Not_PreBool_ReturnValue_2;
////
////	if (CallFunc_Not_PreBool_ReturnValue_3 != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue_3 = Parms.CallFunc_Not_PreBool_ReturnValue_3;
////
////	if (CallFunc_Not_PreBool_ReturnValue_4 != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue_4 = Parms.CallFunc_Not_PreBool_ReturnValue_4;
////
////	if (CallFunc_Not_PreBool_ReturnValue_5 != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue_5 = Parms.CallFunc_Not_PreBool_ReturnValue_5;
////
////	return Parms.ReturnValue;
////
////}
////
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.UpdateThrusterFX
//// (Public, BlueprintCallable, BlueprintEvent)
//// Parameters:
//// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (Edit, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// class ABuff_TekArmor_C*            CallFunc_Get_DefaultTekBuff_ref                                  (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
//// class ABuff_TekArmor_Shirt_Rework_C*K2Node_DynamicCast_AsBuff_Tek_Armor_Shirt_Rework                 (ConstParm, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// bool                               K2Node_DynamicCast_bSuccess                                      (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
//// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (Edit, OutParm, DisableEditOnInstance, SubobjectReference)
//// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (Edit, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
//// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_1                       (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
//// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
//// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
//// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_2                       (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
//// bool                               CallFunc_IsPlayerUnderWater_result                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_2                      (Edit, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
//// bool                               CallFunc_IsPlayerUnderWater_result_1                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference, Interp)
//// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
//// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
//// bool                               CallFunc_IsThrusterActive_result                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// bool                               CallFunc_IsThrusterActive_result_1                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference, Interp)
//// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, Interp)
//// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
//// float                              CallFunc_SetPitchMultiplier_NewPitchMultiplier_ImplicitCast      (Edit, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
////
////float ABuff_TekArmor_Shirt_Rework_C::UpdateThrusterFX(class AShooterCharacter* CallFunc_GetRef_OwningPlayer_player, bool* CallFunc_NotEqual_ObjectObject_ReturnValue, class ABuff_TekArmor_C** CallFunc_Get_DefaultTekBuff_ref, struct FVector* CallFunc_Conv_DoubleToVector_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue_1, struct FVector* CallFunc_Conv_DoubleToVector_ReturnValue_1, struct FVector* CallFunc_Conv_DoubleToVector_ReturnValue_2, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue_2, bool* CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_1)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "UpdateThrusterFX");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_UpdateThrusterFX_Params Parms{};
////
////	Parms.CallFunc_GetRef_OwningPlayer_player = CallFunc_GetRef_OwningPlayer_player;
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	if (CallFunc_NotEqual_ObjectObject_ReturnValue != nullptr)
////		*CallFunc_NotEqual_ObjectObject_ReturnValue = Parms.CallFunc_NotEqual_ObjectObject_ReturnValue;
////
////	if (CallFunc_Get_DefaultTekBuff_ref != nullptr)
////		*CallFunc_Get_DefaultTekBuff_ref = Parms.CallFunc_Get_DefaultTekBuff_ref;
////
////	if (CallFunc_Conv_DoubleToVector_ReturnValue != nullptr)
////		*CallFunc_Conv_DoubleToVector_ReturnValue = std::move(Parms.CallFunc_Conv_DoubleToVector_ReturnValue);
////
////	if (CallFunc_Multiply_VectorFloat_ReturnValue != nullptr)
////		*CallFunc_Multiply_VectorFloat_ReturnValue = std::move(Parms.CallFunc_Multiply_VectorFloat_ReturnValue);
////
////	if (CallFunc_Multiply_VectorFloat_ReturnValue_1 != nullptr)
////		*CallFunc_Multiply_VectorFloat_ReturnValue_1 = std::move(Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1);
////
////	if (CallFunc_Conv_DoubleToVector_ReturnValue_1 != nullptr)
////		*CallFunc_Conv_DoubleToVector_ReturnValue_1 = std::move(Parms.CallFunc_Conv_DoubleToVector_ReturnValue_1);
////
////	if (CallFunc_Conv_DoubleToVector_ReturnValue_2 != nullptr)
////		*CallFunc_Conv_DoubleToVector_ReturnValue_2 = std::move(Parms.CallFunc_Conv_DoubleToVector_ReturnValue_2);
////
////	if (CallFunc_Multiply_VectorFloat_ReturnValue_2 != nullptr)
////		*CallFunc_Multiply_VectorFloat_ReturnValue_2 = std::move(Parms.CallFunc_Multiply_VectorFloat_ReturnValue_2);
////
////	if (CallFunc_Not_PreBool_ReturnValue != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue = Parms.CallFunc_Not_PreBool_ReturnValue;
////
////	if (CallFunc_Not_PreBool_ReturnValue_1 != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue_1 = Parms.CallFunc_Not_PreBool_ReturnValue_1;
////
////	return Parms.ReturnValue;
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.BPDeactivated
//// (Event, Public, BlueprintCallable, BlueprintEvent)
//// Parameters:
//// class AActor*                      ForInstigator                                                    (Edit, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
//// class APrimalCharacter*            CallFunc_GetDefaultPlayer_ref                                    (ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
//// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// class UFPVWeaponAnimBP_Base_Carrying_C*K2Node_DynamicCast_AsFPVWeapon_Anim_BP_Base_Carrying             (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// bool                               K2Node_DynamicCast_bSuccess                                      (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//
////bool ABuff_TekArmor_Shirt_Rework_C::BPDeactivated(class AActor** ForInstigator, class APrimalCharacter** CallFunc_GetDefaultPlayer_ref, class UFPVWeaponAnimBP_Base_Carrying_C** K2Node_DynamicCast_AsFPVWeapon_Anim_BP_Base_Carrying)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "BPDeactivated");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_BPDeactivated_Params Parms{};
////
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	if (ForInstigator != nullptr)
////		*ForInstigator = Parms.ForInstigator;
////
////	if (CallFunc_GetDefaultPlayer_ref != nullptr)
////		*CallFunc_GetDefaultPlayer_ref = Parms.CallFunc_GetDefaultPlayer_ref;
////
////	if (K2Node_DynamicCast_AsFPVWeapon_Anim_BP_Base_Carrying != nullptr)
////		*K2Node_DynamicCast_AsFPVWeapon_Anim_BP_Base_Carrying = Parms.K2Node_DynamicCast_AsFPVWeapon_Anim_BP_Base_Carrying;
////
////	return Parms.ReturnValue;
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.Reset Owning PlayerVariables
//// (Public, BlueprintCallable, BlueprintEvent)
//// Parameters:
//// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
//// class UObject*                     CallFunc_GetDefaultObject_ReturnValue                            (Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
//// class ABuff_Base_C*                K2Node_DynamicCast_AsBuff_Base                                   (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// bool                               K2Node_DynamicCast_bSuccess                                      (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// class UObject*                     CallFunc_GetDefaultObject_ReturnValue_1                          (Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
//// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
//// bool                               K2Node_DynamicCast_bSuccess_1                                    (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
//
////bool ABuff_TekArmor_Shirt_Rework_C::Reset_Owning_PlayerVariables(class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "Reset Owning PlayerVariables");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_Reset_Owning_PlayerVariables_Params Parms{};
////
////	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	return Parms.ReturnValue;
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.UpdateIsSwimming
//// (Public, BlueprintCallable, BlueprintEvent)
//// Parameters:
//// bool                               CallFunc_IsServer_ReturnValue                                    (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
//// class ABuff_TekArmor_C*            CallFunc_Get_DefaultTekBuff_ref                                  (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
//// bool                               CallFunc_IsPlayerUnderWater_result                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
//// float                              K2Node_VariableSet_BuffTickServerMaxTime_ImplicitCast            (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
//// float                              K2Node_VariableSet_BuffTickServerMinTime_ImplicitCast            (Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
//
////float ABuff_TekArmor_Shirt_Rework_C::UpdateIsSwimming(bool CallFunc_IsServer_ReturnValue, class ABuff_TekArmor_C** CallFunc_Get_DefaultTekBuff_ref, bool CallFunc_NotEqual_BoolBool_ReturnValue)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "UpdateIsSwimming");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_UpdateIsSwimming_Params Parms{};
////
////	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
////	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	if (CallFunc_Get_DefaultTekBuff_ref != nullptr)
////		*CallFunc_Get_DefaultTekBuff_ref = Parms.CallFunc_Get_DefaultTekBuff_ref;
////
////	return Parms.ReturnValue;
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.ClampPlayerVelocity
//// (Public, BlueprintCallable, BlueprintEvent)
//// Parameters:
//// double                             MaxVelocity                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// bool                               CallFunc_IsTekArmorUsingAbility__result                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
//// double                             CallFunc_VSize_ReturnValue                                       (Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
//// struct FVector                     CallFunc_Normal_ReturnValue                                      (ConstParm, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (Edit, OutParm, DisableEditOnInstance, SubobjectReference)
//
////bool ABuff_TekArmor_Shirt_Rework_C::ClampPlayerVelocity(double CallFunc_VSize_ReturnValue, struct FVector* CallFunc_Normal_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "ClampPlayerVelocity");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_ClampPlayerVelocity_Params Parms{};
////
////	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	if (CallFunc_Normal_ReturnValue != nullptr)
////		*CallFunc_Normal_ReturnValue = std::move(Parms.CallFunc_Normal_ReturnValue);
////
////	if (CallFunc_Multiply_VectorFloat_ReturnValue != nullptr)
////		*CallFunc_Multiply_VectorFloat_ReturnValue = std::move(Parms.CallFunc_Multiply_VectorFloat_ReturnValue);
////
////	return Parms.ReturnValue;
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.UpdateTekShirtByState
//// (Public, BlueprintCallable, BlueprintEvent)
//// Parameters:
//// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (Edit, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
//// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
//// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, Interp)
//// bool                               CallFunc_IsTekArmorUsingAbility__result                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
//// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, SubobjectReference)
//// struct FVector                     CallFunc_Normal_ReturnValue                                      (ConstParm, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, RepNotify, Interp)
//// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (Edit, OutParm, DisableEditOnInstance, SubobjectReference)
//// double                             CallFunc_VSize_ReturnValue                                       (Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
//// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
//// bool                               CallFunc_BooleanAND_ReturnValue                                  (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
//// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, NonTransactional)
//// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
//// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
//// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
//// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
//// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
//// bool                               CallFunc_IsPlayerUnderWater_result                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
//// bool                               CallFunc_IsThrusterActive_result                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// bool                               CallFunc_IsServer_ReturnValue                                    (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
//// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
//// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// class UFPVWeaponAnimBP_Base_Carrying_C*K2Node_DynamicCast_AsFPVWeapon_Anim_BP_Base_Carrying             (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// bool                               K2Node_DynamicCast_bSuccess                                      (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// bool                               CallFunc_IsLocallyControlled_ReturnValue_1                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
//// float                              K2Node_VariableSet_AirControl_ImplicitCast                       (Edit, ConstParm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// float                              K2Node_VariableSet_AirControl_ImplicitCast_1                     (Edit, ConstParm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference, Interp)
//// float                              CallFunc_FadeIn_FadeInDuration_ImplicitCast                      (Edit, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// float                              CallFunc_FadeOut_FadeOutDuration_ImplicitCast                    (Edit, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, DuplicateTransient, SubobjectReference)
////
////float ABuff_TekArmor_Shirt_Rework_C::UpdateTekShirtByState(class AShooterCharacter* CallFunc_GetRef_OwningPlayer_player, bool* CallFunc_NotEqual_ObjectObject_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_1, bool* CallFunc_IsDedicatedServer_ReturnValue, struct FVector* CallFunc_Normal_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_2, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, double CallFunc_VSize_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_3, bool* CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_IsServer_ReturnValue, class UFPVWeaponAnimBP_Base_Carrying_C** K2Node_DynamicCast_AsFPVWeapon_Anim_BP_Base_Carrying, float CallFunc_FadeIn_FadeInDuration_ImplicitCast)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "UpdateTekShirtByState");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_UpdateTekShirtByState_Params Parms{};
////
////	Parms.CallFunc_GetRef_OwningPlayer_player = CallFunc_GetRef_OwningPlayer_player;
////	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
////	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
////	Parms.CallFunc_FadeIn_FadeInDuration_ImplicitCast = CallFunc_FadeIn_FadeInDuration_ImplicitCast;
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	if (CallFunc_NotEqual_ObjectObject_ReturnValue != nullptr)
////		*CallFunc_NotEqual_ObjectObject_ReturnValue = Parms.CallFunc_NotEqual_ObjectObject_ReturnValue;
////
////	if (CallFunc_Not_PreBool_ReturnValue != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue = Parms.CallFunc_Not_PreBool_ReturnValue;
////
////	if (CallFunc_Not_PreBool_ReturnValue_1 != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue_1 = Parms.CallFunc_Not_PreBool_ReturnValue_1;
////
////	if (CallFunc_IsDedicatedServer_ReturnValue != nullptr)
////		*CallFunc_IsDedicatedServer_ReturnValue = Parms.CallFunc_IsDedicatedServer_ReturnValue;
////
////	if (CallFunc_Normal_ReturnValue != nullptr)
////		*CallFunc_Normal_ReturnValue = std::move(Parms.CallFunc_Normal_ReturnValue);
////
////	if (CallFunc_Not_PreBool_ReturnValue_2 != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue_2 = Parms.CallFunc_Not_PreBool_ReturnValue_2;
////
////	if (CallFunc_Multiply_VectorFloat_ReturnValue != nullptr)
////		*CallFunc_Multiply_VectorFloat_ReturnValue = std::move(Parms.CallFunc_Multiply_VectorFloat_ReturnValue);
////
////	if (CallFunc_Not_PreBool_ReturnValue_3 != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue_3 = Parms.CallFunc_Not_PreBool_ReturnValue_3;
////
////	if (CallFunc_Not_PreBool_ReturnValue_4 != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue_4 = Parms.CallFunc_Not_PreBool_ReturnValue_4;
////
////	if (K2Node_DynamicCast_AsFPVWeapon_Anim_BP_Base_Carrying != nullptr)
////		*K2Node_DynamicCast_AsFPVWeapon_Anim_BP_Base_Carrying = Parms.K2Node_DynamicCast_AsFPVWeapon_Anim_BP_Base_Carrying;
////
////	return Parms.ReturnValue;
////
////}
////
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.OnRep_bIsUnderwater
//// (BlueprintCallable, BlueprintEvent)
//// Parameters:
//// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
//// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, Interp)
//// bool                               CallFunc_BooleanAND_ReturnValue                                  (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//// class APrimalCharacter*            CallFunc_GetDefaultPlayer_ref                                    (ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
//// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
//// bool                               CallFunc_IsThrusterActive_result                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// float                              K2Node_VariableSet_MaxImpulseVelocityZ_ImplicitCast              (ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
////
////float ABuff_TekArmor_Shirt_Rework_C::OnRep_bIsUnderwater(class AShooterCharacter* CallFunc_GetRef_OwningPlayer_player, bool* CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_1, class APrimalCharacter** CallFunc_GetDefaultPlayer_ref)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "OnRep_bIsUnderwater");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_OnRep_bIsUnderwater_Params Parms{};
////
////	Parms.CallFunc_GetRef_OwningPlayer_player = CallFunc_GetRef_OwningPlayer_player;
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	if (CallFunc_Not_PreBool_ReturnValue != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue = Parms.CallFunc_Not_PreBool_ReturnValue;
////
////	if (CallFunc_Not_PreBool_ReturnValue_1 != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue_1 = Parms.CallFunc_Not_PreBool_ReturnValue_1;
////
////	if (CallFunc_GetDefaultPlayer_ref != nullptr)
////		*CallFunc_GetDefaultPlayer_ref = Parms.CallFunc_GetDefaultPlayer_ref;
////
////	return Parms.ReturnValue;
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.RestoreThrusterStateFromCurrentInputs
//// (Public, BlueprintCallable, BlueprintEvent)
//// Parameters:
//// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//
////bool ABuff_TekArmor_Shirt_Rework_C::RestoreThrusterStateFromCurrentInputs()
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "RestoreThrusterStateFromCurrentInputs");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_RestoreThrusterStateFromCurrentInputs_Params Parms{};
////
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	return Parms.ReturnValue;
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.ResetBoostWhenGrounded
//// (Public, BlueprintCallable, BlueprintEvent)
//// Parameters:
//// bool                               CallFunc_Can_Element_Decrease_CanDecrease                        (ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_IsPlayerGrounded_result                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
//// bool                               CallFunc_BooleanAND_ReturnValue                                  (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//
////bool ABuff_TekArmor_Shirt_Rework_C::ResetBoostWhenGrounded(bool CallFunc_Can_Element_Decrease_CanDecrease)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "ResetBoostWhenGrounded");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_ResetBoostWhenGrounded_Params Parms{};
////
////	Parms.CallFunc_Can_Element_Decrease_CanDecrease = CallFunc_Can_Element_Decrease_CanDecrease;
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	return Parms.ReturnValue;
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.IsPlayerUnderWater
//// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
//// Parameters:
//// bool                               Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst)
//// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, SubobjectReference)
//// bool                               CallFunc_IsPlayerInWaterVolume_result                            (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
//// double                             CallFunc_IsPlayerInWaterVolume_waterVolumeTopZ                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, GlobalConfig, InstancedReference, SubobjectReference)
//// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_IsPlayerWaterRunning_result                             (Edit, ExportObject, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
//// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, SubobjectReference)
//// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
//// double                             CallFunc_BreakVector_X                                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
//// double                             CallFunc_BreakVector_Y                                           (ExportObject, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
//// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_BooleanAND_ReturnValue                                  (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
////
////bool ABuff_TekArmor_Shirt_Rework_C::IsPlayerUnderWater(bool Result, bool* CallFunc_IsDedicatedServer_ReturnValue, bool* CallFunc_IsPlayerInWaterVolume_result, double CallFunc_IsPlayerInWaterVolume_waterVolumeTopZ, class AShooterCharacter* CallFunc_GetRef_OwningPlayer_player, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue, struct FVector* CallFunc_GetSocketLocation_ReturnValue, struct FVector* CallFunc_SelectVector_ReturnValue, double* CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double* CallFunc_BreakVector_Z, bool* CallFunc_LessEqual_DoubleDouble_ReturnValue)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "IsPlayerUnderWater");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_IsPlayerUnderWater_Params Parms{};
////
////	Parms.Result = Result;
////	Parms.CallFunc_IsPlayerInWaterVolume_waterVolumeTopZ = CallFunc_IsPlayerInWaterVolume_waterVolumeTopZ;
////	Parms.CallFunc_GetRef_OwningPlayer_player = CallFunc_GetRef_OwningPlayer_player;
////	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
////	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	if (CallFunc_IsDedicatedServer_ReturnValue != nullptr)
////		*CallFunc_IsDedicatedServer_ReturnValue = Parms.CallFunc_IsDedicatedServer_ReturnValue;
////
////	if (CallFunc_IsPlayerInWaterVolume_result != nullptr)
////		*CallFunc_IsPlayerInWaterVolume_result = Parms.CallFunc_IsPlayerInWaterVolume_result;
////
////	if (CallFunc_Not_PreBool_ReturnValue != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue = Parms.CallFunc_Not_PreBool_ReturnValue;
////
////	if (CallFunc_GetSocketLocation_ReturnValue != nullptr)
////		*CallFunc_GetSocketLocation_ReturnValue = std::move(Parms.CallFunc_GetSocketLocation_ReturnValue);
////
////	if (CallFunc_SelectVector_ReturnValue != nullptr)
////		*CallFunc_SelectVector_ReturnValue = std::move(Parms.CallFunc_SelectVector_ReturnValue);
////
////	if (CallFunc_BreakVector_X != nullptr)
////		*CallFunc_BreakVector_X = Parms.CallFunc_BreakVector_X;
////
////	if (CallFunc_BreakVector_Z != nullptr)
////		*CallFunc_BreakVector_Z = Parms.CallFunc_BreakVector_Z;
////
////	if (CallFunc_LessEqual_DoubleDouble_ReturnValue != nullptr)
////		*CallFunc_LessEqual_DoubleDouble_ReturnValue = Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue;
////
////	return Parms.ReturnValue;
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.NetSetCurrentThrusterState
//// (Public, BlueprintCallable, BlueprintEvent)
//// Parameters:
//// enum class E_TekThrusterState      NewState                                                         (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
//// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
//// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
//// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
//// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
//// float                              CallFunc_StaticGetTimeSince_ReturnValue                          (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
//// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ConstParm, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
//// double                             CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (ConstParm, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
//// float                              CallFunc_StaticGetTimeSince_ReturnValue_1                        (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
//// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
//// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_IsServer_ReturnValue                                    (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
//// bool                               CallFunc_IsThrusterActive_result                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, SubobjectReference)
//// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference, Interp)
//// bool                               CallFunc_IsPlayerGrounded_result                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
//// bool                               CallFunc_IsPlayerInjured_result                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// bool                               CallFunc_BooleanAND_ReturnValue                                  (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//// bool                               CallFunc_IsPlayerWaterRunning_result                             (Edit, ExportObject, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
//// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
//
//double ABuff_TekArmor_Shirt_Rework_C::NetSetCurrentThrusterState(enum class E_TekThrusterState NewState, const struct FVector& CallFunc_MakeVector_ReturnValue, float* CallFunc_StaticGetTimeSince_ReturnValue, float* CallFunc_StaticGetTimeSince_ReturnValue_1, class AShooterCharacter* CallFunc_GetRef_OwningPlayer_player, bool CallFunc_IsServer_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1)
//{
//	static class UFunction* Func = nullptr;
//
//	if (!Func)
//		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "NetSetCurrentThrusterState");
//
//	Params::ABuff_TekArmor_Shirt_Rework_C_NetSetCurrentThrusterState_Params Parms{};
//
//	Parms.NewState = NewState;
//	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
//	Parms.CallFunc_GetRef_OwningPlayer_player = CallFunc_GetRef_OwningPlayer_player;
//	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
//	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
//
//	UObject::ProcessEvent(Func, &Parms);
//
//	if (CallFunc_StaticGetTimeSince_ReturnValue != nullptr)
//		*CallFunc_StaticGetTimeSince_ReturnValue = Parms.CallFunc_StaticGetTimeSince_ReturnValue;
//
//	if (CallFunc_StaticGetTimeSince_ReturnValue_1 != nullptr)
//		*CallFunc_StaticGetTimeSince_ReturnValue_1 = Parms.CallFunc_StaticGetTimeSince_ReturnValue_1;
//
//	return Parms.ReturnValue;
//
//}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.BuffTickServer
//// (Event, Public, BlueprintCallable, BlueprintEvent)
//// Parameters:
//// float                              DeltaTime                                                        (BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
//// bool                               bShouldEnableUnderwaterHovering                                  (Edit, BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// struct FVector                     CurrentJetImpulse                                                (Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// bool                               CallFunc_BooleanAND_ReturnValue                                  (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
//// bool                               CallFunc_IsPlayerInWaterVolume_result                            (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
//// double                             CallFunc_IsPlayerInWaterVolume_waterVolumeTopZ                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, GlobalConfig, InstancedReference, SubobjectReference)
//// bool                               CallFunc_IsTekArmorUsingAbility__result                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
//// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
//// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, SubobjectReference)
//// double                             CallFunc_BreakVector_X                                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
//// double                             CallFunc_BreakVector_Y                                           (ExportObject, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
//// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
//// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (ConstParm, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//// double                             CallFunc_Dot_VectorVector_ReturnValue                            (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
//// struct FVector                     CallFunc_GetVelocity_ReturnValue_1                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
//// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
//// struct FRotator                    CallFunc_GetControlRotation_ReturnValue_1                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
//// double                             CallFunc_BreakVector_X_1                                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
//// double                             CallFunc_BreakVector_Y_1                                         (ExportObject, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
//// double                             CallFunc_BreakVector_Z_1                                         (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
//// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue_1                      (ConstParm, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
//// double                             CallFunc_Dot_VectorVector_ReturnValue_1                          (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
//// double                             CallFunc_Dot_VectorVector_ReturnValue_2                          (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
//// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
//// bool                               CallFunc_IsPlayerWaterRunning_result                             (Edit, ExportObject, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, Interp)
//// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
//// bool                               CallFunc_IsThrusterActive_result                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
//// class APhysicsVolume*              CallFunc_GetPhysicsVolume_ReturnValue                            (ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, RepNotify, Interp)
//// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
//// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1                 (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
//// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference, Interp)
//// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (Edit, OutParm, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_IsPlayerUnderWater_result                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
//// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
//// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (Edit, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
//// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
//// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
//// bool                               CallFunc_IsPlayerGrounded_result                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
////
////bool ABuff_TekArmor_Shirt_Rework_C::BuffTickServer(float DeltaTime, bool bShouldEnableUnderwaterHovering, bool* CallFunc_IsPlayerInWaterVolume_result, double CallFunc_IsPlayerInWaterVolume_waterVolumeTopZ, class AShooterCharacter* CallFunc_GetRef_OwningPlayer_player, bool* CallFunc_Not_PreBool_ReturnValue, double* CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double* CallFunc_BreakVector_Z, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double* CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double* CallFunc_BreakVector_Z_1, bool CallFunc_Less_DoubleDouble_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_1, bool* CallFunc_Not_PreBool_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue_1)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "BuffTickServer");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_BuffTickServer_Params Parms{};
////
////	Parms.DeltaTime = DeltaTime;
////	Parms.bShouldEnableUnderwaterHovering = bShouldEnableUnderwaterHovering;
////	Parms.CallFunc_IsPlayerInWaterVolume_waterVolumeTopZ = CallFunc_IsPlayerInWaterVolume_waterVolumeTopZ;
////	Parms.CallFunc_GetRef_OwningPlayer_player = CallFunc_GetRef_OwningPlayer_player;
////	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
////	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
////	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
////	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
////	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
////	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;
////	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
////	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	if (CallFunc_IsPlayerInWaterVolume_result != nullptr)
////		*CallFunc_IsPlayerInWaterVolume_result = Parms.CallFunc_IsPlayerInWaterVolume_result;
////
////	if (CallFunc_Not_PreBool_ReturnValue != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue = Parms.CallFunc_Not_PreBool_ReturnValue;
////
////	if (CallFunc_BreakVector_X != nullptr)
////		*CallFunc_BreakVector_X = Parms.CallFunc_BreakVector_X;
////
////	if (CallFunc_BreakVector_Z != nullptr)
////		*CallFunc_BreakVector_Z = Parms.CallFunc_BreakVector_Z;
////
////	if (CallFunc_BreakVector_X_1 != nullptr)
////		*CallFunc_BreakVector_X_1 = Parms.CallFunc_BreakVector_X_1;
////
////	if (CallFunc_BreakVector_Z_1 != nullptr)
////		*CallFunc_BreakVector_Z_1 = Parms.CallFunc_BreakVector_Z_1;
////
////	if (CallFunc_Not_PreBool_ReturnValue_1 != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue_1 = Parms.CallFunc_Not_PreBool_ReturnValue_1;
////
////	if (CallFunc_Not_PreBool_ReturnValue_2 != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue_2 = Parms.CallFunc_Not_PreBool_ReturnValue_2;
////
////	if (CallFunc_Multiply_VectorFloat_ReturnValue != nullptr)
////		*CallFunc_Multiply_VectorFloat_ReturnValue = std::move(Parms.CallFunc_Multiply_VectorFloat_ReturnValue);
////
////	if (CallFunc_Multiply_VectorFloat_ReturnValue_1 != nullptr)
////		*CallFunc_Multiply_VectorFloat_ReturnValue_1 = std::move(Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1);
////
////	return Parms.ReturnValue;
////
////}
////
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.JetpackBoostClient
//// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
//// Parameters:
//// double                             CurrentBoostScale                                                (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// class UParticleSystem*             CurrentBoostFX                                                   (Edit, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// class UAnimMontage*                boostAnim                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// bool                               boostHitGround                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// double                             NewVelocityZ                                                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// struct FVector                     CallFunc_BreakTransform_Location                                 (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
//// struct FVector                     CallFunc_BreakTransform_Scale                                    (Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
//// class ABuff_TekArmor_C*            CallFunc_Get_DefaultTekBuff_ref                                  (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
//// class ABuff_TekArmor_Shirt_Rework_C*K2Node_DynamicCast_AsBuff_Tek_Armor_Shirt_Rework                 (ConstParm, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// bool                               K2Node_DynamicCast_bSuccess                                      (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
//// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
//// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, SubobjectReference)
//// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_1                       (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
//// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
//// struct FVector                     CallFunc_BreakTransform_Location_1                               (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
//// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
//// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
//// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_2                       (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
//// struct FVector                     CallFunc_GetUpVector_ReturnValue                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
//// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (Edit, OutParm, DisableEditOnInstance, SubobjectReference)
//// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, SubobjectReference)
//// struct FHitResult                  CallFunc_LineTraceSingleForObjects_OutHit                        (ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
//// bool                               CallFunc_LineTraceSingleForObjects_ReturnValue                   (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
//// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
//// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_BreakHitResult_bBlockingHit                             (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// float                              CallFunc_BreakHitResult_Time                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
//// float                              CallFunc_BreakHitResult_Distance                                 (ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// struct FVector                     CallFunc_BreakHitResult_Location                                 (BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
//// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (Edit, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
//// struct FVector                     CallFunc_BreakHitResult_Normal                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
//// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Config, SubobjectReference)
//// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
//// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ConstParm, DisableEditOnTemplate, Config, SubobjectReference)
//// class FName                        CallFunc_BreakHitResult_HitBoneName                              (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// class FName                        CallFunc_BreakHitResult_BoneName                                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// int32                              CallFunc_BreakHitResult_HitItem                                  (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
//// int32                              CallFunc_BreakHitResult_ElementIndex                             (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// int32                              CallFunc_BreakHitResult_FaceIndex                                (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, SubobjectReference)
//// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, SubobjectReference)
//// struct FHitResult                  CallFunc_VTraceSingleBP_OutHit                                   (ConstParm, BlueprintReadOnly, ZeroConstructor, EditConst, SubobjectReference)
//// bool                               CallFunc_VTraceSingleBP_ReturnValue                              (ConstParm, Net, ZeroConstructor, EditConst, SubobjectReference)
//// class APhysicsVolume*              K2Node_DynamicCast_AsPhysics_Volume                              (Edit, ConstParm, Net, EditFixedSize, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
//// bool                               K2Node_DynamicCast_bSuccess_1                                    (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
//// bool                               CallFunc_BreakHitResult_bBlockingHit_1                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
//// bool                               CallFunc_BreakHitResult_bInitialOverlap_1                        (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
//// float                              CallFunc_BreakHitResult_Time_1                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
//// float                              CallFunc_BreakHitResult_Distance_1                               (ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
//// struct FVector                     CallFunc_BreakHitResult_Location_1                               (BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
//// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_1                            (Edit, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
//// struct FVector                     CallFunc_BreakHitResult_Normal_1                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
//// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_1                           (ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
//// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_1                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
//// class AActor*                      CallFunc_BreakHitResult_HitActor_1                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
//// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_1                           (ConstParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
//// class FName                        CallFunc_BreakHitResult_HitBoneName_1                            (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
//// class FName                        CallFunc_BreakHitResult_BoneName_1                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
//// int32                              CallFunc_BreakHitResult_HitItem_1                                (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference, Interp)
//// int32                              CallFunc_BreakHitResult_ElementIndex_1                           (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
//// int32                              CallFunc_BreakHitResult_FaceIndex_1                              (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
//// struct FVector                     CallFunc_BreakHitResult_TraceStart_1                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
//// struct FVector                     CallFunc_BreakHitResult_TraceEnd_1                               (Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
//// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue_1                    (BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
//// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, SubobjectReference)
//// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, Interp)
//// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_1                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
//// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
//// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
//// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue_2                    (BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
////
////struct FVector ABuff_TekArmor_Shirt_Rework_C::JetpackBoostClient(class UParticleSystem** CurrentBoostFX, class UAnimMontage** boostAnim, double* NewVelocityZ, const struct FVector& CallFunc_BreakTransform_Location, class ABuff_TekArmor_C** CallFunc_Get_DefaultTekBuff_ref, bool* CallFunc_Not_PreBool_ReturnValue, struct FVector* CallFunc_Conv_DoubleToVector_ReturnValue, const TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, struct FVector* CallFunc_Conv_DoubleToVector_ReturnValue_1, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_1, struct FVector* CallFunc_Conv_DoubleToVector_ReturnValue_2, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, struct FVector* CallFunc_GetSocketLocation_ReturnValue, bool* CallFunc_LineTraceSingleForObjects_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_BreakHitResult_Time, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, int32 CallFunc_BreakHitResult_HitItem, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FHitResult& CallFunc_VTraceSingleBP_OutHit, bool CallFunc_VTraceSingleBP_ReturnValue, class APhysicsVolume* K2Node_DynamicCast_AsPhysics_Volume, float CallFunc_BreakHitResult_Time_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, int32 CallFunc_BreakHitResult_HitItem_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, bool* CallFunc_IsDedicatedServer_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_1, struct FVector* CallFunc_GetSocketLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_2)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "JetpackBoostClient");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_JetpackBoostClient_Params Parms{};
////
////	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
////	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
////	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
////	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
////	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
////	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
////	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
////	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
////	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
////	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
////	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
////	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
////	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
////	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
////	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
////	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
////	Parms.CallFunc_VTraceSingleBP_OutHit = CallFunc_VTraceSingleBP_OutHit;
////	Parms.CallFunc_VTraceSingleBP_ReturnValue = CallFunc_VTraceSingleBP_ReturnValue;
////	Parms.K2Node_DynamicCast_AsPhysics_Volume = K2Node_DynamicCast_AsPhysics_Volume;
////	Parms.CallFunc_BreakHitResult_Time_1 = CallFunc_BreakHitResult_Time_1;
////	Parms.CallFunc_BreakHitResult_Location_1 = CallFunc_BreakHitResult_Location_1;
////	Parms.CallFunc_BreakHitResult_ImpactPoint_1 = CallFunc_BreakHitResult_ImpactPoint_1;
////	Parms.CallFunc_BreakHitResult_Normal_1 = CallFunc_BreakHitResult_Normal_1;
////	Parms.CallFunc_BreakHitResult_ImpactNormal_1 = CallFunc_BreakHitResult_ImpactNormal_1;
////	Parms.CallFunc_BreakHitResult_PhysMat_1 = CallFunc_BreakHitResult_PhysMat_1;
////	Parms.CallFunc_BreakHitResult_HitComponent_1 = CallFunc_BreakHitResult_HitComponent_1;
////	Parms.CallFunc_BreakHitResult_HitItem_1 = CallFunc_BreakHitResult_HitItem_1;
////	Parms.CallFunc_BreakHitResult_TraceStart_1 = CallFunc_BreakHitResult_TraceStart_1;
////	Parms.CallFunc_BreakHitResult_TraceEnd_1 = CallFunc_BreakHitResult_TraceEnd_1;
////	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
////	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue_1 = CallFunc_SpawnEmitterAtLocation_ReturnValue_1;
////	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue_2 = CallFunc_SpawnEmitterAtLocation_ReturnValue_2;
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	if (CurrentBoostFX != nullptr)
////		*CurrentBoostFX = Parms.CurrentBoostFX;
////
////	if (boostAnim != nullptr)
////		*boostAnim = Parms.boostAnim;
////
////	if (NewVelocityZ != nullptr)
////		*NewVelocityZ = Parms.NewVelocityZ;
////
////	if (CallFunc_Get_DefaultTekBuff_ref != nullptr)
////		*CallFunc_Get_DefaultTekBuff_ref = Parms.CallFunc_Get_DefaultTekBuff_ref;
////
////	if (CallFunc_Not_PreBool_ReturnValue != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue = Parms.CallFunc_Not_PreBool_ReturnValue;
////
////	if (CallFunc_Conv_DoubleToVector_ReturnValue != nullptr)
////		*CallFunc_Conv_DoubleToVector_ReturnValue = std::move(Parms.CallFunc_Conv_DoubleToVector_ReturnValue);
////
////	if (CallFunc_Conv_DoubleToVector_ReturnValue_1 != nullptr)
////		*CallFunc_Conv_DoubleToVector_ReturnValue_1 = std::move(Parms.CallFunc_Conv_DoubleToVector_ReturnValue_1);
////
////	if (CallFunc_Conv_DoubleToVector_ReturnValue_2 != nullptr)
////		*CallFunc_Conv_DoubleToVector_ReturnValue_2 = std::move(Parms.CallFunc_Conv_DoubleToVector_ReturnValue_2);
////
////	if (CallFunc_Multiply_VectorFloat_ReturnValue != nullptr)
////		*CallFunc_Multiply_VectorFloat_ReturnValue = std::move(Parms.CallFunc_Multiply_VectorFloat_ReturnValue);
////
////	if (CallFunc_GetSocketLocation_ReturnValue != nullptr)
////		*CallFunc_GetSocketLocation_ReturnValue = std::move(Parms.CallFunc_GetSocketLocation_ReturnValue);
////
////	if (CallFunc_LineTraceSingleForObjects_ReturnValue != nullptr)
////		*CallFunc_LineTraceSingleForObjects_ReturnValue = Parms.CallFunc_LineTraceSingleForObjects_ReturnValue;
////
////	if (CallFunc_IsDedicatedServer_ReturnValue != nullptr)
////		*CallFunc_IsDedicatedServer_ReturnValue = Parms.CallFunc_IsDedicatedServer_ReturnValue;
////
////	if (CallFunc_Not_PreBool_ReturnValue_1 != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue_1 = Parms.CallFunc_Not_PreBool_ReturnValue_1;
////
////	if (CallFunc_GetSocketLocation_ReturnValue_1 != nullptr)
////		*CallFunc_GetSocketLocation_ReturnValue_1 = std::move(Parms.CallFunc_GetSocketLocation_ReturnValue_1);
////
////	return Parms.ReturnValue;
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.JetpackBoost_Server
//// (Public, BlueprintCallable, BlueprintEvent)
//// Parameters:
//// double                             NewVelocityZ                                                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_IsPlayerWaterRunning_result                             (Edit, ExportObject, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
//// struct FVector                     CallFunc_GetPendingMovementInputVector_ReturnValue               (ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// double                             CallFunc_BreakVector_X                                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
//// double                             CallFunc_BreakVector_Y                                           (ExportObject, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
//// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
//// float                              CallFunc_PlayAnimEx_ReturnValue                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
//// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//// bool                               CallFunc_IsSubmerged_ReturnValue                                 (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// bool                               CallFunc_IsTekArmorUsingAbility__result                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
//// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (Edit, OutParm, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_IsServer_ReturnValue                                    (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
//// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (Edit, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
//// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
//// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (Edit, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
//// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
////
////struct FVector ABuff_TekArmor_Shirt_Rework_C::JetpackBoost_Server(double* NewVelocityZ, class AShooterCharacter* CallFunc_GetRef_OwningPlayer_player, double* CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double* CallFunc_BreakVector_Z, float* CallFunc_PlayAnimEx_ReturnValue, bool* CallFunc_IsSubmerged_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_IsServer_ReturnValue, double* CallFunc_Divide_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "JetpackBoost_Server");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_JetpackBoost_Server_Params Parms{};
////
////	Parms.CallFunc_GetRef_OwningPlayer_player = CallFunc_GetRef_OwningPlayer_player;
////	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
////	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
////	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
////	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	if (NewVelocityZ != nullptr)
////		*NewVelocityZ = Parms.NewVelocityZ;
////
////	if (CallFunc_BreakVector_X != nullptr)
////		*CallFunc_BreakVector_X = Parms.CallFunc_BreakVector_X;
////
////	if (CallFunc_BreakVector_Z != nullptr)
////		*CallFunc_BreakVector_Z = Parms.CallFunc_BreakVector_Z;
////
////	if (CallFunc_PlayAnimEx_ReturnValue != nullptr)
////		*CallFunc_PlayAnimEx_ReturnValue = Parms.CallFunc_PlayAnimEx_ReturnValue;
////
////	if (CallFunc_IsSubmerged_ReturnValue != nullptr)
////		*CallFunc_IsSubmerged_ReturnValue = Parms.CallFunc_IsSubmerged_ReturnValue;
////
////	if (CallFunc_Not_PreBool_ReturnValue != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue = Parms.CallFunc_Not_PreBool_ReturnValue;
////
////	if (CallFunc_Multiply_VectorFloat_ReturnValue != nullptr)
////		*CallFunc_Multiply_VectorFloat_ReturnValue = std::move(Parms.CallFunc_Multiply_VectorFloat_ReturnValue);
////
////	if (CallFunc_Divide_DoubleDouble_ReturnValue != nullptr)
////		*CallFunc_Divide_DoubleDouble_ReturnValue = Parms.CallFunc_Divide_DoubleDouble_ReturnValue;
////
////	if (CallFunc_Multiply_VectorFloat_ReturnValue_1 != nullptr)
////		*CallFunc_Multiply_VectorFloat_ReturnValue_1 = std::move(Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1);
////
////	return Parms.ReturnValue;
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.Update Thruster Impulse
//// (Public, BlueprintCallable, BlueprintEvent)
//// Parameters:
//// struct FVector                     Local_newFallVelocity                                            (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// double                             NewFallVelocityZ                                                 (ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
//// bool                               CallFunc_NotEqual_VectorVector_ReturnValue                       (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_IsThrusterActive_result                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
//// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
//// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
//// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
//// double                             CallFunc_BreakVector_X                                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
//// double                             CallFunc_BreakVector_Y                                           (ExportObject, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
//// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//// double                             CallFunc_Abs_ReturnValue                                         (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
//// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (Edit, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
//// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
//// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
//// double                             CallFunc_FMax_ReturnValue                                        (Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
//// double                             CallFunc_FMax_ReturnValue_1                                      (Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
//// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//// bool                               CallFunc_IsServer_ReturnValue                                    (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
////
////double ABuff_TekArmor_Shirt_Rework_C::Update_Thruster_Impulse(struct FVector* Local_newFallVelocity, double* NewFallVelocityZ, bool* CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_NotEqual_VectorVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, double* CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double* CallFunc_BreakVector_Z, double* CallFunc_Abs_ReturnValue, double* CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double* CallFunc_FMax_ReturnValue, double* CallFunc_FMax_ReturnValue_1, bool CallFunc_IsServer_ReturnValue)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "Update Thruster Impulse");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_Update_Thruster_Impulse_Params Parms{};
////
////	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
////	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
////	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
////	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	if (Local_newFallVelocity != nullptr)
////		*Local_newFallVelocity = std::move(Parms.Local_newFallVelocity);
////
////	if (NewFallVelocityZ != nullptr)
////		*NewFallVelocityZ = Parms.NewFallVelocityZ;
////
////	if (CallFunc_Not_PreBool_ReturnValue != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue = Parms.CallFunc_Not_PreBool_ReturnValue;
////
////	if (CallFunc_NotEqual_VectorVector_ReturnValue != nullptr)
////		*CallFunc_NotEqual_VectorVector_ReturnValue = Parms.CallFunc_NotEqual_VectorVector_ReturnValue;
////
////	if (CallFunc_BreakVector_X != nullptr)
////		*CallFunc_BreakVector_X = Parms.CallFunc_BreakVector_X;
////
////	if (CallFunc_BreakVector_Z != nullptr)
////		*CallFunc_BreakVector_Z = Parms.CallFunc_BreakVector_Z;
////
////	if (CallFunc_Abs_ReturnValue != nullptr)
////		*CallFunc_Abs_ReturnValue = Parms.CallFunc_Abs_ReturnValue;
////
////	if (CallFunc_Divide_DoubleDouble_ReturnValue != nullptr)
////		*CallFunc_Divide_DoubleDouble_ReturnValue = Parms.CallFunc_Divide_DoubleDouble_ReturnValue;
////
////	if (CallFunc_FMax_ReturnValue != nullptr)
////		*CallFunc_FMax_ReturnValue = Parms.CallFunc_FMax_ReturnValue;
////
////	if (CallFunc_FMax_ReturnValue_1 != nullptr)
////		*CallFunc_FMax_ReturnValue_1 = Parms.CallFunc_FMax_ReturnValue_1;
////
////	return Parms.ReturnValue;
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.IsThrusterActive
//// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
//// Parameters:
//// bool                               Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst)
//// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
//// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
//// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, Interp)
//// bool                               CallFunc_BooleanAND_ReturnValue                                  (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
////
////bool ABuff_TekArmor_Shirt_Rework_C::IsThrusterActive(bool Result, bool* CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_1)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "IsThrusterActive");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_IsThrusterActive_Params Parms{};
////
////	Parms.Result = Result;
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	if (CallFunc_Not_PreBool_ReturnValue != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue = Parms.CallFunc_Not_PreBool_ReturnValue;
////
////	if (CallFunc_Not_PreBool_ReturnValue_1 != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue_1 = Parms.CallFunc_Not_PreBool_ReturnValue_1;
////
////	return Parms.ReturnValue;
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.OnRep_CurrentThrusterState
//// (BlueprintCallable, BlueprintEvent)
//// Parameters:
//// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
//
////bool ABuff_TekArmor_Shirt_Rework_C::OnRep_CurrentThrusterState()
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "OnRep_CurrentThrusterState");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_OnRep_CurrentThrusterState_Params Parms{};
////
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	return Parms.ReturnValue;
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.SetCastedArmorPieceRef
//// (Public, BlueprintCallable, BlueprintEvent)
//// Parameters:
//// class UPrimalItemArmor_Base_Tek_C* CallFunc_GetRelatedTekArmorRef_tekArmorRef                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
//// class UPrimalItemArmor_TekShirt_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Tek_Shirt                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
//// bool                               K2Node_DynamicCast_bSuccess                                      (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
////
////bool ABuff_TekArmor_Shirt_Rework_C::SetCastedArmorPieceRef(class UPrimalItemArmor_TekShirt_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Tek_Shirt)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "SetCastedArmorPieceRef");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_SetCastedArmorPieceRef_Params Parms{};
////
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	if (K2Node_DynamicCast_AsPrimal_Item_Armor_Tek_Shirt != nullptr)
////		*K2Node_DynamicCast_AsPrimal_Item_Armor_Tek_Shirt = Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Tek_Shirt;
////
////	return Parms.ReturnValue;
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.BuffTickClient
//// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
//// Parameters:
//// float                              DeltaTime                                                        (BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
//// bool                               CallFunc_IsServer_ReturnValue                                    (ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
//// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ConstParm, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_IsTimeSince_ReturnValue                                 (ConstParm, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_IsAbilityValid_OutValid                                 (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
//// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
//// class ABuff_TekArmor_C*            CallFunc_Get_DefaultTekBuff_ref                                  (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
//// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_1                       (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
//// bool                               CallFunc_IsTekChargeThrusting_result                             (Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// bool                               CallFunc_AreChargeThrustingAnimsPlaying_result                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
//// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_IsPlayerUnderWater_result                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// bool                               CallFunc_BooleanAND_ReturnValue                                  (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
//// class APhysicsVolume*              CallFunc_GetPhysicsVolume_ReturnValue                            (ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_IsTekArmorUsingAbility__result                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, Interp)
//// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
//// bool                               CallFunc_IsValid_ReturnValue_2                                   (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
//// bool                               CallFunc_IsPlayerGrounded_result                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
//// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
//// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, SubobjectReference)
//// TArray<class AActor*>              K2Node_MakeArray_Array_1                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
//// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
//// double                             CallFunc_SelectFloat_ReturnValue_1                               (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
//// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
//// struct FVector                     CallFunc_GetActorBounds_Origin                                   (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// struct FVector                     CallFunc_GetActorBounds_BoxExtent                                (Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_2                       (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
//// double                             CallFunc_BreakVector_X                                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
//// double                             CallFunc_BreakVector_Y                                           (ExportObject, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
//// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
//// double                             CallFunc_BreakVector_X_1                                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
//// double                             CallFunc_BreakVector_Y_1                                         (ExportObject, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
//// double                             CallFunc_BreakVector_Z_1                                         (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
//// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
//// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
//// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
//// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
//// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
//// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_3                       (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
//// bool                               CallFunc_IsThrusterActive_result                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// bool                               CallFunc_IsPlayerUnderWater_result_1                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference, Interp)
//// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, RepNotify, Interp)
//// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
//// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
//// struct FVector                     CallFunc_SelectVector_ReturnValue_1                              (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
//// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
//// double                             CallFunc_SelectFloat_ReturnValue_2                               (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
//// struct FVector                     CallFunc_BreakTransform_Location                                 (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
//// struct FVector                     CallFunc_BreakTransform_Scale                                    (Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
//// double                             CallFunc_SelectFloat_ReturnValue_3                               (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
//// struct FVector                     CallFunc_GetUpVector_ReturnValue                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
//// struct FVector                     CallFunc_SelectVector_ReturnValue_2                              (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
//// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (Edit, OutParm, DisableEditOnInstance, SubobjectReference)
//// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
//// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
//// double                             CallFunc_BreakVector_X_2                                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
//// double                             CallFunc_BreakVector_Y_2                                         (ExportObject, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
//// double                             CallFunc_BreakVector_Z_2                                         (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
//// struct FHitResult                  CallFunc_LineTraceSingleForObjects_OutHit                        (ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
//// bool                               CallFunc_LineTraceSingleForObjects_ReturnValue                   (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
//// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_BreakHitResult_bBlockingHit                             (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// float                              CallFunc_BreakHitResult_Time                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
//// float                              CallFunc_BreakHitResult_Distance                                 (ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// struct FVector                     CallFunc_BreakHitResult_Location                                 (BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
//// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (Edit, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
//// struct FVector                     CallFunc_BreakHitResult_Normal                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
//// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Config, SubobjectReference)
//// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
//// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ConstParm, DisableEditOnTemplate, Config, SubobjectReference)
//// class FName                        CallFunc_BreakHitResult_HitBoneName                              (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// class FName                        CallFunc_BreakHitResult_BoneName                                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// int32                              CallFunc_BreakHitResult_HitItem                                  (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
//// int32                              CallFunc_BreakHitResult_ElementIndex                             (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// int32                              CallFunc_BreakHitResult_FaceIndex                                (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, SubobjectReference)
//// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, SubobjectReference)
//// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
//// class APhysicsVolume*              K2Node_DynamicCast_AsPhysics_Volume                              (Edit, ConstParm, Net, EditFixedSize, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
//// bool                               K2Node_DynamicCast_bSuccess                                      (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_1                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
//// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1                 (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
//// float                              CallFunc_LinePlaneIntersection_OriginNormal_T                    (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, DuplicateTransient, SubobjectReference)
//// struct FVector                     CallFunc_LinePlaneIntersection_OriginNormal_Intersection         (Edit, BlueprintVisible, ExportObject, OutParm, Transient, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// bool                               CallFunc_LinePlaneIntersection_OriginNormal_ReturnValue          (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
//// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
//// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
//// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
//// bool                               CallFunc_IsFirstPerson_ReturnValue                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
//// bool                               CallFunc_IsPlayerGrounded_result_1                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference, Interp)
//// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
//// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, NonTransactional)
//// double                             CallFunc_SelectFloat_ReturnValue_4                               (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
//// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
//// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_4                       (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
//// bool                               CallFunc_CanUseTekAbility_bResult                                (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
//// bool                               CallFunc_Can_Element_Decrease_CanDecrease                        (ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
//// int32                              CallFunc_SelectInt_ReturnValue                                   (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
//// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
//// int32                              CallFunc_SelectInt_ReturnValue_1                                 (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
//// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp, NonTransactional)
//// bool                               CallFunc_IsPlayerUnderWater_result_2                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference, RepNotify, Interp)
//// bool                               CallFunc_BooleanAND_ReturnValue_6                                (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
//// int32                              CallFunc_SelectInt_ReturnValue_2                                 (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
//// bool                               CallFunc_IsThrusterActive_result_1                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference, Interp)
//// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//// double                             CallFunc_Client_Consume_Element_After_Time_deltaTime_ImplicitCast(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
//// float                              K2Node_VariableSet_BuffTickClientMinTime_ImplicitCast            (ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// float                              K2Node_VariableSet_BuffTickClientMaxTime_ImplicitCast            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// float                              CallFunc_ClientStartCameraShake_Scale_ImplicitCast               (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
////
////float ABuff_TekArmor_Shirt_Rework_C::BuffTickClient(float DeltaTime, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue, struct FVector* CallFunc_Conv_DoubleToVector_ReturnValue, class ABuff_TekArmor_C** CallFunc_Get_DefaultTekBuff_ref, struct FVector* CallFunc_Conv_DoubleToVector_ReturnValue_1, bool* CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_1, const TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const TArray<class AActor*>& K2Node_MakeArray_Array_1, const struct FVector& CallFunc_GetActorBounds_Origin, struct FVector* CallFunc_Conv_DoubleToVector_ReturnValue_2, double* CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double* CallFunc_BreakVector_Z, double* CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double* CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, struct FVector* CallFunc_Conv_DoubleToVector_ReturnValue_3, bool* CallFunc_Not_PreBool_ReturnValue_2, struct FVector* CallFunc_SelectVector_ReturnValue, struct FVector* CallFunc_SelectVector_ReturnValue_1, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, struct FVector* CallFunc_SelectVector_ReturnValue_2, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, double* CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double* CallFunc_BreakVector_Z_2, bool* CallFunc_LineTraceSingleForObjects_ReturnValue, bool* CallFunc_LessEqual_DoubleDouble_ReturnValue, float CallFunc_BreakHitResult_Time, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, int32 CallFunc_BreakHitResult_HitItem, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class APhysicsVolume* K2Node_DynamicCast_AsPhysics_Volume, bool* CallFunc_LessEqual_DoubleDouble_ReturnValue_1, float CallFunc_LinePlaneIntersection_OriginNormal_T, struct FVector* CallFunc_LinePlaneIntersection_OriginNormal_Intersection, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool* CallFunc_IsFirstPerson_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_3, struct FVector* CallFunc_Conv_DoubleToVector_ReturnValue_4, bool CallFunc_Can_Element_Decrease_CanDecrease, float K2Node_VariableSet_BuffTickClientMinTime_ImplicitCast, float* K2Node_VariableSet_BuffTickClientMaxTime_ImplicitCast)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "BuffTickClient");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_BuffTickClient_Params Parms{};
////
////	Parms.DeltaTime = DeltaTime;
////	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
////	Parms.CallFunc_IsTimeSince_ReturnValue = CallFunc_IsTimeSince_ReturnValue;
////	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
////	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
////	Parms.CallFunc_GetActorBounds_Origin = CallFunc_GetActorBounds_Origin;
////	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
////	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
////	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
////	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
////	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
////	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
////	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
////	Parms.CallFunc_BreakVector_Y_2 = CallFunc_BreakVector_Y_2;
////	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
////	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
////	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
////	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
////	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
////	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
////	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
////	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
////	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
////	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
////	Parms.K2Node_DynamicCast_AsPhysics_Volume = K2Node_DynamicCast_AsPhysics_Volume;
////	Parms.CallFunc_LinePlaneIntersection_OriginNormal_T = CallFunc_LinePlaneIntersection_OriginNormal_T;
////	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
////	Parms.CallFunc_Can_Element_Decrease_CanDecrease = CallFunc_Can_Element_Decrease_CanDecrease;
////	Parms.K2Node_VariableSet_BuffTickClientMinTime_ImplicitCast = K2Node_VariableSet_BuffTickClientMinTime_ImplicitCast;
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	if (CallFunc_Conv_DoubleToVector_ReturnValue != nullptr)
////		*CallFunc_Conv_DoubleToVector_ReturnValue = std::move(Parms.CallFunc_Conv_DoubleToVector_ReturnValue);
////
////	if (CallFunc_Get_DefaultTekBuff_ref != nullptr)
////		*CallFunc_Get_DefaultTekBuff_ref = Parms.CallFunc_Get_DefaultTekBuff_ref;
////
////	if (CallFunc_Conv_DoubleToVector_ReturnValue_1 != nullptr)
////		*CallFunc_Conv_DoubleToVector_ReturnValue_1 = std::move(Parms.CallFunc_Conv_DoubleToVector_ReturnValue_1);
////
////	if (CallFunc_Not_PreBool_ReturnValue != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue = Parms.CallFunc_Not_PreBool_ReturnValue;
////
////	if (CallFunc_Not_PreBool_ReturnValue_1 != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue_1 = Parms.CallFunc_Not_PreBool_ReturnValue_1;
////
////	if (CallFunc_Conv_DoubleToVector_ReturnValue_2 != nullptr)
////		*CallFunc_Conv_DoubleToVector_ReturnValue_2 = std::move(Parms.CallFunc_Conv_DoubleToVector_ReturnValue_2);
////
////	if (CallFunc_BreakVector_X != nullptr)
////		*CallFunc_BreakVector_X = Parms.CallFunc_BreakVector_X;
////
////	if (CallFunc_BreakVector_Z != nullptr)
////		*CallFunc_BreakVector_Z = Parms.CallFunc_BreakVector_Z;
////
////	if (CallFunc_BreakVector_X_1 != nullptr)
////		*CallFunc_BreakVector_X_1 = Parms.CallFunc_BreakVector_X_1;
////
////	if (CallFunc_BreakVector_Z_1 != nullptr)
////		*CallFunc_BreakVector_Z_1 = Parms.CallFunc_BreakVector_Z_1;
////
////	if (CallFunc_Conv_DoubleToVector_ReturnValue_3 != nullptr)
////		*CallFunc_Conv_DoubleToVector_ReturnValue_3 = std::move(Parms.CallFunc_Conv_DoubleToVector_ReturnValue_3);
////
////	if (CallFunc_Not_PreBool_ReturnValue_2 != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue_2 = Parms.CallFunc_Not_PreBool_ReturnValue_2;
////
////	if (CallFunc_SelectVector_ReturnValue != nullptr)
////		*CallFunc_SelectVector_ReturnValue = std::move(Parms.CallFunc_SelectVector_ReturnValue);
////
////	if (CallFunc_SelectVector_ReturnValue_1 != nullptr)
////		*CallFunc_SelectVector_ReturnValue_1 = std::move(Parms.CallFunc_SelectVector_ReturnValue_1);
////
////	if (CallFunc_SelectVector_ReturnValue_2 != nullptr)
////		*CallFunc_SelectVector_ReturnValue_2 = std::move(Parms.CallFunc_SelectVector_ReturnValue_2);
////
////	if (CallFunc_Multiply_VectorFloat_ReturnValue != nullptr)
////		*CallFunc_Multiply_VectorFloat_ReturnValue = std::move(Parms.CallFunc_Multiply_VectorFloat_ReturnValue);
////
////	if (CallFunc_BreakVector_X_2 != nullptr)
////		*CallFunc_BreakVector_X_2 = Parms.CallFunc_BreakVector_X_2;
////
////	if (CallFunc_BreakVector_Z_2 != nullptr)
////		*CallFunc_BreakVector_Z_2 = Parms.CallFunc_BreakVector_Z_2;
////
////	if (CallFunc_LineTraceSingleForObjects_ReturnValue != nullptr)
////		*CallFunc_LineTraceSingleForObjects_ReturnValue = Parms.CallFunc_LineTraceSingleForObjects_ReturnValue;
////
////	if (CallFunc_LessEqual_DoubleDouble_ReturnValue != nullptr)
////		*CallFunc_LessEqual_DoubleDouble_ReturnValue = Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue;
////
////	if (CallFunc_LessEqual_DoubleDouble_ReturnValue_1 != nullptr)
////		*CallFunc_LessEqual_DoubleDouble_ReturnValue_1 = Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_1;
////
////	if (CallFunc_LinePlaneIntersection_OriginNormal_Intersection != nullptr)
////		*CallFunc_LinePlaneIntersection_OriginNormal_Intersection = std::move(Parms.CallFunc_LinePlaneIntersection_OriginNormal_Intersection);
////
////	if (CallFunc_IsFirstPerson_ReturnValue != nullptr)
////		*CallFunc_IsFirstPerson_ReturnValue = Parms.CallFunc_IsFirstPerson_ReturnValue;
////
////	if (CallFunc_Not_PreBool_ReturnValue_3 != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue_3 = Parms.CallFunc_Not_PreBool_ReturnValue_3;
////
////	if (CallFunc_Conv_DoubleToVector_ReturnValue_4 != nullptr)
////		*CallFunc_Conv_DoubleToVector_ReturnValue_4 = std::move(Parms.CallFunc_Conv_DoubleToVector_ReturnValue_4);
////
////	if (K2Node_VariableSet_BuffTickClientMaxTime_ImplicitCast != nullptr)
////		*K2Node_VariableSet_BuffTickClientMaxTime_ImplicitCast = Parms.K2Node_VariableSet_BuffTickClientMaxTime_ImplicitCast;
////
////	return Parms.ReturnValue;
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.Client_SetThrusterState
//// (Public, BlueprintCallable, BlueprintEvent)
//// Parameters:
//// enum class E_TekThrusterState      NewState                                                         (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
//// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
//// bool                               CallFunc_Is_Restricted_Because_Of_Genesis_Map_restricted         (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
//// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Net, EditFixedSize, OutParm, ReturnParm, Config, SubobjectReference)
//// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
//// bool                               K2Node_DynamicCast_bSuccess                                      (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
//// bool                               CallFunc_BooleanAND_ReturnValue                                  (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//// bool                               CallFunc_IsPlayerInjured_result                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// bool                               CallFunc_CanUseTekAbility_bResult                                (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
//// bool                               CallFunc_IsPlayerGrounded_result                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
//// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, Interp)
//// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, RepNotify, Interp)
//// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_Can_Element_Decrease_CanDecrease                        (ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_Can_Element_Decrease_CanDecrease_1                      (ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
//// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
//// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
//
////bool ABuff_TekArmor_Shirt_Rework_C::Client_SetThrusterState(enum class E_TekThrusterState NewState, bool* CallFunc_Is_Restricted_Because_Of_Genesis_Map_restricted, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_1, const class FString& CallFunc_MakeLiteralString_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Can_Element_Decrease_CanDecrease, bool CallFunc_Can_Element_Decrease_CanDecrease_1)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "Client_SetThrusterState");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_Client_SetThrusterState_Params Parms{};
////
////	Parms.NewState = NewState;
////	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
////	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
////	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
////	Parms.CallFunc_Can_Element_Decrease_CanDecrease = CallFunc_Can_Element_Decrease_CanDecrease;
////	Parms.CallFunc_Can_Element_Decrease_CanDecrease_1 = CallFunc_Can_Element_Decrease_CanDecrease_1;
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	if (CallFunc_Is_Restricted_Because_Of_Genesis_Map_restricted != nullptr)
////		*CallFunc_Is_Restricted_Because_Of_Genesis_Map_restricted = Parms.CallFunc_Is_Restricted_Because_Of_Genesis_Map_restricted;
////
////	if (CallFunc_Not_PreBool_ReturnValue != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue = Parms.CallFunc_Not_PreBool_ReturnValue;
////
////	if (CallFunc_Not_PreBool_ReturnValue_1 != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue_1 = Parms.CallFunc_Not_PreBool_ReturnValue_1;
////
////	if (CallFunc_Not_PreBool_ReturnValue_2 != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue_2 = Parms.CallFunc_Not_PreBool_ReturnValue_2;
////
////	return Parms.ReturnValue;
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.JetpackBoost_Start
//// (Public, BlueprintCallable, BlueprintEvent)
//// Parameters:
//// bool                               bBoostHitGround                                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// struct FVector                     GroundFXSpawnLocation                                            (Edit, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// double                             NewZVelocity                                                     (Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// bool                               CallFunc_IsPlayerUnderWater_result                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//// float                              CallFunc_GetSimpleMontageDuration_ReturnValue                    (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ConstParm, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
//// double                             CallFunc_Add_DoubleFloat_ReturnValue                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
//// double                             CallFunc_Add_DoubleFloat_ReturnValue_1                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
//// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
//// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// class AController*                 CallFunc_GetController_ReturnValue                               (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
//// bool                               CallFunc_Can_Element_Decrease_CanDecrease                        (ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
//// class APlayerController*           CallFunc_CastToPlayerController_ReturnValue                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// double                             CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (ConstParm, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
//// float                              CallFunc_TimeSince_ReturnValue                                   (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
//// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
//// bool                               CallFunc_BooleanAND_ReturnValue                                  (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast                          (Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
//// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
////
////double ABuff_TekArmor_Shirt_Rework_C::JetpackBoost_Start(bool* bBoostHitGround, const struct FVector& GroundFXSpawnLocation, double NewZVelocity, float CallFunc_GetSimpleMontageDuration_ReturnValue, double* CallFunc_Add_DoubleFloat_ReturnValue, double* CallFunc_Add_DoubleFloat_ReturnValue_1, bool* CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_MakeLiteralString_ReturnValue, class AController** CallFunc_GetController_ReturnValue, bool CallFunc_Can_Element_Decrease_CanDecrease, float* CallFunc_TimeSince_ReturnValue)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "JetpackBoost_Start");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_JetpackBoost_Start_Params Parms{};
////
////	Parms.GroundFXSpawnLocation = GroundFXSpawnLocation;
////	Parms.NewZVelocity = NewZVelocity;
////	Parms.CallFunc_GetSimpleMontageDuration_ReturnValue = CallFunc_GetSimpleMontageDuration_ReturnValue;
////	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
////	Parms.CallFunc_Can_Element_Decrease_CanDecrease = CallFunc_Can_Element_Decrease_CanDecrease;
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	if (bBoostHitGround != nullptr)
////		*bBoostHitGround = Parms.bBoostHitGround;
////
////	if (CallFunc_Add_DoubleFloat_ReturnValue != nullptr)
////		*CallFunc_Add_DoubleFloat_ReturnValue = Parms.CallFunc_Add_DoubleFloat_ReturnValue;
////
////	if (CallFunc_Add_DoubleFloat_ReturnValue_1 != nullptr)
////		*CallFunc_Add_DoubleFloat_ReturnValue_1 = Parms.CallFunc_Add_DoubleFloat_ReturnValue_1;
////
////	if (CallFunc_Not_PreBool_ReturnValue != nullptr)
////		*CallFunc_Not_PreBool_ReturnValue = Parms.CallFunc_Not_PreBool_ReturnValue;
////
////	if (CallFunc_GetController_ReturnValue != nullptr)
////		*CallFunc_GetController_ReturnValue = Parms.CallFunc_GetController_ReturnValue;
////
////	if (CallFunc_TimeSince_ReturnValue != nullptr)
////		*CallFunc_TimeSince_ReturnValue = Parms.CallFunc_TimeSince_ReturnValue;
////
////	return Parms.ReturnValue;
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_Jump_K2Node_InputActionEvent_4
//// (BlueprintEvent)
//// Parameters:
//// struct FKey                        Key                                                              (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance)
//
//void ABuff_TekArmor_Shirt_Rework_C::InpActEvt_Jump_K2Node_InputActionEvent_4(struct FKey* Key)
//{
//	static class UFunction* Func = nullptr;
//
//	if (!Func)
//		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "InpActEvt_Jump_K2Node_InputActionEvent_4");
//
//	Params::ABuff_TekArmor_Shirt_Rework_C_InpActEvt_Jump_K2Node_InputActionEvent_4_Params Parms{};
//
//
//	UObject::ProcessEvent(Func, &Parms);
//
//	if (Key != nullptr)
//		*Key = std::move(Parms.Key);
//
//}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_Jump_K2Node_InputActionEvent_3
//// (BlueprintEvent)
//// Parameters:
//// struct FKey                        Key                                                              (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance)
//
////void ABuff_TekArmor_Shirt_Rework_C::InpActEvt_Jump_K2Node_InputActionEvent_3(struct FKey* Key)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "InpActEvt_Jump_K2Node_InputActionEvent_3");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_InpActEvt_Jump_K2Node_InputActionEvent_3_Params Parms{};
////
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	if (Key != nullptr)
////		*Key = std::move(Parms.Key);
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_Run_K2Node_InputActionEvent_2
//// (BlueprintEvent)
//// Parameters:
//// struct FKey                        Key                                                              (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance)
//
////void ABuff_TekArmor_Shirt_Rework_C::InpActEvt_Run_K2Node_InputActionEvent_2(struct FKey* Key)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "InpActEvt_Run_K2Node_InputActionEvent_2");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_InpActEvt_Run_K2Node_InputActionEvent_2_Params Parms{};
////
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	if (Key != nullptr)
////		*Key = std::move(Parms.Key);
////
////}
////
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_Run_K2Node_InputActionEvent_1
//// (BlueprintEvent)
//// Parameters:
//// struct FKey                        Key                                                              (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance)
//
////void ABuff_TekArmor_Shirt_Rework_C::InpActEvt_Run_K2Node_InputActionEvent_1(struct FKey* Key)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "InpActEvt_Run_K2Node_InputActionEvent_1");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_InpActEvt_Run_K2Node_InputActionEvent_1_Params Parms{};
////
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	if (Key != nullptr)
////		*Key = std::move(Parms.Key);
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_RunToggle_K2Node_InputActionEvent_0
//// (BlueprintEvent)
//// Parameters:
//// struct FKey                        Key                                                              (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance)
//
////void ABuff_TekArmor_Shirt_Rework_C::InpActEvt_RunToggle_K2Node_InputActionEvent_0(struct FKey* Key)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "InpActEvt_RunToggle_K2Node_InputActionEvent_0");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_InpActEvt_RunToggle_K2Node_InputActionEvent_0_Params Parms{};
////
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	if (Key != nullptr)
////		*Key = std::move(Parms.Key);
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_1
//// (BlueprintEvent)
//// Parameters:
//// struct FKey                        Key                                                              (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance)
//
////void ABuff_TekArmor_Shirt_Rework_C::InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_1(struct FKey* Key)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_1");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_1_Params Parms{};
////
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	if (Key != nullptr)
////		*Key = std::move(Parms.Key);
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_0
//// (BlueprintEvent)
//// Parameters:
//// struct FKey                        Key                                                              (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance)
//
////void ABuff_TekArmor_Shirt_Rework_C::InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_0(struct FKey* Key)
////{
////	static class UFunction* Func = nullptr;
////
////	if (!Func)
////		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_0");
////
////	Params::ABuff_TekArmor_Shirt_Rework_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_0_Params Parms{};
////
////
////	UObject::ProcessEvent(Func, &Parms);
////
////	if (Key != nullptr)
////		*Key = std::move(Parms.Key);
////
////}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.Server_SetThrusterState
//// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
//// Parameters:
//// enum class E_TekThrusterState      NewState                                                         (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
//
namespace CG
{
	/**
 * Function:
 * 		RVA    -> 0x00000000
 * 		Name   -> PredefinedFunction ABuff_TekArmor_Gloves_C.StaticClass
 * 		Flags  -> (Predefined, Static)
 */
	//UClass* ABuff_TekArmor_Gloves_C::StaticClass()
	//{
	//	static UClass* ptr = nullptr;
	//	if (!ptr)
	//		ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C");
	//	return ptr;
	//}
	class UClass* ABuff_TekArmor_Shirt_Rework_C::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClass("BlueprintGeneratedClass Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C");

		return Clss;
	}
	void ABuff_TekArmor_Shirt_Rework_C::Server_SetThrusterState(enum class E_TekThrusterState NewState)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = UObject::FindObject<UFunction>("Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.Server_SetThrusterState");
		if (!Func) {
			nlog("[-] Tekarmor Fn not found \n");
			return;
		}
		
		//Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "Server_SetThrusterState");
		//Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Server_SetPunchChargeState
		Params::ABuff_TekArmor_Shirt_Rework_C_Server_SetThrusterState_Params Parms{};

		Parms.NewState = NewState;

		UObject::ProcessEvent(Func, &Parms);

	}
};
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.UpdateCanBoostAfterCooldown
//// (BlueprintCallable, BlueprintEvent)
//// Parameters:
//
//void ABuff_TekArmor_Shirt_Rework_C::UpdateCanBoostAfterCooldown()
//{
//	static class UFunction* Func = nullptr;
//
//	if (!Func)
//		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "UpdateCanBoostAfterCooldown");
//
//
//
//	UObject::ProcessEvent(Func, nullptr);
//
//}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.PlayBoostCooldownSound
//// (BlueprintCallable, BlueprintEvent)
//// Parameters:
//
//void ABuff_TekArmor_Shirt_Rework_C::PlayBoostCooldownSound()
//{
//	static class UFunction* Func = nullptr;
//
//	if (!Func)
//		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "PlayBoostCooldownSound");
//
//
//
//	UObject::ProcessEvent(Func, nullptr);
//
//}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.FlashThrusterDuringBoost
//// (BlueprintCallable, BlueprintEvent)
//// Parameters:
//
//void ABuff_TekArmor_Shirt_Rework_C::FlashThrusterDuringBoost()
//{
//	static class UFunction* Func = nullptr;
//
//	if (!Func)
//		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "FlashThrusterDuringBoost");
//
//
//
//	UObject::ProcessEvent(Func, nullptr);
//
//}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.BoostCleanupAfterDuration
//// (BlueprintCallable, BlueprintEvent)
//// Parameters:
//
//void ABuff_TekArmor_Shirt_Rework_C::BoostCleanupAfterDuration()
//{
//	static class UFunction* Func = nullptr;
//
//	if (!Func)
//		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "BoostCleanupAfterDuration");
//
//
//
//	UObject::ProcessEvent(Func, nullptr);
//
//}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.OnPlayerJump_Released
//// (BlueprintCallable, BlueprintEvent)
//// Parameters:
//
//void ABuff_TekArmor_Shirt_Rework_C::OnPlayerJump_Released()
//{
//	static class UFunction* Func = nullptr;
//
//	if (!Func)
//		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "OnPlayerJump_Released");
//
//
//
//	UObject::ProcessEvent(Func, nullptr);
//
//}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.OnPlayerJump_Pressed
//// (BlueprintCallable, BlueprintEvent)
//// Parameters:
//
//void ABuff_TekArmor_Shirt_Rework_C::OnPlayerJump_Pressed()
//{
//	static class UFunction* Func = nullptr;
//
//	if (!Func)
//		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "OnPlayerJump_Pressed");
//
//
//
//	UObject::ProcessEvent(Func, nullptr);
//
//}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.Server_UpdateJetpackVFXOffset
//// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
//// Parameters:
//// struct FTransform                  NewOffset                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//
//void ABuff_TekArmor_Shirt_Rework_C::Server_UpdateJetpackVFXOffset(struct FTransform* NewOffset)
//{
//	static class UFunction* Func = nullptr;
//
//	if (!Func)
//		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "Server_UpdateJetpackVFXOffset");
//
//	Params::ABuff_TekArmor_Shirt_Rework_C_Server_UpdateJetpackVFXOffset_Params Parms{};
//
//
//	UObject::ProcessEvent(Func, &Parms);
//
//	if (NewOffset != nullptr)
//		*NewOffset = std::move(Parms.NewOffset);
//
//}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.ReceiveBeginPlay
//// (Event, Protected, BlueprintEvent)
//// Parameters:
//
//void ABuff_TekArmor_Shirt_Rework_C::ReceiveBeginPlay()
//{
//	static class UFunction* Func = nullptr;
//
//	if (!Func)
//		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "ReceiveBeginPlay");
//
//
//
//	UObject::ProcessEvent(Func, nullptr);
//
//}
//
//
//// Function Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C.ExecuteUbergraph_Buff_TekArmor_Shirt_Rework
//// (Final, UbergraphFunction, HasDefaults)
//// Parameters:
//// int32                              EntryPoint                                                       (Edit, ConstParm, Net, Parm, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
//// struct FKey                        Temp_struct_Variable                                             (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
//// struct FKey                        K2Node_InputActionEvent_Key                                      (Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
//// struct FKey                        K2Node_InputKeyEvent_Key_1                                       (Edit, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
//// struct FKey                        K2Node_InputKeyEvent_Key                                         (Edit, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// struct FKey                        Temp_struct_Variable_1                                           (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
//// struct FKey                        K2Node_InputActionEvent_Key_3                                    (Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional)
//// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ConstParm, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
//// enum class E_TekThrusterState      K2Node_CustomEvent_newState                                      (BlueprintVisible, Parm, ReturnParm, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
//// bool                               CallFunc_IsPlayerGrounded_result                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
//// struct FKey                        K2Node_InputActionEvent_Key_4                                    (Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
//// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference)
//// struct FKey                        K2Node_InputActionEvent_Key_1                                    (Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference, Interp)
//// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
//// struct FKey                        K2Node_InputActionEvent_Key_2                                    (Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
//// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
//// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
//// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, Interp)
//// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, RepNotify, Interp)
//// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_IsPlayerInjured_result                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//// bool                               CallFunc_IsPlayerGrounded_result_1                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference, Interp)
//// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, NonTransactional)
//// class AShooterCharacter*           CallFunc_GetRef_OwningPlayer_player                              (ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_CanUseTekAbility_bResult                                (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
//// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
//// struct FKey                        Temp_struct_Variable_2                                           (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
//// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, Interp, NonTransactional)
//// bool                               CallFunc_CanUseTekAbility_bResult_1                              (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference, Interp)
//// bool                               CallFunc_CanUseTekAbility_bResult_2                              (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
//// bool                               CallFunc_Is_Restricted_Because_Of_Genesis_Map_restricted         (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, GlobalConfig, InstancedReference, SubobjectReference)
//// bool                               CallFunc_IsPlayerGrounded_result_2                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
//// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
//// bool                               CallFunc_Is_Restricted_Because_Of_Genesis_Map_restricted_1       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, GlobalConfig, InstancedReference, SubobjectReference, Interp)
//// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Net, EditFixedSize, OutParm, ReturnParm, Config, SubobjectReference)
//// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
//// bool                               K2Node_DynamicCast_bSuccess                                      (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
//// double                             CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (ConstParm, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
//// bool                               CallFunc_Not_PreBool_ReturnValue_7                               (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, SubobjectReference, EditorOnly)
//// bool                               CallFunc_BooleanAND_ReturnValue                                  (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
//// float                              CallFunc_TimeSince_ReturnValue                                   (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
//// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
//// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
//// float                              CallFunc_TimeSince_ReturnValue_1                                 (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference, Interp)
//// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
//// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
//// struct FTransform                  K2Node_CustomEvent_NewOffset                                     (ExportObject, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
//// float                              CallFunc_RetriggerableDelay_Duration_ImplicitCast                (ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
//// float                              CallFunc_Delay_Duration_ImplicitCast                             (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
//// float                              CallFunc_RetriggerableDelay_Duration_ImplicitCast_1              (ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
//// float                              CallFunc_RetriggerableDelay_Duration_ImplicitCast_2              (ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
//// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
//// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, SubobjectReference)
//// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
//
//double ABuff_TekArmor_Shirt_Rework_C::ExecuteUbergraph_Buff_TekArmor_Shirt_Rework(int32* EntryPoint, const struct FKey& K2Node_InputActionEvent_Key, struct FKey* K2Node_InputKeyEvent_Key_1, struct FKey* K2Node_InputKeyEvent_Key, const struct FKey& K2Node_InputActionEvent_Key_3, const struct FKey& K2Node_InputActionEvent_Key_4, bool* CallFunc_Not_PreBool_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_1, const struct FKey& K2Node_InputActionEvent_Key_2, bool* CallFunc_Not_PreBool_ReturnValue_1, bool* CallFunc_Not_PreBool_ReturnValue_2, bool* CallFunc_Not_PreBool_ReturnValue_3, class AShooterCharacter* CallFunc_GetRef_OwningPlayer_player, bool* CallFunc_Not_PreBool_ReturnValue_4, bool* CallFunc_Not_PreBool_ReturnValue_5, bool* CallFunc_Is_Restricted_Because_Of_Genesis_Map_restricted, bool* CallFunc_Not_PreBool_ReturnValue_6, bool* CallFunc_Is_Restricted_Because_Of_Genesis_Map_restricted_1, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* CallFunc_Not_PreBool_ReturnValue_7, float* CallFunc_TimeSince_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, float* CallFunc_TimeSince_ReturnValue_1, bool* CallFunc_LessEqual_DoubleDouble_ReturnValue, double* CallFunc_Less_DoubleDouble_A_ImplicitCast, double* CallFunc_LessEqual_DoubleDouble_A_ImplicitCast)
//{
//	static class UFunction* Func = nullptr;
//
//	if (!Func)
//		Func = Class->GetFunction("Buff_TekArmor_Shirt_Rework_C", "ExecuteUbergraph_Buff_TekArmor_Shirt_Rework");
//
//	Params::ABuff_TekArmor_Shirt_Rework_C_ExecuteUbergraph_Buff_TekArmor_Shirt_Rework_Params Parms{};
//
//	Parms.K2Node_InputActionEvent_Key = K2Node_InputActionEvent_Key;
//	Parms.K2Node_InputActionEvent_Key_3 = K2Node_InputActionEvent_Key_3;
//	Parms.K2Node_InputActionEvent_Key_4 = K2Node_InputActionEvent_Key_4;
//	Parms.K2Node_InputActionEvent_Key_1 = K2Node_InputActionEvent_Key_1;
//	Parms.K2Node_InputActionEvent_Key_2 = K2Node_InputActionEvent_Key_2;
//	Parms.CallFunc_GetRef_OwningPlayer_player = CallFunc_GetRef_OwningPlayer_player;
//	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
//	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
//
//	UObject::ProcessEvent(Func, &Parms);
//
//	if (EntryPoint != nullptr)
//		*EntryPoint = Parms.EntryPoint;
//
//	if (K2Node_InputKeyEvent_Key_1 != nullptr)
//		*K2Node_InputKeyEvent_Key_1 = std::move(Parms.K2Node_InputKeyEvent_Key_1);
//
//	if (K2Node_InputKeyEvent_Key != nullptr)
//		*K2Node_InputKeyEvent_Key = std::move(Parms.K2Node_InputKeyEvent_Key);
//
//	if (CallFunc_Not_PreBool_ReturnValue != nullptr)
//		*CallFunc_Not_PreBool_ReturnValue = Parms.CallFunc_Not_PreBool_ReturnValue;
//
//	if (CallFunc_Not_PreBool_ReturnValue_1 != nullptr)
//		*CallFunc_Not_PreBool_ReturnValue_1 = Parms.CallFunc_Not_PreBool_ReturnValue_1;
//
//	if (CallFunc_Not_PreBool_ReturnValue_2 != nullptr)
//		*CallFunc_Not_PreBool_ReturnValue_2 = Parms.CallFunc_Not_PreBool_ReturnValue_2;
//
//	if (CallFunc_Not_PreBool_ReturnValue_3 != nullptr)
//		*CallFunc_Not_PreBool_ReturnValue_3 = Parms.CallFunc_Not_PreBool_ReturnValue_3;
//
//	if (CallFunc_Not_PreBool_ReturnValue_4 != nullptr)
//		*CallFunc_Not_PreBool_ReturnValue_4 = Parms.CallFunc_Not_PreBool_ReturnValue_4;
//
//	if (CallFunc_Not_PreBool_ReturnValue_5 != nullptr)
//		*CallFunc_Not_PreBool_ReturnValue_5 = Parms.CallFunc_Not_PreBool_ReturnValue_5;
//
//	if (CallFunc_Is_Restricted_Because_Of_Genesis_Map_restricted != nullptr)
//		*CallFunc_Is_Restricted_Because_Of_Genesis_Map_restricted = Parms.CallFunc_Is_Restricted_Because_Of_Genesis_Map_restricted;
//
//	if (CallFunc_Not_PreBool_ReturnValue_6 != nullptr)
//		*CallFunc_Not_PreBool_ReturnValue_6 = Parms.CallFunc_Not_PreBool_ReturnValue_6;
//
//	if (CallFunc_Is_Restricted_Because_Of_Genesis_Map_restricted_1 != nullptr)
//		*CallFunc_Is_Restricted_Because_Of_Genesis_Map_restricted_1 = Parms.CallFunc_Is_Restricted_Because_Of_Genesis_Map_restricted_1;
//
//	if (CallFunc_Not_PreBool_ReturnValue_7 != nullptr)
//		*CallFunc_Not_PreBool_ReturnValue_7 = Parms.CallFunc_Not_PreBool_ReturnValue_7;
//
//	if (CallFunc_TimeSince_ReturnValue != nullptr)
//		*CallFunc_TimeSince_ReturnValue = Parms.CallFunc_TimeSince_ReturnValue;
//
//	if (CallFunc_TimeSince_ReturnValue_1 != nullptr)
//		*CallFunc_TimeSince_ReturnValue_1 = Parms.CallFunc_TimeSince_ReturnValue_1;
//
//	if (CallFunc_LessEqual_DoubleDouble_ReturnValue != nullptr)
//		*CallFunc_LessEqual_DoubleDouble_ReturnValue = Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue;
//
//	if (CallFunc_Less_DoubleDouble_A_ImplicitCast != nullptr)
//		*CallFunc_Less_DoubleDouble_A_ImplicitCast = Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast;
//
//	if (CallFunc_LessEqual_DoubleDouble_A_ImplicitCast != nullptr)
//		*CallFunc_LessEqual_DoubleDouble_A_ImplicitCast = Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;
//
//	return Parms.ReturnValue;
//
//}




