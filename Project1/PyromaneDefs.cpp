#include "pch.h"
#include "PyromaneDefs.h"
#include "PyromaneParams.h"
namespace CG {
// Function FireLion_Character_BP.FireLion_Character_BP_C.AttemptSetLavaWalking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Active                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::AttemptSetLavaWalking(bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "AttemptSetLavaWalking");

	Params::FireLion_Character_BP_C_AttemptSetLavaWalking Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.AttemptTameOnFireBoost
// (Public, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::AttemptTameOnFireBoost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "AttemptTameOnFireBoost");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.AttemptTeleportAfterWildRiding
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::AttemptTeleportAfterWildRiding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "AttemptTeleportAfterWildRiding");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.AttemptWaterJump
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::AttemptWaterJump()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "AttemptWaterJump");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BindOnPhysicsVolumeChanged
// (BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::BindOnPhysicsVolumeChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BindOnPhysicsVolumeChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BlueprintAdjustOutputDamage
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   AttackIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OriginalDamageAmount                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           HitActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UDamageType>          OutDamageType                                          (Parm, OutParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// float                                   OutDamageImpulse                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float AFireLion_Character_BP_C::BlueprintAdjustOutputDamage(int32 AttackIndex, float OriginalDamageAmount, class AActor* HitActor, TSubclassOf<class UDamageType>* OutDamageType, float* OutDamageImpulse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BlueprintAdjustOutputDamage");

	Params::FireLion_Character_BP_C_BlueprintAdjustOutputDamage Parms{};

	Parms.AttackIndex = AttackIndex;
	Parms.OriginalDamageAmount = OriginalDamageAmount;
	Parms.HitActor = HitActor;

	UObject::ProcessEvent(Func, &Parms);

	if (OutDamageType != nullptr)
		*OutDamageType = Parms.OutDamageType;

	if (OutDamageImpulse != nullptr)
		*OutDamageImpulse = Parms.OutDamageImpulse;

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BlueprintAnimNotifyCustomEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             CustomEventName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*           MeshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                      AnimNotifyObject                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::BlueprintAnimNotifyCustomEvent(class FName CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const class UAnimNotify* AnimNotifyObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BlueprintAnimNotifyCustomEvent");

	Params::FireLion_Character_BP_C_BlueprintAnimNotifyCustomEvent Parms{};

	Parms.CustomEventName = CustomEventName;
	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.AnimNotifyObject = AnimNotifyObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BlueprintCanAttack
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   AttackIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Distance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_AttackRangeOffset                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherTarget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AFireLion_Character_BP_C::BlueprintCanAttack(int32 AttackIndex, float Distance, float Param_AttackRangeOffset, class AActor* OtherTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BlueprintCanAttack");

	Params::FireLion_Character_BP_C_BlueprintCanAttack Parms{};

	Parms.AttackIndex = AttackIndex;
	Parms.Distance = Distance;
	Parms.Param_AttackRangeOffset = Param_AttackRangeOffset;
	Parms.OtherTarget = OtherTarget;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BlueprintCanRiderAttack
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   AttackIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AFireLion_Character_BP_C::BlueprintCanRiderAttack(int32 AttackIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BlueprintCanRiderAttack");

	Params::FireLion_Character_BP_C_BlueprintCanRiderAttack Parms{};

	Parms.AttackIndex = AttackIndex;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BlueprintDrawFloatingHUD
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterHUD*                      HUD                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   CenterX                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CenterY                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DrawScale                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BlueprintDrawFloatingHUD");

	Params::FireLion_Character_BP_C_BlueprintDrawFloatingHUD Parms{};

	Parms.HUD = HUD;
	Parms.CenterX = CenterX;
	Parms.CenterY = CenterY;
	Parms.DrawScale = DrawScale;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BP_GetCustomModifier_MaxSpeed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float AFireLion_Character_BP_C::BP_GetCustomModifier_MaxSpeed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BP_GetCustomModifier_MaxSpeed");

	Params::FireLion_Character_BP_C_BP_GetCustomModifier_MaxSpeed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BP_GetCustomModifier_RotationRate
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float AFireLion_Character_BP_C::BP_GetCustomModifier_RotationRate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BP_GetCustomModifier_RotationRate");

	Params::FireLion_Character_BP_C_BP_GetCustomModifier_RotationRate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BP_InterceptMoveForward
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   AxisValue                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AFireLion_Character_BP_C::BP_InterceptMoveForward(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BP_InterceptMoveForward");

	Params::FireLion_Character_BP_C_BP_InterceptMoveForward Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BP_OnJumpPressed
// (Event, Public, BlueprintEvent)

void AFireLion_Character_BP_C::BP_OnJumpPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BP_OnJumpPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BP_OnSetDeath
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::BP_OnSetDeath()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BP_OnSetDeath");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BP_OnStartCarried
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalDinoCharacter*             ADino                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::BP_OnStartCarried(class APrimalDinoCharacter* ADino)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BP_OnStartCarried");

	Params::FireLion_Character_BP_C_BP_OnStartCarried Parms{};

	Parms.ADino = ADino;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BP_OnTamedOrderReceived
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*                 FromCharacter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EDinoTamedOrder                         OrderType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bForce                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           EnemyTarget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    OrderNotExecuted                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::BP_OnTamedOrderReceived(class APrimalCharacter* FromCharacter, EDinoTamedOrder OrderType, bool bForce, class AActor* EnemyTarget, bool OrderNotExecuted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BP_OnTamedOrderReceived");

	Params::FireLion_Character_BP_C_BP_OnTamedOrderReceived Parms{};

	Parms.FromCharacter = FromCharacter;
	Parms.OrderType = OrderType;
	Parms.bForce = bForce;
	Parms.EnemyTarget = EnemyTarget;
	Parms.OrderNotExecuted = OrderNotExecuted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPAdjustAttackIndex
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   AttackIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 AFireLion_Character_BP_C::BPAdjustAttackIndex(int32 AttackIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPAdjustAttackIndex");

	Params::FireLion_Character_BP_C_BPAdjustAttackIndex Parms{};

	Parms.AttackIndex = AttackIndex;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPAdjustDamage
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   IncomingDamage                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDamageEvent                     TheDamageEvent                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class AController*                      EventInstigator                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsPointDamage                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       PointHitInfo                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float AFireLion_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPAdjustDamage");

	Params::FireLion_Character_BP_C_BPAdjustDamage Parms{};

	Parms.IncomingDamage = IncomingDamage;
	Parms.TheDamageEvent = std::move(TheDamageEvent);
	Parms.EventInstigator = EventInstigator;
	Parms.DamageCauser = DamageCauser;
	Parms.bIsPointDamage = bIsPointDamage;
	Parms.PointHitInfo = std::move(PointHitInfo);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPCanMountOnCharacter
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*                 Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AFireLion_Character_BP_C::BPCanMountOnCharacter(class APrimalCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPCanMountOnCharacter");

	Params::FireLion_Character_BP_C_BPCanMountOnCharacter Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPCharacterSleeped
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::BPCharacterSleeped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPCharacterSleeped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPClientDoMultiUse
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*                ForPC                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   ClientUseIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::BPClientDoMultiUse(class APlayerController* ForPC, int32 ClientUseIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPClientDoMultiUse");

	Params::FireLion_Character_BP_C_BPClientDoMultiUse Parms{};

	Parms.ForPC = ForPC;
	Parms.ClientUseIndex = ClientUseIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPClientHandleNetExecCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             CommandName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBPNetExecParams                 ExecParams                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class APlayerController*                ForPC                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AFireLion_Character_BP_C::BPClientHandleNetExecCommand(class FName CommandName, const struct FBPNetExecParams& ExecParams, class APlayerController* ForPC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPClientHandleNetExecCommand");

	Params::FireLion_Character_BP_C_BPClientHandleNetExecCommand Parms{};

	Parms.CommandName = CommandName;
	Parms.ExecParams = std::move(ExecParams);
	Parms.ForPC = ForPC;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPDoAttack
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   AttackIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::BPDoAttack(int32 AttackIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPDoAttack");

	Params::FireLion_Character_BP_C_BPDoAttack Parms{};

	Parms.AttackIndex = AttackIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPDrawToRiderHUD
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterHUD*                      HUD                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::BPDrawToRiderHUD(class AShooterHUD* HUD)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPDrawToRiderHUD");

	Params::FireLion_Character_BP_C_BPDrawToRiderHUD Parms{};

	Parms.HUD = HUD;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPGetCrosshairColor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor AFireLion_Character_BP_C::BPGetCrosshairColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPGetCrosshairColor");

	Params::FireLion_Character_BP_C_BPGetCrosshairColor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPGetHUDElements
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*                ForPC                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHUDElement>              OutElements                                            (Parm, OutParm)

void AFireLion_Character_BP_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPGetHUDElements");

	Params::FireLion_Character_BP_C_BPGetHUDElements Parms{};

	Parms.ForPC = ForPC;

	UObject::ProcessEvent(Func, &Parms);

	if (OutElements != nullptr)
		*OutElements = std::move(Parms.OutElements);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPGetMultiUseEntries
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*                ForPC                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FMultiUseEntry>           MultiUseEntries                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FMultiUseEntry>           ReturnValue                                            (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<struct FMultiUseEntry> AFireLion_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, const TArray<struct FMultiUseEntry>& MultiUseEntries)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPGetMultiUseEntries");

	Params::FireLion_Character_BP_C_BPGetMultiUseEntries Parms{};

	Parms.ForPC = ForPC;
	Parms.MultiUseEntries = std::move(MultiUseEntries);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPGetRidingMultiUseEntries
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*                ForPC                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FMultiUseEntry>           MultiUseEntries                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FMultiUseEntry>           ReturnValue                                            (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<struct FMultiUseEntry> AFireLion_Character_BP_C::BPGetRidingMultiUseEntries(class APlayerController* ForPC, const TArray<struct FMultiUseEntry>& MultiUseEntries)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPGetRidingMultiUseEntries");

	Params::FireLion_Character_BP_C_BPGetRidingMultiUseEntries Parms{};

	Parms.ForPC = ForPC;
	Parms.MultiUseEntries = std::move(MultiUseEntries);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPHandleControllerInitiatedAttack
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   AttackIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AFireLion_Character_BP_C::BPHandleControllerInitiatedAttack(int32 AttackIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPHandleControllerInitiatedAttack");

	Params::FireLion_Character_BP_C_BPHandleControllerInitiatedAttack Parms{};

	Parms.AttackIndex = AttackIndex;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPHandleLaunchMountedDino
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*                FromCharacter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsFromRidingDino                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AFireLion_Character_BP_C::BPHandleLaunchMountedDino(class AShooterCharacter* FromCharacter, bool IsFromRidingDino)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPHandleLaunchMountedDino");

	Params::FireLion_Character_BP_C_BPHandleLaunchMountedDino Parms{};

	Parms.FromCharacter = FromCharacter;
	Parms.IsFromRidingDino = IsFromRidingDino;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPHandleOnStopTargeting
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AFireLion_Character_BP_C::BPHandleOnStopTargeting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPHandleOnStopTargeting");

	Params::FireLion_Character_BP_C_BPHandleOnStopTargeting Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPHandlePoop
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AFireLion_Character_BP_C::BPHandlePoop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPHandlePoop");

	Params::FireLion_Character_BP_C_BPHandlePoop Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPHandleRightShoulderButton
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AFireLion_Character_BP_C::BPHandleRightShoulderButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPHandleRightShoulderButton");

	Params::FireLion_Character_BP_C_BPHandleRightShoulderButton Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPIgnoreAttachedSoundMultipliers
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                       ForSound                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AFireLion_Character_BP_C::BPIgnoreAttachedSoundMultipliers(class USoundBase* ForSound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPIgnoreAttachedSoundMultipliers");

	Params::FireLion_Character_BP_C_BPIgnoreAttachedSoundMultipliers Parms{};

	Parms.ForSound = ForSound;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPModifyAimOffsetNoTarget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                         Aim                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FRotator                         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FRotator AFireLion_Character_BP_C::BPModifyAimOffsetNoTarget(const struct FRotator& Aim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPModifyAimOffsetNoTarget");

	Params::FireLion_Character_BP_C_BPModifyAimOffsetNoTarget Parms{};

	Parms.Aim = std::move(Aim);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPModifyAimOffsetTargetLocation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          AimTargetLocation                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector AFireLion_Character_BP_C::BPModifyAimOffsetTargetLocation(const struct FVector& AimTargetLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPModifyAimOffsetTargetLocation");

	Params::FireLion_Character_BP_C_BPModifyAimOffsetTargetLocation Parms{};

	Parms.AimTargetLocation = std::move(AimTargetLocation);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPModifyDesiredRotation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         InDesiredRotation                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FRotator                         OutDesiredRotation                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AFireLion_Character_BP_C::BPModifyDesiredRotation(float DeltaTime, const struct FRotator& InDesiredRotation, struct FRotator* OutDesiredRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPModifyDesiredRotation");

	Params::FireLion_Character_BP_C_BPModifyDesiredRotation Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.InDesiredRotation = std::move(InDesiredRotation);

	UObject::ProcessEvent(Func, &Parms);

	if (OutDesiredRotation != nullptr)
		*OutDesiredRotation = std::move(Parms.OutDesiredRotation);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPNotifyClearRider
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*                RiderClearing                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPNotifyClearRider");

	Params::FireLion_Character_BP_C_BPNotifyClearRider Parms{};

	Parms.RiderClearing = RiderClearing;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPNotifySetRider
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*                RiderSetting                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPNotifySetRider");

	Params::FireLion_Character_BP_C_BPNotifySetRider Parms{};

	Parms.RiderSetting = RiderSetting;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPOnClearMountedDino
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::BPOnClearMountedDino()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPOnClearMountedDino");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPOnDinoStartled
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                     StartledAnimPlayed                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromAIController                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::BPOnDinoStartled(class UAnimMontage* StartledAnimPlayed, bool bFromAIController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPOnDinoStartled");

	Params::FireLion_Character_BP_C_BPOnDinoStartled Parms{};

	Parms.StartledAnimPlayed = StartledAnimPlayed;
	Parms.bFromAIController = bFromAIController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPOnLethalDamage
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   KillingDamage                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDamageEvent                     DamageEvent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AController*                      Killer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    bPreventDeath                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::BPOnLethalDamage(float KillingDamage, const struct FDamageEvent& DamageEvent, class AController* Killer, class AActor* DamageCauser, bool* bPreventDeath)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPOnLethalDamage");

	Params::FireLion_Character_BP_C_BPOnLethalDamage Parms{};

	Parms.KillingDamage = KillingDamage;
	Parms.DamageEvent = std::move(DamageEvent);
	Parms.Killer = Killer;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

	if (bPreventDeath != nullptr)
		*bPreventDeath = Parms.bPreventDeath;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPOnMovementModeChangedNotify
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMovementMode                           PrevMovementMode                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                                   PreviousCustomMode                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPOnMovementModeChangedNotify");

	Params::FireLion_Character_BP_C_BPOnMovementModeChangedNotify Parms{};

	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPOnRefreshColorization
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FLinearColor>             Colors                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AFireLion_Character_BP_C::BPOnRefreshColorization(const TArray<struct FLinearColor>& Colors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPOnRefreshColorization");

	Params::FireLion_Character_BP_C_BPOnRefreshColorization Parms{};

	Parms.Colors = std::move(Colors);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPOnSetMountedDino
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::BPOnSetMountedDino()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPOnSetMountedDino");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPOverrideAttachedSoundPitchMultiplier
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float AFireLion_Character_BP_C::BPOverrideAttachedSoundPitchMultiplier()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPOverrideAttachedSoundPitchMultiplier");

	Params::FireLion_Character_BP_C_BPOverrideAttachedSoundPitchMultiplier Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPOverrideAttachedSoundVolumeMultiplier
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float AFireLion_Character_BP_C::BPOverrideAttachedSoundVolumeMultiplier()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPOverrideAttachedSoundVolumeMultiplier");

	Params::FireLion_Character_BP_C_BPOverrideAttachedSoundVolumeMultiplier Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPOverrideCameraPivotLocationInterpParams
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimalCameraParams              CameraParams                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FPrimalCameraPivotZInterpOverridesPivotZInterpOverrides                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FPrimalCameraInterpParams        LastInterpParamsX                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FPrimalCameraInterpParams        LastInterpParamsY                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FPrimalCameraInterpParams        LastInterpParamsZ                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FPrimalCameraInterpParams        OutInterpParamsX                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FPrimalCameraInterpParams        OutInterpParamsY                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// struct FPrimalCameraInterpParams        OutInterpParamsZ                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AFireLion_Character_BP_C::BPOverrideCameraPivotLocationInterpParams(const struct FPrimalCameraParams& CameraParams, const struct FPrimalCameraPivotZInterpOverrides& PivotZInterpOverrides, const struct FPrimalCameraInterpParams& LastInterpParamsX, const struct FPrimalCameraInterpParams& LastInterpParamsY, const struct FPrimalCameraInterpParams& LastInterpParamsZ, struct FPrimalCameraInterpParams& OutInterpParamsX, struct FPrimalCameraInterpParams& OutInterpParamsY, struct FPrimalCameraInterpParams& OutInterpParamsZ)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPOverrideCameraPivotLocationInterpParams");

	Params::FireLion_Character_BP_C_BPOverrideCameraPivotLocationInterpParams Parms{};

	Parms.CameraParams = std::move(CameraParams);
	Parms.PivotZInterpOverrides = std::move(PivotZInterpOverrides);
	Parms.LastInterpParamsX = std::move(LastInterpParamsX);
	Parms.LastInterpParamsY = std::move(LastInterpParamsY);
	Parms.LastInterpParamsZ = std::move(LastInterpParamsZ);
	Parms.OutInterpParamsX = std::move(OutInterpParamsX);
	Parms.OutInterpParamsY = std::move(OutInterpParamsY);
	Parms.OutInterpParamsZ = std::move(OutInterpParamsZ);

	UObject::ProcessEvent(Func, &Parms);

	OutInterpParamsX = std::move(Parms.OutInterpParamsX);
	OutInterpParamsY = std::move(Parms.OutInterpParamsY);
	OutInterpParamsZ = std::move(Parms.OutInterpParamsZ);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPOverrideGetAttackAnimationIndex
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   AttackIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAnimMontage*>             AnimationArray                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 AFireLion_Character_BP_C::BPOverrideGetAttackAnimationIndex(int32 AttackIndex, const TArray<class UAnimMontage*>& AnimationArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPOverrideGetAttackAnimationIndex");

	Params::FireLion_Character_BP_C_BPOverrideGetAttackAnimationIndex Parms{};

	Parms.AttackIndex = AttackIndex;
	Parms.AnimationArray = std::move(AnimationArray);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPOverrideInventoryAccessInput
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AFireLion_Character_BP_C::BPOverrideInventoryAccessInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPOverrideInventoryAccessInput");

	Params::FireLion_Character_BP_C_BPOverrideInventoryAccessInput Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPPreventClearMountCapsuleResizing
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AFireLion_Character_BP_C::BPPreventClearMountCapsuleResizing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPPreventClearMountCapsuleResizing");

	Params::FireLion_Character_BP_C_BPPreventClearMountCapsuleResizing Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPPreventFallDamage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       HitResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                                   FallDamageAmount                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AFireLion_Character_BP_C::BPPreventFallDamage(const struct FHitResult& HitResult, float FallDamageAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPPreventFallDamage");

	Params::FireLion_Character_BP_C_BPPreventFallDamage Parms{};

	Parms.HitResult = std::move(HitResult);
	Parms.FallDamageAmount = FallDamageAmount;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPPreventRiding
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*                ByPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    bDontCheckDistance                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AFireLion_Character_BP_C::BPPreventRiding(class AShooterCharacter* ByPawn, bool bDontCheckDistance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPPreventRiding");

	Params::FireLion_Character_BP_C_BPPreventRiding Parms{};

	Parms.ByPawn = ByPawn;
	Parms.bDontCheckDistance = bDontCheckDistance;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPServerHandleNetExecCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*                FromPC                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             CommandName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBPNetExecParams                 ExecParams                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AFireLion_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController* FromPC, class FName CommandName, const struct FBPNetExecParams& ExecParams)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPServerHandleNetExecCommand");

	Params::FireLion_Character_BP_C_BPServerHandleNetExecCommand Parms{};

	Parms.FromPC = FromPC;
	Parms.CommandName = CommandName;
	Parms.ExecParams = std::move(ExecParams);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPSetupTamed
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasJustTamed                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::BPSetupTamed(bool bWasJustTamed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPSetupTamed");

	Params::FireLion_Character_BP_C_BPSetupTamed Parms{};

	Parms.bWasJustTamed = bWasJustTamed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPTimerNonDedicated
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::BPTimerNonDedicated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPTimerNonDedicated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPTimerServer
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::BPTimerServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPTimerServer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPTriggerStasisEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::BPTriggerStasisEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPTriggerStasisEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPTryMultiUse
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*                ForPC                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   UseIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AFireLion_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32 UseIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPTryMultiUse");

	Params::FireLion_Character_BP_C_BPTryMultiUse Parms{};

	Parms.ForPC = ForPC;
	Parms.UseIndex = UseIndex;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPUnstasis
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::BPUnstasis()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPUnstasis");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.CanAIManuallyFireAbsorb
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AFireLion_Character_BP_C::CanAIManuallyFireAbsorb()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "CanAIManuallyFireAbsorb");

	Params::FireLion_Character_BP_C_CanAIManuallyFireAbsorb Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.CanFireAbsorb
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AFireLion_Character_BP_C::CanFireAbsorb()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "CanFireAbsorb");

	Params::FireLion_Character_BP_C_CanFireAbsorb Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.CanManualTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           CallingActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsGestating                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AFireLion_Character_BP_C::CanManualTransform(class AActor* CallingActor, bool* IsGestating)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "CanManualTransform");

	Params::FireLion_Character_BP_C_CanManualTransform Parms{};

	Parms.CallingActor = CallingActor;

	UObject::ProcessEvent(Func, &Parms);

	if (IsGestating != nullptr)
		*IsGestating = Parms.IsGestating;

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.CanSwapShoulderRide
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AShooterPlayerController*         ByPC                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsGestating                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AFireLion_Character_BP_C::CanSwapShoulderRide(class AShooterPlayerController* ByPC, bool* IsGestating)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "CanSwapShoulderRide");

	Params::FireLion_Character_BP_C_CanSwapShoulderRide Parms{};

	Parms.ByPC = ByPC;

	UObject::ProcessEvent(Func, &Parms);

	if (IsGestating != nullptr)
		*IsGestating = Parms.IsGestating;

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.CanUpdateIsLazing
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AFireLion_Character_BP_C::CanUpdateIsLazing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "CanUpdateIsLazing");

	Params::FireLion_Character_BP_C_CanUpdateIsLazing Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.CanUseFireTrail
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AFireLion_Character_BP_C::CanUseFireTrail()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "CanUseFireTrail");

	Params::FireLion_Character_BP_C_CanUseFireTrail Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.CheckFireActiveDeactivateBuffs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::CheckFireActiveDeactivateBuffs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "CheckFireActiveDeactivateBuffs");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.ClearDaze
// (Public, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::ClearDaze()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "ClearDaze");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.ClearLocalVars
// (Public, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::ClearLocalVars()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "ClearLocalVars");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.ClientOnActivateFireBoost_InitialTrigger
// (Public, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::ClientOnActivateFireBoost_InitialTrigger()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "ClientOnActivateFireBoost_InitialTrigger");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.ClientOnDeactivateFireBoostLoopingFX_LikeWhenDoused
// (Public, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::ClientOnDeactivateFireBoostLoopingFX_LikeWhenDoused()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "ClientOnDeactivateFireBoostLoopingFX_LikeWhenDoused");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.ClientOnDeactivateFireLoopingFX_LikeWhenDoused
// (Public, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::ClientOnDeactivateFireLoopingFX_LikeWhenDoused()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "ClientOnDeactivateFireLoopingFX_LikeWhenDoused");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.ClientOnGrowLargeToSmall
// (Public, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::ClientOnGrowLargeToSmall()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "ClientOnGrowLargeToSmall");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.ClientOnGrowSmallToLarge
// (Public, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::ClientOnGrowSmallToLarge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "ClientOnGrowSmallToLarge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.ClientOnReActivateFireBoostLoopingFX_LikeWhenNoLongerDoused
// (Public, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::ClientOnReActivateFireBoostLoopingFX_LikeWhenNoLongerDoused()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "ClientOnReActivateFireBoostLoopingFX_LikeWhenNoLongerDoused");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.ClientOnReActivateFireLoopingFX_LikeWhenNoLongerDoused
// (Public, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::ClientOnReActivateFireLoopingFX_LikeWhenNoLongerDoused()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "ClientOnReActivateFireLoopingFX_LikeWhenNoLongerDoused");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.DoFireAbsorb
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::DoFireAbsorb()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "DoFireAbsorb");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.DoFireDashExplosion
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Force                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    VisualsOnly                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    AtActorLoc                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::DoFireDashExplosion(bool Force, bool VisualsOnly, bool AtActorLoc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "DoFireDashExplosion");

	Params::FireLion_Character_BP_C_DoFireDashExplosion Parms{};

	Parms.Force = Force;
	Parms.VisualsOnly = VisualsOnly;
	Parms.AtActorLoc = AtActorLoc;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.EnableTimerOnFireDisabledBuff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::EnableTimerOnFireDisabledBuff(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "EnableTimerOnFireDisabledBuff");

	Params::FireLion_Character_BP_C_EnableTimerOnFireDisabledBuff Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.ExecuteUbergraph_FireLion_Character_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::ExecuteUbergraph_FireLion_Character_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "ExecuteUbergraph_FireLion_Character_BP");

	Params::FireLion_Character_BP_C_ExecuteUbergraph_FireLion_Character_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.FireBoostTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::FireBoostTick(double DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "FireBoostTick");

	Params::FireLion_Character_BP_C_FireBoostTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.FireDashTick
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::FireDashTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "FireDashTick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.FireSourceTick
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::FireSourceTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "FireSourceTick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.FireTrailTick
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::FireTrailTick(double DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "FireTrailTick");

	Params::FireLion_Character_BP_C_FireTrailTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.GetCanFireAbsorbCharacter
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APrimalCharacter*                 Char                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NumStacks                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AFireLion_Character_BP_C::GetCanFireAbsorbCharacter(class APrimalCharacter* Char, int32* NumStacks)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "GetCanFireAbsorbCharacter");

	Params::FireLion_Character_BP_C_GetCanFireAbsorbCharacter Parms{};

	Parms.Char = Char;

	UObject::ProcessEvent(Func, &Parms);

	if (NumStacks != nullptr)
		*NumStacks = Parms.NumStacks;

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.GetCharsToFireAbsorb
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class APrimalCharacter*>         Chars                                                  (Parm, OutParm)
// int32                                   TotalStacks                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::GetCharsToFireAbsorb(TArray<class APrimalCharacter*>* Chars, int32* TotalStacks)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "GetCharsToFireAbsorb");

	Params::FireLion_Character_BP_C_GetCharsToFireAbsorb Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Chars != nullptr)
		*Chars = std::move(Parms.Chars);

	if (TotalStacks != nullptr)
		*TotalStacks = Parms.TotalStacks;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.GetDeathAnim
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   KillingDamage                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ImpactVelocity                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            InstigatingPawn                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimationAsset*                  ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class UAnimationAsset* AFireLion_Character_BP_C::GetDeathAnim(float KillingDamage, const struct FVector& ImpactVelocity, class APawn* InstigatingPawn, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "GetDeathAnim");

	Params::FireLion_Character_BP_C_GetDeathAnim Parms{};

	Parms.KillingDamage = KillingDamage;
	Parms.ImpactVelocity = std::move(ImpactVelocity);
	Parms.InstigatingPawn = InstigatingPawn;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.GetFireDashAttackDirection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Direction                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::GetFireDashAttackDirection(struct FVector* Direction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "GetFireDashAttackDirection");

	Params::FireLion_Character_BP_C_GetFireDashAttackDirection Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Direction != nullptr)
		*Direction = std::move(Parms.Direction);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.GetIsInLavaSwimmingState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   CheckType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AFireLion_Character_BP_C::GetIsInLavaSwimmingState(int32 CheckType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "GetIsInLavaSwimmingState");

	Params::FireLion_Character_BP_C_GetIsInLavaSwimmingState Parms{};

	Parms.CheckType = CheckType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.GetIsPhysicsVolumeLava
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APhysicsVolume*                   PhysicsVolume                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsLava                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::GetIsPhysicsVolumeLava(class APhysicsVolume* PhysicsVolume, bool* IsLava)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "GetIsPhysicsVolumeLava");

	Params::FireLion_Character_BP_C_GetIsPhysicsVolumeLava Parms{};

	Parms.PhysicsVolume = PhysicsVolume;

	UObject::ProcessEvent(Func, &Parms);

	if (IsLava != nullptr)
		*IsLava = Parms.IsLava;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.GetPhysicsVolumeToCheckForRefreshFireActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APhysicsVolume*                   PhysicsVolume                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::GetPhysicsVolumeToCheckForRefreshFireActive(class APhysicsVolume** PhysicsVolume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "GetPhysicsVolumeToCheckForRefreshFireActive");

	Params::FireLion_Character_BP_C_GetPhysicsVolumeToCheckForRefreshFireActive Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PhysicsVolume != nullptr)
		*PhysicsVolume = Parms.PhysicsVolume;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.Has Room to Transform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           ActorToUseLoc                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>                   ActorsToIgnore                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    HasRoom                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::Has_Room_to_Transform(class AActor* ActorToUseLoc, TArray<class AActor*>& ActorsToIgnore, bool* HasRoom)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "Has Room to Transform");

	Params::FireLion_Character_BP_C_Has_Room_to_Transform Parms{};

	Parms.ActorToUseLoc = ActorToUseLoc;
	Parms.ActorsToIgnore = std::move(ActorsToIgnore);

	UObject::ProcessEvent(Func, &Parms);

	ActorsToIgnore = std::move(Parms.ActorsToIgnore);

	if (HasRoom != nullptr)
		*HasRoom = Parms.HasRoom;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AFireLion_Character_BP_C::InpActEvt_AltFire_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "InpActEvt_AltFire_K2Node_InputActionEvent_4");

	Params::FireLion_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_4 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AFireLion_Character_BP_C::InpActEvt_AltFire_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "InpActEvt_AltFire_K2Node_InputActionEvent_5");

	Params::FireLion_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_5 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AFireLion_Character_BP_C::InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_0");

	Params::FireLion_Character_BP_C_InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AFireLion_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "InpActEvt_Crouch_K2Node_InputActionEvent_3");

	Params::FireLion_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_3 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AFireLion_Character_BP_C::InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_2");

	Params::FireLion_Character_BP_C_InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_2 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.InpActEvt_Poop_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AFireLion_Character_BP_C::InpActEvt_Poop_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "InpActEvt_Poop_K2Node_InputActionEvent_1");

	Params::FireLion_Character_BP_C_InpActEvt_Poop_K2Node_InputActionEvent_1 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.IsWildFireLionInRain
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AFireLion_Character_BP_C::IsWildFireLionInRain()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "IsWildFireLionInRain");

	Params::FireLion_Character_BP_C_IsWildFireLionInRain Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.LavaWalkingTick
// (Public, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::LavaWalkingTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "LavaWalkingTick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.LavaWaterPhysicsVolCheck
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsForExit                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Distance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          FromLocation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    DoTraceForUpdate                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AFireLion_Character_BP_C::LavaWaterPhysicsVolCheck(bool IsForExit, double Distance, const struct FVector& FromLocation, bool DoTraceForUpdate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "LavaWaterPhysicsVolCheck");

	Params::FireLion_Character_BP_C_LavaWaterPhysicsVolCheck Parms{};

	Parms.IsForExit = IsForExit;
	Parms.Distance = Distance;
	Parms.FromLocation = std::move(FromLocation);
	Parms.DoTraceForUpdate = DoTraceForUpdate;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.Multi_EnableTimerOnFireDisabledBuff
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::Multi_EnableTimerOnFireDisabledBuff(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "Multi_EnableTimerOnFireDisabledBuff");

	Params::FireLion_Character_BP_C_Multi_EnableTimerOnFireDisabledBuff Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.Multi_ResizeFireLion
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Grow                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    PlayAnim                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::Multi_ResizeFireLion(bool Grow, bool PlayAnim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "Multi_ResizeFireLion");

	Params::FireLion_Character_BP_C_Multi_ResizeFireLion Parms{};

	Parms.Grow = Grow;
	Parms.PlayAnim = PlayAnim;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.Multi_SetIsLazing
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsLazing                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Startle                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Instant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::Multi_SetIsLazing(bool IsLazing, bool Startle, bool Instant)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "Multi_SetIsLazing");

	Params::FireLion_Character_BP_C_Multi_SetIsLazing Parms{};

	Parms.IsLazing = IsLazing;
	Parms.Startle = Startle;
	Parms.Instant = Instant;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.Multi_SetWildRidingStatValues
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Health                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Stam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::Multi_SetWildRidingStatValues(double Health, double Stam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "Multi_SetWildRidingStatValues");

	Params::FireLion_Character_BP_C_Multi_SetWildRidingStatValues Parms{};

	Parms.Health = Health;
	Parms.Stam = Stam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.Multi_SwapShoulderRide
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*                ShooterChar                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Riding                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          LaunchDirection                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::Multi_SwapShoulderRide(class AShooterCharacter* ShooterChar, bool Riding, const struct FVector& LaunchDirection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "Multi_SwapShoulderRide");

	Params::FireLion_Character_BP_C_Multi_SwapShoulderRide Parms{};

	Parms.ShooterChar = ShooterChar;
	Parms.Riding = Riding;
	Parms.LaunchDirection = std::move(LaunchDirection);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.OnBeginUpdateIsLazing
// (Public, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::OnBeginUpdateIsLazing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "OnBeginUpdateIsLazing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.OnFireLionJumpPressed
// (Public, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::OnFireLionJumpPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "OnFireLionJumpPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.OnLanded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AFireLion_Character_BP_C::OnLanded(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "OnLanded");

	Params::FireLion_Character_BP_C_OnLanded Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.OnPhysicsVolumeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicsVolume*                   NewVolume                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::OnPhysicsVolumeChanged(class APhysicsVolume* NewVolume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "OnPhysicsVolumeChanged");

	Params::FireLion_Character_BP_C_OnPhysicsVolumeChanged Parms{};

	Parms.NewVolume = NewVolume;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.OnRep_bFireDashActive
// (BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::OnRep_bFireDashActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "OnRep_bFireDashActive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.OnRep_bIsSmallLion
// (BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::OnRep_bIsSmallLion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "OnRep_bIsSmallLion");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.OnRep_bLavaWalkingActive
// (BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::OnRep_bLavaWalkingActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "OnRep_bLavaWalkingActive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.OnSecAttackPressed
// (Public, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::OnSecAttackPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "OnSecAttackPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.OnUpdateMountedDinoMeshHiding
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bShouldBeVisible                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::OnUpdateMountedDinoMeshHiding(bool bShouldBeVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "OnUpdateMountedDinoMeshHiding");

	Params::FireLion_Character_BP_C_OnUpdateMountedDinoMeshHiding Parms{};

	Parms.bShouldBeVisible = bShouldBeVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.ReceiveBeginPlay
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.ReceiveFireAbsorb
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  HealthAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  EnergyAmount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APrimalCharacter*                 FromCharacter                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ShouldAbsorbFireFromTargetVFXPlay                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::ReceiveFireAbsorb(double HealthAmount, double EnergyAmount, class APrimalCharacter* FromCharacter, bool* ShouldAbsorbFireFromTargetVFXPlay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "ReceiveFireAbsorb");

	Params::FireLion_Character_BP_C_ReceiveFireAbsorb Parms{};

	Parms.HealthAmount = HealthAmount;
	Parms.EnergyAmount = EnergyAmount;
	Parms.FromCharacter = FromCharacter;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldAbsorbFireFromTargetVFXPlay != nullptr)
		*ShouldAbsorbFireFromTargetVFXPlay = Parms.ShouldAbsorbFireFromTargetVFXPlay;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.ReceiveHit
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              MyComp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Other                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    bSelfMoved                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitNormal                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AFireLion_Character_BP_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "ReceiveHit");

	Params::FireLion_Character_BP_C_ReceiveHit Parms{};

	Parms.MyComp = MyComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.bSelfMoved = bSelfMoved;
	Parms.HitLocation = std::move(HitLocation);
	Parms.HitNormal = std::move(HitNormal);
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.ReceiveTick
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "ReceiveTick");

	Params::FireLion_Character_BP_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.RefreshFireActive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicsVolume*                   PhysicsVolume                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::RefreshFireActive(class APhysicsVolume* PhysicsVolume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "RefreshFireActive");

	Params::FireLion_Character_BP_C_RefreshFireActive Parms{};

	Parms.PhysicsVolume = PhysicsVolume;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.RefreshFireVisuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Instant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::RefreshFireVisuals(bool Instant)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "RefreshFireVisuals");

	Params::FireLion_Character_BP_C_RefreshFireVisuals Parms{};

	Parms.Instant = Instant;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.RefreshIsFireDashing
