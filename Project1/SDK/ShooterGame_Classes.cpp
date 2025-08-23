#include "pch.h"


/**
 * Function:
 * 		RVA    -> 0x03103A60
 * 		Name   -> Function ShooterGame.PrimalCableComponent.GetAttachEndOverrideComponent
 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
 */
class USceneComponent* UPrimalCableComponent::GetAttachEndOverrideComponent()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalCableComponent.GetAttachEndOverrideComponent"));

	UPrimalCableComponent_GetAttachEndOverrideComponent_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}
