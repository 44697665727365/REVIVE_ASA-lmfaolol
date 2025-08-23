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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum NitradoGameServerQuery.EPortType
	 */
	enum class EPortType : uint8_t
	{
		game  = 0,
		query = 1,
		rcon  = 2,
		MAX   = 3
	};

	/**
	 * Enum NitradoGameServerQuery.EPlatform
	 */
	enum class EPlatform : uint8_t
	{
		Unknown     = 0,
		PC          = 1,
		MAC         = 2,
		XBOX        = 3,
		PLAYSTATION = 4,
		SWITCH      = 5,
		ANDROID     = 6,
		IOS         = 7,
		MAX         = 8
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct NitradoGameServerQuery.PortInfo
	 * Size -> 0x0018
	 */
	struct FPortInfo
	{
	public:
		uint16_t                                                   Port;                                                    // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPortType                                                  Type;                                                    // 0x0002(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LXQ9[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Address;                                                 // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct NitradoGameServerQuery.ModState
	 * Size -> 0x0020
	 */
	struct FModState
	{
	public:
		class FString                                              modId;                                                   // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Version;                                                 // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct NitradoGameServerQuery.GameServerState
	 * Size -> 0x0090
	 */
	struct FGameServerState
	{
	public:
		class FString                                              UniqueID;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerName;                                              // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MapName;                                                 // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Version;                                                 // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPortInfo>                                   Ports;                                                   // 0x0040(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<EPlatform>                                          Platforms;                                               // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int16_t                                                    PlayerCount;                                             // 0x0060(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    PlayerMax;                                               // 0x0062(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    PlayerReserved;                                          // 0x0064(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    BotCount;                                                // 0x0066(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   TicksPerSecond;                                          // 0x0068(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Ready;                                                   // 0x006A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Password;                                                // 0x006B(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C976[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FModState>                                   mods;                                                    // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      Tags;                                                    // 0x0080(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
