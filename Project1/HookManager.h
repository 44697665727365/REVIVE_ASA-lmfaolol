#pragma once
#include "ActorBase.h"
#include "NewMenu.h"
#include "Settings.h"
namespace HookManager
{
    void memcpy_(void* _Dst, void const* _Src, size_t _Size);
    void SwapVtable(void* obj, uint32_t index, void* hook);
    bool StartHook(UObject* Object, uint32_t index, void* HookFn, void* Original = (int*)0x696969);

    bool InitHooks();
    bool UpdateHooks();
    bool UnHook();
    bool StopEverything();
    bool StartEverything();
}

template <typename T>
class Hook 
{
    T Original;
    T HookFN;
    int32_t Index;
    std::string Signature;
    std::string FunctionName;
public:
    void PrintIndex()
	{
        if(Index > -1)
			plog(Xors("%s Index: 0x%llX"),FunctionName.c_str(), Index);
        else
            nlog(Xors("Index for %s not found yet"), FunctionName.c_str());
	}

	Hook(std::string FunctionName, std::string Signature, T HookFN,int VFTIndex = -1) : FunctionName(FunctionName), Signature(Signature), HookFN(HookFN), Index(VFTIndex), Original(nullptr)
	{
	}

	void HookObject(UObject* Object)
	{
		if (IsValid(Object) && Object->VfTable)
		{
            if (!Original || Index <= -1)
            {
                Original = T(signature(Signature.c_str()).GetPointer());
				
                if (Original)
                {
                    for (int i = 0; i < 6000; i++) 
                    {
                        if (Object->VfTable[i] == Original)
                        {
							Index = i;
							break;
						}
                    }

                    if (Index == -1)
                    {
                        //nlog(Xors("Failed to find index for %s on object: %s"), FunctionName.c_str(), Object->GetFullName().c_str());
                        return;
                    }
                }
                else
                {
                    //nlog(Xors("Failed to find %s with sig: %s"), FunctionName.c_str(), Signature.c_str());
					return;
                }
            }
			
			if (Index > -1)
			{
				if (Object->VfTable[Index] != HookFN)
				{
                    HookManager::StartHook(Object, Index, (void*)HookFN);
				}
			}
            else
			{
				//nlog(Xors("Failed to hook %s on object: %s"), FunctionName.c_str(), Object->GetFullName().c_str());
			}
		}
		else
		{
			//nlog(Xors("Failed to hook %s on object: nullptr"), FunctionName.c_str());
		}
	}

	void UnHookObject(UObject* Object)
	{
        if (IsValid(Object)) {
            
            if(!Original)
                Original = T(signature(Signature.c_str()).GetPointer());
            
            if (Index > -1 && Original)
            {
                //plog(Xors("Unhooking %s on object: %s"), FunctionName.c_str(), Object->GetFullName().c_str());
                HookManager::StartHook(Object, Index, (void*)Original);
            }
            else
            {
                //nlog(Xors("Failed to unhook %s at %llx on %p"), FunctionName.c_str(), Index,Original);
            }
        }
        else
        {
            //nlog(Xors("Failed to unhook %s on object: nullptr"), FunctionName.c_str());
        }
	}
    
    T GetOriginal()
	{
		return Original;
	}
};

namespace Hooks
{
    inline bool InitSuccess = true;
    inline bool UpdateSuccess = true;
    inline bool Uninject = false;

    typedef void(*PlayerViewPoint_t)(AShooterPlayerController* _this, FVector* out_Location, FRotator* out_Rotation, bool ForAiming);
    extern void PlayerViewPoint_f(AShooterPlayerController* _this, FVector* out_Location, FRotator* out_Rotation, bool ForAiming);
    inline Hook<PlayerViewPoint_t> PlayerViewPoint(Xors("PlayerViewPoint"), Xors("48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 40 48 8B F1 41"), PlayerViewPoint_f);

    typedef void(*ProcessEvent_t)(UObject* object, UFunction* Function, void* Params);
    extern void ProcessEvent_f(UObject* object, UFunction* Function, void* Params);
    inline Hook< ProcessEvent_t> ProcessEvent(Xors("ProcessEvent"), Xors("40 55 56 57 41 54 41 55 41 56 41 57 48 81 EC 10 01"), ProcessEvent_f,0x4E);

    typedef void(*ProcessRemoteFunction_t)(UNetDriver* _this, AActor* Actor, UFunction* Function, void* Parameters, void* OutParms, void* Stack, UObject* SubObject);
    extern void ProcessRemoteFunction_f(UNetDriver* _this, AActor* Actor, UFunction* Function, void* Parameters, void* OutParms, void* Stack, UObject* SubObject);
    inline Hook< ProcessRemoteFunction_t> ProcessRemoteFunction(Xors("ProcessRemoteFunction"), Xors("4C 89 4C 24 20 53 41 55 41 56 41 57 48 81 EC F8"), ProcessRemoteFunction_f);

