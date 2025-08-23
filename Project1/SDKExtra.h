#pragma once
#include "SDK.h"
namespace CG
{
    class AStorageBox_TekTransmitter_C : public APrimalStructureItemContainer
    {
    public:
        char kdjasjkda[0x10];
        class USkeletalMeshComponent* SkeletalMesh1;                                     // 0x1500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

        static UClass* StaticClass();
    };
    // 0x40 (0x1798 - 0x1758)
// BlueprintGeneratedClass StructureTurretBaseBP.StructureTurretBaseBP_C
    class AStructureTurretBaseBP_C : public APrimalStructureTurret
    {
    public:
        struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1758(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
        class UChildActorComponent* TargetingEmitter;                                  // 0x1760(0x8)(Edit, BlueprintVisible, ExportObject, DisableEditOnTemplate, EditConst, SubobjectReference)
        class USkeletalMeshComponent* SkeletalMesh1;                                     // 0x1768(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
        class UPrimalInventoryBP_Turret_C* PrimalInventoryBP_Turret_C1;                       // 0x1770(0x8)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        class USphereComponent* StasisComponent;                                   // 0x1778(0x8)(Edit, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance)
        int32                                        MaxDinoClasses;                                    // 0x1780(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Config, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        uint8                                        Pad_5F1C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
        TArray<class UClass*>                        LastLocalInRangeClasses;                           // 0x1788(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)

        static class UClass* StaticClass();
    };

    class AStructureTurretTek_C : public APrimalStructureTurret
    {
    public:
        char lkjdaskjd[0x18];
        class USkeletalMeshComponent* SkeletalMesh1;                                     // 0x1740(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

        static UClass* StaticClass();
    };

    class AStructureTurretBaseBP_BaseHeavy_C : public APrimalStructureTurret
    {
    public:
        char padjkldjkasjda[0x8];
        class USkeletalMeshComponent* SkeletalMesh1;                                     // 0x1730(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

        static UClass* StaticClass();
    };

    class AStorageBox_TekGenerator_C : public APrimalStructureItemContainer
    {
    public:
        char padsjkjkdjaskdja[0x30];
        class USkeletalMeshComponent* SkeletalMesh1;                                     // 0x14A8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

        static UClass* StaticClass();
    };

    class ASupplyCrateBaseBP_Instantaneous_C : public APrimalStructureItemContainer_SupplyCrate
    {
    public:
        class UStaticMeshComponent* LightBlocker;                                            // 0x1678(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        class UPointLightComponent* PointLight;                                              // 0x1680(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        class UAudioComponent* Audio1;                                                  // 0x1688(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        class USphereComponent* StasisComponent;                                         // 0x1690(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

    public:
        static UClass* StaticClass();
    };

    class AArtifactCrate_Instantaneous_Alt_C : public ASupplyCrateBaseBP_Instantaneous_C
    {
    public:
        class UPointLightComponent* PointLight_1;                                            // 0x1698(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        class UPrimalInventoryBP_ArtifactCrate_C* PrimalInventoryBP_ArtifactCrate_C1;                      // 0x16A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        class USkeletalMeshComponent* SkeletalMesh1;                                           // 0x16A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        class UParticleSystemComponent* ParticleSystem1;                                         // 0x16B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        struct FLinearColor                                        LightColor;                                              // 0x16B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        double                                                     LightIntensity;                                          // 0x16C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        double                                                     LightAttenuation;                                        // 0x16D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        //void UserConstructionScript();
        //static UClass* StaticClass();
    };

    // 0x78 (0x540 - 0x4C8)
    // BlueprintGeneratedClass ExplorerChest_Base.ExplorerChest_Base_C
    class AExplorerChest_Base_C : public AActor
    {
    public:
        struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
        class UBillboardComponent* Billboard1;                                        // 0x4D0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
        class USphereComponent* TriggerSphere;                                     // 0x4D8(0x8)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig)
        class USceneComponent* Scene1;                                            // 0x4E0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
        bool                                         bIsUnlocked;                                       // 0x4E8(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, InstancedReference, DuplicateTransient, SubobjectReference)
        uint8                                        Pad_1C[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
        int32                                        ExplorerNoteIndex;                                 // 0x4EC(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
        class UAnimMontage* OpenAnimation;                                     // 0x4F0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, InstancedReference, DuplicateTransient, SubobjectReference)
        class AShooterPlayerController* CachedPC;                                          // 0x4F8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, InstancedReference, DuplicateTransient, SubobjectReference)
        class FString                                ExplorerNoteString;                                // 0x500(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, Transient, InstancedReference, DuplicateTransient, SubobjectReference)
        bool                                         RequiresMiniHLNA;                                  // 0x510(0x1)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, InstancedReference, DuplicateTransient, SubobjectReference)
        bool                                         ShowBillboardHelper;                               // 0x511(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, InstancedReference, DuplicateTransient, SubobjectReference)
        uint8                                        Pad_1D[0x6];                                       // Fixing Size After Last Property  [ Dumper-7 ]
        class UTexture2D* HelperSprite;                                      // 0x518(0x8)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, InstancedReference, DuplicateTransient, SubobjectReference)
        struct FVector                               HelperSpriteScale;                                 // 0x520(0x18)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, Transient, InstancedReference, DuplicateTransient, SubobjectReference)
        double                                       HelperSpriteOffset;                                // 0x538(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, InstancedReference, DuplicateTransient, SubobjectReference)

        static class UClass* StaticClass();
        static class AExplorerChest_Base_C* GetDefaultObj();

        int32 BPGetExtraSpecialBlueprintInt();
        float DrawBasicFloatingHUD(class APlayerController* CallFunc_GetOwnerController_ReturnValue, class FString* Temp_string_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, double* CallFunc_VSize_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array);
        void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason, class UWorld* CallFunc_K2_GetWorld_ReturnValue);
        float ReceiveBeginPlay(class USkeletalMeshComponent** CallFunc_GetComponentByClass_ReturnValue, class UWorld* CallFunc_K2_GetWorld_ReturnValue, bool* CallFunc_IsDedicatedServer_ReturnValue);
        void PlayUnlock();
        struct FHitResult UserConstructionScript(bool NewLocalVar_0, double* CallFunc_BreakVector_X, double* CallFunc_BreakVector_Y, double* CallFunc_BreakVector_Z, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue);
        struct FHitResult BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_133_ComponentBeginOverlapSignature__DelegateSignature(class AActor** OtherActor);
        void CheckForPlayerState();
        void DoUnlock();
        void ShortRefresh();
        void LongRefresh();
        float ExecuteUbergraph_ExplorerChest_Base(bool* CallFunc_IsDedicatedServer_ReturnValue, bool* CallFunc_IsLocallyControlled_ReturnValue, class AController** CallFunc_GetController_ReturnValue, class AController** CallFunc_GetController_ReturnValue_1, bool* CallFunc_IsLocallyControlled_ReturnValue_1, class UPrimalItem** CallFunc_GetEquippedItemOfType_ReturnValue, class AShooterPlayerState* K2Node_DynamicCast_AsShooter_Player_State, class USkeletalMeshComponent** CallFunc_GetComponentByClass_ReturnValue);
    };

    class AExplorerChest_Li_C : public AExplorerChest_Base_C
    {
    public:
        class USkeletalMeshComponent* SkeletalMesh1;                                           // 0x0530(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

    public:
        static UClass* StaticClass();
    };
    class ASupplyCrate_Cave_C : public ASupplyCrateBaseBP_Instantaneous_C
    {
    public:
        class UPrimalInventoryBP_SupplyCrate_C* PrimalInventoryBP_SupplyCrate_C1;                        // 0x1698(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        class USkeletalMeshComponent* SkeletalMesh1;                                           // 0x16A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        class UParticleSystemComponent* ParticleSystem1;                                         // 0x16A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

    public:
        static UClass* StaticClass();
    };
    // 0x28 (0x1520 - 0x14F8)
    // BlueprintGeneratedClass StorageBox_TekReplicator.StorageBox_TekReplicator_C
    class AStorageBox_TekReplicator_C : public AStructureItemContainerBaseBP_C
    {
    public:
        struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x14F8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
        class UChildActorComponent* ActivatedEmitter;                                  // 0x1500(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        class USkeletalMeshComponent* SkeletalMesh1;                                     // 0x1508(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
        class UPrimalInventoryBP_TekReplicator_C* PrimalInventoryBP_TekReplicator_C1;                // 0x1510(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        double                                       LastCraftingNotificationTime;                      // 0x1518(0x8)(Edit, ExportObject, Net, OutParm, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)

        static class UClass* StaticClass();
        static class AStorageBox_TekReplicator_C* GetDefaultObj();
    };

    // 0x180 (0x1678 - 0x14F8)
    // BlueprintGeneratedClass StorageBox_TekShield.StorageBox_TekShield_C
    class AStorageBox_TekShield_C : public AStructureItemContainerBaseBP_C
    {
    public:
        struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x14F8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
        class UStaticMeshComponent* ExtraCollision2;                                   // 0x1500(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        class UStaticMeshComponent* ExtraCollision1;                                   // 0x1508(0x8)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        class UChildActorComponent* ChargeUpEmitter;                                   // 0x1510(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
        class UChildActorComponent* ActivatedEmitter;                                  // 0x1518(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        class USphereComponent* SpherePawnPusher;                                  // 0x1520(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        class UStaticMeshComponent* InnerShield;                                       // 0x1528(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        class UStaticMeshComponent* OuterShield;                                       // 0x1530(0x8)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        class UPrimalInventoryBP_TekShield_C* PrimalInventoryBP_TekShield_C1;                    // 0x1538(0x8)(ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        class USkeletalMeshComponent* SkeletalMesh1;                                     // 0x1540(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
        double                                       LastCraftingNotificationTime;                      // 0x1548(0x8)(Edit, ExportObject, Net, OutParm, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        double                                       PushVelocityMagnitude;                             // 0x1550(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        double                                       MaxPushOutVelocity;                                // 0x1558(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        TArray<class AActor*>                        ExtraIgnorePawnPushers;                            // 0x1560(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        TArray<class AActor*>                        PushedPawns;                                       // 0x1570(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        bool                                         bPushTimerSet;                                     // 0x1580(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        uint8                                        Pad_3E6C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
        double                                       DefaultShieldRadius;                               // 0x1588(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        int32                                        UserShieldRadiusUnits;                             // 0x1590(0x4)(Edit, ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        uint8                                        Pad_3E6D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
        double                                       ShieldRadiusPerUserUnit;                           // 0x1598(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        int32                                        ShieldRadiusMaxUserUnits;                          // 0x15A0(0x4)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        uint8                                        Pad_3E6F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
        double                                       ShieldRadiusScale;                                 // 0x15A8(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        double                                       CurrentShieldRadiusInterp;                         // 0x15B0(0x8)(Edit, ConstParm, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        double                                       ShieldRadiusInterpSpeed;                           // 0x15B8(0x8)(Edit, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        double                                       ShieldActiveOpacity;                               // 0x15C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        double                                       ShieldOpacityInterpSpeed;                          // 0x15C8(0x8)(Edit, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        double                                       ShieldParticleBeamZScale;                          // 0x15D0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        double                                       ShieldParticleBeamZOffset;                         // 0x15D8(0x8)(Edit, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        double                                       FuelConsumptionRateRadiusScale;                    // 0x15E0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        double                                       ColorizationSaturation;                            // 0x15E8(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
        class UClass* ShieldImpactEmitter;                               // 0x15F0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        double                                       LocalPlayPawnPushSoundTime;                        // 0x15F8(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        class USoundBase* PawnImpactSound;                                   // 0x1600(0x8)(BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        double                                       PowerUpCompletionTime;                             // 0x1608(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        double                                       PowerUpTime;                                       // 0x1610(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        TArray<class AActor*>                        BuffedPawns;                                       // 0x1618(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        bool                                         InterpingRadius;                                   // 0x1628(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        uint8                                        Pad_3E71[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
        class UTexture2D* RadiusOptionsIcon;                                 // 0x1630(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        class UTexture2D* RadiusIncreaseToIcon;                              // 0x1638(0x8)(BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        class UTexture2D* RadiusDecreaseToIcon;                              // 0x1640(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        class UTexture2D* RadiusIncreaseToMaxIcon;                           // 0x1648(0x8)(Edit, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        class UTexture2D* RadiusDecreaseToMinIcon;                           // 0x1650(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        class UTexture2D* RadiusAtMaxIcon;                                   // 0x1658(0x8)(ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        class UTexture2D* RadiusAtMinIcon;                                   // 0x1660(0x8)(Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        class UTexture2D* ActivateBarrierIcon;                               // 0x1668(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)
        class UTexture2D* DeactivateBarrierIcon;                             // 0x1670(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)

        static class UClass* StaticClass();
        static class AStorageBox_TekShield_C* GetDefaultObj();
    };

    // 0x9 (0xB69 - 0xB60)
    // BlueprintGeneratedClass Buff_Base.Buff_Base_C
    class ABuff_Base_C : public APrimalBuff
    {
    public:
        struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB60(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
        bool                                         bDismountingBuff;                                  // 0xB68(0x1)(ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

        static class UClass* StaticClass();
        static class ABuff_Base_C* GetDefaultObj();

        bool BPCustomAllowAddBuff(bool* LOCAL_RetVal, int32 CallFunc_Array_Length_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue);
        class AActor* BPDeactivated();
        class APrimalBuff* ExecuteUbergraph_Buff_Base();
    };

