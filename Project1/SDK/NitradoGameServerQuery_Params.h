#pragma once

/**
 * Name: Ark_Survival_Ascended
 * Version: 0.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function NitradoGameServerQuery.GameServerQuerySubsystem.Start
	 */
	struct UGameServerQuerySubsystem_Start_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NitradoGameServerQuery.GameServerQuerySubsystem.SetVersion
	 */
	struct UGameServerQuerySubsystem_SetVersion_Params
	{
	public:
		class FString                                              Version;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NitradoGameServerQuery.GameServerQuerySubsystem.SetUniqueID
	 */
	struct UGameServerQuerySubsystem_SetUniqueID_Params
	{
	public:
		class FString                                              UniqueID;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NitradoGameServerQuery.GameServerQuerySubsystem.SetTicksPerSecond
	 */
	struct UGameServerQuerySubsystem_SetTicksPerSecond_Params
	{
	public:
		int32_t                                                    TickCount;                                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NitradoGameServerQuery.GameServerQuerySubsystem.SetServerName
	 */
	struct UGameServerQuerySubsystem_SetServerName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NitradoGameServerQuery.GameServerQuerySubsystem.SetReady
	 */
	struct UGameServerQuerySubsystem_SetReady_Params
	{
	public:
		bool                                                       Ready;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NitradoGameServerQuery.GameServerQuerySubsystem.SetPlayerMax
	 */
	struct UGameServerQuerySubsystem_SetPlayerMax_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NitradoGameServerQuery.GameServerQuerySubsystem.SetPlayerCount
	 */
	struct UGameServerQuerySubsystem_SetPlayerCount_Params
	{
	public:
		int32_t                                                    Count;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NitradoGameServerQuery.GameServerQuerySubsystem.SetPasswordProtected
	 */
	struct UGameServerQuerySubsystem_SetPasswordProtected_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NitradoGameServerQuery.GameServerQuerySubsystem.SetMapName
	 */
	struct UGameServerQuerySubsystem_SetMapName_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NitradoGameServerQuery.GameServerQuerySubsystem.Reset
	 */
	struct UGameServerQuerySubsystem_Reset_Params
	{	};

	/**
	 * Function NitradoGameServerQuery.GameServerQuerySubsystem.RemoveTag
	 */
	struct UGameServerQuerySubsystem_RemoveTag_Params
	{
	public:
		class FString                                              Tag;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NitradoGameServerQuery.GameServerQuerySubsystem.RemovePlatform
	 */
	struct UGameServerQuerySubsystem_RemovePlatform_Params
	{
	public:
		EPlatform                                                  Platform;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NitradoGameServerQuery.GameServerQuerySubsystem.IncrementPlayerCount
	 */
	struct UGameServerQuerySubsystem_IncrementPlayerCount_Params
	{	};

	/**
	 * Function NitradoGameServerQuery.GameServerQuerySubsystem.DecrementPlayerCount
	 */
	struct UGameServerQuerySubsystem_DecrementPlayerCount_Params
	{	};

	/**
	 * Function NitradoGameServerQuery.GameServerQuerySubsystem.AddTag
	 */
	struct UGameServerQuerySubsystem_AddTag_Params
	{
	public:
		class FString                                              Tag;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NitradoGameServerQuery.GameServerQuerySubsystem.AddPlatform
	 */
	struct UGameServerQuerySubsystem_AddPlatform_Params
	{
	public:
		EPlatform                                                  Platform;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NitradoGameServerQuery.GameServerQuerySubsystem.AddModInfo
	 */
	struct UGameServerQuerySubsystem_AddModInfo_Params
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Version;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function NitradoGameServerQuery.GameServerQuerySubsystem.AddListenPortInfo
	 */
	struct UGameServerQuerySubsystem_AddListenPortInfo_Params
	{
	public:
		EPortType                                                  Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_G0R4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Port;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Address;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