// (Public, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::RefreshIsFireDashing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "RefreshIsFireDashing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.RefreshLavaSwimmingVals
// (Public, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::RefreshLavaSwimmingVals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "RefreshLavaSwimmingVals");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.RefreshLavaWalking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APhysicsVolume*                   PhysicsVolume                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::RefreshLavaWalking(class APhysicsVolume* PhysicsVolume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "RefreshLavaWalking");

	Params::FireLion_Character_BP_C_RefreshLavaWalking Parms{};

	Parms.PhysicsVolume = PhysicsVolume;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.RefreshMovementVars
// (Public, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::RefreshMovementVars()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "RefreshMovementVars");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.ResetIgnoreWater
// (Public, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::ResetIgnoreWater()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "ResetIgnoreWater");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.ResizeFireLion
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Grow                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    PlayAnim                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::ResizeFireLion(bool Grow, bool PlayAnim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "ResizeFireLion");

	Params::FireLion_Character_BP_C_ResizeFireLion Parms{};

	Parms.Grow = Grow;
	Parms.PlayAnim = PlayAnim;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.RidingTick
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::RidingTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "RidingTick");

	Params::FireLion_Character_BP_C_RidingTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.RightBeforeSpawningFootprint
// (Public, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::RightBeforeSpawningFootprint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "RightBeforeSpawningFootprint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.Server_AttemptSetLavaWalking
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Active                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::Server_AttemptSetLavaWalking(bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "Server_AttemptSetLavaWalking");

	Params::FireLion_Character_BP_C_Server_AttemptSetLavaWalking Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.Server_AttemptWaterJump
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::Server_AttemptWaterJump()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "Server_AttemptWaterJump");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.Server_SetFireDashDirection
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Direction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::Server_SetFireDashDirection(const struct FVector& Direction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "Server_SetFireDashDirection");

	Params::FireLion_Character_BP_C_Server_SetFireDashDirection Parms{};

	Parms.Direction = std::move(Direction);

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.Server_SwapShoulderRide
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          LaunchDirection                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AShooterCharacter*                ShooterChar                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::Server_SwapShoulderRide(const struct FVector& LaunchDirection, class AShooterCharacter* ShooterChar)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "Server_SwapShoulderRide");

	Params::FireLion_Character_BP_C_Server_SwapShoulderRide Parms{};

	Parms.LaunchDirection = std::move(LaunchDirection);
	Parms.ShooterChar = ShooterChar;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.SetFireActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Active                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::SetFireActive(bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "SetFireActive");

	Params::FireLion_Character_BP_C_SetFireActive Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.SetFireBoostActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Active                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::SetFireBoostActive(bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "SetFireBoostActive");

	Params::FireLion_Character_BP_C_SetFireBoostActive Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.SetFireDashActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Set                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::SetFireDashActive(bool Set)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "SetFireDashActive");

	Params::FireLion_Character_BP_C_SetFireDashActive Parms{};

	Parms.Set = Set;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.SetFireTrailActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Active                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::SetFireTrailActive(bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "SetFireTrailActive");

	Params::FireLion_Character_BP_C_SetFireTrailActive Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.SetIsSmallLion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSmall                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::SetIsSmallLion(bool IsSmall)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "SetIsSmallLion");

	Params::FireLion_Character_BP_C_SetIsSmallLion Parms{};

	Parms.IsSmall = IsSmall;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.SetLavaWalking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Active                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::SetLavaWalking(bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "SetLavaWalking");

	Params::FireLion_Character_BP_C_SetLavaWalking Parms{};

	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.SetWildRidingStatValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Health                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Stam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::SetWildRidingStatValues(double Health, double Stam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "SetWildRidingStatValues");

	Params::FireLion_Character_BP_C_SetWildRidingStatValues Parms{};

	Parms.Health = Health;
	Parms.Stam = Stam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.SharedCanAttack
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AFireLion_Character_BP_C::SharedCanAttack(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "SharedCanAttack");

	Params::FireLion_Character_BP_C_SharedCanAttack Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.SpawnFireBreathVFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::SpawnFireBreathVFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "SpawnFireBreathVFX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.SpawnMeleeTrailVFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::SpawnMeleeTrailVFX(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "SpawnMeleeTrailVFX");

	Params::FireLion_Character_BP_C_SpawnMeleeTrailVFX Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.SwapShoulderRide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          LaunchDirection                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AShooterCharacter*                ShooterChar                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::SwapShoulderRide(const struct FVector& LaunchDirection, class AShooterCharacter* ShooterChar)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "SwapShoulderRide");

	Params::FireLion_Character_BP_C_SwapShoulderRide Parms{};

	Parms.LaunchDirection = std::move(LaunchDirection);
	Parms.ShooterChar = ShooterChar;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.TamingTick