    // 0xD7 (0xC40 - 0xB69)
    // BlueprintGeneratedClass Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C
    class ABuff_DinoTekHelmet_Base_C : public ABuff_Base_C
    {
    public:
        uint8                                        Pad_66E8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
        struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB70(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
        bool                                         bHelmetActivated;                                  // 0xB78(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
        uint8                                        Pad_66E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
        class UAnimMontage* ActivatedMontage;                                  // 0xB80(0x8)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
        class UAnimMontage* DeactivatedMontage;                                // 0xB88(0x8)(ConstParm, Net, EditFixedSize, OutParm, Transient, Config, SubobjectReference)
        double                                       LastActivatedHelmetTime;                           // 0xB90(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
        bool                                         bNextSide;                                         // 0xB98(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
        uint8                                        Pad_66EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
        double                                       LastAttackTime;                                    // 0xBA0(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
        class UClass* ProjectileClass;                                   // 0xBA8(0x8)(ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
        double                                       ActivatedTPVZMult;                                 // 0xBB0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
        double                                       ActivatedFPVZMult;                                 // 0xBB8(0x8)(ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
        class UAnimMontage* ShootAnimLeft;                                     // 0xBC0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
        class UAnimMontage* ShootAnimRight;                                    // 0xBC8(0x8)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
        bool                                         bIsTargetingModeEnabled;                           // 0xBD0(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
        uint8                                        Pad_66EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
        double                                       SocketClampDelta;                                  // 0xBD8(0x8)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
        double                                       MinAttackInterval;                                 // 0xBE0(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
        double                                       LastHelmetActivatedTime;                           // 0xBE8(0x8)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
        double                                       HelmetActivatedAttackInterval;                     // 0xBF0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
        int32                                        ElementDecreasePerShot;                            // 0xBF8(0x4)(BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, Config, SubobjectReference)
        uint8                                        Pad_66EC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
        char         DisabledInVolumePreventWeaponClass[0x30];                // 0xC00(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, SubobjectReference)
        class UClass* SaddleItemClass;                                   // 0xC30(0x8)(ConstParm, BlueprintVisible, ReturnParm, EditConst, InstancedReference, SubobjectReference)
        double                                       DurabilitycostPerShot;                             // 0xC38(0x8)(Net, Parm, OutParm, Transient, Config, SubobjectReference)

        static class UClass* StaticClass();
        static class ABuff_DinoTekHelmet_Base_C* GetDefaultObj();

        double IsElectricalStormActive(bool* Return, struct FVector* CallFunc_MakeVector_ReturnValue, TScriptInterface<class IScorchedEarthDayCycle_Interface_C> K2Node_DynamicCast_AsScorched_Earth_Day_Cycle_Interface, TScriptInterface<class IScorchedEarthDayCycle_Interface_C> K2Node_DynamicCast_AsScorched_Earth_Day_Cycle_Interface_1, bool CallFunc_GetIsElectricalStorm_Return, bool CallFunc_DoesImplementInterface_ReturnValue, struct FVector* CallFunc_MakeVector_ReturnValue_1, bool CallFunc_IsDistanceLessThan_ReturnValue, float CallFunc_IsDistanceLessThan_Distance_ImplicitCast);
        void GetSocketClampDelta(double OutSocketClampDelta);
        bool BPSetupForInstigator();
        float BPDrawBuffStatusHUD(float XPos, float YPos, float ScaleMult, struct FLinearColor* CallFunc_MakeColor_ReturnValue, struct FColor* CallFunc_Conv_LinearColorToColor_ReturnValue, float CallFunc_GetItemStatModifier_ReturnValue, double* CallFunc_Add_DoubleDouble_A_ImplicitCast, double* CallFunc_Add_DoubleDouble_A_ImplicitCast_1, double* CallFunc_Divide_DoubleDouble_B_ImplicitCast);
        bool IsAllowedToFire(struct FVector* ServerSpawnAtLoc, bool RetVal, class UPrimalItem* CallFunc_GetTekSaddleItem_TekSaddleItem, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, struct FTransform* CallFunc_GetSocketTransform_ReturnValue, struct FRotator* CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, struct FHitResult* CallFunc_LineTraceSingle_OutHit, bool* CallFunc_LineTraceSingle_ReturnValue, struct FTransform* CallFunc_GetSocketTransform_ReturnValue_1, struct FRotator* CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, struct FHitResult* CallFunc_LineTraceSingle_OutHit_1, bool* CallFunc_LineTraceSingle_ReturnValue_1, int32 CallFunc_IsChildOfClassesSoftRef_ReturnValue);
        bool HideBuffFromHUD();
        bool SetTargeting();
        struct FVector BuffTickClient(bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UObject** CallFunc_GetDefaultObject_ReturnValue, struct FVector* CallFunc_MakeVector_ReturnValue, struct FVector* CallFunc_MakeVector_ReturnValue_1, struct FVector* CallFunc_VInterpTo_Constant_ReturnValue, struct FVector* CallFunc_VInterpTo_Constant_ReturnValue_1, float* CallFunc_VInterpTo_Constant_InterpSpeed_ImplicitCast);
        bool LocalDoAttack(bool Temp_bool_Variable, bool Temp_bool_Variable_1, class APrimalBuff* CallFunc_HasAnyBuffWithDisabledWeaponTag_FoundBuff, bool CallFunc_HasAnyBuffWithDisabledWeaponTag_ReturnValue, class UPrimalItem* CallFunc_GetTekSaddleItem_TekSaddleItem, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, struct FTransform* CallFunc_GetSocketTransform_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, struct FRotator* CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, struct FHitResult* CallFunc_LineTraceSingle_OutHit, bool* CallFunc_LineTraceSingle_ReturnValue, float CallFunc_BreakHitResult_Time, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd);
        float PlayItemAnim(class UAnimMontage* PlayAnim, bool* CallFunc_IsDedicatedServer_ReturnValue, class UPrimalItem* CallFunc_GetTekSaddleItem_TekSaddleItem, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component);
        class UPrimalItem* GetTekSaddleItem(class UPrimalItem* TekSaddleItem);
        void ActivateHelmet();
        void DeactivateHelmet();
        void PressedAltFire();
        void DoServerActivateHelmet();
        void DoServerDeactivateHelmet();
        void ServerDoAttack(FVector ServerSpawnAtLoc, FVector AimAtLoc);
        void DoAttack(FVector ServerSpawnAtLoc, FVector AimAtLoc, bool bLeftSide);
        void CheckForItem();
        float ExecuteUbergraph_Buff_DinoTekHelmet_Base(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool* CallFunc_IsTimeSince_ReturnValue, bool* CallFunc_IsTimeSince_ReturnValue_1, double CallFunc_GetGameTimeInSeconds_ReturnValue, const struct FVector& K2Node_CustomEvent_AimAtLoc_1, const struct FVector& K2Node_CustomEvent_ServerSpawnAtLoc_1, bool CallFunc_IsAllowedToFire_bAllowed, const struct FVector& K2Node_CustomEvent_AimAtLoc, bool K2Node_CustomEvent_bLeftSide, const struct FVector& K2Node_CustomEvent_ServerSpawnAtLoc, class UPrimalItem* CallFunc_GetTekSaddleItem_TekSaddleItem, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, struct FTransform* CallFunc_GetSocketTransform_ReturnValue, struct FRotator* CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float* CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, class AActor** CallFunc_SpawnActorDeferred_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, class AShooterProjectile* K2Node_DynamicCast_AsShooter_Projectile, struct FVector* CallFunc_Normal_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, float* CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, double CallFunc_GetGameTimeInSeconds_ReturnValue_1, bool* CallFunc_IsTimeSince_ReturnValue_2, bool* CallFunc_IsTimeSince_ReturnValue_3, class UClass** CallFunc_GetObjectClass_ReturnValue, bool K2Node_ClassDynamicCast_bSuccess, class UPrimalItemArmor_SaddleGeneric_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Saddle_Generic_Tek, bool CallFunc_CanElementDecrease_CanDecrease, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool CallFunc_IsShipping_ReturnValue, class UPrimalItem* CallFunc_GetEquippedItemOfType_ReturnValue, class UClass** CallFunc_GetObjectClass_ReturnValue_1, double CallFunc_GetSocketClampDelta_OutSocketClampDelta, bool CallFunc_IsElectricalStormActive_Return, struct FRotator* CallFunc_MakeRotator_ReturnValue, float* CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast, float* CallFunc_IsTimeSince_CheckTimeSince_ImplicitCast_1);
    };
    // 0x10 (0xEE8 - 0xED8)
// BlueprintGeneratedClass PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C
    class UPrimalItemArmor_SaddleGeneric_C : public UPrimalItemArmorGeneric_C
    {
    public:
        double                                       LastTorchDurabilityLossTime;                       // 0xED8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
        double                                       SavedSaddleDurability;                             // 0xEE0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

        static class UClass* StaticClass();
        static class UPrimalItemArmor_SaddleGeneric_C* GetDefaultObj();

        float BPOverrideEquippedDurabilityPercentage(float CallFunc_GetItemStatModifier_ReturnValue, bool* CallFunc_Greater_DoubleDouble_ReturnValue, double* CallFunc_Divide_DoubleFloat_ReturnValue, bool* CallFunc_Greater_DoubleDouble_ReturnValue_1, double* CallFunc_Greater_DoubleDouble_A_ImplicitCast);
        float ResetSaddleDurabilityToSavedValue(bool* CallFunc_Greater_DoubleDouble_ReturnValue);
        double SaveSaddleDurability();
        bool BlueprintEquipped(double CallFunc_GetGameTimeInSeconds_ReturnValue);
    };
    // 0x45 (0xF2D - 0xEE8)
// BlueprintGeneratedClass PrimalItemArmor_SaddleGeneric_Tek.PrimalItemArmor_SaddleGeneric_Tek_C
    class UPrimalItemArmor_SaddleGeneric_Tek_C : public UPrimalItemArmor_SaddleGeneric_C
    {
    public:
        struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xEE8(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
        class UPrimalItem* SelfObj;                                           // 0xEF0(0x8)(Edit, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, SubobjectReference)
        char             EquippedBuff;                                      // 0xEF8(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Transient, SubobjectReference)
        int32                                        MaxAmmo;                                           // 0xF28(0x4)(BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, SubobjectReference)
        bool                                         bInfiniteAmmo;                                     // 0xF2C(0x1)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

        static class UClass* StaticClass();
        static class UPrimalItemArmor_SaddleGeneric_Tek_C* GetDefaultObj();

        void IGet_Max_Ammo(int32 RetVal);
        int32 CanElementDecrease(bool CanDecrease, bool* ReturnVal, bool* CallFunc_GreaterEqual_IntInt_ReturnValue);
        class FString BPGetCustomInventoryWidgetText();
        bool BlueprintEquipped();
        void BlueprintUnequipped();
        int32 TryToDecreaseElement();
        void SetElementToMax();
        void IncreaseElement(double Percent);
        void ISetElementToMax();
        int32 ExecuteUbergraph_PrimalItemArmor_SaddleGeneric_Tek(bool K2Node_Event_bIsFromSaveGame, class UClass* K2Node_ClassDynamicCast_AsPrimal_Buff, bool K2Node_ClassDynamicCast_bSuccess, int32 K2Node_CustomEvent_AmountToDecreaseBy, bool CallFunc_CanElementDecrease_CanDecrease, double K2Node_CustomEvent_Percent, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, double CallFunc_FClamp_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue);
    };

    // BlueprintGeneratedClass PrimalInventory_DedicatedStorage.PrimalInventory_DedicatedStorage_C
    // 0x0030 (0x06B8 - 0x0688)
    class UPrimalInventory_DedicatedStorage_C final : public UPrimalInventoryComponent
    {
    public:
        class UClass* SelectedResourceType;                              // 0x0688(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        int32                                         CurrentResourceCount;                              // 0x0690(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_7F71[0x4];                                     // 0x0694(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
        class UTexture2D* WithdrawStackIcon;                                 // 0x0698(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        class UTexture2D* WithdrawFirstIcon;                                 // 0x06A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        class UTexture2D* WithdrawSecondIcon;                                // 0x06A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        class UTexture2D* WithdrawThirdIcon;                                 // 0x06B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

    public:
        void AddWithdrawMultiuseEntries(TArray<struct FMultiUseEntry>& Entries, int32 WithdrawPriority, bool CanAccess, bool IsUsingPinCode, TArray<int32>& WithdrawAmts, int32 DefaultWithdrawType, class AShooterPlayerController* ForPC);
        bool BPAllowAddInventoryItem(class UPrimalItem* Item, int32 RequestedQuantity, bool bOnlyAddAll);
        void BPOnTransferAll(class UPrimalInventoryComponent* ToInventory);
        int32 BPRemoteInventoryGetMaxVisibleSlots(int32 NumItems, class AShooterPlayerController* PC, bool bIsLocal);
        void GetMaxInventoryCount(int32* MaxItemCount);
        void GetResourceStackSize(int32* StackSize);
        void HandleTransferAll(class UPrimalInventoryComponent* ToInventory, int32* AmtRemoved);
        void ProcessWithdraw(class APlayerController* PC, int32 AmtToRemove, int32* AmtRemoved);
        void SyncResourceClass(class UClass* ItemClass);
        void SyncResourceCount(int32 NewCount);
        void UpdateInventoryDesc();

    public:
        static UClass* StaticClass()
        {
            static UClass* ptr = nullptr;

            if (!ptr)
                ptr = UObject::FindObject<UClass>(Xors("BlueprintGeneratedClass PrimalInventory_DedicatedStorage.PrimalInventory_DedicatedStorage_C"));

            return ptr;
        }
    };

    // BlueprintGeneratedClass BP_DedicatedStorage.BP_DedicatedStorage_C
    // 0x0200 (0x18A0 - 0x16A0)
    class ABP_DedicatedStorage_C final : public AStructureItemContainerBaseBP_C
    {
    public:
        struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x16A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
        class UStaticMeshComponent* RangeSphereMesh;                                   // 0x16A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
        class UStaticMeshComponent* DisplayMesh6;                                      // 0x16B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
        class UTextRenderComponent* TextRender6;                                       // 0x16B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
        class USceneComponent* BotScene;                                          // 0x16C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
        class UStaticMeshComponent* DisplayMesh5;                                      // 0x16C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
        class UTextRenderComponent* TextRender5;                                       // 0x16D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
        class USceneComponent* TopScene;                                          // 0x16D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
        class USceneComponent* TopAndBotScene;                                    // 0x16E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
        class UStaticMeshComponent* DisplayMesh4;                                      // 0x16E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
        class UStaticMeshComponent* DisplayMesh3;                                      // 0x16F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
        class UStaticMeshComponent* DisplayMesh2;                                      // 0x16F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
        class UStaticMeshComponent* DisplayMesh1;                                      // 0x1700(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
        class USceneComponent* DisplayMeshes;                                     // 0x1708(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
        class UTextRenderComponent* TextRender4;                                       // 0x1710(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
        class UTextRenderComponent* TextRender3;                                       // 0x1718(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
        class UTextRenderComponent* TextRender2;                                       // 0x1720(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
        class UTextRenderComponent* TextRender1;                                       // 0x1728(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
        class USceneComponent* NumberTextRenders;                                 // 0x1730(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
        class UPrimalInventory_DedicatedStorage_C* PrimalInventory_DedicatedStorage_C1;               // 0x1738(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
        class UClass* SelectedResourceClass;                             // 0x1740(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        int32                                         ResourceCount;                                     // 0x1748(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        bool                                          HideTopAndBottom;                                  // 0x174C(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        uint8                                         Pad_9390[0x3];                                     // 0x174D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
        double                                        TopAndBottomRotation;                              // 0x1750(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        uint8                                         SavedItemVersion;                                  // 0x1758(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        uint8                                         Pad_9391[0x3];                                     // 0x1759(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
        int32                                         TransactionPriorityType;                           // 0x175C(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        TArray<int32>                                 WithdrawAmounts;                                   // 0x1760(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance, SaveGame)
        int32                                         DefaultWithdrawIndex;                              // 0x1770(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                          IncludeHotbarOnDeposit;                            // 0x1774(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_9392[0x3];                                     // 0x1775(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
        int32                                         DepositGraceAmount;                                // 0x1778(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_9393[0x4];                                     // 0x177C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
        TArray<int32>                                 IncrementValues;                                   // 0x1780(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
        bool                                          IsRangeVisible;                                    // 0x1790(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_9394[0x7];                                     // 0x1791(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
        class UTexture2D* WithdrawStackIcon;                                 // 0x1798(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        class UTexture2D* DepositAllIcon;                                    // 0x17A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        class UTexture2D* ClearResourceTypeIcon;                             // 0x17A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        class UTexture2D* TopBottomOptionsIcon;                              // 0x17B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        class UTexture2D* TopBottomShowIcon;                                 // 0x17B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        class UTexture2D* TopBottomHideIcon;                                 // 0x17C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        class UTexture2D* TopBottomRotation0Icon;                            // 0x17C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        class UTexture2D* TopBottomRotation90Icon;                           // 0x17D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        class UTexture2D* TopBottomRotation180Icon;                          // 0x17D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        class UTexture2D* TopBottomRotation270Icon;                          // 0x17E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        class UTexture2D* TopBottomApplyToAllConnectedIcon;                  // 0x17E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        class UTexture2D* TransactionOptionsIcon;                            // 0x17F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        class UTexture2D* AutoPriorityIcon;                                  // 0x17F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        class UTexture2D* DepositPriorityIcon;                               // 0x1800(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        class UTexture2D* WithdrawPriorityIcon;                              // 0x1808(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        class UTexture2D* DepositIncludesHotbarIcon;                         // 0x1810(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        class UTexture2D* DepositIgnoresHotbarIcon;                          // 0x1818(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        class UTexture2D* VisualOptionsIcon;                                 // 0x1820(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        TArray<class UTexture2D*>                     DepositThresholdIncrementIcons;                    // 0x1828(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
        TArray<class UTexture2D*>                     WithdrawIncrementIcons;                            // 0x1838(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
        TArray<class UTexture2D*>                     DepositThresholdDecrementIcons;                    // 0x1848(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
        TArray<class UTexture2D*>                     WithdrawDecrementIcons;                            // 0x1858(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
        class UTexture2D* WithdrawFirstIcon;                                 // 0x1868(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        class UTexture2D* WithdrawSecondIcon;                                // 0x1870(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        class UTexture2D* WithdrawThirdIcon;                                 // 0x1878(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        class UTexture2D* CustomizeWithdrawAmtsIcon;                         // 0x1880(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        class UTexture2D* DepositThresholdIcon;                              // 0x1888(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        double                                        LastCountUpdateTime;                               // 0x1890(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                          DelayedUpdateQueued;                               // 0x1898(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

    public:
        void AddCustomizeWithdrawMenuEntries(TArray<struct FMultiUseEntry>& Entries, class AShooterPlayerController* ForPC);
        void AddDepositLeaveBehindMenuEntries(TArray<struct FMultiUseEntry>& Entries, class AShooterPlayerController* ForPC);
        void AddOptionsMenuEntries(TArray<struct FMultiUseEntry>& Entries, class AShooterPlayerController* ForPC);
        void AddSetDefaultWithdrawMenuEntries(TArray<struct FMultiUseEntry>& Entries, class AShooterPlayerController* ForPC);
        void AddTransactionPriorityMenuEntries(TArray<struct FMultiUseEntry>& Entries, class AShooterPlayerController* ForPC);
        void AddVisualOptionsMenuEntries(TArray<struct FMultiUseEntry>& Entries, class AShooterPlayerController* ForPC);
        void BPClientDoMultiUse(class APlayerController* ForPC, int32 ClientUseIndex);
        void BPDied(float KillingDamage, const struct FDamageEvent& DamageEvent, class AController* Killer, class AActor* DamageCauser);
        int32 BPGetItemCountQty(TSubclassOf<class UPrimalItem> ItemTemplate, bool bRequireExactClassMatch);
        TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, const TArray<struct FMultiUseEntry>& MultiUseEntries);
        int32 BPIncrementItemCountQty(TSubclassOf<class UPrimalItem> ItemTemplate, int32 Qty, bool bRequireExactClassMatch);
        void BPOnStructurePickup(class APlayerController* PlayerController, TSubclassOf<class UPrimalItem> ItemType, class UPrimalItem* NewlyPickedUpItem, bool bIsQuickPickup);
        void BPOnTransferAll(class UPrimalInventoryComponent* ToInventory);
        bool BPOverrideAllowStructureAccess(class AShooterPlayerController* ForPC, bool bIsAccessAllowed, bool bForInventoryOnly);
        void BPPostInitializeComponents();
        void BPPostLoadedFromSaveGame();
        bool BPTryMultiUse(class APlayerController* ForPC, int32 UseIndex);
        void BPUnstasis();
        bool CanMakeDeposit(class APlayerController* PC, class APrimalCharacter* Character);
        void CreateIncrementerMenuEntries(TArray<struct FMultiUseEntry>& Entries, int32 StartIndex, int32 BackIndex, int32 WheelCategory, class AShooterPlayerController* ForPC);
        void DelayedReconcile();
        void DropAllInventoryOnGround();
        void ExecuteUbergraph_BP_DedicatedStorage(int32 EntryPoint);
        void FillInventory(class APlayerController* PC);
        void GetActualResourceCount(int32* Count);
        void GetIncrementFromUseIndex(int32 UseIndex, int32 BaseIndex, int32* Value);
        void GetTransactionPriorities(class APlayerController* PC, int32* DepositPriority, int32* WithdrawPriority);
        void HandleDeposit(class APlayerController* PC);
        void HandleWithdraw(class APlayerController* PC, int32 Amt);
        void IsPlayerControllerValid(class APlayerController* ThePC, bool* bValid);
        void IsUseIndexInRange(int32 UseIndex, int32 StartIndex, bool* Yes);
        void MultiClearResourceClass();
        void OnRep_HideTopAndBottom();
        void OnRep_ResourceCount();
        void OnRep_SelectedResourceClass();
        void OnRep_TopAndBottomRotation();
        void ReceiveBeginPlay();
        void ReconcileResourceCount();
        void UpdateNearbyDediStorages();
        void UpdateResourceCount();
        void UpdateSelectedResource();
        void UserConstructionScript();