    typedef void(*DrawTransition_t)(UGameViewportClient* _this, UCanvas* Canvas);
    extern void DrawTransition_f(UGameViewportClient* _this, UCanvas* Canvas);
    inline Hook< DrawTransition_t> DrawTransition(Xors("DrawTransition"), Xors("48 89 74 24 18 48 89 7C 24 20 55 48 8B EC 48 83 EC 50 80"), DrawTransition_f);

    typedef void(*GetViewPoint_t)(ULocalPlayer* _this, FMinimalViewInfo* OutViewInfo);
    extern void GetViewPoint_f(ULocalPlayer* _this, FMinimalViewInfo* OutViewInfo);
    inline Hook< GetViewPoint_t> GetViewPoint(Xors("GetViewPoint"), Xors("48 8B C4 48 89 58 08 48 89 68 10 48 89 70 18 48 89 78 20 41 56 48 81 EC B0 00 00 00 0F 29 70"), GetViewPoint_f);

    typedef FVector* (*GetShootingCamLoc_t)(AShooterWeapon* _this, FVector* result);
    inline const std::string GetShootingCamLocSig = Xors("48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 40 48 8B F1 48 8B DA");
    extern GetShootingCamLoc_t GetShootingCamLoc;

    typedef UMountedDLCManager* (*GetDLCManager_t)(void);
    inline const std::string GetDLCManagerSig = Xors("4C 8B DC 48 81 EC C8 00 00 00 48 8B 05 ?? ?? ?? ?? 48 33 C4 48 89 84 24 B0 00 00 00 48 8B 05 ?? ?? ?? ?? 48 85 C0 0F 85");
    extern GetDLCManager_t GetDLCManager_f;

    typedef bool (*DoesOwnDLC_t)(UGenericMountedDLCManager* _this, const FString* DLCName);
    bool DoesOwnDLC_f(UGenericMountedDLCManager* _this, const FString* DLCName);
    inline  Hook <DoesOwnDLC_t> DoesOwnDLC(Xors("DoesOwnDLC"), Xors("40 55 53 56 57 41 54 41 55 41 57 48 8D 6C 24 F0 48 81 EC 10 01 00 00 48 8B"), DoesOwnDLC_f);

    typedef void(*ReplicateMoveToServer_t)(UCharacterMovementComponent* MoveComponent, float DeltaTime, const FVector* NewAcceleration);
    void ReplicateMoveToServer_f(UCharacterMovementComponent* MoveComponent, float DeltaTime, const FVector* NewAcceleration);
    inline Hook<ReplicateMoveToServer_t> ReplicateMoveToServer(Xors("ReplicateMoveToServer"), Xors("40 55 53 57 41 56 48 8D AC 24 18"), ReplicateMoveToServer_f);

    typedef void (*ClientForceUpdateMovement_t)(ACharacter* _this, FVector* NewLocation, FVector* NewVelocity);
    void ClientForceUpdateMovement_f(ACharacter* _this, FVector* NewLocation, FVector* NewVelocity);
    inline Hook<ClientForceUpdateMovement_t> ClientForceUpdateMovement(Xors("ClientForceUpdateMovement"), Xors("48 89 5C 24 08 57 48 83 EC 50 80 B9 70"), ClientForceUpdateMovement_f);

    typedef void (*CallServerMovePacked_t)(UCharacterMovementComponent* _this, FSavedMove_Character* NewMove, FSavedMove_Character* PendingMove, FSavedMove_Character* OldMove);
    void CallServerMovePacked_f(UCharacterMovementComponent* _this, FSavedMove_Character* NewMove, FSavedMove_Character* PendingMove, FSavedMove_Character* OldMove);
    inline Hook<CallServerMovePacked_t> CallServerMovePacked(Xors("CallServerMovePacked"), Xors("40 53 55 56 57 41 56 48 81 EC D0 00 00 00 48 8B 05 ?? ?? ?? ?? 48 33 C4 48 89 84 24 C0 00 00 00 48"), CallServerMovePacked_f);

    typedef void(*ConsoleCommand_t)(UConsole* _this, FString* _command);
    void ConsoleCommand_f(UConsole* _this, FString* _command);
    inline Hook<ConsoleCommand_t> ConsoleCommand(Xors("ConsoleCommand"), Xors("48 89 5C 24 10 48 89 74 24 18 48 89 7C 24 20 41 56 48 83 EC 40 4C 8B F2"), ConsoleCommand_f);

    typedef void (*UpdateRotation_t)(AShooterPlayerController* _this,float DeltaTime);
    void UpdateRotation_f(AShooterPlayerController* _this, float DeltaTime);
    inline Hook<UpdateRotation_t> UpdateRotation(Xors("UpdateRotation"), Xors("48 8B C4 55 53 56 57 48 8D A8 C8"), UpdateRotation_f);

