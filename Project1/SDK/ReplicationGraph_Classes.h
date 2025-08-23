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
	 * Class ReplicationGraph.ReplicationGraph
	 * Size -> 0x0548 (FullSize[0x0570] - InheritedSize[0x0028])
	 */
	class UReplicationGraph : public UReplicationDriver
	{
	public:
		class UClass*                                              ReplicationConnectionManagerClass;                       // 0x0028(0x0008) ZeroConstructor, Config, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNetDriver*                                          NetDriver;                                               // 0x0030(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UNetReplicationGraphConnection*>              Connections;                                             // 0x0038(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class UNetReplicationGraphConnection*>              PendingConnections;                                      // 0x0048(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3PHX[0x40];                                  // 0x0058(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UReplicationGraphNode*>                       GlobalGraphNodes;                                        // 0x0098(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<class UReplicationGraphNode*>                       PrepareForReplicationNodes;                              // 0x00A8(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_U92F[0x4B8];                                 // 0x00B8(0x04B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.BasicReplicationGraph
	 * Size -> 0x0030 (FullSize[0x05A0] - InheritedSize[0x0570])
	 */
	class UBasicReplicationGraph : public UReplicationGraph
	{
	public:
		class UReplicationGraphNode_GridSpatialization2D*          GridNode;                                                // 0x0570(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UReplicationGraphNode_ActorList*                     AlwaysRelevantNode;                                      // 0x0578(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FConnectionAlwaysRelevantNodePair>           AlwaysRelevantForConnectionList;                         // 0x0580(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      ActorsWithoutNetConnection;                              // 0x0590(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UReplicationGraphNode : public UObject
	{
	public:
		TArray<class UReplicationGraphNode*>                       AllChildNodes;                                           // 0x0028(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CWFJ[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_ActorList
	 * Size -> 0x00D0 (FullSize[0x0120] - InheritedSize[0x0050])
	 */
	class UReplicationGraphNode_ActorList : public UReplicationGraphNode
	{
	public:
		unsigned char                                              UnknownData_PKNC[0xD0];                                  // 0x0050(0x00D0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets
	 * Size -> 0x0118 (FullSize[0x0168] - InheritedSize[0x0050])
	 */
	class UReplicationGraphNode_ActorListFrequencyBuckets : public UReplicationGraphNode
	{
	public:
		unsigned char                                              UnknownData_28Q9[0x118];                                 // 0x0050(0x0118) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency
	 * Size -> 0x0030 (FullSize[0x0150] - InheritedSize[0x0120])
	 */
	class UReplicationGraphNode_DynamicSpatialFrequency : public UReplicationGraphNode_ActorList
	{
	public:
		unsigned char                                              UnknownData_9PG3[0x30];                                  // 0x0120(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_ConnectionDormancyNode
	 * Size -> 0x00E8 (FullSize[0x0208] - InheritedSize[0x0120])
	 */
	class UReplicationGraphNode_ConnectionDormancyNode : public UReplicationGraphNode_ActorList
	{
	public:
		unsigned char                                              UnknownData_L60B[0xE8];                                  // 0x0120(0x00E8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_DormancyNode
	 * Size -> 0x0010 (FullSize[0x0130] - InheritedSize[0x0120])
	 */
	class UReplicationGraphNode_DormancyNode : public UReplicationGraphNode_ActorList
	{
	public:
		unsigned char                                              UnknownData_FNKP[0x10];                                  // 0x0120(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_GridCell
	 * Size -> 0x0050 (FullSize[0x0170] - InheritedSize[0x0120])
	 */
	class UReplicationGraphNode_GridCell : public UReplicationGraphNode_ActorList
	{
	public:
		unsigned char                                              UnknownData_4JH2[0x40];                                  // 0x0120(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UReplicationGraphNode*                               DynamicNode;                                             // 0x0160(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UReplicationGraphNode_DormancyNode*                  DormancyNode;                                            // 0x0168(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_GridSpatialization2D
	 * Size -> 0x0220 (FullSize[0x0270] - InheritedSize[0x0050])
	 */
	class UReplicationGraphNode_GridSpatialization2D : public UReplicationGraphNode
	{
	public:
		unsigned char                                              UnknownData_P486[0x220];                                 // 0x0050(0x0220) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
	 * Size -> 0x0018 (FullSize[0x0068] - InheritedSize[0x0050])
	 */
	class UReplicationGraphNode_AlwaysRelevant : public UReplicationGraphNode
	{
	public:
		class UReplicationGraphNode*                               ChildNode;                                               // 0x0050(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4INB[0x10];                                  // 0x0058(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
	 * Size -> 0x0080 (FullSize[0x01A0] - InheritedSize[0x0120])
	 */
	class UReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList
	{
	public:
		unsigned char                                              UnknownData_KHF8[0x20];                                  // 0x0120(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAlwaysRelevantActorInfo>                    PastRelevantActors;                                      // 0x0140(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JXCZ[0x50];                                  // 0x0150(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
	 * Size -> 0x0030 (FullSize[0x0080] - InheritedSize[0x0050])
	 */
	class UReplicationGraphNode_TearOff_ForConnection : public UReplicationGraphNode
	{
	public:
		TArray<struct FTearOffActorInfo>                           TearOffActors;                                           // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z3RA[0x20];                                  // 0x0060(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.NetReplicationGraphConnection
	 * Size -> 0x0348 (FullSize[0x0370] - InheritedSize[0x0028])
	 */
	class UNetReplicationGraphConnection : public UReplicationConnectionDriver
	{
	public:
		class UNetConnection*                                      NetConnection;                                           // 0x0028(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7BFG[0x144];                                 // 0x0030(0x0144) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class AReplicationGraphDebugActor>          DebugActor;                                              // 0x0174(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9PAB[0x4];                                   // 0x017C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLastLocationGatherInfo>                     LastGatherLocations;                                     // 0x0180(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SHE3[0xA8];                                  // 0x0190(0x00A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UReplicationGraphNode*>                       ConnectionGraphNodes;                                    // 0x0238(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate
		class UReplicationGraphNode_TearOff_ForConnection*         TearOffNode;                                             // 0x0248(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EHRZ[0x120];                                 // 0x0250(0x0120) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ReplicationGraph.ReplicationGraphDebugActor
	 * Size -> 0x0010 (FullSize[0x04C8] - InheritedSize[0x04B8])
	 */
	class AReplicationGraphDebugActor : public AActor
	{
	public:
		class UReplicationGraph*                                   ReplicationGraph;                                        // 0x04B8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UNetReplicationGraphConnection*                      ConnectionManager;                                       // 0x04C0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void ServerStopDebugging();
		void ServerStartDebugging();
		void ServerSetPeriodFrameForClass(class UClass* Class, int32_t PeriodFrame);
		void ServerSetCullDistanceForClass(class UClass* Class, float CullDistance);
		void ServerSetConditionalActorBreakpoint(class AActor* Actor);
		void ServerPrintCullDistances();
		void ServerPrintAllActorInfo(const class FString& Str);
		void ServerCellInfo();
		void ClientCellInfo(const struct FVector& CellLocation, const struct FVector& CellExtent, TArray<class AActor*> Actors);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