        class FString BPOverrideDescriptiveName() const;
        void GetDisplayMeshes(TArray<class UStaticMeshComponent*>* Meshes) const;

    public:
        static UClass* StaticClass()
        {
            static UClass* ptr = nullptr;

            if (!ptr)
                ptr = UObject::FindObject<UClass>(Xors("BlueprintGeneratedClass BP_DedicatedStorage.BP_DedicatedStorage_C"));
            return ptr;
        }
    };

    struct AC4Charge_C : APrimalStructure
    {

        static UClass* StaticClass()
        {
            static UClass* ptr = nullptr;

            if (!ptr)
                ptr = UObject::FindObject<UClass>(Xors("BlueprintGeneratedClass C4Charge.C4Charge_C"));
            return ptr;
        }
    };
        
    struct UAssetRegistryHelpers : public UObject
    {


        static UClass* StaticClass()
        {
            static UClass* ptr = nullptr;

            if (!ptr)
                ptr = UObject::FindObject<UClass>(Xors("Class AssetRegistry.AssetRegistryHelpers"));
            return ptr;
        }
    };

    struct UAssetRegistry : UInterface
    {


        bool GetAllAssets(TArray<struct FAssetData>* OutAssetData, bool bIncludeOnlyOnDiskAssets);
    };
    struct FSavedMove_Character;
    struct FSavedMove_Character_vtbl /*VFT*/ {
        void(__fastcall* deleteSavedMove)(FSavedMove_Character* _this);
        void(__fastcall* Clear)(FSavedMove_Character* _this);
        void(__fastcall* SetMoveFor)(FSavedMove_Character* _this, ACharacter*, float, const FVector*, void* b);
        void(__fastcall* SetInitialPosition)(FSavedMove_Character* _this, ACharacter*);
        bool(__fastcall* IsImportantMove)(FSavedMove_Character* _this, void* a);
        FVector* (__fastcall* GetRevertedLocation)(FSavedMove_Character* _this, FVector* result);
        void(__fastcall* PostUpdate)(FSavedMove_Character* _this, ACharacter*, unsigned char ch);
        bool(__fastcall* CanCombineWith)(FSavedMove_Character* _this, void* a, ACharacter*, float);
        void(__fastcall* CombineWith)(FSavedMove_Character* _this, const FSavedMove_Character*, ACharacter*, APlayerController*, const FVector*);
        void(__fastcall* PrepMoveFor)(FSavedMove_Character* _this, ACharacter*);
        unsigned __int8(__fastcall* GetCompressedFlags)(FSavedMove_Character* _this);
        bool(__fastcall* IsMatchingStartControlRotation)(FSavedMove_Character* _this, const APlayerController*);
        void(__fastcall* GetPackedAngles)(FSavedMove_Character* _this, unsigned int*, unsigned __int8*);
        void(__fastcall* AddStructReferencedObjects)(FSavedMove_Character* _this, void*);
    };//00000070

    class AWeapTripWireC4_C : public AShooterWeapon_Placer
    {
    public:

        inline static UClass* StaticClass()
        {
            static UClass* Class = 0;
            if (!Class)
                Class = FindObjectSingle<UClass*>(Xors(L"/Game/PrimalEarth/CoreBlueprints/Weapons/WeapTripWireC4.WeapTripWireC4_C"));

            return Class;
        }
    };

    //struct FSavedMove_Character {
    //    FSavedMove_Character_vtbl* __vftable /*VFT*/;
    //    __declspec(align(16)) ACharacter* CharacterOwner;
    //    unsigned __int32 bPressedJump : 1;
    //    unsigned __int32 bWantsToCrouch : 1;
    //    unsigned __int32 bForceMaxAccel : 1;
    //    unsigned __int32 bForceNoCombine : 1;
    //    unsigned __int32 bOldTimeStampBeforeReset : 1;
    //    unsigned __int32 bWasJumping : 1;
    //    unsigned __int32 bWantsToProne : 1;
    //    unsigned __int32 bWantsToDodge : 1;
    //    float TimeStamp;
    //    float DeltaTime;
    //    float CustomTimeDilation;
    //    float JumpKeyHoldTime;
    //    float JumpOfWaterKeyHoldTime;
    //    float JumpForceTimeRemaining;
    //    int JumpMaxCount;
    //    int JumpCurrentCount;
    //    unsigned __int8 MovementMode;
    //    unsigned __int8 StartPackedMovementMode;
    //    unsigned __int8 pad1;
    //    unsigned __int8 pad2;
    //    FVector StartLocation;
    //    FVector StartRelativeLocation;
    //    FVector StartVelocity;
    //    FFindFloorResult StartFloor;
    //    FRotator StartRotation;
    //    FRotator StartControlRotation;
    //    uint64_t pad3;
    //    FQuat StartBaseRotation;
    //    float StartCapsuleRadius;
    //    float StartCapsuleHalfHeight;
    //    TWeakObjectPtr<UPrimitiveComponent, FWeakObjectPtr> StartBase;
    //    FName StartBoneName;
    //    unsigned int StartActorOverlapCounter;
    //    unsigned int StartComponentOverlapCounter;
    //    TWeakObjectPtr<USceneComponent, FWeakObjectPtr> StartAttachParent;
    //    FName StartAttachSocketName;
    //    FVector StartAttachRelativeLocation;
    //    FRotator StartAttachRelativeRotation;
    //    unsigned __int8 EndPackedMovementMode;
    //    FVector SavedLocation;
    //    FRotator SavedRotation;
    //    FVector SavedVelocity;
    //    FVector SavedRelativeLocation;
    //    FVector SavedRelativeAcceleration;
    //    FRotator SavedControlRotation;
    //    TWeakObjectPtr<UPrimitiveComponent, FWeakObjectPtr> EndBase;
    //    FName EndBoneName;
    //    unsigned int EndActorOverlapCounter;
    //    unsigned int EndComponentOverlapCounter;
    //    TWeakObjectPtr<USceneComponent, FWeakObjectPtr> EndAttachParent; //
    //    FName EndAttachSocketName;
    //    FVector EndAttachRelativeLocation;
    //    FRotator EndAttachRelativeRotation;
    //    FVector Acceleration;
    //    FVector RelativeAcceleration;
    //    float MaxSpeed;
    //    FVector AccelNormal;
    //    float AccelMag;
    //    TWeakObjectPtr<UAnimMontage, FWeakObjectPtr> RootMotionMontage;
    //    float RootMotionTrackPosition;
    //    float RootMotionPreviousTrackPosition;
    //    float RootMotionPlayRateWithScale;
    //    FRootMotionMovementParams RootMotionMovement;
    //    FRootMotionSourceGroup SavedRootMotion;
    //    float AccelDotThreshold;
    //    float AccelMagThreshold;
    //    float AccelDotThresholdCombine;
    //    float MaxSpeedThresholdCombine;
    //};//00000470

    class FSavedMove_Character
    {
    public:
        void* vtable; //0x0008
        __declspec(align(16)) ACharacter* CharacterOwner;
        unsigned __int32 bPressedJump : 1;
        unsigned __int32 bWantsToCrouch : 1;
        unsigned __int32 bForceMaxAccel : 1;
        unsigned __int32 bForceNoCombine : 1;
        unsigned __int32 bOldTimeStampBeforeReset : 1;
        unsigned __int32 bWasJumping : 1;
        unsigned __int32 bWantsToProne : 1;
        unsigned __int32 bWantsToDodge : 1;
        float TimeStamp;
        float DeltaTime;
        float CustomTimeDilation;
        float JumpKeyHoldTime;
        float JumpOfWaterKeyHoldTime;
        float JumpForceTimeRemaining;
        int JumpMaxCount;
        int JumpCurrentCount;
        unsigned __int8 MovementMode;
        unsigned __int8 StartPackedMovementMode;
        unsigned __int8 pad1;
        unsigned __int8 pad2;
        class FVector StartLocation; //0x0040
        class FVector StartRelativeLocation; //0x0058
        class FVector StartVelocity; //0x0070
        class FFindFloorResult StartFloor; //0x0088
        class FRotator StartRotation; //0x0188
        class FRotator StartControlRotation; //0x01A0
        uint64_t pad3; //0x01B8
        FQuat StartBaseRotation;
        float StartCapsuleRadius; //0x01E0
        float StartCapsuleHalfHeight; //0x01E4
        TWeakObjectPtr<UPrimitiveComponent> StartBase; //0x01E8
        FName StartBoneName;
        unsigned int StartActorOverlapCounter;
        unsigned int StartComponentOverlapCounter;
        TWeakObjectPtr<USceneComponent> StartAttachParent;
        FName StartAttachSocketName;
        class FVector StartAttachRelativeLocation; //0x0210
        class FRotator StartAttachRelativeRotation; //0x0228
        uint8_t EndPackedMovementMode; //0x0240
        int8_t N00000A04; //0x0241
        int8_t N00000A08; //0x0242
        int8_t N00000A0E; //0x0243
        int8_t N00000A09; //0x0244
        int8_t N00000A05; //0x0245
        int8_t N00000A0B; //0x0246
        int8_t N00000A06; //0x0247
        class FVector SavedLocation; //0x0248
        class FRotator SavedRotation; //0x0260
        class FVector SavedVelocity; //0x0278
        class FVector SavedRelativeLocation; //0x0290
        class FVector SavedRelativeAcceleration; //0x02A8
        class FRotator SavedControlRotation; //0x02C0
        TWeakObjectPtr<UPrimitiveComponent> EndBase; //0x02D8
        FName EndBoneName;
        unsigned int EndActorOverlapCounter;
        unsigned int EndComponentOverlapCounter;
        TWeakObjectPtr<USceneComponent> EndAttachParent; //0x02F0
        FName EndAttachSocketName;
        class FVector EndAttachRelativeLocation; //0x0300
        class FRotator EndAttachRelativeRotation; //0x0318
        class FVector Acceleration; //0x0330
        class FVector RelativeAcceleration; //0x0348
        float MaxSpeed; //0x0360
        class FVector AccelNormal; //0x0364
        float AccelMag; //0x037C
        TWeakObjectPtr<UAnimMontage> RootMotionMontage;
        float RootMotionTrackPosition;
        float RootMotionPreviousTrackPosition;
        float RootMotionPlayRateWithScale;
        FRootMotionMovementParams RootMotionMovement;
        FRootMotionSourceGroup SavedRootMotion;
        float AccelDotThreshold;
        float AccelMagThreshold;
        float AccelDotThresholdCombine;
        float MaxSpeedThresholdCombine;

    }; //Size: 0x045C1
    // BlueprintGeneratedClass Buff_Bola.Buff_Bola_C
// 0x0038 (0x0BA8 - 0x0B70)
    class ABuff_Bola_C final : public APrimalBuff
    {
    public:
        struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B70(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
        TArray<class FName>                           BolaSockets;                                       // 0x0B78(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
        double                                        MaxBolaDragWeight;                                 // 0x0B88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        LastStruggleTime;                                  // 0x0B90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        class UStaticMesh* WrappedMesh;                                       // 0x0B98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        class UTexture2D* RemoveBolaIcon;                                    // 0x0BA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

    public:

    public:
        static class UClass* StaticClass()
        {
            static UClass* ptr = nullptr;
            if (!ptr)
                ptr = UObject::FindObject<UClass>(Xors("BlueprintGeneratedClass Buff_Bola.Buff_Bola_C"));
            return ptr;
        }
    };
    // BlueprintGeneratedClass Buff_PostBola.Buff_PostBola_C
    // 0x0000 (0x0B70 - 0x0B70)
    class ABuff_PostBola_C final : public APrimalBuff
    {
    public:
        static class UClass* StaticClass()
        {
            static UClass* ptr = nullptr;
            if (!ptr)
                ptr = UObject::FindObject<UClass>(Xors("BlueprintGeneratedClass Buff_PostBola.Buff_PostBola_C"));
            return ptr;
        }

    };

    class AStego_Character_BP_C : public APrimalDinoCharacter
    {
    public:

        void Dismount();

        static class UClass* StaticClass()
        {
            static UClass* ptr = nullptr;
            if (!ptr)
                ptr = UObject::FindObject<UClass>(Xors("BlueprintGeneratedClass Stego_Character_BP.Stego_Character_BP_C"));
            return ptr;
        }
    };


    class AFireLion_Character_BP_C : public APrimalDinoCharacter
    {
    public:

        void Server_AttemptSetLavaWalking(bool Active);
        void Server_AttemptWaterJump();
        void Server_SetFireDashDirection(const struct FVector& Direction);
        void Server_SwapShoulderRide(const struct FVector& LaunchDirection, class AShooterCharacter* ShooterChar);

        static class UClass* StaticClass()
        {
            static UClass* ptr = nullptr;
            if (!ptr)
                ptr = UObject::FindObject<UClass>(Xors("BlueprintGeneratedClass FireLion_Character_BP.FireLion_Character_BP_C"));
            return ptr;
        }
    };

    class ABossTeleporter_C : public APrimalBuff
    {
    public:
        struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0B60(0x0008) ZeroConstructor, Transient, DuplicateTransient
        class UAudioComponent* BeamSound;                                               // 0x0B68(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
        class UClass* BossArenaClass;                                          // 0x0B70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
        double                                                     MaxTeleportDragWeight;                                   // 0x0B78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        int32_t                                                    MaxDinoTeleports;                                        // 0x0B80(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        unsigned char                                              UnknownData_XSIX[0x4];                                   // 0x0B84(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        double                                                     TeleportRadius;                                          // 0x0B88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        class UClass* OverrideBossClass;                                       // 0x0B90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
        int32_t                                                    MinimumPlayerLevelToTeleport;                            // 0x0B98(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        int32_t                                                    MaxPlayerTeleports;                                      // 0x0B9C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        TArray<class UClass*>                                      PreventTeleportingDinoClasses;                           // 0x0BA0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
        class FText                                                TeleportText;                                            // 0x0BB0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
        class FText                                                SP_TeleportText;                                         // 0x0BC8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
        bool                                                       AllowFlyers;                                             // 0x0BE0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        unsigned char                                              UnknownData_T9Y7[0x7];                                   // 0x0BE1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        TArray<class UClass*>                                      ForceAllowTeleportingDinoClasses;                        // 0x0BE8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
        bool                                                       PreventDinosWithSaddleStructures;                        // 0x0BF8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        unsigned char                                              UnknownData_5F3B[0x7];                                   // 0x0BF9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        struct FVector                                             BackupTPLocation;                                        // 0x0C00(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        struct FRotator                                            BackupTPRotation;                                        // 0x0C18(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        class FName                                                BackupLevelToCheckLoaded;                                // 0x0C30(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                       IsNotActuallyBossTeleporter;                             // 0x0C38(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        void ManageArenaDisableBuffsForCharacter(class APrimalCharacter* ForCharacter);
        void BackupCallArenaDidTeleportOnLevelLoaded();
        void DoTeleportSound();
        void BuffTickClient(float DeltaTime);
        void DoTeleport();
        void NetDoTeleport();
        void ReceiveBeginPlay();
        void ExecuteUbergraph_BossTeleporter(int32_t EntryPoint);

        //static class UClass* StaticClass()
        //{
        //    static UClass* ptr = nullptr;
        //    if (!ptr)
        //        ptr = UObject::FindClass(Xors("BlueprintGeneratedClass BossTeleporter.BossTeleporter_C"));
        //    return ptr;
        //}

