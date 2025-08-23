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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class NitradoGameServerQuery.GameServerQuerySubsystem
	 * Size -> 0x00C8 (FullSize[0x00F8] - InheritedSize[0x0030])
	 */
	class UGameServerQuerySubsystem : public UEngineSubsystem
	{
	public:
		unsigned char                                              UnknownData_09IR[0xC0];                                  // 0x0030(0x00C0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bEnableReadyEndpoint;                                    // 0x00F0(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableQueryEndpoint;                                    // 0x00F1(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   QueryPort;                                               // 0x00F2(0x0002) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnablePlugin;                                           // 0x00F4(0x0001) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GAWU[0x3];                                   // 0x00F5(0x0003) MISSED OFFSET (PADDING)

	public:
		bool Start();
		void SetVersion(const class FString& Version);
		void SetUniqueID(const class FString& UniqueID);
		void SetTicksPerSecond(int32_t TickCount);
		void SetServerName(const class FString& Name);
		void SetReady(bool Ready);
		void SetPlayerMax(int32_t Count);
		void SetPlayerCount(int32_t Count);
		void SetPasswordProtected(bool Enabled);
		void SetMapName(const class FString& Name);
		void Reset();
		void RemoveTag(const class FString& Tag);
		void RemovePlatform(EPlatform Platform);
		void IncrementPlayerCount();
		void DecrementPlayerCount();
		void AddTag(const class FString& Tag);
		void AddPlatform(EPlatform Platform);
		void AddModInfo(const class FString& ID, const class FString& Version);
		void AddListenPortInfo(EPortType Type, int32_t Port, const class FString& Address);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
