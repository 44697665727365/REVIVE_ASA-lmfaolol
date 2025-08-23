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
	 * 		Name   -> Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.PlayerSourceLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ValidCamera                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FX_Underwater_Detritus_C::PlayerSourceLocation(bool* ValidCamera, struct FVector* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.PlayerSourceLocation");
		
		ABP_FX_Underwater_Detritus_C_PlayerSourceLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ValidCamera != nullptr)
			*ValidCamera = params.ValidCamera;
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.CullSystemsAtDistance
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FX_Underwater_Detritus_C::CullSystemsAtDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.CullSystemsAtDistance");
		
		ABP_FX_Underwater_Detritus_C_CullSystemsAtDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.CheckEmitterPools
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Used                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Max                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FX_Underwater_Detritus_C::CheckEmitterPools(int32_t* Used, int32_t* Max)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.CheckEmitterPools");
		
		ABP_FX_Underwater_Detritus_C_CheckEmitterPools_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Used != nullptr)
			*Used = params.Used;
		if (Max != nullptr)
			*Max = params.Max;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.SetupEmitterPools
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FX_Underwater_Detritus_C::SetupEmitterPools()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.SetupEmitterPools");
		
		ABP_FX_Underwater_Detritus_C_SetupEmitterPools_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.CheckEmitterPool
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		E_EmitterPool                                      Pool                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               RoomLeft                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FX_Underwater_Detritus_C::CheckEmitterPool(E_EmitterPool Pool, bool* RoomLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.CheckEmitterPool");
		
		ABP_FX_Underwater_Detritus_C_CheckEmitterPool_Params params {};
		params.Pool = Pool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RoomLeft != nullptr)
			*RoomLeft = params.RoomLeft;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.SpawnEnvEffect
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSTR_DynamicEnvEffectSettings               DynamicEffectSettings                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FX_Underwater_Detritus_C::SpawnEnvEffect(const struct FSTR_DynamicEnvEffectSettings& DynamicEffectSettings, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.SpawnEnvEffect");
		
		ABP_FX_Underwater_Detritus_C_SpawnEnvEffect_Params params {};
		params.DynamicEffectSettings = DynamicEffectSettings;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.AdjustEmitterCount
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Add                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_EmitterPool                                      EffectSettings                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FX_Underwater_Detritus_C::AdjustEmitterCount(bool Add, E_EmitterPool EffectSettings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.AdjustEmitterCount");
		
		ABP_FX_Underwater_Detritus_C_AdjustEmitterCount_Params params {};
		params.Add = Add;
		params.EffectSettings = EffectSettings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.SetSystemParamaters
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFXSystemComponent*                          System                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSTR_DynamicEnvEffectCustomParameters       EffectParameters                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void ABP_FX_Underwater_Detritus_C::SetSystemParamaters(class UFXSystemComponent* System, const struct FSTR_DynamicEnvEffectCustomParameters& EffectParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.SetSystemParamaters");
		
		ABP_FX_Underwater_Detritus_C_SetSystemParamaters_Params params {};
		params.System = System;
		params.EffectParameters = EffectParameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.GetTraceOffsetsAroundPlayer
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Start                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     End                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FX_Underwater_Detritus_C::GetTraceOffsetsAroundPlayer(bool* Valid, struct FVector* Start, struct FVector* End)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.GetTraceOffsetsAroundPlayer");
		
		ABP_FX_Underwater_Detritus_C_GetTraceOffsetsAroundPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
		if (Start != nullptr)
			*Start = params.Start;
		if (End != nullptr)
			*End = params.End;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.IsEnabled
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               _TRUE__                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FX_Underwater_Detritus_C::IsEnabled(bool* _TRUE__)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.IsEnabled");
		
		ABP_FX_Underwater_Detritus_C_IsEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_TRUE__ != nullptr)
			*_TRUE__ = params._TRUE__;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.Update Niagara Collection
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FX_Underwater_Detritus_C::UpdateNiagaraCollection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.Update Niagara Collection");
		
		ABP_FX_Underwater_Detritus_C_UpdateNiagaraCollection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.Setup Emitter Data
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_FX_Underwater_Detritus_C::SetupEmitterData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.Setup Emitter Data");
		
		ABP_FX_Underwater_Detritus_C_SetupEmitterData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.GetParticleForSurface
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPhysicalSurface                                   PhysMat                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Underwater                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSTR_DynamicEnvEffectSettings               Effect                                                     (Parm, OutParm, HasGetValueTypeHash)
	 */
	void ABP_FX_Underwater_Detritus_C::GetParticleForSurface(EPhysicalSurface PhysMat, bool Underwater, bool* Valid, struct FSTR_DynamicEnvEffectSettings* Effect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.GetParticleForSurface");
		
		ABP_FX_Underwater_Detritus_C_GetParticleForSurface_Params params {};
		params.PhysMat = PhysMat;
		params.Underwater = Underwater;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Valid != nullptr)
			*Valid = params.Valid;
		if (Effect != nullptr)
			*Effect = params.Effect;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.Try Spawn Emitter
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Sucess                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FX_Underwater_Detritus_C::TrySpawnEmitter(bool* Sucess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.Try Spawn Emitter");
		
		ABP_FX_Underwater_Detritus_C_TrySpawnEmitter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Sucess != nullptr)
			*Sucess = params.Sucess;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_FX_Underwater_Detritus_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.ReceiveBeginPlay");
		
		ABP_FX_Underwater_Detritus_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.ExecuteUbergraph_BP_FX_Underwater_Detritus
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_FX_Underwater_Detritus_C::ExecuteUbergraph_BP_FX_Underwater_Detritus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.ExecuteUbergraph_BP_FX_Underwater_Detritus");
		
		ABP_FX_Underwater_Detritus_C_ExecuteUbergraph_BP_FX_Underwater_Detritus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_FX_Underwater_Detritus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FX_Underwater_Detritus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C");
		return ptr;
	}

}


