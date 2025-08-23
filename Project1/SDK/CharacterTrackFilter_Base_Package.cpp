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
	 * 		Name   -> Function CharacterTrackFilter_Base.CharacterTrackFilter_Base_C.GetActorsToSearchThrough_BP
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    SPC                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	TArray<class AActor*> UCharacterTrackFilter_Base_C::GetActorsToSearchThrough_BP(class AShooterPlayerController* SPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterTrackFilter_Base.CharacterTrackFilter_Base_C.GetActorsToSearchThrough_BP");
		
		UCharacterTrackFilter_Base_C_GetActorsToSearchThrough_BP_Params params {};
		params.SPC = SPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function CharacterTrackFilter_Base.CharacterTrackFilter_Base_C.ShouldActorBeTracked
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      InvestigatedActor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CustomTameSelectionType                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DinoGroup                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      CustomTameSearchText                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class AShooterGameMode*                            GameMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AShooterCharacter*                           RequestingplayerShooterCharacter                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DebugEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Handled                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UCharacterTrackFilter_Base_C::ShouldActorBeTracked(class AActor* InvestigatedActor, int32_t CustomTameSelectionType, int32_t DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, class APlayerState* PlayerState, class AShooterCharacter* RequestingplayerShooterCharacter, bool DebugEnabled, bool* Handled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterTrackFilter_Base.CharacterTrackFilter_Base_C.ShouldActorBeTracked");
		
		UCharacterTrackFilter_Base_C_ShouldActorBeTracked_Params params {};
		params.InvestigatedActor = InvestigatedActor;
		params.CustomTameSelectionType = CustomTameSelectionType;
		params.DinoGroup = DinoGroup;
		params.CustomTameSearchText = CustomTameSearchText;
		params.GameMode = GameMode;
		params.PlayerState = PlayerState;
		params.RequestingplayerShooterCharacter = RequestingplayerShooterCharacter;
		params.DebugEnabled = DebugEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Handled != nullptr)
			*Handled = params.Handled;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function CharacterTrackFilter_Base.CharacterTrackFilter_Base_C.GetActorsToSearchThrough
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	TArray<class AActor*> UCharacterTrackFilter_Base_C::GetActorsToSearchThrough()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterTrackFilter_Base.CharacterTrackFilter_Base_C.GetActorsToSearchThrough");
		
		UCharacterTrackFilter_Base_C_GetActorsToSearchThrough_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function CharacterTrackFilter_Base.CharacterTrackFilter_Base_C.Is In Dino Group
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      checkedactor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerState*                                playerstate                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DinoGroupNum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isfavorited                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsInGroup                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharacterTrackFilter_Base_C::IsInDinoGroup(class AActor* checkedactor, class APlayerState* playerstate, int32_t DinoGroupNum, bool isfavorited, bool* IsInGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterTrackFilter_Base.CharacterTrackFilter_Base_C.Is In Dino Group");
		
		UCharacterTrackFilter_Base_C_IsInDinoGroup_Params params {};
		params.checkedactor = checkedactor;
		params.playerstate = playerstate;
		params.DinoGroupNum = DinoGroupNum;
		params.isfavorited = isfavorited;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsInGroup != nullptr)
			*IsInGroup = params.IsInGroup;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterTrackFilter_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterTrackFilter_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CharacterTrackFilter_Base.CharacterTrackFilter_Base_C");
		return ptr;
	}

}


