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
	 * 		Name   -> Function QACheats.QACheats_C.DelayedServerRestart
	 * 		Flags  -> (Exec, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            WaitTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQACheats_C::DelayedServerRestart(int32_t WaitTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QACheats.QACheats_C.DelayedServerRestart");
		
		UQACheats_C_DelayedServerRestart_Params params {};
		params.WaitTime = WaitTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function QACheats.QACheats_C.GetCoordinatesFromCheatString
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FExplorerNoteLocationsPair                  ExplorerNoteLocationsPair                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            ExplorerNoteIndex                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             XOut                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             YOut                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ZOut                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQACheats_C::GetCoordinatesFromCheatString(const struct FExplorerNoteLocationsPair& ExplorerNoteLocationsPair, int32_t* ExplorerNoteIndex, double* XOut, double* YOut, double* ZOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QACheats.QACheats_C.GetCoordinatesFromCheatString");
		
		UQACheats_C_GetCoordinatesFromCheatString_Params params {};
		params.ExplorerNoteLocationsPair = ExplorerNoteLocationsPair;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ExplorerNoteIndex != nullptr)
			*ExplorerNoteIndex = params.ExplorerNoteIndex;
		if (XOut != nullptr)
			*XOut = params.XOut;
		if (YOut != nullptr)
			*YOut = params.YOut;
		if (ZOut != nullptr)
			*ZOut = params.ZOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function QACheats.QACheats_C.GiveSharedItemSet
	 * 		Flags  -> (Exec, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ItemSetName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQACheats_C::GiveSharedItemSet(const class FName& ItemSetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QACheats.QACheats_C.GiveSharedItemSet");
		
		UQACheats_C_GiveSharedItemSet_Params params {};
		params.ItemSetName = ItemSetName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function QACheats.QACheats_C.SpawnSpread
	 * 		Flags  -> (Exec, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      DinoName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               IsTamed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumberToSpawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQACheats_C::SpawnSpread(const class FString& DinoName, bool IsTamed, int32_t Level, int32_t NumberToSpawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QACheats.QACheats_C.SpawnSpread");
		
		UQACheats_C_SpawnSpread_Params params {};
		params.DinoName = DinoName;
		params.IsTamed = IsTamed;
		params.Level = Level;
		params.NumberToSpawn = NumberToSpawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function QACheats.QACheats_C.HidePlayer
	 * 		Flags  -> (Exec, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               _1                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQACheats_C::HidePlayer(bool _1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QACheats.QACheats_C.HidePlayer");
		
		UQACheats_C_HidePlayer_Params params {};
		params._1 = _1;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function QACheats.QACheats_C.MakePoop
	 * 		Flags  -> (Exec, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UQACheats_C::MakePoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QACheats.QACheats_C.MakePoop");
		
		UQACheats_C_MakePoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function QACheats.QACheats_C.GiveDinoSaddle
	 * 		Flags  -> (Exec, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      DinoName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UQACheats_C::GiveDinoSaddle(const class FString& DinoName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QACheats.QACheats_C.GiveDinoSaddle");
		
		UQACheats_C_GiveDinoSaddle_Params params {};
		params.DinoName = DinoName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function QACheats.QACheats_C.GiveAllMeat
	 * 		Flags  -> (Exec, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UQACheats_C::GiveAllMeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QACheats.QACheats_C.GiveAllMeat");
		
		UQACheats_C_GiveAllMeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function QACheats.QACheats_C.GiveAllGreens
	 * 		Flags  -> (Exec, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UQACheats_C::GiveAllGreens()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QACheats.QACheats_C.GiveAllGreens");
		
		UQACheats_C_GiveAllGreens_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function QACheats.QACheats_C.PrintPlayerCharacter
	 * 		Flags  -> (Exec, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UQACheats_C::PrintPlayerCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QACheats.QACheats_C.PrintPlayerCharacter");
		
		UQACheats_C_PrintPlayerCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function QACheats.QACheats_C.PrintRidingDino
	 * 		Flags  -> (Exec, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UQACheats_C::PrintRidingDino()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QACheats.QACheats_C.PrintRidingDino");
		
		UQACheats_C_PrintRidingDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function QACheats.QACheats_C.PrintTargetActor
	 * 		Flags  -> (Exec, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UQACheats_C::PrintTargetActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QACheats.QACheats_C.PrintTargetActor");
		
		UQACheats_C_PrintTargetActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function QACheats.QACheats_C.PrintAllNearbyWildDinos
	 * 		Flags  -> (Exec, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UQACheats_C::PrintAllNearbyWildDinos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QACheats.QACheats_C.PrintAllNearbyWildDinos");
		
		UQACheats_C_PrintAllNearbyWildDinos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function QACheats.QACheats_C.JumpToNextExplorerNote
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UQACheats_C::JumpToNextExplorerNote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QACheats.QACheats_C.JumpToNextExplorerNote");
		
		UQACheats_C_JumpToNextExplorerNote_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function QACheats.QACheats_C.JumpToExplorerNoteByIndex
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ExplorerNoteIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bOnlyIfUnopened                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQACheats_C::JumpToExplorerNoteByIndex(int32_t ExplorerNoteIndex, bool bOnlyIfUnopened)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QACheats.QACheats_C.JumpToExplorerNoteByIndex");
		
		UQACheats_C_JumpToExplorerNoteByIndex_Params params {};
		params.ExplorerNoteIndex = ExplorerNoteIndex;
		params.bOnlyIfUnopened = bOnlyIfUnopened;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function QACheats.QACheats_C.RestartServer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UQACheats_C::RestartServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QACheats.QACheats_C.RestartServer");
		
		UQACheats_C_RestartServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function QACheats.QACheats_C.ExecuteUbergraph_QACheats
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQACheats_C::ExecuteUbergraph_QACheats(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QACheats.QACheats_C.ExecuteUbergraph_QACheats");
		
		UQACheats_C_ExecuteUbergraph_QACheats_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQACheats_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQACheats_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass QACheats.QACheats_C");
		return ptr;
	}

}


