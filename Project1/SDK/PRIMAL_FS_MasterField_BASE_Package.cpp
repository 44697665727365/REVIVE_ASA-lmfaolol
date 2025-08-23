/**
 * Name: Ark_Survival_Ascended
 * Version: 0.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.Import Field Data
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     IncomingImpactVector                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SetImpactVector                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRIMAL_FS_MasterField_BASE_C::ImportFieldData(const struct FVector& IncomingImpactVector, struct FVector* SetImpactVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.Import Field Data");
		
		APRIMAL_FS_MasterField_BASE_C_ImportFieldData_Params params {};
		params.IncomingImpactVector = IncomingImpactVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SetImpactVector != nullptr)
			*SetImpactVector = params.SetImpactVector;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.UpdateFieldParameters
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               SetUseExternalStrain                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             SetStrainMagnitude                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SetNumStrainHits                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SetUseRadialVector                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             SetRadialMagnitude                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EFieldFalloffType                                  SetStrainFalloffType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   SetStrainFalloffMinMax                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SetUseDirectionalVector                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             SetDirectionalMagnitude                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SetUseTorque                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             SetTorqueMult                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EFieldFalloffType                                  SetVelocityFieldFalloffType                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   SetVelocityFalloffMinMax                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SetUseNoise                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   SetNoiseMinMax                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             SetNoiseScaleMult                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SetRadialPositionOffset                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SetOverrideDirectionalVector                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SetImpactVector                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SetTorqueVectorOverride                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      VelocityVectorSwitch                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             SetForceMult                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             SetVelocityThreshold                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             SetDamageVelocity                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRIMAL_FS_MasterField_BASE_C::UpdateFieldParameters(bool SetUseExternalStrain, double SetStrainMagnitude, int32_t SetNumStrainHits, bool SetUseRadialVector, double SetRadialMagnitude, EFieldFalloffType SetStrainFalloffType, const struct FVector2D& SetStrainFalloffMinMax, bool SetUseDirectionalVector, double SetDirectionalMagnitude, bool SetUseTorque, double SetTorqueMult, EFieldFalloffType SetVelocityFieldFalloffType, const struct FVector2D& SetVelocityFalloffMinMax, bool SetUseNoise, const struct FVector2D& SetNoiseMinMax, double SetNoiseScaleMult, const struct FVector& SetRadialPositionOffset, bool SetOverrideDirectionalVector, const struct FVector& SetImpactVector, const struct FVector& SetTorqueVectorOverride, unsigned char VelocityVectorSwitch, double SetForceMult, double SetVelocityThreshold, double SetDamageVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.UpdateFieldParameters");
		
		APRIMAL_FS_MasterField_BASE_C_UpdateFieldParameters_Params params {};
		params.SetUseExternalStrain = SetUseExternalStrain;
		params.SetStrainMagnitude = SetStrainMagnitude;
		params.SetNumStrainHits = SetNumStrainHits;
		params.SetUseRadialVector = SetUseRadialVector;
		params.SetRadialMagnitude = SetRadialMagnitude;
		params.SetStrainFalloffType = SetStrainFalloffType;
		params.SetStrainFalloffMinMax = SetStrainFalloffMinMax;
		params.SetUseDirectionalVector = SetUseDirectionalVector;
		params.SetDirectionalMagnitude = SetDirectionalMagnitude;
		params.SetUseTorque = SetUseTorque;
		params.SetTorqueMult = SetTorqueMult;
		params.SetVelocityFieldFalloffType = SetVelocityFieldFalloffType;
		params.SetVelocityFalloffMinMax = SetVelocityFalloffMinMax;
		params.SetUseNoise = SetUseNoise;
		params.SetNoiseMinMax = SetNoiseMinMax;
		params.SetNoiseScaleMult = SetNoiseScaleMult;
		params.SetRadialPositionOffset = SetRadialPositionOffset;
		params.SetOverrideDirectionalVector = SetOverrideDirectionalVector;
		params.SetImpactVector = SetImpactVector;
		params.SetTorqueVectorOverride = SetTorqueVectorOverride;
		params.VelocityVectorSwitch = VelocityVectorSwitch;
		params.SetForceMult = SetForceMult;
		params.SetVelocityThreshold = SetVelocityThreshold;
		params.SetDamageVelocity = SetDamageVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.CalculateNoise
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UNoiseField*                                 OutputPin                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void APRIMAL_FS_MasterField_BASE_C::CalculateNoise(class UNoiseField** OutputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.CalculateNoise");
		
		APRIMAL_FS_MasterField_BASE_C_CalculateNoise_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutputPin != nullptr)
			*OutputPin = params.OutputPin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.FalloffShapeSwitch
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EFieldFalloffType                                  FalloffType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   falloffMinMax                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UOperatorField*                              OperatorFieldOut                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void APRIMAL_FS_MasterField_BASE_C::FalloffShapeSwitch(EFieldFalloffType FalloffType, const struct FVector2D& falloffMinMax, class UOperatorField** OperatorFieldOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.FalloffShapeSwitch");
		
		APRIMAL_FS_MasterField_BASE_C_FalloffShapeSwitch_Params params {};
		params.FalloffType = FalloffType;
		params.falloffMinMax = falloffMinMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OperatorFieldOut != nullptr)
			*OperatorFieldOut = params.OperatorFieldOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.MakeDynamic_EnableNonGC
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APRIMAL_FS_MasterField_BASE_C::MakeDynamic_EnableNonGC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.MakeDynamic_EnableNonGC");
		
		APRIMAL_FS_MasterField_BASE_C_MakeDynamic_EnableNonGC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.InitializeFieldVariables
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APRIMAL_FS_MasterField_BASE_C::InitializeFieldVariables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.InitializeFieldVariables");
		
		APRIMAL_FS_MasterField_BASE_C_InitializeFieldVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.DisplayTextSetup
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APRIMAL_FS_MasterField_BASE_C::DisplayTextSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.DisplayTextSetup");
		
		APRIMAL_FS_MasterField_BASE_C_DisplayTextSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.ForceMultiplier
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APRIMAL_FS_MasterField_BASE_C::ForceMultiplier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.ForceMultiplier");
		
		APRIMAL_FS_MasterField_BASE_C_ForceMultiplier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.SetVisibility
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APRIMAL_FS_MasterField_BASE_C::SetVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.SetVisibility");
		
		APRIMAL_FS_MasterField_BASE_C_SetVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.FalloffAndCullSwitch_Main
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Magnitude                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EFieldFalloffType                                  FalloffType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   falloffMinMax                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UOperatorField*                              OperatorField                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UCullingField*                               CullingField                                               (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void APRIMAL_FS_MasterField_BASE_C::FalloffAndCullSwitch_Main(double Magnitude, EFieldFalloffType FalloffType, const struct FVector2D& falloffMinMax, class UOperatorField* OperatorField, class UCullingField** CullingField)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.FalloffAndCullSwitch_Main");
		
		APRIMAL_FS_MasterField_BASE_C_FalloffAndCullSwitch_Main_Params params {};
		params.Magnitude = Magnitude;
		params.FalloffType = FalloffType;
		params.falloffMinMax = falloffMinMax;
		params.OperatorField = OperatorField;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CullingField != nullptr)
			*CullingField = params.CullingField;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APRIMAL_FS_MasterField_BASE_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.UserConstructionScript");
		
		APRIMAL_FS_MasterField_BASE_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRIMAL_FS_MasterField_BASE_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.ReceiveTick");
		
		APRIMAL_FS_MasterField_BASE_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void APRIMAL_FS_MasterField_BASE_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.ReceiveBeginPlay");
		
		APRIMAL_FS_MasterField_BASE_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.CE_Trigger
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     IncomingImpactVector                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DirectionalForceStrengthMultiplier                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RadialForceStrengthMultiplier                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              IncomingVelocity                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRIMAL_FS_MasterField_BASE_C::CE_Trigger(const struct FVector& IncomingImpactVector, float DirectionalForceStrengthMultiplier, float RadialForceStrengthMultiplier, float IncomingVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.CE_Trigger");
		
		APRIMAL_FS_MasterField_BASE_C_CE_Trigger_Params params {};
		params.IncomingImpactVector = IncomingImpactVector;
		params.DirectionalForceStrengthMultiplier = DirectionalForceStrengthMultiplier;
		params.RadialForceStrengthMultiplier = RadialForceStrengthMultiplier;
		params.IncomingVelocity = IncomingVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.SetActivationType
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EFieldActivationType_New                           NewActivationType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRIMAL_FS_MasterField_BASE_C::SetActivationType(EFieldActivationType_New NewActivationType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.SetActivationType");
		
		APRIMAL_FS_MasterField_BASE_C_SetActivationType_Params params {};
		params.NewActivationType = NewActivationType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.ExecuteUbergraph_PRIMAL_FS_MasterField_BASE
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APRIMAL_FS_MasterField_BASE_C::ExecuteUbergraph_PRIMAL_FS_MasterField_BASE(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.ExecuteUbergraph_PRIMAL_FS_MasterField_BASE");
		
		APRIMAL_FS_MasterField_BASE_C_ExecuteUbergraph_PRIMAL_FS_MasterField_BASE_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APRIMAL_FS_MasterField_BASE_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APRIMAL_FS_MasterField_BASE_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C");
		return ptr;
	}

}