// (Public, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::TamingTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "TamingTick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.TimedEnableIK
// (Public, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::TimedEnableIK()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "TimedEnableIK");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.TimedFireActive
// (Public, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::TimedFireActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "TimedFireActive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.Timeline_ResizeFireLion__FinishedFunc
// (BlueprintEvent)

void AFireLion_Character_BP_C::Timeline_ResizeFireLion__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "Timeline_ResizeFireLion__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.Timeline_ResizeFireLion__UpdateFunc
// (BlueprintEvent)

void AFireLion_Character_BP_C::Timeline_ResizeFireLion__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "Timeline_ResizeFireLion__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.UpdateAffinityFromFireEnergy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::UpdateAffinityFromFireEnergy(double Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "UpdateAffinityFromFireEnergy");

	Params::FireLion_Character_BP_C_UpdateAffinityFromFireEnergy Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.UpdateAllowMating
// (Public, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::UpdateAllowMating()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "UpdateAllowMating");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.UpdateFireDisabledBuff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Add                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::UpdateFireDisabledBuff(bool Add)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "UpdateFireDisabledBuff");

	Params::FireLion_Character_BP_C_UpdateFireDisabledBuff Parms{};

	Parms.Add = Add;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.UpdateFireEnergy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::UpdateFireEnergy(double Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "UpdateFireEnergy");

	Params::FireLion_Character_BP_C_UpdateFireEnergy Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.UpdateFireLionAI