    typedef FRotator* (*CameraGetRotationForPawnMovementInput_t)(AShooterPlayerCameraManager* _this, FRotator* result, APrimalCharacter* forPawn, FRotator* InControlRotation);
    FRotator* CameraGetRotationForPawnMovementInput_f( AShooterPlayerCameraManager* _this, FRotator* result, APrimalCharacter* forPawn, FRotator* InControlRotation);
    inline Hook<CameraGetRotationForPawnMovementInput_t> CameraGetRotationForPawnMovementInput(Xors("CameraGetRotationForPawnMovementInput"), Xors("41 0F 10 01 48 8B C2 F2"), CameraGetRotationForPawnMovementInput_f);

    typedef void (*PhysicsRotation_t)(UCharacterMovementComponent* _this, float DeltaTime);
    void PhysicsRotation_f(UCharacterMovementComponent* _this, float DeltaTime);
    inline Hook<PhysicsRotation_t> PhysicsRotation(Xors("PhysicsRotation"), Xors("40 55 53 56 48 8D AC 24 70 FF FF FF 48 81 EC 90 01 00 00 44 0F 29 AC"), PhysicsRotation_f, 0x122);

    typedef void (*PlayDying_t)(APrimalCharacter* _this,float KillingDamage,FDamageEvent* DamageEvent,AController* Killer,AActor* DamageCauser);
    void PlayDying_f(APrimalCharacter* _this,float KillingDamage,FDamageEvent* DamageEvent,AController* Killer,AActor* DamageCauser);
    inline Hook<PlayDying_t> PlayDying(Xors("PlayDying"), Xors("40 55 57 41 54 48 8D AC 24 C0"), PlayDying_f, 0x29E);

    typedef void (*WeaponTraceForHits_t)(AShooterWeapon_InstantPenetrating* _this, TArray<FHitResult>* OutHitResults, TArray<bool>* OutIsEntryHit, FVector* StartTrace, FVector* EndTrace, bool a6);
	void WeaponTraceForHits_f(AShooterWeapon_InstantPenetrating* _this,TArray<FHitResult>* OutHitResults, TArray<bool>* OutIsEntryHit, FVector* StartTrace, FVector* EndTrace, bool a6);
	inline Hook<WeaponTraceForHits_t> WeaponTraceForHits(Xors("WeaponTraceForHits"), Xors("48 89 5C 24 10 48 89 6C 24 18 48 89 74 24 20 57 48 83 EC 50 8B"), WeaponTraceForHits_f, 0x1FE);

    typedef void (*StartUnequip_Implementation_t)(AShooterWeapon* _this);
    void StartUnequip_Implementation_f(AShooterWeapon* _this);
    inline Hook<StartUnequip_Implementation_t> StartUnequip_Implementation(Xors("StartUnequip_Implementation"), Xors("48 89 5C 24 10 48 89 74 24 18 57 48 83 EC 20 48 8B 01 48 8B F9"), StartUnequip_Implementation_f);

    typedef void (*SimulateInstantHit_Implementation_t)(AShooterWeapon_Instant* _this, FVector* ShotOrigin, FVector_NetQuantizeNormal* ShootDir, bool bForceOnLocal, int ShotIndex);
	void SimulateInstantHit_Implementation_f(AShooterWeapon_Instant* _this, FVector* ShotOrigin, FVector_NetQuantizeNormal* ShootDir, bool bForceOnLocal, int ShotIndex);
	inline Hook<SimulateInstantHit_Implementation_t> SimulateInstantHit_Implementation(Xors("SimulateInstantHit_Implementation"), Xors("48 8B C4 48 89 58 10 4C 89 40 18 55 56 57 41 54 41 55 41 56 41 57 48 8D 68 A9"), SimulateInstantHit_Implementation_f, 0x1F8);

    typedef void (*TickComponent_t)(UCharacterMovementComponent* _this, float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction);
	void TickComponent_f(UCharacterMovementComponent* _this, float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction);
	inline Hook<TickComponent_t> TickComponent(Xors("TickComponent"), Xors("48 8B C4 48 89 58 18 48 89 70 20 55 57 41 56 48 8D 68 A1 48 81 EC 00"), TickComponent_f, 0x7C);

    //typedef void (*ClientFillNetworkMoveData_t)(FPrimalCharacterNetworkMoveData* _this, const FSavedMove_Character* ClientMove, FCharacterNetworkMoveData::ENetworkMoveType MoveType);
    //void ClientFillNetworkMoveData_f(FPrimalCharacterNetworkMoveData* _this, const FSavedMove_Character* ClientMove, FCharacterNetworkMoveData::ENetworkMoveType MoveType);
    //inline Hook<ClientFillNetworkMoveData_t> ClientFillNetworkMoveData(Xors("ClientFillNetworkMoveData"), Xors("48 89 5C 24 08 57 48 83 EC 20 48 8B DA 48 8B F9 E8 ?? ?? ?? ?? 0F 10 83 68"), ClientFillNetworkMoveData_f, 0x4E);

}

bool InitEngine();
bool InitModules();
