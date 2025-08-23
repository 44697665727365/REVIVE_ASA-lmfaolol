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
	 * 		Name   -> Function PrimalPlayerDataHelperFunctions.PrimalPlayerDataHelperFunctions_C.Apply To Player Pawn Character
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerState*                         ForPlayerState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AShooterCharacter*                           NewPlayerCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<double>                                     AscensionData                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            HexagonCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ChibiLevelUpsCount                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bUnlockedAllExplorerNotes                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FName>                                GeneralizedUnlockedAchievementTags                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPrimalPlayerDataHelperFunctions_C::ApplyToPlayerPawnCharacter(class AShooterPlayerState* ForPlayerState, class AShooterCharacter* NewPlayerCharacter, TArray<double>* AscensionData, int32_t HexagonCount, int32_t ChibiLevelUpsCount, bool bUnlockedAllExplorerNotes, TArray<class FName>* GeneralizedUnlockedAchievementTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalPlayerDataHelperFunctions.PrimalPlayerDataHelperFunctions_C.Apply To Player Pawn Character");
		
		UPrimalPlayerDataHelperFunctions_C_ApplyToPlayerPawnCharacter_Params params {};
		params.ForPlayerState = ForPlayerState;
		params.NewPlayerCharacter = NewPlayerCharacter;
		params.HexagonCount = HexagonCount;
		params.ChibiLevelUpsCount = ChibiLevelUpsCount;
		params.bUnlockedAllExplorerNotes = bUnlockedAllExplorerNotes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AscensionData != nullptr)
			*AscensionData = params.AscensionData;
		if (GeneralizedUnlockedAchievementTags != nullptr)
			*GeneralizedUnlockedAchievementTags = params.GeneralizedUnlockedAchievementTags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalPlayerDataHelperFunctions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalPlayerDataHelperFunctions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalPlayerDataHelperFunctions.PrimalPlayerDataHelperFunctions_C");
		return ptr;
	}

}


