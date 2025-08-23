#include "pch.h"
#include "SDKExtra.h"
namespace CG
{
	//---------------------------------------------------------------------------------------------------------------------
	// FUNCTIONS
	//---------------------------------------------------------------------------------------------------------------------


	// BlueprintGeneratedClass WeapC4.WeapC4_C
	// (Actor)

	UClass* AShooterWeapon_Placer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(Xors("Class ShooterGame.ShooterWeapon_Placer"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemArmor_Base_Tek_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemArmor_Base_Tek_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(Xors("BlueprintGeneratedClass PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C"));
		return ptr;
	}

	void UPrimalItemArmor_Base_Tek_C::IncreaseElement(double Percent)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction(Xors("PrimalItemArmor_Base_Tek_C"), Xors("IncreaseElement"));

		UPrimalItemArmor_Base_Tek_C_IncreaseElement_Params Parms{ .Percent = Percent };

		UObject::ProcessEvent(Func, &Parms);
	}

	void UPrimalItemArmor_Base_Tek_C::TryToDecreaseElement(int32_t AmountToDecreaseBy)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction(Xors("PrimalItemArmor_Base_Tek_C"), Xors("TryToDecreaseElement"));

		UPrimalItemArmor_Base_Tek_C_AmountToDecreaseBy_Params Parms{ .AmountToDecreaseBy = AmountToDecreaseBy };