// (Public, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::UpdateFireLionAI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "UpdateFireLionAI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.UpdateHUDHelper
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*                ShooterChar                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Remove                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::UpdateHUDHelper(class AShooterCharacter* ShooterChar, bool Remove)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "UpdateHUDHelper");

	Params::FireLion_Character_BP_C_UpdateHUDHelper Parms{};

	Parms.ShooterChar = ShooterChar;
	Parms.Remove = Remove;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.UpdateIsLazing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Startle                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Instant                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::UpdateIsLazing(bool Startle, bool Instant)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "UpdateIsLazing");

	Params::FireLion_Character_BP_C_UpdateIsLazing Parms{};

	Parms.Startle = Startle;
	Parms.Instant = Instant;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.UpdateLaunchVelocityVals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ForSwap                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::UpdateLaunchVelocityVals(bool ForSwap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "UpdateLaunchVelocityVals");

	Params::FireLion_Character_BP_C_UpdateLaunchVelocityVals Parms{};

	Parms.ForSwap = ForSwap;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.UpdateMountedBuff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Add                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AShooterCharacter*                MountedChar                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::UpdateMountedBuff(bool Add, class AShooterCharacter* MountedChar)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "UpdateMountedBuff");

	Params::FireLion_Character_BP_C_UpdateMountedBuff Parms{};

	Parms.Add = Add;
	Parms.MountedChar = MountedChar;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.UpdateNaturalArmor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::UpdateNaturalArmor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "UpdateNaturalArmor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.UpdateRiderBuff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Add                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AShooterCharacter*                Param_Rider                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::UpdateRiderBuff(bool Add, class AShooterCharacter* Param_Rider)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "UpdateRiderBuff");

	Params::FireLion_Character_BP_C_UpdateRiderBuff Parms{};

	Parms.Add = Add;
	Parms.Param_Rider = Param_Rider;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.UpdateSmallLionBoneModifiers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::UpdateSmallLionBoneModifiers()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "UpdateSmallLionBoneModifiers");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.UpdateTamingVars
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterPlayerController*         PC                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Clear                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::UpdateTamingVars(class AShooterPlayerController* PC, bool Clear)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "UpdateTamingVars");

	Params::FireLion_Character_BP_C_UpdateTamingVars Parms{};

	Parms.PC = PC;
	Parms.Clear = Clear;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.UpdateWildRidingStats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AFireLion_Character_BP_C::UpdateWildRidingStats()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "UpdateWildRidingStats");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.AllowPlayMontage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UAnimMontage*                     AnimMontage                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AFireLion_Character_BP_C::AllowPlayMontage(class UAnimMontage* AnimMontage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "AllowPlayMontage");

	Params::FireLion_Character_BP_C_AllowPlayMontage Parms{};

	Parms.AnimMontage = AnimMontage;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.BPOverrideFloatingHUDLocation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector AFireLion_Character_BP_C::BPOverrideFloatingHUDLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "BPOverrideFloatingHUDLocation");

	Params::FireLion_Character_BP_C_BPOverrideFloatingHUDLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

UClass* AFireLion_Character_BP_C::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
	{
		ptr = UObject::FindClass("BlueprintGeneratedClass FireLion_Character_BP.FireLion_Character_BP_C");
	}
	return ptr;
}


// Function FireLion_Character_BP.FireLion_Character_BP_C.GetAttackAnim
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   AttackIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AnimIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                     Anim                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AFireLion_Character_BP_C::GetAttackAnim(int32 AttackIndex, int32 AnimIndex, class UAnimMontage** Anim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FireLion_Character_BP_C", "GetAttackAnim");

	Params::FireLion_Character_BP_C_GetAttackAnim Parms{};

	Parms.AttackIndex = AttackIndex;
	Parms.AnimIndex = AnimIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Anim != nullptr)
		*Anim = Parms.Anim;
}
}