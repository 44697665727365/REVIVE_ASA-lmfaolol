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
	 * Class IrisStub.DataStream
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDataStream : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisStub.IrisObjectReferencePackageMap
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIrisObjectReferencePackageMap : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisStub.NetBlobHandler
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNetBlobHandler : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisStub.NetObjectPrioritizerConfig
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNetObjectPrioritizerConfig : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisStub.NetObjectCountLimiterConfig
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNetObjectCountLimiterConfig : public UNetObjectPrioritizerConfig
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisStub.NetObjectFilterConfig
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNetObjectFilterConfig : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisStub.NetObjectFilter
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNetObjectFilter : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisStub.NetObjectPrioritizer
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNetObjectPrioritizer : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisStub.ReplicationBridge
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UReplicationBridge : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisStub.ObjectReplicationBridge
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UObjectReplicationBridge : public UReplicationBridge
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisStub.SequentialPartialNetBlobHandlerConfig
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USequentialPartialNetBlobHandlerConfig : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisStub.SequentialPartialNetBlobHandler
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USequentialPartialNetBlobHandler : public UNetBlobHandler
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class IrisStub.SphereWithOwnerBoostNetObjectPrioritizerConfig
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USphereWithOwnerBoostNetObjectPrioritizerConfig : public UNetObjectPrioritizerConfig
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