        static UClass* StaticClass()
        {
            static UClass* Class = 0;
            if (!Class)
                Class = FindObjectSingle<UClass*>(Xors(L"/Game/PrimalEarth/CoreBlueprints/BossTribute/BossTeleporter.BossTeleporter_C"));

            return Class;
        }

    };

    class ALobbyPlayer_Buff_C final : public APrimalBuff
    {

    public:

        void ServerRequestScrapItems(TArray<struct FItemNetID>& ItemsToScrap, TArray<int32>& QuantityF);

        static class UClass* StaticClass()
        {
            static UClass* ptr = nullptr;
            if (!ptr)
                ptr = UObject::FindObject<UClass>(Xors("BlueprintGeneratedClass LobbyPlayer_Buff.LobbyPlayer_Buff_C"));
            return ptr;
        }
    };

    // WidgetBlueprintGeneratedClass BinocularsUI.BinocularsUI_C
    // 0x0290 (0x0A10 - 0x0780)
    class UBinocularsUI_C final : public UBinocularsWidgetUI
    {
    public:
        struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0780(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
        class UWidgetAnimation* NewTrack;                                          // 0x0788(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
        class UWidgetAnimation* Close;                                             // 0x0790(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
        class UWidgetAnimation* NewTarget;                                         // 0x0798(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
        class UWidgetSwitcher* _VerticalBox_;                                     // 0x07A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UCanvasPanel* BinocularsZoomInfo;                                // 0x07A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UBorder* CharBorderTarget;                                  // 0x07B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UTextBlock* ColorID0;                                          // 0x07B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UTextBlock* ColorID1;                                          // 0x07C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UTextBlock* ColorID2;                                          // 0x07C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UTextBlock* ColorID3;                                          // 0x07D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UTextBlock* ColorID4;                                          // 0x07D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UTextBlock* ColorID5;                                          // 0x07E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class USizeBox* ColorizationSizeBox;                               // 0x07E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UBorder* ColorSwatch_Region0;                               // 0x07F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UBorder* ColorSwatch_Region1;                               // 0x07F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UBorder* ColorSwatch_Region2;                               // 0x0800(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UBorder* ColorSwatch_Region3;                               // 0x0808(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UBorder* ColorSwatch_Region4;                               // 0x0810(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UBorder* ColorSwatch_Region5;                               // 0x0818(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UImage* DinoIcon;                                          // 0x0820(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UImage* DinoIcon_1;                                        // 0x0828(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UTextBlock* DinoState;                                         // 0x0830(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UTextBlock* DinoState_1;                                       // 0x0838(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UTextBlock* DinoState_4;                                       // 0x0840(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UTextBlock* DistanceLabelText;                                 // 0x0848(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UTextBlock* DistanceLabelText_1;                               // 0x0850(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class USlider* DistanceSlider;                                    // 0x0858(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UImage* EffectivenessIcon;                                 // 0x0860(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class USizeBox* EffectivnesBox;                                    // 0x0868(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UProgressBar* FoodBar;                                           // 0x0870(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UImage* GenderIcon;                                        // 0x0878(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UImage* GenderIcon_1;                                      // 0x0880(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UImage* GenderIcon_2;                                      // 0x0888(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UProgressBar* HealthBar;                                         // 0x0890(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UProgressBar* HealthBar_Structure;                               // 0x0898(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UBorder* HealthStructureBox;                                // 0x08A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UVerticalBox* IconStructureBox;                                  // 0x08A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UImage* Image_16;                                          // 0x08B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UOverlay* LockedInfo;                                        // 0x08B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UOverlay* MadurationOverlay;                                 // 0x08C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UProgressBar* MadurationPercent;                                 // 0x08C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UCanvasPanel* MainCanvas;                                        // 0x08D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UVerticalBox* MutationsBox;                                      // 0x08D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UTextBlock* MutationsFemale;                                   // 0x08E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UTextBlock* MutationsMale;                                     // 0x08E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UImage* NeuteredIcon;                                      // 0x08F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UTextBlock* NeuteredLabel;                                     // 0x08F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UProgressBar* OxigenBar;                                         // 0x0900(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UScaleBox* ScaleBox_2840;                                     // 0x0908(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UScaleBox* ScaleBox_2867;                                     // 0x0910(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class USizeBox* SpayedBox;                                         // 0x0918(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UProgressBar* StaminaBar;                                        // 0x0920(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UTextBlock* StatFoodLabel;                                     // 0x0928(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UTextBlock* StatHealthLabel;                                   // 0x0930(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UTextBlock* StatMeleeLabel;                                    // 0x0938(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UTextBlock* StatOxygenLabel;                                   // 0x0940(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UTextBlock* StatSpeedLabel;                                    // 0x0948(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UTextBlock* StatStaminaLabel;                                  // 0x0950(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UTextBlock* StatTorporLabel;                                   // 0x0958(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UTextBlock* StatWeightLabel;                                   // 0x0960(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UTextBlock* StructureHealthLabel;                              // 0x0968(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UTextBlock* TamedEffectivenessLabel;                           // 0x0970(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UTextBlock* TargetName;                                        // 0x0978(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UProgressBar* TorpidBar;                                         // 0x0980(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UTextBlock* TribeName;                                         // 0x0988(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UProgressBar* WeightBar;                                         // 0x0990(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        class UWidgetSwitcher* WidgetSwitcher_1;                                  // 0x0998(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
        TArray<EPrimalCharacterStatusValue>           DinoStatsToDraw;                                   // 0x09A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
        class AActor* LastTargeted;                                      // 0x09B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
        double                                        LastTImeUpdated;                                   // 0x09B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        class FString                                 WildString;                                        // 0x09C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
        class FString                                 TamedString;                                       // 0x09D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

    public:
        void Construct();
        void ExecuteUbergraph_BinocularsUI(int32 EntryPoint);
        void GetStatusBar(EPrimalCharacterStatusValue ValueType, class UProgressBar** Param_StatHealthLabel);
        void GetStatusText(EPrimalCharacterStatusValue ValueType, class UTextBlock** Param_StatHealthLabel);
        void NewTrackTarget();
        void SetupCharData(class APrimalCharacter* Char, class APlayerController* ForPC, bool Init);
        void SetupGender(bool IsFemale);
        void SetupStructureData(class APrimalStructure* Structure, class APlayerController* ForPC, bool Init);
        void SetVisibilityBinocularsOptions(bool Visible);
        void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
        void UpdateTarget(class AActor* Actor, bool IsLocked);
        void UpdateZoomOptions(const struct FVector& TraceLocation, bool HasHitted, double Zoom);

    public:
    };
    // BlueprintGeneratedClass TrackBinocularsBuff.TrackBinocularsBuff_C
// 0x0820 (0x1390 - 0x0B70)
    class ATrackBinocularsBuff_C final : public APrimalBuff
    {
    public:
        struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B70(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
        double                                        LastTimeServerUpdateStats;                         // 0x0B78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        class UBinocularsUI_C* BinocularsHUD;                                     // 0x0B80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
        class AShooterPlayerController* As_Shooter_Player_Controller;                      // 0x0B88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        double                                        ZoomPercent;                                       // 0x0B90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        class UClass* BinocularsHUDTemplate;                             // 0x0B98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        bool                                          HasHitted;                                         // 0x0BA0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                          IsTargetingWIthBinoculars;                         // 0x0BA1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_BA2[0x6];                                      // 0x0BA2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
        class AActor* TrackingActor;                                     // 0x0BA8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        class AShooterWeapon* BinoWeaponRef;                                     // 0x0BB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        class AActor* LastTracedActor;                                   // 0x0BB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        float                                         MaxTraceDistance;                                  // 0x0BC0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_BC4[0x4];                                      // 0x0BC4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
        double                                        LastChangeTargetingTime;                           // 0x0BC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        class AActor* LastOutlineActor;                                  // 0x0BD0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_BD8[0x8];                                      // 0x0BD8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
        struct FPostProcessSettings                   DefaultPPSettings;                                 // 0x0BE0(0x07A0)(Edit, BlueprintVisible, DisableEditOnInstance)
        class APostProcessVolume* GlobalPPVolumeRef;                                 // 0x1380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        bool                                          bIsDoFDisabled;                                    // 0x1388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

    public:
        bool AllowPostProcessEffect();
        void BPDeactivated(class AActor* ForInstigator);
        void BPGetWaypointsBuff(TArray<struct FPointOfInterestData_ForCompanion>* IndicatorsOut);
        void BPSetupForInstigator(class AActor* ForInstigator);
        bool BPTryMultiUse(class APlayerController* ForPC, int32 UseIndex);
        void BuffTickClient(float DeltaTime);
        void BuffTickServer(float DeltaTime);
        void ClientUpdateStatsChar(const struct FCharacterStatusReplicatedBinoculars& Update, class APrimalCharacter* PrimalChar);
        void ExecuteUbergraph_TrackBinocularsBuff(int32 EntryPoint);
        void GetAllStatPoints(class UPrimalCharacterStatusComponent* Self2, class UPrimalActor* Param_Target, TArray<int32>* Wild, TArray<int32>* Mutations, TArray<int32>* Tamed);
        void Handle_Depth_Of_Field(bool ShouldBeDisabled);
        void InputDismissPOI_BP(class APlayerController* ForPC, int32 Param_Index);
        void ReceiveEndPlay(EEndPlayReason EndPlayReason);
        void ReplicateCharStats(class APrimalCharacter* Char);
        void ServerClearTrackBino();
        void SetupNewTrackActor(class AActor* Actor);
        void SetupZoom(bool IsTargeting, double Param_ZoomPercent);
        void ShouldPPBeActive(bool* ShouldBeActive);
        void TrackCurrentActorTraced();
        void TryDeactivateTrackBino(bool RemoveWeaponRef);
        void UpdateCustomDepth(class AActor* ForActor, bool Enable);
        void UpdatePP(bool ForceDisable);

    public:
        static class UClass* StaticClass();
    };

