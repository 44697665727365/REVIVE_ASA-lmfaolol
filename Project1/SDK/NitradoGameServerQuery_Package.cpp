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
	 * 		RVA    -> 0x0254A6A0
	 * 		Name   -> Function NitradoGameServerQuery.GameServerQuerySubsystem.Start
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UGameServerQuerySubsystem::Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NitradoGameServerQuery.GameServerQuerySubsystem.Start");
		
		UGameServerQuerySubsystem_Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0254A110
	 * 		Name   -> Function NitradoGameServerQuery.GameServerQuerySubsystem.SetVersion
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Version                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameServerQuerySubsystem::SetVersion(const class FString& Version)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NitradoGameServerQuery.GameServerQuerySubsystem.SetVersion");
		
		UGameServerQuerySubsystem_SetVersion_Params params {};
		params.Version = Version;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02549D40
	 * 		Name   -> Function NitradoGameServerQuery.GameServerQuerySubsystem.SetUniqueID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      UniqueID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameServerQuerySubsystem::SetUniqueID(const class FString& UniqueID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NitradoGameServerQuery.GameServerQuerySubsystem.SetUniqueID");
		
		UGameServerQuerySubsystem_SetUniqueID_Params params {};
		params.UniqueID = UniqueID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02549EB0
	 * 		Name   -> Function NitradoGameServerQuery.GameServerQuerySubsystem.SetTicksPerSecond
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            TickCount                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameServerQuerySubsystem::SetTicksPerSecond(int32_t TickCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NitradoGameServerQuery.GameServerQuerySubsystem.SetTicksPerSecond");
		
		UGameServerQuerySubsystem_SetTicksPerSecond_Params params {};
		params.TickCount = TickCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02549BD0
	 * 		Name   -> Function NitradoGameServerQuery.GameServerQuerySubsystem.SetServerName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameServerQuerySubsystem::SetServerName(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NitradoGameServerQuery.GameServerQuerySubsystem.SetServerName");
		
		UGameServerQuerySubsystem_SetServerName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0254A370
	 * 		Name   -> Function NitradoGameServerQuery.GameServerQuerySubsystem.SetReady
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Ready                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameServerQuerySubsystem::SetReady(bool Ready)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NitradoGameServerQuery.GameServerQuerySubsystem.SetReady");
		
		UGameServerQuerySubsystem_SetReady_Params params {};
		params.Ready = Ready;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0254A280
	 * 		Name   -> Function NitradoGameServerQuery.GameServerQuerySubsystem.SetPlayerMax
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Count                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameServerQuerySubsystem::SetPlayerMax(int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NitradoGameServerQuery.GameServerQuerySubsystem.SetPlayerMax");
		
		UGameServerQuerySubsystem_SetPlayerMax_Params params {};
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0254A460
	 * 		Name   -> Function NitradoGameServerQuery.GameServerQuerySubsystem.SetPlayerCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Count                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameServerQuerySubsystem::SetPlayerCount(int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NitradoGameServerQuery.GameServerQuerySubsystem.SetPlayerCount");
		
		UGameServerQuerySubsystem_SetPlayerCount_Params params {};
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0254A550
	 * 		Name   -> Function NitradoGameServerQuery.GameServerQuerySubsystem.SetPasswordProtected
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameServerQuerySubsystem::SetPasswordProtected(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NitradoGameServerQuery.GameServerQuerySubsystem.SetPasswordProtected");
		
		UGameServerQuerySubsystem_SetPasswordProtected_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02549FA0
	 * 		Name   -> Function NitradoGameServerQuery.GameServerQuerySubsystem.SetMapName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameServerQuerySubsystem::SetMapName(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NitradoGameServerQuery.GameServerQuerySubsystem.SetMapName");
		
		UGameServerQuerySubsystem_SetMapName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02549150
	 * 		Name   -> Function NitradoGameServerQuery.GameServerQuerySubsystem.Reset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGameServerQuerySubsystem::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NitradoGameServerQuery.GameServerQuerySubsystem.Reset");
		
		UGameServerQuerySubsystem_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02549690
	 * 		Name   -> Function NitradoGameServerQuery.GameServerQuerySubsystem.RemoveTag
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Tag                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameServerQuerySubsystem::RemoveTag(const class FString& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NitradoGameServerQuery.GameServerQuerySubsystem.RemoveTag");
		
		UGameServerQuerySubsystem_RemoveTag_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025499A0
	 * 		Name   -> Function NitradoGameServerQuery.GameServerQuerySubsystem.RemovePlatform
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EPlatform                                          Platform                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameServerQuerySubsystem::RemovePlatform(EPlatform Platform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NitradoGameServerQuery.GameServerQuerySubsystem.RemovePlatform");
		
		UGameServerQuerySubsystem_RemovePlatform_Params params {};
		params.Platform = Platform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0254A670
	 * 		Name   -> Function NitradoGameServerQuery.GameServerQuerySubsystem.IncrementPlayerCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGameServerQuerySubsystem::IncrementPlayerCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NitradoGameServerQuery.GameServerQuerySubsystem.IncrementPlayerCount");
		
		UGameServerQuerySubsystem_IncrementPlayerCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0254A640
	 * 		Name   -> Function NitradoGameServerQuery.GameServerQuerySubsystem.DecrementPlayerCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UGameServerQuerySubsystem::DecrementPlayerCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NitradoGameServerQuery.GameServerQuerySubsystem.DecrementPlayerCount");
		
		UGameServerQuerySubsystem_DecrementPlayerCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02549800
	 * 		Name   -> Function NitradoGameServerQuery.GameServerQuerySubsystem.AddTag
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Tag                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameServerQuerySubsystem::AddTag(const class FString& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NitradoGameServerQuery.GameServerQuerySubsystem.AddTag");
		
		UGameServerQuerySubsystem_AddTag_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02549AE0
	 * 		Name   -> Function NitradoGameServerQuery.GameServerQuerySubsystem.AddPlatform
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EPlatform                                          Platform                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameServerQuerySubsystem::AddPlatform(EPlatform Platform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NitradoGameServerQuery.GameServerQuerySubsystem.AddPlatform");
		
		UGameServerQuerySubsystem_AddPlatform_Params params {};
		params.Platform = Platform;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02549460
	 * 		Name   -> Function NitradoGameServerQuery.GameServerQuerySubsystem.AddModInfo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Version                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameServerQuerySubsystem::AddModInfo(const class FString& ID, const class FString& Version)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NitradoGameServerQuery.GameServerQuerySubsystem.AddModInfo");
		
		UGameServerQuerySubsystem_AddModInfo_Params params {};
		params.ID = ID;
		params.Version = Version;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02549170
	 * 		Name   -> Function NitradoGameServerQuery.GameServerQuerySubsystem.AddListenPortInfo
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EPortType                                          Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Port                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Address                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGameServerQuerySubsystem::AddListenPortInfo(EPortType Type, int32_t Port, const class FString& Address)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NitradoGameServerQuery.GameServerQuerySubsystem.AddListenPortInfo");
		
		UGameServerQuerySubsystem_AddListenPortInfo_Params params {};
		params.Type = Type;
		params.Port = Port;
		params.Address = Address;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameServerQuerySubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameServerQuerySubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class NitradoGameServerQuery.GameServerQuerySubsystem");
		return ptr;
	}

}


