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
	 * Class GameplayDebugger.GameplayDebuggerCategoryReplicator
	 * Size -> 0x00C0 (FullSize[0x0578] - InheritedSize[0x04B8])
	 */
	class AGameplayDebuggerCategoryReplicator : public AActor
	{
	public:
		class APlayerController*                                   OwnerPC;                                                 // 0x04B8(0x0008) Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsEnabled;                                              // 0x04C0(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2QFL[0x7];                                   // 0x04C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayDebuggerNetPack                            ReplicatedData;                                          // 0x04C8(0x0018) Net, RepNotify, Protected, NativeAccessSpecifierProtected
		struct FGameplayDebuggerDebugActor                         DebugActor;                                              // 0x04E0(0x0014) Net, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YT47[0x4];                                   // 0x04F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayDebuggerVisLogSync                         VisLogSync;                                              // 0x04F8(0x0010) Net, Protected, NativeAccessSpecifierProtected
		class UGameplayDebuggerRenderingComponent*                 RenderingComp;                                           // 0x0508(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IADN[0x68];                                  // 0x0510(0x0068) MISSED OFFSET (PADDING)

	public:
		void ServerSetViewPoint(const struct FVector& InViewLocation, const struct FVector& InViewDirection);
		void ServerSetEnabled(bool bEnable);
		void ServerSetDebugActor(class AActor* Actor, bool bSelectInEditor);
		void ServerSetCategoryEnabled(int32_t categoryId, bool bEnable);
		void ServerSendExtensionInputEvent(int32_t ExtensionId, int32_t HandlerId);
		void ServerSendCategoryInputEvent(int32_t categoryId, int32_t HandlerId);
		void ServerResetViewPoint();
		void OnRep_ReplicatedData();
		void ClientDataPackPacket(const struct FGameplayDebuggerDataPackRPCParams& Params);
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayDebugger.GameplayDebuggerConfig
	 * Size -> 0x0230 (FullSize[0x0258] - InheritedSize[0x0028])
	 */
	class UGameplayDebuggerConfig : public UObject
	{
	public:
		struct FKey                                                ActivationKey;                                           // 0x0028(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                CategoryRowNextKey;                                      // 0x0040(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                CategoryRowPrevKey;                                      // 0x0058(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                CategorySlot0;                                           // 0x0070(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                CategorySlot1;                                           // 0x0088(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                CategorySlot2;                                           // 0x00A0(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                CategorySlot3;                                           // 0x00B8(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                CategorySlot4;                                           // 0x00D0(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                CategorySlot5;                                           // 0x00E8(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                CategorySlot6;                                           // 0x0100(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                CategorySlot7;                                           // 0x0118(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                CategorySlot8;                                           // 0x0130(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FKey                                                CategorySlot9;                                           // 0x0148(0x0018) Edit, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebugCanvasPaddingLeft;                                  // 0x0160(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebugCanvasPaddingRight;                                 // 0x0164(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebugCanvasPaddingTop;                                   // 0x0168(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebugCanvasPaddingBottom;                                // 0x016C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDebugCanvasEnableTextShadow;                            // 0x0170(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D4XP[0x7];                                   // 0x0171(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayDebuggerCategoryConfig>             Categories;                                              // 0x0178(0x0010) Edit, EditFixedSize, ZeroConstructor, Config, NativeAccessSpecifierPublic
		TArray<struct FGameplayDebuggerExtensionConfig>            Extensions;                                              // 0x0188(0x0010) Edit, EditFixedSize, ZeroConstructor, Config, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WFBO[0xC0];                                  // 0x0198(0x00C0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayDebugger.GameplayDebuggerUserSettings
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UGameplayDebuggerUserSettings : public UDeveloperSettings
	{
	public:
		bool                                                       bEnableGameplayDebuggerInEditor : 1;                     // 0x0038(0x0001) BIT_FIELD Edit, Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MC4I[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxViewDistance;                                         // 0x003C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxViewAngle;                                            // 0x0040(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FontSize;                                                // 0x0044(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayDebugger.GameplayDebuggerLocalController
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UGameplayDebuggerLocalController : public UObject
	{
	public:
		class AGameplayDebuggerCategoryReplicator*                 CachedReplicator;                                        // 0x0028(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AGameplayDebuggerPlayerManager*                      CachedPlayerManager;                                     // 0x0030(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AActor*                                              DebugActorCandidate;                                     // 0x0038(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UFont*                                               HUDFont;                                                 // 0x0040(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TRCA[0x40];                                  // 0x0048(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayDebugger.GameplayDebuggerPlayerManager
	 * Size -> 0x0030 (FullSize[0x04E8] - InheritedSize[0x04B8])
	 */
	class AGameplayDebuggerPlayerManager : public AActor
	{
	public:
		unsigned char                                              UnknownData_1W2W[0x8];                                   // 0x04B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayDebuggerPlayerData>                 PlayerData;                                              // 0x04C0(0x0010) ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TArray<class AGameplayDebuggerCategoryReplicator*>         PendingRegistrations;                                    // 0x04D0(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6QKG[0x8];                                   // 0x04E0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GameplayDebugger.GameplayDebuggerRenderingComponent
	 * Size -> 0x0060 (FullSize[0x0730] - InheritedSize[0x06D0])
	 */
	class UGameplayDebuggerRenderingComponent : public UDebugDrawComponent
	{
	public:
		unsigned char                                              UnknownData_YV1C[0x60];                                  // 0x06D0(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
