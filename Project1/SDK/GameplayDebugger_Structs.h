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
	 * Enum GameplayDebugger.EGameplayDebuggerOverrideMode
	 */
	enum class EGameplayDebuggerOverrideMode : uint8_t
	{
		Enable     = 0,
		Disable    = 1,
		UseDefault = 2,
		MAX        = 3
	};

	/**
	 * Enum GameplayDebugger.EGameplayDebuggerShape
	 */
	enum class EGameplayDebuggerShape : uint8_t
	{
		Invalid  = 0,
		Point    = 1,
		Segment  = 2,
		Box      = 3,
		Cone     = 4,
		Cylinder = 5,
		Circle   = 6,
		Capsule  = 7,
		Polygon  = 8,
		Arrow    = 9,
		MAX      = 10
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GameplayDebugger.GameplayDebuggerShape
	 * Size -> 0x0028
	 */
	struct FGameplayDebuggerShape
	{
	public:
		TArray<struct FVector>                                     ShapeData;                                               // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              Color;                                                   // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameplayDebuggerShape                                     Type;                                                    // 0x0024(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AP7L[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayDebugger.GameplayDebuggerDataPackHeader
	 * Size -> 0x0010
	 */
	struct FGameplayDebuggerDataPackHeader
	{
	public:
		int16_t                                                    DataVersion;                                             // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    SyncCounter;                                             // 0x0002(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DataSize;                                                // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DataOffset;                                              // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsCompressed : 1;                                       // 0x000C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F9TO[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayDebugger.GameplayDebuggerCategoryData
	 * Size -> 0x0040
	 */
	struct FGameplayDebuggerCategoryData
	{
	public:
		class FName                                                CategoryName;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      TextLines;                                               // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGameplayDebuggerShape>                      Shapes;                                                  // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGameplayDebuggerDataPackHeader>             DataPacks;                                               // 0x0028(0x0010) ZeroConstructor, RepSkip, NativeAccessSpecifierPublic
		bool                                                       bIsEnabled;                                              // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GYRN[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayDebugger.GameplayDebuggerNetPack
	 * Size -> 0x0018
	 */
	struct FGameplayDebuggerNetPack
	{
	public:
		class AGameplayDebuggerCategoryReplicator*                 Owner;                                                   // 0x0000(0x0008) ZeroConstructor, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameplayDebuggerCategoryData>               SavedData;                                               // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct GameplayDebugger.GameplayDebuggerDebugActor
	 * Size -> 0x0014
	 */
	struct FGameplayDebuggerDebugActor
	{
	public:
		TWeakObjectPtr<class AActor>                               Actor;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ActorName;                                               // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    SyncCounter;                                             // 0x0010(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B0NO[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayDebugger.GameplayDebuggerVisLogSync
	 * Size -> 0x0010
	 */
	struct FGameplayDebuggerVisLogSync
	{
	public:
		class FString                                              DeviceIDs;                                               // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayDebugger.GameplayDebuggerInputConfig
	 * Size -> 0x0030
	 */
	struct FGameplayDebuggerInputConfig
	{
	public:
		class FString                                              ConfigName;                                              // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                Key;                                                     // 0x0010(0x0018) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bModShift : 1;                                           // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bModCtrl : 1;                                            // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bModAlt : 1;                                             // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bModCmd : 1;                                             // 0x0028(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J4S5[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GameplayDebugger.GameplayDebuggerCategoryConfig
	 * Size -> 0x0030
	 */
	struct FGameplayDebuggerCategoryConfig
	{
	public:
		class FString                                              CategoryName;                                            // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SlotIdx;                                                 // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameplayDebuggerOverrideMode                              ActiveInGame;                                            // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameplayDebuggerOverrideMode                              ActiveInSimulate;                                        // 0x0015(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameplayDebuggerOverrideMode                              Hidden;                                                  // 0x0016(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_251K[0x1];                                   // 0x0017(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bOverrideSlotIdx : 1;                                    // 0x0018(0x0001) BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6VK9[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayDebuggerInputConfig>                InputHandlers;                                           // 0x0020(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayDebugger.GameplayDebuggerExtensionConfig
	 * Size -> 0x0028
	 */
	struct FGameplayDebuggerExtensionConfig
	{
	public:
		class FString                                              ExtensionName;                                           // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameplayDebuggerOverrideMode                              UseExtension;                                            // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_78U8[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayDebuggerInputConfig>                InputHandlers;                                           // 0x0018(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayDebugger.GameplayDebuggerPlayerData
	 * Size -> 0x0018
	 */
	struct FGameplayDebuggerPlayerData
	{
	public:
		class UGameplayDebuggerLocalController*                    Controller;                                              // 0x0000(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInputComponent*                                     InputComponent;                                          // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AGameplayDebuggerCategoryReplicator*                 Replicator;                                              // 0x0010(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GameplayDebugger.GameplayDebuggerDataPackRPCParams
	 * Size -> 0x0030
	 */
	struct FGameplayDebuggerDataPackRPCParams
	{
	public:
		class FName                                                CategoryName;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DataPackIdx;                                             // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayDebuggerDataPackHeader                     Header;                                                  // 0x000C(0x0010) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LP73[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      Data;                                                    // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