		UObject::ProcessEvent(Func, &Parms);
	}

	UClass* ADeathItemCache_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(Xors("BlueprintGeneratedClass DeathItemCache.DeathItemCache_C"));
		return ptr;
	}
	/**
 * Function:
 * 		RVA    -> 0x00000000
 * 		Name   -> PredefinedFunction ABuff_TekArmor_Gloves_C.StaticClass
 * 		Flags  -> (Predefined, Static)
 */
	UClass* ABuff_TekArmor_Gloves_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = FindObjectSingle<UClass*>(Xors(L"/Game/PrimalEarth/CoreBlueprints/Buffs/Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C")); 

		return ptr;
	}

	struct CaveWolf_Character_BP_C_AttachToZipline_RunOnServer final
	{
		class AZipline_Anchor_C* ZiplineAnchor;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                Location;                                          // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	void ACaveWolf_Character_BP_C::AttachToZipline_RunOnServer(class AZipline_Anchor_C* ZiplineAnchor, const struct FVector& Location)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = UObject::FindObject<UFunction>(Xors("Function CaveWolf_Character_BP.CaveWolf_Character_BP_C.AttachToZipline_RunOnServer"));

		CaveWolf_Character_BP_C_AttachToZipline_RunOnServer Parms{};

		Parms.ZiplineAnchor = ZiplineAnchor;
		Parms.Location = Location;

		UObject::ProcessEvent(Func, &Parms);
	}

	struct YiLing_Character_BP_C_Server_AttemptDash
	{
	public:
		struct FVector2D                              Direction;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          IsUpward;                                          // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	void AYiLing_Character_BP_C::Server_AttemptDash(const struct FVector2D& Direction, bool IsUpward)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = UObject::FindObject<UFunction>(Xors("Function YiLing_Character_BP.YiLing_Character_BP_C.Server_AttemptDash"));

		YiLing_Character_BP_C_Server_AttemptDash Parms{};

		Parms.Direction = Direction;
		Parms.IsUpward = IsUpward;

		UObject::ProcessEvent(Func, &Parms);
	}

	struct YiLing_Character_BP_C_Server_AttemptFireFeather final
	{
	public:
		struct FVector                                TargetLoc;                                         // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         FeatherType;                                       // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	void AYiLing_Character_BP_C::Server_AttemptFireFeather(const struct FVector& TargetLoc, int32 FeatherType)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = UObject::FindObject<UFunction>(Xors("Function YiLing_Character_BP.YiLing_Character_BP_C.Server_AttemptFireFeather"));

		YiLing_Character_BP_C_Server_AttemptFireFeather Parms{};

		Parms.TargetLoc = TargetLoc;
		Parms.FeatherType = FeatherType;

		UObject::ProcessEvent(Func, &Parms);
	}

	void ABuff_Zipline_CaveWolf_C::FlipOnZipline_RunOnServer()
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = UObject::FindObject<UFunction>(Xors("Function Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C.FlipOnZipline_RunOnServer"));

		UObject::ProcessEvent(Func, nullptr);
	}

	UClass* ABuff_TekArmor_Shirt_Rework_C::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindObject<UClass>(Xors("BlueprintGeneratedClass Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C"));

		return Clss;
	}

	void ABuff_TekArmor_Shirt_Rework_C::Server_SetThrusterState(enum class E_TekThrusterState NewState, bool bResetBuff)
	{
		static class UFunction* Func = nullptr;

		if (bResetBuff)
		{
			Func = nullptr;
			return;
		}

		if (!Func)
			Func = FindObjectSingle<UFunction*>(Xors(L"/Game/PrimalEarth/CoreBlueprints/Buffs/Buff_TekArmor_Shirt_Rework.Buff_TekArmor_Shirt_Rework_C:Server_SetThrusterState")); 

		Params::ABuff_TekArmor_Shirt_Rework_C_Server_SetThrusterState_Params Parms{};

		Parms.NewState = NewState;

		UObject::ProcessEvent(Func, &Parms);
	}

	class UPrimalUI* UShooterGameViewportClient::GetTopUI(int32_t ControllerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterGameViewportClient.GetTopUI"));

		UShooterGameViewportClient_GetTopUI_Params params{};
		params.ControllerId = ControllerId;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		return params.ReturnValue;
	}

	/**
 * Function:
 * 		RVA    -> 0x04091020
 * 		Name   -> Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Server_SetPunchChargeState
 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
 * Parameters:
 * 		E_TekGlovePunchState                               newPunchState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
 */
	void ABuff_TekArmor_Gloves_C::Server_SetPunchChargeState(E_TekGlovePunchState newPunchState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = FindObjectSingle<UFunction*>(Xors(L"/Game/PrimalEarth/CoreBlueprints/Buffs/Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C:Server_SetPunchChargeState"));

		ABuff_TekArmor_Gloves_C_Server_SetPunchChargeState_Params params{};
		params.newPunchState = newPunchState;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	UClass* AStorageBox_TekTransmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;

		if (!ptr)
			ptr = UObject::FindObject<UClass>(Xors("BlueprintGeneratedClass StorageBox_TekTransmitter.StorageBox_TekTransmitter_C"));
		return ptr;
	}
	UClass* AStructureTurretBaseBP_C::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindObject<UClass>(Xors("BlueprintGeneratedClass StructureTurretBaseBP.StructureTurretBaseBP_C"));

		return Clss;
	}
	UClass* AStructureTurretTek_C::StaticClass()
	{
		static UClass* ptr = nullptr;

		if (!ptr)
			ptr = UObject::FindObject<UClass>(Xors("BlueprintGeneratedClass StructureTurretTek.StructureTurretTek_C"));

		return ptr;
	}
	UClass* AStructureTurretBaseBP_BaseHeavy_C::StaticClass()
	{
		static UClass* ptr = nullptr;

		if (!ptr)
			ptr = UObject::FindObject<UClass>(Xors("BlueprintGeneratedClass StructureTurretBaseBP_BaseHeavy.StructureTurretBaseBP_BaseHeavy_C"));

		return ptr;
	}
	UClass* AStorageBox_TekGenerator_C::StaticClass()
	{
		static UClass* ptr = nullptr;

		if (!ptr)
			ptr = UObject::FindObject<UClass>(Xors("BlueprintGeneratedClass StorageBox_TekGenerator.StorageBox_TekGenerator_C"));

		return ptr;
	}

	class UClass* AExplorerChest_Base_C::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindObject<UClass>(Xors("BlueprintGeneratedClass ExplorerChest_Base.ExplorerChest_Base_C"));

		return Clss;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetPlayerIgnoreSpeedModifiers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               newIgnore                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::SetPlayerIgnoreSpeedModifiers(bool newIgnore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(Xors("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetPlayerIgnoreSpeedModifiers"));

		ABuff_TekArmor_Pants_C_SetPlayerIgnoreSpeedModifiers_Params params{};
		params.newIgnore = newIgnore;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.PlayerHasFistsEquipped
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::PlayerHasFistsEquipped(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(Xors("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.PlayerHasFistsEquipped"));

		ABuff_TekArmor_Pants_C_PlayerHasFistsEquipped_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.IsPlayerGrappled
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::IsPlayerGrappled(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(Xors("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.IsPlayerGrappled"));

		ABuff_TekArmor_Pants_C_IsPlayerGrappled_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetPlayerMoveSpeedModifier
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::GetPlayerMoveSpeedModifier(double* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(Xors("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetPlayerMoveSpeedModifier"));

		ABuff_TekArmor_Pants_C_GetPlayerMoveSpeedModifier_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetRunningOnWater
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsRunning                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::SetRunningOnWater(bool IsRunning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(Xors("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetRunningOnWater"));

		ABuff_TekArmor_Pants_C_SetRunningOnWater_Params params{};
		params.IsRunning = IsRunning;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             MaxSpeed                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::GetPlayerMaxTekRunVelocity(double* MaxSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(Xors("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C"));

		ABuff_TekArmor_Pants_C_GetPlayerMaxTekRunVelocity_Params params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (MaxSpeed != nullptr)
			*MaxSpeed = params.MaxSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.NetSetRunningSpeedModifier
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             newModifier                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::NetSetRunningSpeedModifier(double newModifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(Xors("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.NetSetRunningSpeedModifier"));

		ABuff_TekArmor_Pants_C_NetSetRunningSpeedModifier_Params params{};
		params.newModifier = newModifier;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.RedirectPlayerVelocity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     newForward                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::RedirectPlayerVelocity(const struct FVector& newForward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(Xors("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.RedirectPlayerVelocity"));

		ABuff_TekArmor_Pants_C_RedirectPlayerVelocity_Params params{};
		params.newForward = newForward;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetPreventEquipWeapons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               prevent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::SetPreventEquipWeapons(bool prevent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(Xors("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetPreventEquipWeapons"));

		ABuff_TekArmor_Pants_C_SetPreventEquipWeapons_Params params{};
		params.prevent = prevent;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetPlayerRunSpeed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             NewSpeed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::SetPlayerRunSpeed(double NewSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(Xors("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetPlayerRunSpeed"));

		ABuff_TekArmor_Pants_C_SetPlayerRunSpeed_Params params{};
		params.NewSpeed = NewSpeed;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Server_SetTekRunningState
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_TekRunningState                                  newRunState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_Pants_C::Server_SetTekRunningState(E_TekRunningState newRunState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(Xors("Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Server_SetTekRunningState"));

		ABuff_TekArmor_Pants_C_Server_SetTekRunningState_Params params{};
		params.newRunState = newRunState;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_TekArmor_Pants_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_TekArmor_Pants_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(Xors("BlueprintGeneratedClass Buff_TekArmor_Pants.Buff_TekArmor_Pants_C"));
		return ptr;
	}
	/**
 * Function:
 * 		RVA    -> 0x04091020
 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.SetTekIgnoreLookInput
 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
 * Parameters:
 * 		bool                                               newIgnore                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
 */
	void ABuff_TekArmor_C::SetTekIgnoreLookInput(bool newIgnore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(Xors("Function Buff_TekArmor.Buff_TekArmor_C.SetTekIgnoreLookInput"));

		ABuff_TekArmor_C_SetTekIgnoreLookInput_Params params{};
		params.newIgnore = newIgnore;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}
	// Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetModifiedForward
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  ForwardScale                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          AdditionalOffset                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NewForward                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void ABuff_TekArmor_Pants_C::GetModifiedForward(double ForwardScale, const struct FVector& AdditionalOffset, struct FVector* NewForward)
	{
		static class UFunction* Func = nullptr;

		if (Func == nullptr)
			Func = Class->GetFunction("Buff_TekArmor_Pants_C", "GetModifiedForward");

		ABuff_TekArmor_Pants_C_GetModifiedForward_Params Parms{};

		Parms.forwardScale = ForwardScale;
		Parms.AdditionalOffset = std::move(AdditionalOffset);

		UObject::ProcessEvent(Func, &Parms);

		if (NewForward != nullptr)
			*NewForward = std::move(Parms.newForward);
	}
	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_TekArmor.Buff_TekArmor_C.SetTekIgnoreMoveInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               newIgnore                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_TekArmor_C::SetTekIgnoreMoveInput(bool newIgnore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(Xors("Function Buff_TekArmor.Buff_TekArmor_C.SetTekIgnoreMoveInput"));

		ABuff_TekArmor_C_SetTekIgnoreMoveInput_Params params{};
		params.newIgnore = newIgnore;

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	void AStego_Character_BP_C::Dismount()
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = UObject::FindObject<UFunction>(Xors("Function Stego_Character_BP.Stego_Character_BP_C.Dismount"));

		UObject::ProcessEvent(Func, nullptr);
	}

	struct FireLion_Character_BP_C_Server_SetFireDashDirection
	{
	public:
		struct FVector                                Direction;                                         // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	void AFireLion_Character_BP_C::Server_SetFireDashDirection(const struct FVector& Direction)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = UObject::FindObject<UFunction>(Xors("Function FireLion_Character_BP.FireLion_Character_BP_C.Server_SetFireDashDirection"));

		FireLion_Character_BP_C_Server_SetFireDashDirection Parms{};

		Parms.Direction = Direction;

		auto flags = Func->FunctionFlags;
		UObject::ProcessEvent(Func, &Parms);
		Func->FunctionFlags = flags;
	}

	// BlueprintGeneratedClass Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C
	// (Actor)

	class UClass* ABuff_DinoTekHelmet_Base_C::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClass(Xors("BlueprintGeneratedClass Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C"));

		return Clss;
	}

	// 0x30 (0x30 - 0x0)
	// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.ServerDoAttack
	struct ABuff_DinoTekHelmet_Base_C_ServerDoAttack_Params
	{
	public:
		struct FVector                               AimAtLoc;                                          // 0x0(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
		struct FVector                               ServerSpawnAtLoc;                                  // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	};

	// 0x38 (0x38 - 0x0)
	// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.DoAttack
	struct ABuff_DinoTekHelmet_Base_C_DoAttack_Params
	{
	public:
		struct FVector                               AimAtLoc;                                          // 0x0(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
		bool                                         bLeftSide;                                         // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
		uint8                                        Pad_66C3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
		struct FVector                               ServerSpawnAtLoc;                                  // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	};
	// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.ServerDoAttack
	// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	// Parameters:
	// struct FVector                     AimAtLoc                                                         (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	// struct FVector                     ServerSpawnAtLoc                                                 (BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)

	void ABuff_DinoTekHelmet_Base_C::ServerDoAttack(FVector ServerSpawnAtLoc, FVector AimAtLoc)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = UObject::FindObject<UFunction>(Xors("Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.ServerDoAttack"));

		ABuff_DinoTekHelmet_Base_C_ServerDoAttack_Params Parms{
			.AimAtLoc = AimAtLoc,
			.ServerSpawnAtLoc = ServerSpawnAtLoc
		};


		UObject::ProcessEvent(Func, &Parms);
	}

	struct LobbyPlayer_Buff_C_ServerRequestScrapItems
	{
		TArray<struct FItemNetID>                     ItemsToScrap;                                      // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32>                                 QuantityF;                                         // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};


	void ALobbyPlayer_Buff_C::ServerRequestScrapItems(TArray<struct FItemNetID>& ItemsToScrap, TArray<int32>& QuantityF)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = UObject::FindObject<UFunction>(Xors("Function LobbyPlayer_Buff.LobbyPlayer_Buff_C.ServerRequestScrapItems"));

		LobbyPlayer_Buff_C_ServerRequestScrapItems Parms{};

		Parms.ItemsToScrap = ItemsToScrap;
		Parms.QuantityF = QuantityF;

		UObject::ProcessEvent(Func, &Parms);
	}


	// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.DoAttack
	// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	// Parameters:
	// struct FVector                     AimAtLoc                                                         (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	// bool                               bLeftSide                                                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	// struct FVector                     ServerSpawnAtLoc                                                 (BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)

	void ABuff_DinoTekHelmet_Base_C::DoAttack(FVector ServerSpawnAtLoc, FVector AimAtLoc, bool bLeftSide)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = UObject::FindObject<UFunction>(Xors("Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.DoAttack"));

		ABuff_DinoTekHelmet_Base_C_DoAttack_Params Parms{};


		UObject::ProcessEvent(Func, &Parms);

	}


	// 0x43 (0x43 - 0x0)
	// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.GetTekSaddleItem
	struct ABuff_DinoTekHelmet_Base_C_GetTekSaddleItem_Params
	{
	public:
		class UPrimalItem* TekSaddleItem;                                     // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
		class UPrimalItem* RetVal;                                            // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	};

	// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.GetTekSaddleItem
	// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
	// Parameters:
	// class UPrimalItem*                 TekSaddleItem                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	// class UPrimalItem*                 RetVal                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UPrimalItem* ABuff_DinoTekHelmet_Base_C::GetTekSaddleItem(class UPrimalItem* TekSaddleItem)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = UObject::FindObject<UFunction>(Xors("Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.GetTekSaddleItem"));

		ABuff_DinoTekHelmet_Base_C_GetTekSaddleItem_Params Parms{};

		Parms.RetVal = TekSaddleItem;
		Parms.TekSaddleItem = TekSaddleItem;

		UObject::ProcessEvent(Func, &Parms);

		return Parms.RetVal;

	}


	class UClass* UPrimalItemArmor_SaddleGeneric_Tek_C::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClass(Xors("BlueprintGeneratedClass PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C"));


		return Clss;
	}
	// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.SetElementToMax
	// (BlueprintCallable, BlueprintEvent)
	// Parameters:

	void UPrimalItemArmor_SaddleGeneric_Tek_C::SetElementToMax()
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction(Xors("PrimalItemArmor_SaddleGeneric_Tek_C"), Xors("SetElementToMax"));



		UObject::ProcessEvent(Func, nullptr);

	}

	// 0x8 (0x8 - 0x0)
// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.IncreaseElement
	struct UPrimalItemArmor_SaddleGeneric_Tek_C_IncreaseElement_Params
	{
	public:
		double                                       Percent;                                           // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst)
	};
	// Function PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C.IncreaseElement
	// (BlueprintCallable, BlueprintEvent)
	// Parameters:
	// double                             Percent                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst)

	void UPrimalItemArmor_SaddleGeneric_Tek_C::IncreaseElement(double Percent)
	{
		static class UFunction* Func = nullptr;

		if (!Func)
			Func = Class->GetFunction(Xors("PrimalItemArmor_SaddleGeneric_Tek_C"), Xors("IncreaseElement"));

		UPrimalItemArmor_SaddleGeneric_Tek_C_IncreaseElement_Params Parms{
			.Percent = Percent
		};


		UObject::ProcessEvent(Func, &Parms);

	}

	bool UAssetRegistry::GetAllAssets(TArray<struct FAssetData>* OutAssetData, bool bIncludeOnlyOnDiskAssets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(Xors("Function AssetRegistry.AssetRegistry.GetAllAssets"));

		struct
		{
			TArray<struct FAssetData>                                  OutAssetData;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
			bool                                                       bIncludeOnlyOnDiskAssets;                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
			bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		}params;
		params.bIncludeOnlyOnDiskAssets = bIncludeOnlyOnDiskAssets;

		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;

		if (OutAssetData != nullptr)
			*OutAssetData = params.OutAssetData;

		return params.ReturnValue;
	}

	void AExplorerChest_Base_C::DoUnlock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(Xors("Function ExplorerChest_Base.ExplorerChest_Base_C.DoUnlock"));

		struct
		{
		}params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	void AExplorerChest_Base_C::PlayUnlock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(Xors("Function ExplorerChest_Base.ExplorerChest_Base_C.PlayUnlock"));

		struct
		{
		}params{};

		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	UClass* ATrackBinocularsBuff_C::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClass(Xors("BlueprintGeneratedClass TrackBinocularsBuff.TrackBinocularsBuff_C"));


		return Clss;
	}
	// Function TrackBinocularsBuff.TrackBinocularsBuff_C.GetAllStatPoints
// 0x00A8 (0x00A8 - 0x0000)
	struct TrackBinocularsBuff_C_GetAllStatPoints final
	{
	public:
		class UPrimalCharacterStatusComponent* Self2;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UPrimalActor* Param_Target;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		TArray<int32>                                 Wild;                                              // 0x0010(0x0010)(Parm, OutParm)
		TArray<int32>                                 Mutations;                                         // 0x0020(0x0010)(Parm, OutParm)
		TArray<int32>                                 Tamed;                                             // 0x0030(0x0010)(Parm, OutParm)
		TArray<int32>                                 LocalTamedPoints;                                  // 0x0040(0x0010)(Edit, BlueprintVisible)
		TArray<int32>                                 LocalMutationPoints;                               // 0x0050(0x0010)(Edit, BlueprintVisible)
		TArray<int32>                                 LocalStatsPoints;                                  // 0x0060(0x0010)(Edit, BlueprintVisible)
		int32                                         Temp_int_Variable;                                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsShooterCharacter_ReturnValue;           // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0076(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_77[0x1];                                       // 0x0077(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         Temp_int_Variable_1;                               // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_GetLevelUpPoints_ReturnValue;             // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_86[0x2];                                       // 0x0086(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_GetMutationPoints_ReturnValue;            // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_GetLevelUpPoints_ReturnValue_1;           // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_99[0x3];                                       // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	// Function TrackBinocularsBuff.TrackBinocularsBuff_C.GetAllStatPoints
	// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
	// Parameters:
	// class UPrimalCharacterStatusComponent*  Self2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	// class UPrimalActor*                     Param_Target                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	// TArray<int32>                           Wild                                                   (Parm, OutParm)
	// TArray<int32>                           Mutations                                              (Parm, OutParm)
	// TArray<int32>                           Tamed                                                  (Parm, OutParm)

	void ATrackBinocularsBuff_C::GetAllStatPoints(class UPrimalCharacterStatusComponent* Self2, class UPrimalActor* Param_Target, TArray<int32>* Wild, TArray<int32>* Mutations, TArray<int32>* Tamed)
	{
		static class UFunction* Func = nullptr;

		if (Func == nullptr)
			Func = UObject::FindObject<UFunction>(Xors("Function TrackBinocularsBuff.TrackBinocularsBuff_C.GetAllStatPoints"));

		TrackBinocularsBuff_C_GetAllStatPoints Parms{};

		Parms.Self2 = Self2;
		Parms.Param_Target = Param_Target;

		UObject::ProcessEvent(Func, &Parms);

		if (Wild != nullptr)
			*Wild = std::move(Parms.Wild);

		if (Mutations != nullptr)
			*Mutations = std::move(Parms.Mutations);

		if (Tamed != nullptr)
			*Tamed = std::move(Parms.Tamed);
	}

	// Function TrackBinocularsBuff.TrackBinocularsBuff_C.ServerClearTrackBino
	// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

	void ATrackBinocularsBuff_C::ServerClearTrackBino()
	{
		static class UFunction* Func = nullptr;

		if (Func == nullptr)
			Func = Class->GetFunction(Xors("TrackBinocularsBuff_C"), Xors("ServerClearTrackBino"));

		UObject::ProcessEvent(Func, nullptr);
	}

	struct TrackBinocularsBuff_C_SetupNewTrackActor final
	{
	public:
		class AActor* Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};
	// Function TrackBinocularsBuff.TrackBinocularsBuff_C.SetupNewTrackActor
	// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	// Parameters:
	// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	void ATrackBinocularsBuff_C::SetupNewTrackActor(class AActor* Actor)
	{
		static class UFunction* Func = nullptr;

		if (Func == nullptr)
			Func = Class->GetFunction(Xors("TrackBinocularsBuff_C"), Xors("SetupNewTrackActor"));

		TrackBinocularsBuff_C_SetupNewTrackActor Parms{};

		Parms.Actor = Actor;

		UObject::ProcessEvent(Func, &Parms);
	}

	// Function TrackBinocularsBuff.TrackBinocularsBuff_C.TrackCurrentActorTraced
	// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

	void ATrackBinocularsBuff_C::TrackCurrentActorTraced()
	{
		static class UFunction* Func = nullptr;

		if (Func == nullptr)
			Func = Class->GetFunction(Xors("TrackBinocularsBuff_C"), Xors("TrackCurrentActorTraced"));

		UObject::ProcessEvent(Func, nullptr);
	}

	// Function TrackBinocularsBuff.TrackBinocularsBuff_C.UpdatePP
	// 0x0078 (0x0078 - 0x0000)
	struct TrackBinocularsBuff_C_UpdatePP final
	{
	public:
		bool                                          ForceDisable;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_ShouldPPBeActive_ShouldBeActive;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
		class AShooterPlayerCameraManager* K2Node_DynamicCast_AsShooter_Player_Camera_Manager; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_ShouldPPBeActive_ShouldBeActive_1;        // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface;           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject* CallFunc_GetBlendableFromMIC_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic;    // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		TArray<class UMaterialInterface*>             K2Node_MakeArray_Array;                            // 0x0058(0x0010)(ReferenceParm)
		bool                                          CallFunc_ShouldPPBeActive_ShouldBeActive_2;        // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         CallFunc_SetScalarParameterValue_Value_ImplicitCast_1; // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	// Function TrackBinocularsBuff.TrackBinocularsBuff_C.UpdatePP
	// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	// Parameters:
	// bool                                    ForceDisable                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void ATrackBinocularsBuff_C::UpdatePP(bool ForceDisable)
	{
		static class UFunction* Func = nullptr;

		if (Func == nullptr)
			Func = Class->GetFunction("TrackBinocularsBuff_C", "UpdatePP");

		TrackBinocularsBuff_C_UpdatePP Parms{};

		Parms.ForceDisable = ForceDisable;

		UObject::ProcessEvent(Func, &Parms);
	}

	// Function UMG.UserWidget.AddToViewport
	// 0x0004 (0x0004 - 0x0000)
	struct UserWidget_AddToViewport final
	{
	public:
		int32                                         ZOrder;                                            // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	// Function UMG.UserWidget.AddToViewport
	// (BlueprintCosmetic, Native, Public, BlueprintCallable)
	// Parameters:
	// int32                                   ZOrder                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	void UUserWidget::AddToViewport(int32 ZOrder)
	{
		static class UFunction* Func = nullptr;

		if (Func == nullptr)
			Func = Class->GetFunction("UserWidget", "AddToViewport");

		UserWidget_AddToViewport Parms{};

		Parms.ZOrder = ZOrder;

		auto Flgs = Func->FunctionFlags;
		Func->FunctionFlags |= 0x400;

		UObject::ProcessEvent(Func, &Parms);

		Func->FunctionFlags = Flgs;
	}
	// Function BinocularsUI.BinocularsUI_C.UpdateTarget
// 0x0010 (0x0010 - 0x0000)
	struct BinocularsUI_C_UpdateTarget final
	{
	public:
		class AActor* Actor;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                          IsLocked;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	// Function BinocularsUI.BinocularsUI_C.UpdateTarget
	// (BlueprintCallable, BlueprintEvent)
	// Parameters:
	// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	// bool                                    IsLocked                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void UBinocularsUI_C::UpdateTarget(class AActor* Actor, bool IsLocked)
	{
		static class UFunction* Func = nullptr;

		if (Func == nullptr)
			Func = Class->GetFunction("BinocularsUI_C", "UpdateTarget");

		BinocularsUI_C_UpdateTarget Parms{};

		Parms.Actor = Actor;
		Parms.IsLocked = IsLocked;

		UObject::ProcessEvent(Func, &Parms);
	}
	UClass* ABuff_Grappled_JumpingSpider_Base_C::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClass(Xors("BlueprintGeneratedClass Buff_Grappled_JumpingSpider_Base.Buff_Grappled_JumpingSpider_Base_C"));


		return Clss;
	}

	// Function Buff_Grappled_JumpingSpider_Base.Buff_Grappled_JumpingSpider_Base_C.Server_FireQuickWebs_Single
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Param_HitLocation                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           HitActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	void ABuff_Grappled_JumpingSpider_Base_C::Server_FireQuickWebs_Single(const struct FVector& Param_HitLocation, class AActor* HitActor)
	{
		static class UFunction* Func = nullptr;

		if (Func == nullptr)
			Func = Class->GetFunction("Buff_Grappled_JumpingSpider_Base_C", "Server_FireQuickWebs_Single");

		Buff_Grappled_JumpingSpider_Base_C_Server_FireQuickWebs_Single Parms{};

		Parms.Param_HitLocation = std::move(Param_HitLocation);
		Parms.HitActor = HitActor;

		UObject::ProcessEvent(Func, &Parms);
	}
	// Function Buff_Grappled_JumpingSpider_Base.Buff_Grappled_JumpingSpider_Base_C.Server_DetachWeb
// 0x0002 (0x0002 - 0x0000)
	struct Buff_Grappled_JumpingSpider_Base_C_Server_DetachWeb final
	{
	public:
		bool                                          bIsJumpDetach;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          bPreventAnim;                                      // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};
	// Function Buff_Grappled_JumpingSpider_Base.Buff_Grappled_JumpingSpider_Base_C.Server_DetachWeb
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsJumpDetach                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bPreventAnim                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void ABuff_Grappled_JumpingSpider_Base_C::Server_DetachWeb(bool bIsJumpDetach, bool bPreventAnim)
	{
		static class UFunction* Func = nullptr;

		if (Func == nullptr)
			Func = Class->GetFunction("Buff_Grappled_JumpingSpider_Base_C", "Server_DetachWeb");

		Buff_Grappled_JumpingSpider_Base_C_Server_DetachWeb Parms{};

		Parms.bIsJumpDetach = bIsJumpDetach;
		Parms.bPreventAnim = bPreventAnim;

		UObject::ProcessEvent(Func, &Parms);
	}
	UClass* ABuff_Grappled_JumpingSpider_ShooterChar_C::StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClass(Xors("BlueprintGeneratedClass Buff_Grappled_JumpingSpider_ShooterChar.Buff_Grappled_JumpingSpider_ShooterChar_C"));


		return Clss;
	}
}
