#pragma once

// Dumped with Dumper-7!


namespace CG
{

class AWeapC4_C : public AShooterWeapon_Placer
{
public:
	TArray<class UStaticMesh*>                   Nanite_Meshes_3P;                                  // 0x10C8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient, SubobjectReference)


    inline static UClass* StaticClass()
    {
        static UClass* Class = 0;
        if (!Class)
            Class = FindObjectSingle<UClass*>(Xors(L"/Game/PrimalEarth/CoreBlueprints/Weapons/WeapC4.WeapC4_C"));

        return Class;
    }
};

}


