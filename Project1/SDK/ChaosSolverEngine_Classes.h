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
	 * Class ChaosSolverEngine.ChaosDebugDrawComponent
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UChaosDebugDrawComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_POVX[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ChaosSolverEngine.ChaosEventListenerComponent
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UChaosEventListenerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_Q7QO[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ChaosSolverEngine.ChaosGameplayEventDispatcher
	 * Size -> 0x0260 (FullSize[0x0320] - InheritedSize[0x00C0])
	 */
	class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
	{
	public:
		unsigned char                                              UnknownData_NVGJ[0x110];                                 // 0x00C0(0x0110) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class UPrimitiveComponent*, struct FChaosHandlerSet>  CollisionEventRegistrations;                             // 0x01D0(0x0050) ContainsInstancedReference, NativeAccessSpecifierPrivate
		TMap<class UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations;                                 // 0x0220(0x0050) ContainsInstancedReference, NativeAccessSpecifierPrivate
		TMap<class UPrimitiveComponent*, struct FRemovalEventCallbackWrapper> RemovalEventRegistrations;                               // 0x0270(0x0050) ContainsInstancedReference, NativeAccessSpecifierPrivate
		TMap<class UPrimitiveComponent*, struct FCrumblingEventCallbackWrapper> CrumblingEventRegistrations;                             // 0x02C0(0x0050) ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5TO8[0x10];                                  // 0x0310(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ChaosSolverEngine.ChaosNotifyHandlerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UChaosNotifyHandlerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FHitResult STATIC_ConvertPhysicsCollisionToHitResult(const struct FChaosPhysicsCollisionInfo& PhysicsCollision);
		static UClass* StaticClass();
	};

	/**
	 * Class ChaosSolverEngine.ChaosSolver
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UChaosSolver : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ChaosSolverEngine.ChaosSolverActor
	 * Size -> 0x00F8 (FullSize[0x05B0] - InheritedSize[0x04B8])
	 */
	class AChaosSolverActor : public AActor
	{
	public:
		struct FChaosSolverConfiguration                           Properties;                                              // 0x04B8(0x0068) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      TimeStepMultiplier;                                      // 0x0520(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CollisionIterations;                                     // 0x0524(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PushOutIterations;                                       // 0x0528(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PushOutPairIterations;                                   // 0x052C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClusterConnectionFactor;                                 // 0x0530(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EClusterConnectionTypeEnum                                 ClusterUnionConnectionType;                              // 0x0534(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DoGenerateCollisionData;                                 // 0x0535(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0WCU[0x2];                                   // 0x0536(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSolverCollisionFilterSettings                      CollisionFilterSettings;                                 // 0x0538(0x0010) Deprecated, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       DoGenerateBreakingData;                                  // 0x0548(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3PNI[0x3];                                   // 0x0549(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSolverBreakingFilterSettings                       BreakingFilterSettings;                                  // 0x054C(0x0010) Deprecated, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       DoGenerateTrailingData;                                  // 0x055C(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BPKL[0x3];                                   // 0x055D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSolverTrailingFilterSettings                       TrailingFilterSettings;                                  // 0x0560(0x0010) Deprecated, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MassScale;                                               // 0x0570(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasFloor;                                               // 0x0574(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MEA6[0x3];                                   // 0x0575(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FloorHeight;                                             // 0x0578(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FChaosDebugSubstepControl                           ChaosDebugSubstepControl;                                // 0x057C(0x0003) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZOLM[0x1];                                   // 0x057F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBillboardComponent*                                 SpriteComponent;                                         // 0x0580(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TDW4[0x18];                                  // 0x0588(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChaosGameplayEventDispatcher*                       GameplayEventDispatcherComponent;                        // 0x05A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1PJ7[0x8];                                   // 0x05A8(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetSolverActive(bool bActive);
		void SetAsCurrentWorldSolver();
		static UClass* StaticClass();
	};

	/**
	 * Class ChaosSolverEngine.ChaosSolverSettings
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UChaosSolverSettings : public UDeveloperSettings
	{
	public:
		unsigned char                                              UnknownData_8BOM[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftClassPath                                      DefaultChaosSolverActorClass;                            // 0x0040(0x0020) Edit, ZeroConstructor, Config, NoClear, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