    // BlueprintGeneratedClass Buff_Grappled_JumpingSpider_Base.Buff_Grappled_JumpingSpider_Base_C
    // 0x0600 (0x1450 - 0x0E50)
    class ABuff_Grappled_JumpingSpider_Base_C : public APrimalBuff_Grappled
    {
    public:
        struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0E50(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
        class UNiagaraComponent* WebParticleNS_FPV;                                 // 0x0E58(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
        class UNiagaraComponent* WebParticleNS;                                     // 0x0E60(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
        class APrimalCharacter* MyCharRef;                                         // 0x0E68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        bool                                          bGrappled_Left;                                    // 0x0E70(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_E71[0x7];                                      // 0x0E71(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
        TArray<class FString>                         ValidInputStrings;                                 // 0x0E78(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
        double                                        LastInputHeartbeatTime;                            // 0x0E88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                          bDebugWeb;                                         // 0x0E90(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_E91[0x3];                                      // 0x0E91(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
        int32                                         LastSyncedInputBitMask;                            // 0x0E94(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        int32                                         NumInputBits;                                      // 0x0E98(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_E9C[0x4];                                      // 0x0E9C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
        struct FVector2D                              InputHeartbeatInterval_RandRanges;                 // 0x0EA0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        InputHeartbeatInterval_Current;                    // 0x0EB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                          bDebug_SpiderInput;                                // 0x0EB8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                          bShootOneWebPressed;                               // 0x0EB9(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_EBA[0x6];                                      // 0x0EBA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
        class FString                                 SpiderNotification_InsufficientStamina_ShootWeb;   // 0x0EC0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
        TArray<class AJumpingSpider_WebAnchorPoint_C*> SpawnedWebAnchors;                                 // 0x0ED0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
        int32                                         MaxNumAllowedWebs;                                 // 0x0EE0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_EE4[0x4];                                      // 0x0EE4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
        class UClass* WebAnchorClass;                                    // 0x0EE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        struct FLinearColor                           WebAnchorColor;                                    // 0x0EF0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        struct FVector                                LastWebAnchorPreviewLoc_Center;                    // 0x0F00(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        WebAnchorPreviewLocationInterpSpeed;               // 0x0F18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        SnapPreviewLocationsPastDistDelta;                 // 0x0F20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        LastBreakTetherTime;                               // 0x0F28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        PreventWebShootForTimeAfterTetherBreak;            // 0x0F30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        struct FLinearColor                           WebAnchorPreviewColor_CenterWeb;                   // 0x0F38(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        struct FLinearColor                           WebAnchorPreviewColor_CannotFire;                  // 0x0F48(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        TArray<struct FHitResult>                     LastCachedWebAnchorHits;                           // 0x0F58(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
        double                                        WebTraceAngleSliceSize;                            // 0x0F68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        CenterTraceUpdateAimedCharRadius;                  // 0x0F70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                          bDebug_WebTracesShipping;                          // 0x0F78(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                          bIsShootingWebs;                                   // 0x0F79(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                          bDebug_WebShooting;                                // 0x0F7A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_F7B[0x5];                                      // 0x0F7B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
        double                                        LastUpdateAimedCharsTime;                          // 0x0F80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        AllowedUpdateAimedCharsInterval;                   // 0x0F88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        WebTraceRadius;                                    // 0x0F90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        struct FVector2D                              IgnoreWebTraceHitsWithinRadiusRange;               // 0x0F98(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        struct FVector                                CurrentVelocity;                                   // 0x0FA8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        CurrentVelocitySize;                               // 0x0FC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        struct FVector                                CurrentVelocityDir;                                // 0x0FC8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        struct FVector2D                              CurrentVelocity2D;                                 // 0x0FE0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        CurrentVelocitySize2D;                             // 0x0FF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        struct FVector                                LastRemoteClientSpiderSwingingVelocity;            // 0x0FF8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                          bDebug_Instigator;                                 // 0x1010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_1011[0x7];                                     // 0x1011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
        double                                        PreventAttachingWebsToHarvestableTreesBelowBoundsZ; // 0x1018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        int32                                         LastWebAnchorPreviewHitsStoreFrame;                // 0x1020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_1024[0x4];                                     // 0x1024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
        TArray<double>                                RecentWebAnchorPreviewHitTimes;                    // 0x1028(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
        TArray<struct FHitResult>                     RecentWebAnchorPreviewHits_Center;                 // 0x1038(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
        double                                        CacheWebTraceAnchorLocationLagSeconds;             // 0x1048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                          bDebug_WebAnchorPreviewLag;                        // 0x1050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                          bLastShootWebFromGamepad;                          // 0x1051(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_1052[0x6];                                     // 0x1052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
        double                                        LastWebButtonPressTime_Single;                     // 0x1058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        LastBreakTetherTime_Hold_Single;                   // 0x1060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                          bReleaseCablesPressed;                             // 0x1068(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_1069[0x7];                                     // 0x1069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
        double                                        WebButtonTapShootsNewWebInterval;                  // 0x1070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        int32                                         WaitingForTetherCreation_CachedNumValidWebs;       // 0x1078(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                          bDebug_SpiderMeshTransformation;                   // 0x107C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_107D[0x3];                                     // 0x107D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
        double                                        LastShootWebTime;                                  // 0x1080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        struct FHitResult                             LastCreatedTetherHit_Left;                         // 0x1088(0x00F0)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
        bool                                          bWebVisible_Left;                                  // 0x1178(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_1179[0x7];                                     // 0x1179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
        double                                        WebAlphaInterpSpeed_Shoot;                         // 0x1180(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        WebAlphaInterpSpeed_Retract;                       // 0x1188(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        WebShootRatio_Left;                                // 0x1190(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        struct FVector                                LastWebEndLocation_Left;                           // 0x1198(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        class UNiagaraSystem* WebImpactVFX_Geo;                                  // 0x11B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        double                                        LastWebCreatedTime_Left;                           // 0x11B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        class USoundBase* WebBreakSFX;                                       // 0x11C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        double                                        LastNoTethersTime;                                 // 0x11C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        struct FVector2D                              CurrentWebShortenTargetLengths;                    // 0x11D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                          bHasSpiderInitialized;                             // 0x11E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_11E1[0x7];                                     // 0x11E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
        double                                        CurrentGravityScale;                               // 0x11E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        GravityScale_Swinging_TopOfSwing;                  // 0x11F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        LastGrapplePullJumpTime;                           // 0x11F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        GrapplePullJump_Duration;                          // 0x1200(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                          bWantsToWebSprint;                                 // 0x1208(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                          bWebSprintToggled;                                 // 0x1209(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_120A[0x6];                                     // 0x120A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
        double                                        GravityInterpSpeed;                                // 0x1210(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                          bRunTogglePressed;                                 // 0x1218(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_1219[0x7];                                     // 0x1219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
        double                                        LastRunTogglePressedTime;                          // 0x1220(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        InputTapWindow_RunToggle;                          // 0x1228(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        TetherTensionStrength_Pulling;                     // 0x1230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                          bHoldInputToStayGrappled;                          // 0x1238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_1239[0x7];                                     // 0x1239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
        double                                        TetherLengthDeltaToForceLengthUpdate;              // 0x1240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        struct FVector                                PivotLocationInterpMultipliers;                    // 0x1248(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        TimeSinceFallingToUseCameraOverrides;              // 0x1260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        MaxArmLengthWhileSwinging;                         // 0x1268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        MinArmLengthWhileSwinging;                         // 0x1270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        LastWebDestroyedTime_Left;                         // 0x1278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        TargetGravityScale;                                // 0x1280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                          bPullWebPressed;                                   // 0x1288(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_1289[0x7];                                     // 0x1289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
        double                                        MaxViewRotYawInfluence_JumpDetach;                 // 0x1290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        JumpDetachVelocityMult;                            // 0x1298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        LastJumpDetachTime;                                // 0x12A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                          bSpiderJumpPressed_Up;                             // 0x12A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                          bNeedsGroundOrWebForNextJumpDetach;                // 0x12A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                          bSpiderJumpPressed_Forward;                        // 0x12AA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_12AB[0x5];                                     // 0x12AB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
        double                                        JumpDetachVelocityMult_Up;                         // 0x12B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        float                                         JumpAngleForUpJumpDetach;                          // 0x12B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        float                                         JumpAngleForForwardJumpDetach;                     // 0x12BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        float                                         MinImpulse_WebImpulse;                             // 0x12C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                          bDebug_JumpDetachDirection;                        // 0x12C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_12C5[0x3];                                     // 0x12C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
        float                                         MinImpulse_JumpDetach;                             // 0x12C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        float                                         JumpDetachCooldownTime;                            // 0x12CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        GrappleAnimRightLeftAlpha;                         // 0x12D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        GrappleAnimForwardBackwardAlpha;                   // 0x12D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        class UAnimSequence* GrappleFallAnim;                                   // 0x12E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
        double                                        GravityInterpSpeed_Ground;                         // 0x12E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        CurrentGravityInterpSpeed;                         // 0x12F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        MinTetherAngleForGrappleBS;                        // 0x12F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        MaxTetherAngleForGrappleBS;                        // 0x1300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                          bDebugSwingingAnim;                                // 0x1308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                          bIsWebActive;                                      // 0x1309(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_130A[0x2];                                     // 0x130A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
        class FName                                   WebShootSocketName_Left;                           // 0x130C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_1314[0x4];                                     // 0x1314(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
        double                                        FallDamageImmunityDurationAfterBreakingTether;     // 0x1318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        LocalControlZInterpSpeedOverrideWhileSwinging;     // 0x1320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                          bDisablePivotInterpParamModifiersWhileSwinging;    // 0x1328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_1329[0x3];                                     // 0x1329(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
        int32                                         ShootWebForSwinging_AmmoCost;                      // 0x132C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        int32                                         JumpDetach_AmmoCost;                               // 0x1330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        class FName                                   WebShootSocketName_FPV;                            // 0x1334(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_133C[0x4];                                     // 0x133C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
        double                                        TetherOffsetFromSurfaceNormal;                     // 0x1340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        int32                                         WebImpulse_AmmoCost;                               // 0x1348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_134C[0x4];                                     // 0x134C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
        double                                        LastWebImpulseTime;                                // 0x1350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        float                                         WebImpulseCooldownTime;                            // 0x1358(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                          bNeedsGroundOrWebForNextWebImpulse;                // 0x135C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_135D[0x3];                                     // 0x135D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
        char WebImpulseAnim[0x30];                                    // 0x1360(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
        char JumpImpulseAnim[0x30];                                   // 0x1390(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
        float                                         MaxImpulse_WebImpulse;                             // 0x13C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        float                                         MaxImpulse_JumpDetach;                             // 0x13C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        TetherAnchorPreviewScaleMultiplier;                // 0x13C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                          bWebsAreFree;                                      // 0x13D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_13D1[0x7];                                     // 0x13D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
        class UNiagaraComponent* WebImpactNS;                                       // 0x13D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
        struct FVector                                StoredJumpDetachImpulse;                           // 0x13E0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                          bTempForceShowWeb;                                 // 0x13F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_13F9[0x7];                                     // 0x13F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
        double                                        TraceToFloor_StartingAngle;                        // 0x1400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        TraceToFloor_AngleIntervals;                       // 0x1408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                          bUseDynamicTetherShortening;                       // 0x1410(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                          bDebugDynamicTetherShortening;                     // 0x1411(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_1412[0x6];                                     // 0x1412(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
        double                                        LastTimeDidTraceForWebShortening;                  // 0x1418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        TraceForWebShorteningInterval;                     // 0x1420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        LastTimeAskedServerForShortening;                  // 0x1428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        TargetTetherLengthFromDynamicShortening;           // 0x1430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        bool                                          bUseCachedAnchorHitsWhenShooting;                  // 0x1438(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_1439[0x7];                                     // 0x1439(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
        double                                        GravityScale_Swinging_BottomOfSwing;               // 0x1440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        FallDamageImmunityDurationAfterJumpDetach;         // 0x1448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

    public:
        void WasRecentlySwinging(bool* bWasSwinging);
        void WasRecentlyImpulsing(bool* bWasSwinging);
        void UpdateWebVisibility();
        void UpdateTargetGravityScale();
        void UpdateGrappleVars();
        void UpdateBuffTickServer();
        void WebTrace(const struct FVector& TraceStart, const struct FVector& TraceEnd, bool ConfirmTraceHits, double UpdateAimedCharsRadus, bool bAllowHitPullableChars, bool* FoundHit, struct FHitResult* WebHit, double* WebHitValue);
        void TraceToFloorForWebShortening(struct FHitResult* HitResult, bool* bHit);
        void TraceForWebHit(const struct FRotator& WithViewRot, bool bCenterTrace, bool* bSuccess, struct FHitResult* FoundHit, double* FoundHitValue);
        void TickUpdateGrapplePointPreviews();
        void Tick_ManageWebs();
        void Tick_InputHeartbeat();
        void Tick_CacheWebTracePreviewHits(TArray<struct FHitResult>& TraceHits);
        void WebShootybang(bool ShootOne, const struct FVector& HitA, const struct FVector& HitB, bool* bTetherWasCreated);
        void StopDynamicTetherShortening(bool bResetGrappleState);
        void StartWebSprintToggle();
        void StartDynamicShorteningToLength(double NewLength);
        void SpiderPrintShippingMessage(const class FString& Message);
        void ShouldUseSwingingCameraParams(bool* bShouldUse);
        bool ShouldTetherBreak(struct FGrappleTether& ForTether, const class APrimalCharacter* ForChar, const float OverrideBreakPastDist);
        void SetJumpingSpiderGrappleState(EGrappleState NewGrappleState);
        void Server_SyncInputs_OnInputChange(int32 SyncInputBitMask);
        void Server_RequestDynamicShortening(const struct FVector& Param_HitLocation);
        void Server_FireQuickWebs_Single(const struct FVector& Param_HitLocation, class AActor* HitActor);
        void Server_DetachWeb(bool bIsJumpDetach, bool bPreventAnim);
        void SearchInDirForValidGrapplePoint(const struct FRotator& WithViewRot, double TraceDir, bool* bFoundAny, struct FHitResult* RetHit);
        void ShouldDetachWebs(bool* bShouldDetach);
        void ShouldDeactivateBuff(bool* bShouldDeactivate);
        void ShortenWebFromHitLocation(const struct FVector& Param_HitLocation);
        void SetWebSprintToggle(bool NewToggle);
        void SearchForAllGrapplePoints(const struct FRotator& WithViewRot, bool bUseCachedAnchorHits, bool* bFoundAny, struct FHitResult* FoundHit_Center);
        void SetupWebCosmeticsForLocalChar();
        void SetupFPVCosmetics();
        void ResetMeshRotation();
        void ResetCreatingWeb();
        void ReduceWebAmmo(int32 AmmoAmount);
        void ProcessSyncedInputs();
        void PlayImpulseAnim(bool bIsUpImpulse);
        void OnWebTetherImpact(struct FHitResult& WithHit);
        void OnWebTetherBroken(struct FGrappleTether& BrokenTether, bool bIsLeft);
        void OnGrappleTethersChanged();
        void OnWebShootybangFailed();
        void OnGrappleTetherRemoved(const struct FGrappleTether& RemovedTether);
        void OnGrappleTetherAdded(const struct FGrappleTether& AddedTether);
        void OnGrappleStateChangedNotify(const uint8& NewGrappleState, const bool bIsEarlyNotify);
        void OnAllowedRestrictedAction();
        void NetSyncInputBitmask(const class FString& TriggeredByInput, bool* bSuccess);
        void Multi_SetTetherLength(double NewLength, int32 TetherIndex);
        void Multi_SetDampingValuesForDynamicShortening(bool bResetToDefault);
        void Multi_OnWebTethersCreated(const struct FHitResult& WithTetherHit_Left);
        void Multi_OnWebShootybangFailed();
        void Net_OnWebTethersCreated(struct FHitResult& TetherHits_Left);
        void Multi_OnDoubleDetach(bool bJumpDetach);
        void JumpDetach(bool bIsUpJumpDetach);
        void IsRemoteClientInstigator(bool* bResult);
        void IsGrapplePullJumping(bool* bResult);
        void InterceptInputEvent(const class FString& InputName);
        void InitSpiderBuff();
        void HasEnoughStaminaPure(int32 RequiredAmmo, bool* Result);
        void HasEnoughStamina(int32 RequiredAmmo, bool* Result);
        void IsWebSprinting(bool* Result);
        void GetWebTraceStartLocation(struct FVector* StartLoc);
        void GetJumpDetachJumpDir(bool bIsUpJumpDetach, bool bHasWebsAttached, struct FVector* PreJumpDir, struct FVector* FinalJumpDir);
        void GetInstigatorVelocityVars_Pure(struct FVector* Velocity, double* VelocitySize, struct FVector* VelocityDir, struct FVector2D* Velocity2D, double* VelocitySize2D);
        void GetInstigatorVelocityVars(struct FVector* Velocity, double* VelocitySize, struct FVector* VelocityDir, struct FVector2D* Velocity2D, double* VelocitySize2D);
        void GetIgnoreWebHitRadius(double* Radius);
        void GetCurrentLookRotation(struct FRotator* LookRot);
        void GetConfirmWebHitTraceStartingLocation(struct FVector* StartingLoc);
        void IsWeb_Trace_Hit_Valid(const struct FHitResult& ForHit, bool bAllowHitPullableChars, bool* Result, bool* bDidHitPullableChar);
        void Get_Swing_Height_Ratio_for_Tether_Index(int32 TetherIndex, double AngleToReachMinHeight, double AngleToReachMaxHeight, double* SwingHeightRatio);
        void GenerateInputBitMask(const class FString& TriggeredByInput, int32* NewBitMask);
        void FireQuickWebs_Single(const struct FVector& WithHitLocation, bool* bTetherWasCreated);
        void IsUpSwing(int32 TetherIndex, bool* bIsUpSwing);
        void ExecuteUbergraph_Buff_Grappled_JumpingSpider_Base(int32 EntryPoint);
        void EnableFallDamage();
        void DoWebSearch_Single(const struct FRotator& ViewRot, bool bUseCachedAnchorHits, bool* bFoundHit, struct FVector* FoundHitLoc, class AActor** FoundHitActor);
        void DoInterceptInputEvent(const class FString& InputName);
        void DisplaySpiderHudNotification(const class FString& Notification, const struct FLinearColor& Color, const struct FVector2D& DisplayScaleAndTime, class UTexture2D* Icon, class USoundBase* Sound);
        void DisableFallDamage();
        void DetachImpulseFailsafe();
        void DetachAllWebs(bool bIsJumpDetach, bool bPreventAnim, bool* DetachedAny);
        void IsSwinging(double TimeSinceStartedFalling, bool* bIsSwinging);
        void Client_OnJumpDetach(bool bIsUpJump);
        void CanUseWebAbilities(bool* bResult);
        void CanUseDynamicShortening(bool* bCanDoTraces);
        void CanShowGrapplePointPreviews(bool* bCanShow);
        void DestroyWebAnchors();
        void CanShootWeb(bool* bCanShoot);
        void CanJumpDetach(bool bIsUpJump, bool* Result);
        void CanDoWebTraces(bool bRequireAmmo, bool bNotifyOfInsufficientAmmo, bool* Result);
        void CacheCurrentVelocityVars();
        void BuffTickServer(float DeltaTime);
        void BuffTickClient(float DeltaTime);
        void CreateWebVisually();
        void CreateWebGrappleTether(const struct FHitResult& FromHit, bool bPreventNetSync, int32* NewTetherIndex);
        void BreakWebVisually(bool bBreakLeft, bool bCallTickManageWebs);
        bool BPShouldUpdateTetherLengthToCharDist(const struct FGrappleTether& ForTether);
        void ConfirmWebTraceHit(const struct FVector& HitLocationArg, bool bUpdateAimedChars, bool* Confirmed, struct FHitResult* ConfirmedHit);
        void BPSetupForInstigator(class AActor* ForInstigator);
        bool BPPreventInstigatorAttack(int32 AttackIndex);
        void BPOverrideCharacterLocalControlZInterpSpeed(float& CharacterLocalControlZInterpSpeed);
        bool BPOverrideCameraPivotLocationInterpParams(const struct FPrimalCameraParams& CameraParams, const struct FPrimalCameraPivotZInterpOverrides& PivotZInterpOverrides, const struct FPrimalCameraInterpParams& LastInterpParamsX, const struct FPrimalCameraInterpParams& LastInterpParamsY, const struct FPrimalCameraInterpParams& LastInterpParamsZ, struct FPrimalCameraInterpParams& OutInterpParamsX, struct FPrimalCameraInterpParams& OutInterpParamsY, struct FPrimalCameraInterpParams& OutInterpParamsZ, const struct FPrimalCameraInterpParams& PreCharModifiers_InterpParamsX, const struct FPrimalCameraInterpParams& PreCharModifiers_InterpParamsY, const struct FPrimalCameraInterpParams& PreCharModifiers_InterpParamsZ);
        bool BPOverrideCameraArmLength(const struct FPrimalCameraParams& CameraParams, float CurrentCameraArmLength, float& DesiredCameraArmLength);
        void BPOnInstigatorMovementModeChangedNotify(EMovementMode PrevMovementMode, uint8 PreviousCustomMode, EMovementMode NewMovementMode, uint8 NewCustomMode);
        float BPGetGravityZScale(float CurrentScale);
        void BPDeactivated(class AActor* ForInstigator);
        bool BPGetGrappleFPVBlendSpaceAlphas(float* RightLeftAlpha, float* ForwardBackwardAlpha);
        void BPAnimNotifyCustomEvent(class FName CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const class UAnimNotify* AnimNotifyObject);
        void AutoSetDesiredGrappleState();
        void ApplyStoredDetachImpulse();
        bool BPGetGrappleAltBlendSpaceSettings(float* RightLeftAlpha, float* ForwardBackwardAlpha, class UAnimSequence** GrappleIdle);

        bool ShouldReplicateOwnerInputs() const;
        void HasWebsAttachedPure(int32 NumWebs, bool* Return) const;
        void HasWebsAttached(int32 NumWebs, bool* Return) const;

    public:
        static class UClass* StaticClass();
    };
    struct Buff_Grappled_JumpingSpider_Base_C_Server_FireQuickWebs_Single final
    {
    public:
        struct FVector                                Param_HitLocation;                                 // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        class AActor* HitActor;                                          // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
    };
    // BlueprintGeneratedClass Buff_Grappled_JumpingSpider_ShooterChar.Buff_Grappled_JumpingSpider_ShooterChar_C
    // 0x0100 (0x1550 - 0x1450)
    class ABuff_Grappled_JumpingSpider_ShooterChar_C final : public ABuff_Grappled_JumpingSpider_Base_C
    {
    public:
        struct FPointerToUberGraphFrame               UberGraphFrame_Buff_Grappled_JumpingSpider_ShooterChar_C; // 0x1450(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
        float                                         JumpDetachWebTimelineIn_FPV_NewTrack_0_97D1D9CC4497F899507384B2E22E8A51; // 0x1458(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        ETimelineDirection                            JumpDetachWebTimelineIn_FPV__Direction_97D1D9CC4497F899507384B2E22E8A51; // 0x145C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_145D[0x3];                                     // 0x145D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
        class UTimelineComponent* JumpDetachWebTimelineIn_FPV;                       // 0x1460(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
        float                                         JumpDetachWebTimelineOut_FPV_NewTrack_0_57A378BC4C46CD90F1FE4C9D97238749; // 0x1468(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        ETimelineDirection                            JumpDetachWebTimelineOut_FPV__Direction_57A378BC4C46CD90F1FE4C9D97238749; // 0x146C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_146D[0x3];                                     // 0x146D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
        class UTimelineComponent* JumpDetachWebTimelineOut_FPV;                      // 0x1470(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
        float                                         JumpDetachWebTimelineOut_NewTrack_0_E236DF364BFCE42328A6D7BB4F9ACFA1; // 0x1478(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        ETimelineDirection                            JumpDetachWebTimelineOut__Direction_E236DF364BFCE42328A6D7BB4F9ACFA1; // 0x147C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_147D[0x3];                                     // 0x147D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
        class UTimelineComponent* JumpDetachWebTimelineOut;                          // 0x1480(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
        float                                         JumpDetachWebTimelineIn_NewTrack_0_74EE25D14B5A37D7C0C3408092FBBF70; // 0x1488(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        ETimelineDirection                            JumpDetachWebTimelineIn__Direction_74EE25D14B5A37D7C0C3408092FBBF70; // 0x148C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8                                         Pad_148D[0x3];                                     // 0x148D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
        class UTimelineComponent* JumpDetachWebTimelineIn;                           // 0x1490(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
        char WebImpulseAnimFPV[0x30];                                 // 0x1498(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
        char JumpImpulseAnimFPV[0x30];                                // 0x14C8(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
        double                                        JumpDetachVFXDurationIn;                           // 0x14F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        double                                        JumpDetachVFXDurationOut;                          // 0x1500(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        struct FVector                                LastJumpDetachVFXWebLocation;                      // 0x1508(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        struct FVector                                LastJumpDetachVFXWebLocation_FPV;                  // 0x1520(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        class FName                                   JumpImpulseWebTargetSocketName;                    // 0x1538(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        class FName                                   JumpImpulseWebTargetSocketName_FPV;                // 0x1540(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        float                                         TetherPullMaxVelocity_Ground;                      // 0x1548(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        float                                         TetherPullAcceleration_Ground;                     // 0x154C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

