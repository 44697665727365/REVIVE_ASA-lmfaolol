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
	 * 		Name   -> Function CharacterTrackFilter_SearchName.CharacterTrackFilter_SearchName_C.Is Found Substring
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      subString                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               exact                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UCharacterTrackFilter_SearchName_C::IsFoundSubstring(const class FString& InputPin, const class FString& subString, bool exact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterTrackFilter_SearchName.CharacterTrackFilter_SearchName_C.Is Found Substring");
		
		UCharacterTrackFilter_SearchName_C_IsFoundSubstring_Params params {};
		params.InputPin = InputPin;
		params.subString = subString;
		params.exact = exact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function CharacterTrackFilter_SearchName.CharacterTrackFilter_SearchName_C.ShouldActorBeTracked
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
	bool UCharacterTrackFilter_SearchName_C::ShouldActorBeTracked(class AActor* InvestigatedActor, int32_t CustomTameSelectionType, int32_t DinoGroup, const class FString& CustomTameSearchText, class AShooterGameMode* GameMode, class APlayerState* PlayerState, class AShooterCharacter* RequestingplayerShooterCharacter, bool DebugEnabled, bool* Handled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterTrackFilter_SearchName.CharacterTrackFilter_SearchName_C.ShouldActorBeTracked");
		
		UCharacterTrackFilter_SearchName_C_ShouldActorBeTracked_Params params {};
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterTrackFilter_SearchName_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterTrackFilter_SearchName_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CharacterTrackFilter_SearchName.CharacterTrackFilter_SearchName_C");
		return ptr;
	}

}