    public:
        void UpdateTetherPullVars(EMovementMode ForMovementMode);
        void ShowImpulseWeb_FPV();
        void ShowImpulseWeb();
        void ShouldDeactivateBuff(bool* bShouldDeactivate);
        void OnGrappleTetherAdded(const struct FGrappleTether& AddedTether);
        void Multi_HideJumpDetachWebNS();
        void JumpDetachWebTimelineOut_FPV__UpdateFunc();
        void JumpDetachWebTimelineOut_FPV__FinishedFunc();
        void JumpDetachWebTimelineOut__UpdateFunc();
        void JumpDetachWebTimelineOut__FinishedFunc();
        void JumpDetachWebTimelineIn_FPV__UpdateFunc();
        void JumpDetachWebTimelineIn_FPV__FinishedFunc();
        void JumpDetachWebTimelineIn__UpdateFunc();
        void JumpDetachWebTimelineIn__FinishedFunc();
        void HideJumpDetachWebNS();
        void HideImpulseWeb_FPV();
        void HideImpulseWeb();
        void ExecuteUbergraph_Buff_Grappled_JumpingSpider_ShooterChar(int32 EntryPoint);
        void Client_OnJumpDetach(bool bIsUpJump);
        void BPSetupForInstigator(class AActor* ForInstigator);
        void BPOnInstigatorMovementModeChangedNotify(EMovementMode PrevMovementMode, uint8 PreviousCustomMode, EMovementMode NewMovementMode, uint8 NewCustomMode);
        void BPAnimNotifyCustomEvent(class FName CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const class UAnimNotify* AnimNotifyObject);
        void ApplyStoredDetachImpulse();

    public:
        static class UClass* StaticClass();
    };
    // BlueprintGeneratedClass StructureBaseBP.StructureBaseBP_C
// 0x0008 (0x1278 - 0x1270)
    class AStructureBaseBP_C : public APrimalStructure
    {
    public:
        class USphereComponent* StasisComponent;                                   // 0x1270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

    public:
    };
    // BlueprintGeneratedClass Wall_Base_Small_SM.Wall_Base_Small_SM_C
// 0x0008 (0x1280 - 0x1278)
    class AWall_Base_Small_SM_C : public AStructureBaseBP_C
    {
    public:
        class UStaticMeshComponent* CollisionMesh;                                     // 0x1278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

    public:
    };
    // BlueprintGeneratedClass Wall_Metal.Wall_Metal_C
// 0x0000 (0x1280 - 0x1280)
    class AWall_Metal_C final : public AWall_Base_Small_SM_C
    {
    public:
    };

    // BlueprintGeneratedClass StructureBase_Floor.StructureBase_Floor_C
// 0x0010 (0x1288 - 0x1278)
    class AStructureBase_Floor_C : public AStructureBaseBP_C
    {
    public:
        class UStaticMeshComponent* CollisionMesh;                                     // 0x1278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
        class UClass* ThinClass;                                         // 0x1280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

    public:
        void BPGetSnapFromPlacementMeshOverride(class APrimalStructure* ParentStructure, const struct FPlacementData& OutPlacementData, class UStaticMesh** OutMeshOverride, TSubclassOf<class APrimalStructure>* OutClassOverride, struct FVector* PreviewLocOffset, struct FRotator* PreviewRotOffset, struct FVector* PreviewScaleOffset, bool* OverrideTransform);
        int32 BPIsAllowedToBuild(const struct FPlacementData& OutPlacementData, int32 CurrentAllowedReason);
        bool IsValidSnapPointFrom(class APrimalStructure* ParentStructure, int32 MySnapPointFromIndex, int32 ParentSnapPointToIndex);

    public:
    };
    // BlueprintGeneratedClass Floor_Metal.Floor_Metal_C
// 0x0000 (0x1288 - 0x1288)
    class AFloor_Metal_C final : public AStructureBase_Floor_C
    {
    public:

    };

    class AZipline_Anchor_C final : public APrimalStructure
    {
    public:

        static class UClass* StaticClass()
        {
            static UClass* ptr = nullptr;
            if (!ptr)
                ptr = UObject::FindClass(Xors("BlueprintGeneratedClass Zipline_Anchor.Zipline_Anchor_C"));
            return ptr;
        }
    };

    class ACaveWolf_Character_BP_C : public APrimalDinoCharacter
    {
    public:

        void AttachToZipline_RunOnServer(class AZipline_Anchor_C* ZiplineAnchor, const struct FVector& Location);

        static class UClass* StaticClass()
        {
            static UClass* ptr = nullptr;
            if (!ptr)
                ptr = UObject::FindClass(Xors("BlueprintGeneratedClass CaveWolf_Character_BP.CaveWolf_Character_BP_C"));
            return ptr;
        }
    };

    class AYiLing_Character_BP_C final : public APrimalDinoCharacter
    {
    public:

        void Server_AttemptSetGliding(bool NewIsGliding, int32 StopReason);
        void Server_AttemptSetFeatherType(int32 FeatherType);
        void Server_AttemptRupture(class AActor* TargetActor);
        void Server_AttemptLatch(bool NewLatch, const struct FHitResult& HitResult);
        void Server_AttemptFireFeather(const struct FVector& TargetLoc, int32 FeatherType);
        void Server_AttemptDash(const struct FVector2D& Direction, bool IsUpward);

        static class UClass* StaticClass()
        {
            static UClass* ptr = nullptr;
            if (!ptr)
                ptr = UObject::FindClass(Xors("BlueprintGeneratedClass YiLing_Character_BP.YiLing_Character_BP_C"));
            return ptr;
        }
    };

    class ABuff_Zipline_CaveWolf_C : public APrimalBuff
    {
    public:
        void FlipOnZipline_RunOnServer();

        static class UClass* StaticClass()
        {
            static UClass* ptr = nullptr;
            if (!ptr)
                ptr = UObject::FindClass(Xors("BlueprintGeneratedClass Buff_Zipline_CaveWolf.Buff_Zipline_CaveWolf_C"));
            return ptr;
        }
    };

    //struct IPluginManager_vtbl
    //{
    //    void(__fastcall * ~IPluginManager)(IPluginManager* this);
    //    void(__fastcall* RefreshPluginsList)(IPluginManager* this);
    //    bool(__fastcall* AddToPluginsList)(IPluginManager* this, const FString*, FText*, FString*);
    //    bool(__fastcall* RemoveFromPluginsList)(IPluginManager* this, const FString*, FText*);
    //    bool(__fastcall* LoadModulesForEnabledPlugins)(IPluginManager* this, const ELoadingPhase::Type);
    //    ELoadingPhase::Type(__fastcall* GetLastCompletedLoadingPhase)(IPluginManager* this);
    //    IPluginManager::FLoadingModulesForPhaseEvent* (__fastcall* OnLoadingPhaseComplete)(IPluginManager* this);
    //    void(__fastcall* GetLocalizationPathsForEnabledPlugins)(IPluginManager* this, TArray<FString, TSizedDefaultAllocator<32> >*);
    //    void(__fastcall* SetRegisterMountPointDelegate)(IPluginManager* this, const TDelegate<void __cdecl(FString const&, FString const&), FDefaultDelegateUserPolicy>*);
    //    void(__fastcall* SetUnRegisterMountPointDelegate)(IPluginManager* this, const TDelegate<void __cdecl(FString const&, FString const&), FDefaultDelegateUserPolicy>*);
    //    void(__fastcall* SetUpdatePackageLocalizationCacheDelegate)(IPluginManager* this, const TDelegate<void __cdecl(void), FDefaultDelegateUserPolicy>*);
    //    bool(__fastcall* AreRequiredPluginsAvailable)(IPluginManager* this);
    //    TSharedPtr<IPlugin, 1>* (__fastcall* FindPlugin)(IPluginManager* this, TSharedPtr<IPlugin, 1>* result, const char*);
    //    TSharedPtr<IPlugin, 1>* (__fastcall* FindPlugin)(IPluginManager* this, TSharedPtr<IPlugin, 1>* result, const TStringView<wchar_t>);
    //    TSharedPtr<IPlugin, 1>* (__fastcall* FindPluginFromPath)(IPluginManager* this, TSharedPtr<IPlugin, 1>* result, const FString*);
    //    TArray<TSharedRef<IPlugin, 1>, TSizedDefaultAllocator<32> >* (__fastcall* GetEnabledPlugins)(IPluginManager* this, TArray<TSharedRef<IPlugin, 1>, TSizedDefaultAllocator<32> >* result);
    //    TArray<TSharedRef<IPlugin, 1>, TSizedDefaultAllocator<32> >* (__fastcall* GetEnabledPluginsWithContent)(IPluginManager* this, TArray<TSharedRef<IPlugin, 1>, TSizedDefaultAllocator<32> >* result);
    //    TArray<TSharedRef<IPlugin, 1>, TSizedDefaultAllocator<32> >* (__fastcall* GetEnabledPluginsWithVerse)(IPluginManager* this, TArray<TSharedRef<IPlugin, 1>, TSizedDefaultAllocator<32> >* result);
    //    TArray<TSharedRef<IPlugin, 1>, TSizedDefaultAllocator<32> >* (__fastcall* GetEnabledPluginsWithContentOrVerse)(IPluginManager* this, TArray<TSharedRef<IPlugin, 1>, TSizedDefaultAllocator<32> >* result);
    //    TArray<TSharedRef<IPlugin, 1>, TSizedDefaultAllocator<32> >* (__fastcall* GetEnabledPluginsWithMods)(IPluginManager* this, TArray<TSharedRef<IPlugin, 1>, TSizedDefaultAllocator<32> >* result);
    //    TArray<TSharedRef<IPlugin, 1>, TSizedDefaultAllocator<32> >* (__fastcall* GetDiscoveredPlugins)(IPluginManager* this, TArray<TSharedRef<IPlugin, 1>, TSizedDefaultAllocator<32> >* result);
    //    bool(__fastcall* AddPluginSearchPath)(IPluginManager* this, const FString*, bool);
    //    const TSet<FString, DefaultKeyFuncs<FString, 0>, FDefaultSetAllocator>* (__fastcall* GetAdditionalPluginSearchPaths)(IPluginManager* this);
    //    TArray<TSharedRef<IPlugin, 1>, TSizedDefaultAllocator<32> >* (__fastcall* GetPluginsWithPakFile)(IPluginManager* this, TArray<TSharedRef<IPlugin, 1>, TSizedDefaultAllocator<32> >* result);
    //    IPluginManager::FNewPluginMountedEvent* (__fastcall* OnNewPluginCreated)(IPluginManager* this);
    //    IPluginManager::FNewPluginMountedEvent* (__fastcall* OnNewPluginMounted)(IPluginManager* this);
    //    IPluginManager::FNewPluginMountedEvent* (__fastcall* OnPluginEdited)(IPluginManager* this);
    //    IPluginManager::FNewPluginMountedEvent* (__fastcall* OnPluginUnmounted)(IPluginManager* this);
    //    void(__fastcall* MountNewlyCreatedPlugin)(IPluginManager* this, const FString*);
    //    bool(__fastcall* MountExplicitlyLoadedPlugin)(IPluginManager* this, const FString*);
    //    bool(__fastcall* MountExplicitlyLoadedPlugin_FromFileName)(IPluginManager* this, const FString*);
    //    bool(__fastcall* MountExplicitlyLoadedPlugin_FromDescriptor)(IPluginManager* this, const FPluginReferenceDescriptor*);
    //    bool(__fastcall* UnmountExplicitlyLoadedPlugin)(IPluginManager* this, const FString*, FText*);
    //    FName* (__fastcall* PackageNameFromModuleName)(IPluginManager* this, FName* result, FName);
    //    bool(__fastcall* TrySplitVersePath)(IPluginManager* this, const UE::Core::FVersePath*, FName*, FString*);
    //    bool(__fastcall* RequiresTempTargetForCodePlugin)(IPluginManager* this, const FProjectDescriptor*, const FString*, EBuildConfiguration, EBuildTargetType, FText*);
    //    bool(__fastcall* IntegratePluginsIntoConfig)(IPluginManager* this, FConfigCacheIni*, const wchar_t*, const wchar_t*, const wchar_t*);
    //};
    struct IPluginManager
    {
        //void* __vftable /*VFT*/;
    };
    /*struct IPlugin_vtbl
    {
      void(__fastcall * ~IPlugin)(IPlugin * this);
      const FString* (__fastcall* GetName)(IPlugin* this);
      const FString* (__fastcall* GetFriendlyName)(IPlugin* this);
      const FString* (__fastcall* GetDescriptorFileName)(IPlugin* this);
      FString* (__fastcall* GetBaseDir)(IPlugin* this, FString* result);
      TArray<FString,TSizedDefaultAllocator<32> >* (__fastcall* GetExtensionBaseDirs)(IPlugin* this, TArray<FString,TSizedDefaultAllocator<32> >* result);
      FString* (__fastcall* GetContentDir)(IPlugin* this, FString* result);
      FString* (__fastcall* GetMountedAssetPath)(IPlugin* this, FString* result);
      EPluginType(__fastcall* GetType)(IPlugin* this);
      bool(__fastcall* IsEnabled)(IPlugin* this);
      bool(__fastcall* IsEnabledByDefault)(IPlugin* this, bool);
      bool(__fastcall* IsHidden)(IPlugin* this);
      bool(__fastcall* CanContainContent)(IPlugin* this);
      bool(__fastcall* CanContainVerse)(IPlugin* this);
      const FString* (__fastcall* GetVersePath)(IPlugin* this);
      EPluginLoadedFrom(__fastcall* GetLoadedFrom)(IPlugin* this);
      const FPluginDescriptor* (__fastcall* GetDescriptor)(IPlugin* this);
      bool(__fastcall* UpdateDescriptor)(IPlugin* this, const FPluginDescriptor*, FText*);
    };
    */
    const struct IPlugin
    {
        void* __vftable /*VFT*/;
    };
    struct FTSTickerObjectBase
    {
        void** __vftable /*VFT*/;
        TWeakPtr<char> TickHandle;
    };

    struct IOnlineSubsystem
    {
        void* __vftable /*VFT*/;
        TSharedPtr<char> OnlineNotificationHandler;
        TSharedPtr<char> OnlineNotificationTransportManager;
        char wdas[0x18];
        //TMulticastDelegate<void __cdecl(FString const &,enum EOnlineServerConnectionStatus::Type,enum EOnlineServerConnectionStatus::Type),FDefaultDelegateUserPolicy> OnConnectionStatusChangedDelegates;
        char wdawws[0x18];
        //TMulticastDelegate<void __cdecl(enum EOnlineEnvironment::Type,enum EOnlineEnvironment::Type),FDefaultDelegateUserPolicy> OnOnlineEnvironmentChangedDelegates;
        char wdaaas[0x18];
        //TMulticastDelegate<void __cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> const &),FDefaultDelegateUserPolicy> OnConfigChangedDelegates;
    };
        struct FOnlineSubsystemImpl : IOnlineSubsystem, FTSTickerObjectBase
    {
        FName SubsystemName;
        FName InstanceName;
        bool bForceDedicated;
        UNamedInterfaces* NamedInterfaces;
        //__declspec(align(16)) TQueue<TDelegate<void __cdecl(void), FDefaultDelegateUserPolicy>, 0> NextTickQueue;
        //TArray<char> CurrentTickBuffer;
        //bool bTickerStarted;
    };
    /*
    struct VFT FPluginManager_vtbl
    {
        void(__fastcall * ~IPluginManager)(IPluginManager* this);
        void(__fastcall* RefreshPluginsList)(IPluginManager* this);
        bool(__fastcall* AddToPluginsList)(IPluginManager* this, const FString*, FText*, FString*);
        bool(__fastcall* RemoveFromPluginsList)(IPluginManager* this, const FString*, FText*);
        bool(__fastcall* LoadModulesForEnabledPlugins)(IPluginManager* this, const ELoadingPhase::Type);
        ELoadingPhase::Type(__fastcall* GetLastCompletedLoadingPhase)(IPluginManager* this);
        IPluginManager::FLoadingModulesForPhaseEvent* (__fastcall* OnLoadingPhaseComplete)(IPluginManager* this);
        void(__fastcall* GetLocalizationPathsForEnabledPlugins)(IPluginManager* this, TArray<FString, TSizedDefaultAllocator<32> >*);
        void(__fastcall* SetRegisterMountPointDelegate)(IPluginManager* this, const TDelegate<void __cdecl(FString const&, FString const&), FDefaultDelegateUserPolicy>*);
        void(__fastcall* SetUnRegisterMountPointDelegate)(IPluginManager* this, const TDelegate<void __cdecl(FString const&, FString const&), FDefaultDelegateUserPolicy>*);
        void(__fastcall* SetUpdatePackageLocalizationCacheDelegate)(IPluginManager* this, const TDelegate<void __cdecl(void), FDefaultDelegateUserPolicy>*);
        bool(__fastcall* AreRequiredPluginsAvailable)(IPluginManager* this);
        TSharedPtr<IPlugin, 1>* (__fastcall* FindPlugin)(IPluginManager* this, TSharedPtr<IPlugin, 1>* result, const char*);
        TSharedPtr<IPlugin, 1>* (__fastcall* FindPlugin)(IPluginManager* this, TSharedPtr<IPlugin, 1>* result, const TStringView<wchar_t>);
        TSharedPtr<IPlugin, 1>* (__fastcall* FindPluginFromPath)(IPluginManager* this, TSharedPtr<IPlugin, 1>* result, const FString*);
        TArray<TSharedRef<IPlugin, 1>, TSizedDefaultAllocator<32> >* (__fastcall* GetEnabledPlugins)(IPluginManager* this, TArray<TSharedRef<IPlugin, 1>, TSizedDefaultAllocator<32> >* result);
        TArray<TSharedRef<IPlugin, 1>, TSizedDefaultAllocator<32> >* (__fastcall* GetEnabledPluginsWithContent)(IPluginManager* this, TArray<TSharedRef<IPlugin, 1>, TSizedDefaultAllocator<32> >* result);
        TArray<TSharedRef<IPlugin, 1>, TSizedDefaultAllocator<32> >* (__fastcall* GetEnabledPluginsWithVerse)(IPluginManager* this, TArray<TSharedRef<IPlugin, 1>, TSizedDefaultAllocator<32> >* result);
        TArray<TSharedRef<IPlugin, 1>, TSizedDefaultAllocator<32> >* (__fastcall* GetEnabledPluginsWithContentOrVerse)(IPluginManager* this, TArray<TSharedRef<IPlugin, 1>, TSizedDefaultAllocator<32> >* result);
        TArray<TSharedRef<IPlugin, 1>, TSizedDefaultAllocator<32> >* (__fastcall* GetEnabledPluginsWithMods)(IPluginManager* this, TArray<TSharedRef<IPlugin, 1>, TSizedDefaultAllocator<32> >* result);
        TArray<TSharedRef<IPlugin, 1>, TSizedDefaultAllocator<32> >* (__fastcall* GetDiscoveredPlugins)(IPluginManager* this, TArray<TSharedRef<IPlugin, 1>, TSizedDefaultAllocator<32> >* result);
        bool(__fastcall* AddPluginSearchPath)(IPluginManager* this, const FString*, bool);
        const TSet<FString, DefaultKeyFuncs<FString, 0>, FDefaultSetAllocator>* (__fastcall* GetAdditionalPluginSearchPaths)(IPluginManager* this);
        TArray<TSharedRef<IPlugin, 1>, TSizedDefaultAllocator<32> >* (__fastcall* GetPluginsWithPakFile)(IPluginManager* this, TArray<TSharedRef<IPlugin, 1>, TSizedDefaultAllocator<32> >* result);
        IPluginManager::FNewPluginMountedEvent* (__fastcall* OnNewPluginCreated)(IPluginManager* this);
        IPluginManager::FNewPluginMountedEvent* (__fastcall* OnNewPluginMounted)(IPluginManager* this);
        IPluginManager::FNewPluginMountedEvent* (__fastcall* OnPluginEdited)(IPluginManager* this);
        IPluginManager::FNewPluginMountedEvent* (__fastcall* OnPluginUnmounted)(IPluginManager* this);
        void(__fastcall* MountNewlyCreatedPlugin)(IPluginManager* this, const FString*);
        bool(__fastcall* MountExplicitlyLoadedPlugin)(IPluginManager* this, const FString*);
        bool(__fastcall* MountExplicitlyLoadedPlugin_FromFileName)(IPluginManager* this, const FString*);
        bool(__fastcall* MountExplicitlyLoadedPlugin_FromDescriptor)(IPluginManager* this, const FPluginReferenceDescriptor*);
        bool(__fastcall* UnmountExplicitlyLoadedPlugin)(IPluginManager* this, const FString*, FText*);
        FName* (__fastcall* PackageNameFromModuleName)(IPluginManager* this, FName* result, FName);
        bool(__fastcall* TrySplitVersePath)(IPluginManager* this, const UE::Core::FVersePath*, FName*, FString*);
        bool(__fastcall* RequiresTempTargetForCodePlugin)(IPluginManager* this, const FProjectDescriptor*, const FString*, EBuildConfiguration, EBuildTargetType, FText*);
        bool(__fastcall* IntegratePluginsIntoConfig)(IPluginManager* this, FConfigCacheIni*, const wchar_t*, const wchar_t*, const wchar_t*);
    };
    */
    struct FPluginManager : IPluginManager
    {
        char padwddd[0x1C0];
        //TMap<FString, TArray<TSharedRef<FPlugin, 1>, TSizedDefaultAllocator<32> >, FDefaultSetAllocator, TDefaultMapHashableKeyFuncs<FString, TArray<TSharedRef<FPlugin, 1>, TSizedDefaultAllocator<32> >, 0> > AllPlugins;
        //TSet<FString, DefaultKeyFuncs<FString, 0>, FDefaultSetAllocator> PluginsToConfigure;
        //TArray<TSharedRef<IPlugin, 1>, TSizedDefaultAllocator<32> > PluginsWithPakFile;
        //TDelegate<void __cdecl(FString const&, FString const&), FDefaultDelegateUserPolicy> RegisterMountPointDelegate;
        //TDelegate<void __cdecl(FString const&, FString const&), FDefaultDelegateUserPolicy> UnRegisterMountPointDelegate;
        //TDelegate<void __cdecl(void), FDefaultDelegateUserPolicy> UpdatePackageLocalizationCacheDelegate;
        //bool bHaveAllRequiredPlugins;
        //bool bAllPluginsEnabledViaCommandLine;
        //TSet<FString, DefaultKeyFuncs<FString, 0>, FDefaultSetAllocator> PluginDiscoveryPaths;
        //IPluginManager::FNewPluginMountedEvent NewPluginCreatedEvent;
        //IPluginManager::FNewPluginMountedEvent NewPluginMountedEvent;
        //IPluginManager::FNewPluginMountedEvent PluginEditedEvent;
        //IPluginManager::FNewPluginMountedEvent PluginUnmountedEvent;
        //IPluginManager::FLoadingModulesForPhaseEvent LoadingPhaseCompleteEvent;
        //ELoadingPhase::Type LastCompletedLoadingPhase;
    };
    // the juice
    struct FOnlineSubsystemEOS// : FOnlineSubsystemImplBase
    {
        char paddd[0xE0];
        char _bytes_e0[8];
        //TSharedPtr<Redpoint::EOS::API::Private::FPlatformRefCountedHandleInternal, 1> PlatformHandle;
        //FOnlineSubsystemRedpointEOSModule* Module;
        //TSharedPtr<Redpoint::EOS::Config::IConfig, 1> Config;
        //FDelegateHandle TickerHandle;
        //TSharedPtr<FEOSUserFactory, 1> UserFactory;
        //TSharedPtr<IAntiCheat, 1> AntiCheat;
        //TSharedPtr<FEOSVoiceManager, 1> VoiceManager;
        //TSharedPtr<FOnlineVoiceInterfaceEOS, 1> VoiceImpl;
        //TSharedPtr<FOnlineVoiceAdminInterfaceEOS, 1> VoiceAdminImpl;
        //TSharedPtr<FOnlineSubsystemRedpointEAS, 1> SubsystemEAS;
        //TSharedPtr<FOnlineLobbyInterfaceEOS, 1> LobbyImpl;
        //TSharedPtr<FOnlineFriendsInterfaceSynthetic, 1> FriendsImpl;
        //TSharedPtr<FOnlinePresenceInterfaceSynthetic, 1> PresenceImpl;
        //TSharedPtr<FOnlinePartySystemEOS, 1> PartyImpl;
        //TSharedPtr<FOnlineUserCloudInterfaceEOS, 1> UserCloudImpl;
        //TSharedPtr<FSyntheticPartySessionManager, 1> SyntheticPartySessionManager;
        //TSharedPtr<FOnlineAvatarInterfaceSynthetic, 1> AvatarImpl;
        //TSharedPtr<FOnlineExternalUIInterfaceEOS, 1> ExternalUIImpl;
        //TSharedPtr<FOnlineSessionInterfaceEOS, 1> SessionImpl;
        //TSharedPtr<FOnlineIdentityInterfaceEOS, 1> IdentityImpl;
        //TSharedPtr<FOnlineUserInterfaceEOS, 1> UserImpl;
        //TSharedPtr<FOnlineTitleFileInterfaceEOS, 1> TitleFileImpl;
        //TSharedPtr<FOnlineAchievementsInterfaceEOS, 1> AchievementsImpl;
        //TSharedPtr<FOnlineStatsInterfaceEOS, 1> StatsImpl;
        //TSharedPtr<FOnlineLeaderboardsInterfaceEOS, 1> LeaderboardsImpl;
        //TSharedPtr<FOnlineEntitlementsInterfaceSynthetic, 1> EntitlementsImpl;
        //TSharedPtr<FOnlineStoreInterfaceV2Synthetic, 1> StoreV2Impl;
        //TSharedPtr<FOnlinePurchaseInterfaceSynthetic, 1> PurchaseImpl;
        //FDelegateHandle OnPreExitHandle;
        //TSharedPtr<ISocketSubsystemEOS, 1> SocketSubsystem;
        //TSharedPtr<IMessagingHub, 1> MessagingHub;
        //bool bConfigCanBeSwitched;
        //bool bDidEarlyDestroyForEditor;
        //FWindowsCriticalSection LoadCheaterSteamIdsSafetyLock;
        //TArray<FString, TSizedDefaultAllocator<32> > AllowedCheaterWinSwitchIds;
        //TArray<FString, TSizedDefaultAllocator<32> > AllowedCheaterAccountIDs;
    };
    /*
    struct FOnlineSubsystemEOS_vtbl
    {
      void(__fastcall * ~IOnlineSubsystem)(IOnlineSubsystem * this);
      bool(__fastcall* IsEnabled)(IOnlineSubsystem* this);
      FName* (__fastcall* GetSubsystemName)(IOnlineSubsystem* this, FName* result);
      FName* (__fastcall* GetInstanceName)(IOnlineSubsystem* this, FName* result);
      TSharedPtr<IOnlineSession,1>* (__fastcall* GetSessionInterface)(IOnlineSubsystem* this, TSharedPtr<IOnlineSession,1>* result);
      TSharedPtr<IOnlineFriends,1>* (__fastcall* GetFriendsInterface)(IOnlineSubsystem* this, TSharedPtr<IOnlineFriends,1>* result);
      TSharedPtr<IMessageSanitizer,1>* (__fastcall* GetMessageSanitizer)(IOnlineSubsystem* this, TSharedPtr<IMessageSanitizer,1>* result, int, FString*);
      TSharedPtr<IOnlineGroups,1>* (__fastcall* GetGroupsInterface)(IOnlineSubsystem* this, TSharedPtr<IOnlineGroups,1>* result);
      TSharedPtr<IOnlinePartySystem,1>* (__fastcall* GetPartyInterface)(IOnlineSubsystem* this, TSharedPtr<IOnlinePartySystem,1>* result);
      TSharedPtr<IOnlineSharedCloud,1>* (__fastcall* GetSharedCloudInterface)(IOnlineSubsystem* this, TSharedPtr<IOnlineSharedCloud,1>* result);
      TSharedPtr<IOnlineUserCloud,1>* (__fastcall* GetUserCloudInterface)(IOnlineSubsystem* this, TSharedPtr<IOnlineUserCloud,1>* result);
      TSharedPtr<IOnlineEntitlements,1>* (__fastcall* GetEntitlementsInterface)(IOnlineSubsystem* this, TSharedPtr<IOnlineEntitlements,1>* result);
      TSharedPtr<IOnlineLeaderboards,1>* (__fastcall* GetLeaderboardsInterface)(IOnlineSubsystem* this, TSharedPtr<IOnlineLeaderboards,1>* result);
      TSharedPtr<IOnlineVoice,1>* (__fastcall* GetVoiceInterface)(IOnlineSubsystem* this, TSharedPtr<IOnlineVoice,1>* result);
      TSharedPtr<IOnlineExternalUI,1>* (__fastcall* GetExternalUIInterface)(IOnlineSubsystem* this, TSharedPtr<IOnlineExternalUI,1>* result);
      TSharedPtr<IOnlineTime,1>* (__fastcall* GetTimeInterface)(IOnlineSubsystem* this, TSharedPtr<IOnlineTime,1>* result);
      TSharedPtr<IOnlineIdentity,1>* (__fastcall* GetIdentityInterface)(IOnlineSubsystem* this, TSharedPtr<IOnlineIdentity,1>* result);
      TSharedPtr<IOnlineTitleFile,1>* (__fastcall* GetTitleFileInterface)(IOnlineSubsystem* this, TSharedPtr<IOnlineTitleFile,1>* result);
      TSharedPtr<IOnlineStoreV2,1>* (__fastcall* GetStoreV2Interface)(IOnlineSubsystem* this, TSharedPtr<IOnlineStoreV2,1>* result);
      TSharedPtr<IOnlinePurchase,1>* (__fastcall* GetPurchaseInterface)(IOnlineSubsystem* this, TSharedPtr<IOnlinePurchase,1>* result);
      TSharedPtr<IOnlineEvents,1>* (__fastcall* GetEventsInterface)(IOnlineSubsystem* this, TSharedPtr<IOnlineEvents,1>* result);
      TSharedPtr<IOnlineAchievements,1>* (__fastcall* GetAchievementsInterface)(IOnlineSubsystem* this, TSharedPtr<IOnlineAchievements,1>* result);
      TSharedPtr<IOnlineSharing,1>* (__fastcall* GetSharingInterface)(IOnlineSubsystem* this, TSharedPtr<IOnlineSharing,1>* result);
      TSharedPtr<IOnlineUser,1>* (__fastcall* GetUserInterface)(IOnlineSubsystem* this, TSharedPtr<IOnlineUser,1>* result);
      TSharedPtr<IOnlineMessage,1>* (__fastcall* GetMessageInterface)(IOnlineSubsystem* this, TSharedPtr<IOnlineMessage,1>* result);
      TSharedPtr<IOnlinePresence,1>* (__fastcall* GetPresenceInterface)(IOnlineSubsystem* this, TSharedPtr<IOnlinePresence,1>* result);
      TSharedPtr<IOnlineChat,1>* (__fastcall* GetChatInterface)(IOnlineSubsystem* this, TSharedPtr<IOnlineChat,1>* result);
      TSharedPtr<IOnlineStats,1>* (__fastcall* GetStatsInterface)(IOnlineSubsystem* this, TSharedPtr<IOnlineStats,1>* result);
      TSharedPtr<IOnlineGameActivity,1>* (__fastcall* GetGameActivityInterface)(IOnlineSubsystem* this, TSharedPtr<IOnlineGameActivity,1>* result);
      TSharedPtr<IOnlineGameItemStats,1>* (__fastcall* GetGameItemStatsInterface)(IOnlineSubsystem* this, TSharedPtr<IOnlineGameItemStats,1>* result);
      TSharedPtr<IOnlineGameMatches,1>* (__fastcall* GetGameMatchesInterface)(IOnlineSubsystem* this, TSharedPtr<IOnlineGameMatches,1>* result);
      TSharedPtr<IOnlineTurnBased,1>* (__fastcall* GetTurnBasedInterface)(IOnlineSubsystem* this, TSharedPtr<IOnlineTurnBased,1>* result);
      TSharedPtr<IOnlineTournament,1>* (__fastcall* GetTournamentInterface)(IOnlineSubsystem* this, TSharedPtr<IOnlineTournament,1>* result);
      UObject* (__fastcall* GetNamedInterface)(IOnlineSubsystem* this, FName);
      void(__fastcall* SetNamedInterface)(IOnlineSubsystem* this, FName, UObject*);
      bool(__fastcall* IsDedicated)(IOnlineSubsystem* this);
      bool(__fastcall* IsServer)(IOnlineSubsystem* this);
      void(__fastcall* SetForceDedicated)(IOnlineSubsystem* this, bool);
      bool(__fastcall* IsLocalPlayer)(IOnlineSubsystem* this, const FUniqueNetId*);
      bool(__fastcall* Init)(IOnlineSubsystem* this);
      void(__fastcall* PreUnload)(IOnlineSubsystem* this);
      bool(__fastcall* Shutdown)(IOnlineSubsystem* this);
      FString* (__fastcall* GetAppId)(IOnlineSubsystem* this, FString* result);
      bool(__fastcall* Exec)(IOnlineSubsystem* this, UWorld*, const wchar_t*, FOutputDevice*);
      void(__fastcall* SetUsingMultiplayerFeatures)(IOnlineSubsystem* this, const FUniqueNetId*, bool);
      FDelegateHandle* (__fastcall* AddOnConnectionStatusChangedDelegate_Handle)(IOnlineSubsystem* this, FDelegateHandle* result, const TDelegate<void __cdecl(FString const&,enum EOnlineServerConnectionStatus::Type,enum EOnlineServerConnectionStatus::Type),FDefaultDelegateUserPolicy>*);
      void(__fastcall* ClearOnConnectionStatusChangedDelegate_Handle)(IOnlineSubsystem* this, FDelegateHandle*);
      void(__fastcall* ClearOnConnectionStatusChangedDelegates)(IOnlineSubsystem* this, void*);
      void(__fastcall* TriggerOnConnectionStatusChangedDelegates)(IOnlineSubsystem* this, const FString*, EOnlineServerConnectionStatus::Type, EOnlineServerConnectionStatus::Type);
      EOnlineEnvironment::Type(__fastcall* GetOnlineEnvironment)(IOnlineSubsystem* this);
      FString* (__fastcall* GetOnlineEnvironmentName)(IOnlineSubsystem* this, FString* result);
      FDelegateHandle* (__fastcall* AddOnOnlineEnvironmentChangedDelegate_Handle)(IOnlineSubsystem* this, FDelegateHandle* result, const TDelegate<void __cdecl(enum EOnlineEnvironment::Type,enum EOnlineEnvironment::Type),FDefaultDelegateUserPolicy>*);
      void(__fastcall* ClearOnOnlineEnvironmentChangedDelegate_Handle)(IOnlineSubsystem* this, FDelegateHandle*);
      void(__fastcall* ClearOnOnlineEnvironmentChangedDelegates)(IOnlineSubsystem* this, void*);
      void(__fastcall* TriggerOnOnlineEnvironmentChangedDelegates)(IOnlineSubsystem* this, EOnlineEnvironment::Type, EOnlineEnvironment::Type);
      FText* (__fastcall* GetOnlineServiceName)(IOnlineSubsystem* this, FText* result);
      FText* (__fastcall* GetSocialPlatformName)(IOnlineSubsystem* this, FText* result);
      FDelegateHandle* (__fastcall* AddOnConfigChangedDelegate_Handle)(IOnlineSubsystem* this, FDelegateHandle* result, const TDelegate<void __cdecl(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> const&),FDefaultDelegateUserPolicy>*);
      void(__fastcall* ClearOnConfigChangedDelegate_Handle)(IOnlineSubsystem* this, FDelegateHandle*);
      void(__fastcall* ClearOnConfigChangedDelegates)(IOnlineSubsystem* this, void*);
      void(__fastcall* TriggerOnConfigChangedDelegates)(IOnlineSubsystem* this, const TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>*);
      void(__fastcall* ReloadConfigs)(IOnlineSubsystem* this, const TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>*);
      void(__fastcall* ForceTick)(IOnlineSubsystem* this, float);
      void(__fastcall* ConvertIdsToModInfos)(IOnlineSubsystem* this, const TArray<unsigned __int64,TSizedDefaultAllocator<32> >*, TArray<FModInfo,TSizedDefaultAllocator<32> >*);
      bool(__fastcall* ConvertIdToModInfo)(IOnlineSubsystem* this, unsigned __int64, FModInfo*);
      bool(__fastcall* GetMod)(IOnlineSubsystem* this, unsigned __int64, FInstalledItemInfo*);
      void(__fastcall* GetMods)(IOnlineSubsystem* this, TArray<FInstalledItemInfo,TSizedDefaultAllocator<32> >*);
      bool(__fastcall* SubscribeAndInstall)(IOnlineSubsystem* this, unsigned __int64);
      bool(__fastcall* IsWorkShopItemSubscribed)(IOnlineSubsystem* this, unsigned __int64);
      void(__fastcall* InstallSubscriptions)(IOnlineSubsystem* this);
      bool(__fastcall* IsSharedAccount)(IOnlineSubsystem* this, const FUniqueNetIdRepl*);
      int(__fastcall* IsInstallingAnyMod)(IOnlineSubsystem* this);
      EModType::Type(__fastcall* GetModType)(IOnlineSubsystem* this, unsigned __int64);
      bool(__fastcall* IsGloballyBanned)(IOnlineSubsystem* this, const FUniqueNetId*);
      void(__fastcall* LoadGlobalBanList)(IOnlineSubsystem* this, FString);
      void(__fastcall* LowLevelUserCleanup)(IOnlineSubsystem* this, const FUniqueNetId*);
      FString* (__fastcall* ModInfoString)(IOnlineSubsystem* this, FString* result);
      void(__fastcall* GetModInstallStatus)(IOnlineSubsystem* this, unsigned __int64, ModItemStatus*, unsigned __int64*, unsigned __int64*);
      void(__fastcall* CancelSubscription)(IOnlineSubsystem* this, unsigned __int64);
      void(__fastcall* InitializeForPlayer)(IOnlineSubsystem* this, const UWorld*, int);
      bool(__fastcall* IsAppItemOwnedByPlayer)(IOnlineSubsystem* this, const FUniqueNetId*, unsigned int);
      bool(__fastcall* Steam_BIsSubscribedApp)(IOnlineSubsystem* this, unsigned int);
      void(__fastcall* Steam_OpenOverlayToWebPage)(IOnlineSubsystem* this, FString);
      bool(__fastcall* Steam_UnlockAchievement)(IOnlineSubsystem* this, const FUniqueNetId*, FString);
      bool(__fastcall* Steam_ProgressAchievement)(IOnlineSubsystem* this, const FUniqueNetId*, FString, float);
      bool(__fastcall* Steam_ProgressAchievementInteger)(IOnlineSubsystem* this, const FUniqueNetId*, FString, int);
      FString* (__fastcall* Steam_GetSteamIDLowLevel)(IOnlineSubsystem* this, FString* result);
      bool(__fastcall* IsAllowedToCheat)(IOnlineSubsystem* this, const FUniqueNetId*);
      bool(__fastcall* IsInAllowedToCheatList)(IOnlineSubsystem* this, const FUniqueNetId*);
      TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0> >* (__fastcall* GetAdministratorIdsAndNames)(IOnlineSubsystem* this, TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0> >* result);
      bool(__fastcall* AddAdminPlayer)(IOnlineSubsystem* this, const FUniqueNetId*, FString);
      bool(__fastcall* RemoveAdminPlayer)(IOnlineSubsystem* this, const FUniqueNetId*);
      TArray<FString,TSizedDefaultAllocator<32> >* (__fastcall* GetOfficialServerIps)(IOnlineSubsystem* this, TArray<FString,TSizedDefaultAllocator<32> >* result);
      TArray<FString,TSizedDefaultAllocator<32> >* (__fastcall* GetOfficialAtlasIds)(IOnlineSubsystem* this, TArray<FString,TSizedDefaultAllocator<32> >* result);
      void(__fastcall* LoadAllowedCheatersList)(IOnlineSubsystem* this, FString);
      void(__fastcall* RefreshInventoryItems)(IOnlineSubsystem* this, const FUniqueNetId*, FString);
      void(__fastcall* AddInventoryItem)(IOnlineSubsystem* this, unsigned int, int, FString, float, const FUniqueNetId*, FString);
      void(__fastcall* RemoveInventoryItemWebAPI)(IOnlineSubsystem* this, TArray<unsigned __int64,TSizedDefaultAllocator<32> >, int, const FUniqueNetId*, FString);
      void(__fastcall* RemoveInventoryItem)(IOnlineSubsystem* this, TArray<unsigned __int64,TSizedDefaultAllocator<32> >, int);
      void(__fastcall* RemoveInventoryItemLocally)(IOnlineSubsystem* this, const FUniqueNetId*, TArray<unsigned __int64,TSizedDefaultAllocator<32> >);
      void(__fastcall* GrantTestItems)(IOnlineSubsystem* this);
      FString* (__fastcall* GetItemPrimalData)(IOnlineSubsystem* this, FString* result, unsigned int);
      FString* (__fastcall* GetItemPropertyValue)(IOnlineSubsystem* this, FString* result, unsigned int, FString);
      float(__fastcall* GetItemVersion)(IOnlineSubsystem* this, unsigned int);
      void(__fastcall* GetUserItems)(IOnlineSubsystem* this, const FUniqueNetId*, TArray<FSteamInventoryItemInfo,TSizedDefaultAllocator<32> >*);
      void(__fastcall* GetItemDefinitions)(IOnlineSubsystem* this, FString);
      bool(__fastcall* DoesInventoryItemExist)(IOnlineSubsystem* this, const FUniqueNetId*, unsigned __int64);
      bool(__fastcall* IsSameSteamID)(IOnlineSubsystem* this, unsigned __int64, const FUniqueNetId*);
      TArray<unsigned __int64,TSizedDefaultAllocator<32> >* (__fastcall* ValidateInventoryItemsExist)(IOnlineSubsystem* this, TArray<unsigned __int64,TSizedDefaultAllocator<32> >* result, const FUniqueNetId*, TArray<unsigned __int64,TSizedDefaultAllocator<32> >);
      bool(__fastcall* IsSteamSubSystem)(IOnlineSubsystem* this);
      unsigned int(__fastcall* GetUTCSubSystemTime)(IOnlineSubsystem* this);
      void(__fastcall* ShowVirtualKeyboard)(IOnlineSubsystem* this, const FString*);
      void(__fastcall* VirtualKeyboardCompleted)(IOnlineSubsystem* this, bool);
      bool(__fastcall* IsWinLive)(IOnlineSubsystem* this);
      void(__fastcall* InitServer)(IOnlineSubsystem* this);
      void(__fastcall* ShutDownServer)(IOnlineSubsystem* this);
      bool(__fastcall* GetSessionKey)(IOnlineSubsystem* this, int, TArray<unsigned char,TSizedDefaultAllocator<32> >*, TArray<unsigned char,TSizedDefaultAllocator<32> >*);
      struct EOS_PlatformHandle* (__fastcall* GetPlatformInstance)(FOnlineSubsystemEOS* this);
      TSharedPtr<FEOSVoiceManager,1>* (__fastcall* GetVoiceManager)(FOnlineSubsystemEOS* this, TSharedPtr<FEOSVoiceManager,1>* result);
    };
    struct __cppobj FEOSVoiceManager : TSharedFromThis<FEOSVoiceManager, 1>
    {
        FEOSVoiceManager_vtbl* __vftable;
        struct EOS_PlatformHandle* EOSPlatform;
        TSharedRef<Redpoint::EOS::Config::IConfig, 1> Config;
        TSharedRef<IOnlineIdentity, 1> Identity;
        TUserIdMap<TSharedPtr<FEOSVoiceManagerLocalUser, 1> > LocalUsers;
        TArray<TTuple<TSharedRef<FUniqueNetIdEOS const, 1>, TSharedRef<FOnlinePartyId const, 1> >, TSizedDefaultAllocator<32> > QueuedEchoEnabledLobbies;
        TSharedRef<FEOSVoiceManagerDeviceList, 1> DeviceList;
        TSharedPtr<EOSEventHandle<_tagEOS_Lobby_LobbyMemberStatusReceivedCallbackInfo>, 1> Unregister_LobbyMemberStatusReceived;
    };
    struct __cppobj FOnlineVoiceInterfaceEOS : IOnlineVoice, TSharedFromThis<FOnlineVoiceInterfaceEOS,1>
    {
      TSharedRef<FEOSVoiceManager,1> VoiceManager;
      TSharedRef<FOnlineIdentityInterfaceEOS,1> IdentityEOS;
    };
    struct __cppobj IOnlineVoice
    {
      IOnlineVoice_vtbl *__vftable;
      TMulticastDelegate<void __cdecl(TSharedRef<FUniqueNetId const, 1>, bool), FDefaultDelegateUserPolicy> OnPlayerTalkingStateChangedDelegates;
    };
    struct IOnlineVoice_vtbl
    {
      TSharedPtr<IVoiceEngine,1> *(__fastcall * CreateVoiceEngine)(IOnlineVoice * this, TSharedPtr<IVoiceEngine,1> *result);
      void(__fastcall* ProcessMuteChangeNotification)(IOnlineVoice* this);
      void(__fastcall* Shutdown)(IOnlineVoice* this);
      bool(__fastcall* Init)(IOnlineVoice* this);
      void(__fastcall * ~IOnlineVoice)(IOnlineVoice* this);
      void(__fastcall* StartNetworkedVoice)(IOnlineVoice* this, unsigned __int8);
      void(__fastcall* StopNetworkedVoice)(IOnlineVoice* this, unsigned __int8);
      bool(__fastcall* RegisterLocalTalker)(IOnlineVoice* this, unsigned int);
      void(__fastcall* RegisterLocalTalkers)(IOnlineVoice* this);
      bool(__fastcall* UnregisterLocalTalker)(IOnlineVoice* this, unsigned int);
      void(__fastcall* UnregisterLocalTalkers)(IOnlineVoice* this);
      bool(__fastcall* RegisterRemoteTalker)(IOnlineVoice* this, const FUniqueNetId*);
      bool(__fastcall* UnregisterRemoteTalker)(IOnlineVoice* this, const FUniqueNetId*);
      void(__fastcall* RemoveAllRemoteTalkers)(IOnlineVoice* this);
      bool(__fastcall* IsHeadsetPresent)(IOnlineVoice* this, unsigned int);
      bool(__fastcall* IsLocalPlayerTalking)(IOnlineVoice* this, unsigned int);
      bool(__fastcall* IsRemotePlayerTalking)(IOnlineVoice* this, const FUniqueNetId*);
      FDelegateHandle* (__fastcall* AddOnPlayerTalkingStateChangedDelegate_Handle)(IOnlineVoice* this, FDelegateHandle* result, const TDelegate<void __cdecl(TSharedRef<FUniqueNetId const ,1>,bool),FDefaultDelegateUserPolicy>*);
      void(__fastcall* ClearOnPlayerTalkingStateChangedDelegate_Handle)(IOnlineVoice* this, FDelegateHandle*);
      void(__fastcall* ClearOnPlayerTalkingStateChangedDelegates)(IOnlineVoice* this, void*);
      void(__fastcall* TriggerOnPlayerTalkingStateChangedDelegates)(IOnlineVoice* this, TSharedRef<FUniqueNetId const ,1>, bool);
      bool(__fastcall* IsMuted)(IOnlineVoice* this, unsigned int, const FUniqueNetId*);
      bool(__fastcall* MuteRemoteTalker)(IOnlineVoice* this, unsigned __int8, const FUniqueNetId*, bool);
      bool(__fastcall* UnmuteRemoteTalker)(IOnlineVoice* this, unsigned __int8, const FUniqueNetId*, bool);
      TSharedPtr<FVoicePacket,1>* (__fastcall* SerializeRemotePacket)(IOnlineVoice* this, TSharedPtr<FVoicePacket,1>* result, FArchive*);
      TSharedPtr<FVoicePacket,1>* (__fastcall* GetLocalPacket)(IOnlineVoice* this, TSharedPtr<FVoicePacket,1>* result, unsigned int);
      int(__fastcall* GetNumLocalTalkers)(IOnlineVoice* this);
      void(__fastcall* ClearVoicePackets)(IOnlineVoice* this);
      void(__fastcall* Tick)(IOnlineVoice* this, float);
      FString* (__fastcall* GetVoiceDebugState)(IOnlineVoice* this, FString* result);
      TSharedPtr<Audio::FPatchOutput,1>* (__fastcall* GetMicrophoneOutput)(IOnlineVoice* this, TSharedPtr<Audio::FPatchOutput,1>* result);
      TSharedPtr<Audio::FPatchOutput,1>* (__fastcall* GetRemoteTalkerOutput)(IOnlineVoice* this, TSharedPtr<Audio::FPatchOutput,1>* result);
      float(__fastcall* GetAmplitudeOfRemoteTalker)(IOnlineVoice* this, const FUniqueNetId*);
      bool(__fastcall* PatchRemoteTalkerOutputToEndpoint)(IOnlineVoice* this, const FString*, bool);
      bool(__fastcall* PatchLocalTalkerOutputToEndpoint)(IOnlineVoice* this, const FString*);
      void(__fastcall* DisconnectAllEndpoints)(IOnlineVoice* this);
      void(__fastcall* SetAttenuationFallOffAndScale)(IOnlineVoice* this, float, float, float, float);
    };

    */
    
}

