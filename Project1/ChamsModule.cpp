#include "pch.h"
#include "ChamsModule.h"
std::vector<UMaterialInterface*> ChamsModule::Materials = {};
UMaterial* ChamsModule::Material;
bool ChamsModule::OnModuleInit()
{
   //plog(Xors("Initializing ChamsModule"));
    return true;
}
bool ChamsModule::OnActorModule(CurrentActor* Current)
{
    return false;
}
bool ChamsModule::ModuleRequirements(CurrentActor* Current)
{
    if (!Current)
        return false;
    return true;
}
// Shield / Fab
// Material M_Artifact_tekbits01.M_Artifact_tekbits01 // Max
// Material: Material M_Corrupted_Blood_subUV.M_Corrupted_Blood_subUV // opaque
// MaterialInstanceConstant DodoIncinerateFeathers_MIC.DodoIncinerateFeathers_MIC // any
// Material M_ColorPicker.M_ColorPicker // Max / opaque
// MaterialInstanceConstant UI_Background_HighOpacity_MIC.UI_Background_HighOpacity_MIC // any
// MaterialInstanceConstant MI_ColorPicker_Eye.MI_ColorPicker_Eye // any

// Colorable Materials
// MaterialInstanceConstant MI_OceanLightPetalsB.MI_OceanLightPetalsB - "Color"
// Material M_SolidColor.M_SolidColor - "Color"
// Material StructurePreviewMaterial.StructurePreviewMaterial - "ColorParam"
// MaterialInstanceConstant StructurePreviewMat_Masked.StructurePreviewMat_Masked - "ColorParam"

//Not Loaded
// Material tek_pad_emissive_mat.tek_pad_emissive_mat
// MaterialInstanceConstant MI_ObsidianRock_02.MI_ObsidianRock_02 // most of the times
// Material StructurePreviewMaterial.StructurePreviewMaterial

std::vector<std::string> ChamsModule::MaterialNames = {
Xors("MaterialInstanceConstant MIC_HLNA_TextureAnim_Eye2.MIC_HLNA_TextureAnim_Eye2"), // sick black /white especially for fab
Xors("MaterialInstanceConstant MM_Tek_Metallic_MIC.MM_Tek_Metallic_MIC"), // sick blue with animation
Xors("Material tek_pad_emissive_mat.tek_pad_emissive_mat"), // sick blue with animation
Xors("Material MM_ASA_Foliage.MM_ASA_Foliage"), // black / green
Xors("Material MM_ASA_Simple.MM_ASA_Simple"), // almost same as above
Xors("Material Obelisk_TestV2.Obelisk_TestV2"), // black with grey hex
Xors("MaterialInstanceConstant MI_ObsidianRock_02.MI_ObsidianRock_02"),
Xors("Material M_SolidColor.M_SolidColor"),
Xors("Material StructurePreviewMat.StructurePreviewMat"),
Xors("MaterialInstanceConstant MI_Shared_Rocks_Lavaform.MI_Shared_Rocks_Lavaform"), // mud
Xors("MaterialInstanceConstant MI_lavaBubble.MI_lavaBubble"), // cool fab scope static only
Xors("MaterialInstanceConstant MI_LavaMeshParticle_NewEyeAdapt.MI_LavaMeshParticle_NewEyeAdapt"), // static lava static only
Xors("MaterialInstanceConstant MI_UmbrellaTree_Leaf.MI_UmbrellaTree_Leaf"), // leaf like green
Xors("MaterialInstanceConstant CliffControl_Mic.CliffControl_Mic"), // stone like
Xors("MaterialInstanceConstant Rock03_MossMic.Rock03_MossMic"), // valg / center moss stone
Xors("MaterialInstanceConstant MI_Center_CaveRocks_GlowFungus_Less.MI_Center_CaveRocks_GlowFungus_Less"), // silver stone
Xors("Material MM_ASA_Basic.MM_ASA_Basic"), // fully invisible
Xors("MaterialInstanceConstant MI_FirePot.MI_FirePot"), // lava like
Xors("MaterialInstanceConstant MI_CNR_LightSource_Crystal_A.MI_CNR_LightSource_Crystal_A"), // crystal with some light dots
Xors("MaterialInstanceConstant MI_Plant02_SM.MI_Plant02_SM"), // leaf
Xors("MaterialInstanceConstant MIC_CrystalMaster.MIC_CrystalMaster"), // crystal
Xors("MaterialInstanceConstant MI_Zamia_SM.MI_Zamia_SM"), // idk looks sick
Xors("MaterialInstanceConstant MI_OceanLightPetalsB.MI_OceanLightPetalsB"), // red & orange
Xors("MaterialInstanceConstant MI_ASA_Simple_Rock_NoMetallic.MI_ASA_Simple_Rock_NoMetallic"), // white silver glitter
Xors("MaterialInstanceConstant MI_LightSource_Crystal_A1.MI_LightSource_Crystal_A1"), // sick crystal / orange light
Xors("MaterialInstanceConstant MI_Coral_Big3_Emissive.MI_Coral_Big3_Emissive"), // blue / diamond like
Xors("MaterialInstanceConstant MI_OceanLightPetals.MI_OceanLightPetals"), // red / orange
Xors("MaterialInstanceConstant MI_OceanLightPetalsC.MI_OceanLightPetalsC"), // red / orange light
Xors("MaterialInstanceConstant MI_LightSource_Crystal_C1.MI_LightSource_Crystal_C1"), // crystal / orange light
Xors("MaterialInstanceConstant MI_Coral_Smallpurple.MI_Coral_Smallpurple"), // purple coral
Xors("Material MM_Frozen.MM_Frozen"), // ice
Xors("MaterialInstanceConstant MIC_Owlce_Enemy.MIC_Owlce_Enemy"), // ice with red
Xors("MaterialInstanceConstant MIC_Owlce.MIC_Owlce"), // ice with blue
Xors("MaterialInstanceConstant Phiomia_Eye_Refractive.Phiomia_Eye_Refractive"), // brown dark red
Xors("MaterialInstanceConstant MIC_Stego_New.MIC_Stego_New"), // stego skin / blue/brown
Xors("MaterialInstanceConstant MI_ASA_Dino_Fur.MI_ASA_Dino_Fur"), // sick animation / all black
Xors("MaterialInstanceConstant Pegomastax_Fur_MIC.Pegomastax_Fur_MIC"), // bone like with animation
Xors("MaterialInstanceConstant Raptor_new_Feather_MIC.Raptor_new_Feather_MIC"), // bone like in purple with animation
Xors("MaterialInstanceConstant Tek_gloves_Female_Colorize_MIC.Tek_gloves_Female_Colorize_MIC"), // tek / gray
Xors("MaterialInstanceConstant MI_Clothing_Tek.MI_Clothing_Tek"), // gray/purple with numbers
Xors("MaterialInstanceConstant Tek_helmet_Female_Colorize_MIC.Tek_helmet_Female_Colorize_MIC"), // purple / black
Xors("MaterialInstanceConstant TransparentRiotShield_glass_MIC.TransparentRiotShield_glass_MIC"), // white translucent glass
Xors("MaterialInstanceConstant C4Detonator_Colorize_MIC.C4Detonator_Colorize_MIC"), // red / black
Xors("MaterialInstanceConstant CompoundBow_Colorize_MIC.CompoundBow_Colorize_MIC"), // gray / black
Xors("MaterialInstanceConstant ElectronicBinoculars_Emissive_Colorize_MIC.ElectronicBinoculars_Emissive_Colorize_MIC"), // silver / black
Xors("Material M_Cable.M_Cable"), // matte black only opaque
Xors("Material M_VertexDensityViz.M_VertexDensityViz"), // trippy effect / blue has parameters
Xors("Material MM_Liquid_SubSurface.MM_Liquid_SubSurface"), // solid black / alot of parameters
Xors("Material BM_Weapons_glow_NIM.BM_Weapons_glow_NIM"), // white pulsating / has params only opaque
Xors("Material M_Corrupted_Blood_subUV.M_Corrupted_Blood_subUV"), // purple / black only static
Xors("Material M_Artifact_tekbits01.M_Artifact_tekbits01"), // black / white only static
Xors("MaterialInstanceConstant HatchetEffectStoneV01_MIC.HatchetEffectStoneV01_MIC"), // stone
Xors("MaterialInstanceConstant DesertEffectStoneLight_MIC.DesertEffectStoneLight_MIC"), // sand
Xors("Material MM_Structure.MM_Structure"), // gray but has 120 parameters so might be good to change
Xors("Material M_EyeRefractive.M_EyeRefractive"), // ITS WATCHING
Xors("Material MM_Tek.MM_Tek"), // colorful tiles  160 parameters
Xors("Material MM_ASA_Equipment.MM_ASA_Equipment"), // gray tiles with text / some purple
Xors("MaterialInstanceConstant DodoIncinerateFeathers_MIC.DodoIncinerateFeathers_MIC"), // black / red nice shield static only
Xors("MaterialInstanceConstant StructurePreviewMat_Masked.StructurePreviewMat_Masked"), // colorable / has alot of params
Xors("MaterialInstanceConstant MI_Tek.MI_Tek"), // silver / black / has params
Xors("MaterialInstanceConstant MIC_OtterPearl.MIC_OtterPearl"), // silica pearl
Xors("MaterialInstanceConstant Particle_MM_Dino_NoMetallic_Colorized_MIC2.Particle_MM_Dino_NoMetallic_Colorized_MIC2"), // hella colors
Xors("MaterialInstanceConstant MM_Equipment_NoMetallic_Colorized_MIC.MM_Equipment_NoMetallic_Colorized_MIC"), // hella colors lil darker
Xors("MaterialInstanceConstant MI_Tek_Artifact.MI_Tek_Artifact"), // silver / black
Xors("MaterialInstanceConstant PushPin_MIC.PushPin_MIC"), // red / blue / silver NICE
Xors("MaterialInstanceConstant MI_AlienTech_Pack.MI_AlienTech_Pack"), // green / silver
Xors("MaterialInstanceConstant MI_AlienTech_Massive.MI_AlienTech_Massive"), // green / silver 2
Xors("MaterialInstanceConstant MI_Queen.MI_Queen"), // red /silver
Xors("MaterialInstanceConstant ArtifactoftheCunning_MIC.ArtifactoftheCunning_MIC"), // red /sivler
Xors("MaterialInstanceConstant ArtifactOfTheBrute_MIC.ArtifactOfTheBrute_MIC"), // purple / black
Xors("MaterialInstanceConstant MI_Obelisk_TestV2.MI_Obelisk_TestV2"), // black / grey
Xors("Material M_ColorPicker.M_ColorPicker"), // colorful static only
Xors("Material MM_ASA_CenterRock.MM_ASA_CenterRock"), // black with white hex has parameters
Xors("MaterialInstanceConstant MI_Tek_Glass.MI_Tek_Glass"), // dark stained very see through
Xors("MaterialInstanceConstant MI_Mystlik2.MI_Mystlik2"), // green / orange
Xors("MaterialInstanceConstant MIC_OtterPearl_Black.MIC_OtterPearl_Black"), // black with gray dust
Xors("MaterialInstanceConstant Map_pagesTop_MIC3.Map_pagesTop_MIC3"), // barely visible translucent with blue dots
Xors("MaterialInstanceConstant UI_Background_HighOpacity_MIC.UI_Background_HighOpacity_MIC"), // cool shield
Xors("MaterialInstanceConstant MI_ColorPicker_Eye.MI_ColorPicker_Eye"), // cool shield
Xors("Material MM_GEN_SpiderEgg.MM_GEN_SpiderEgg"), // gray / silver has params
Xors("Material M_ProjectionParticles.M_ProjectionParticles"), // can maybe color
Xors("MaterialInstanceConstant Glass_MIC.Glass_MIC"), // glass
Xors("MaterialInstanceConstant MI_Water_SingleLayer_Quiet_Caustics.MI_Water_SingleLayer_Quiet_Caustics"), // water shield
Xors("MaterialInstanceConstant InsectoidEgg_Colorized_MIC_Inst_Scorpion.InsectoidEgg_Colorized_MIC_Inst_Scorpion"), // red / black
Xors("MaterialInstanceConstant MI_Shastasaurus_Saddle_SubAttachment.MI_Shastasaurus_Saddle_SubAttachment"), // silver / black
Xors("MaterialInstanceConstant MM_Structure_Metallic_Colorized_MIC.MM_Structure_Metallic_Colorized_MIC"), // Colorful
Xors("Material M_ProjectionGlow.M_ProjectionGlow"), // fully black can maybe color
Xors("MaterialInstanceConstant TekSword_Colorize_MIC.TekSword_Colorize_MIC"), // blue / gray
Xors("Material MM_HLNA_TextureAnim_Eye.MM_HLNA_TextureAnim_Eye"), // blue / black
Xors("MaterialInstanceConstant MIC_HostSystem.MIC_HostSystem"), // translucent with orange shapes static only
Xors("MaterialInstanceConstant MI_Shasta_Console_HLNAEYE2.MI_Shasta_Console_HLNAEYE2"), // same in blue
Xors("MaterialInstanceConstant MIC_PowerCoreRing.MIC_PowerCoreRing"), // same in blue/red
Xors("MaterialInstanceConstant MM_TekDoor_MIC.MM_TekDoor_MIC"), // silver/wavy only static
Xors("MaterialInstanceConstant TekDoor_BASEMIC.TekDoor_BASEMIC"), // rgb tek door effect only static
Xors("Material M_Obelisk_Glow.M_Obelisk_Glow"), // orange glow static only
Xors("MaterialInstanceConstant MI_Obelisk_Body_B.MI_Obelisk_Body_B"), // purple / black static only
Xors("MaterialInstanceConstant MM_hair_ASA_HF_Eyelashes.MM_hair_ASA_HF_Eyelashes"), // black / dark gray
Xors("MaterialInstanceConstant MM_hair_ASA_HF_Eyes.MM_hair_ASA_HF_Eyes"), // weird effect non static only
Xors("MaterialInstanceConstant MM_hair_ASA_HF_Default.MM_hair_ASA_HF_Default"), // weird hair
Xors("MaterialInstanceConstant Terminal_Blue_MIC.Terminal_Blue_MIC"), // blue / gray
};

int CurrentMaterial = 0;
int CurrentColorName = 0;
int oldIndex = -1;

void ChamsModule::PostActors()
{

}

void ChamsModule::CreateAndApplyMaterial(USkeletalMeshComponent* Mesh, FLinearColor Col)
{
    if (!Material)
        Material = UObject::FindObject<UMaterial>(Xors("Material M_SolidColor.M_SolidColor"));

    if (!Material)
        return;

    Material->BlendMode = EBlendMode(settings::user::MaterialBlendMode.Val);
    Material->bDisableDepthTest = true;
    Material->Wireframe = settings::user::ChamsWireFrame.Enabled;
    Material->bAllowDevelopmentShaderCompile = false;

    UMaterialInstanceDynamic* DynamicMat = globals::libs::MaterialLib->STATIC_CreateDynamicMaterialInstance(globals::local::PC, Material, FName(), EMIDCreationFlags::None);
    DynamicMat->K2_CopyMaterialInstanceParameters(Material, false);
    DynamicMat->Parent = Material;

    if (!DynamicMat)
        return;

    FName ColorParam;
    switch (CurrentColorName)
    {
    case 0: ColorParam = globals::libs::StringLib->STATIC_Conv_StringToName(Xors(L"Color")); break;
    case 1: ColorParam = globals::libs::StringLib->STATIC_Conv_StringToName(Xors(L"ColorParam")); break;
    case 2: ColorParam = globals::libs::StringLib->STATIC_Conv_StringToName(Xors(L"BaseColor")); break;
    case 3: ColorParam = globals::libs::StringLib->STATIC_Conv_StringToName(Xors(L"EmissiveColor")); break;
    }
    DynamicMat->SetVectorParameterValue(ColorParam, Col);

    if (!Mesh || !DynamicMat)
        return;

    for (int x = 0; x < Mesh->GetNumMaterials(); x++)
    {
        Mesh->SetMaterial(x, DynamicMat);
    }
}

void ChamsModule::StaticCreateAndApplyMaterial(UStaticMeshComponent* Mesh, FLinearColor Col)
{
    if (!Material)
    {
        Material = UObject::FindObject<UMaterial>(Xors("Material M_SolidColor.M_SolidColor"));
    }

    if (!Material)
        return;

    Material->BlendMode = EBlendMode(settings::user::MaterialBlendMode.Val);
    Material->bDisableDepthTest = true;
    Material->Wireframe = settings::user::ChamsWireFrame.Enabled;
    auto DynamicMat = globals::libs::MaterialLib->STATIC_CreateDynamicMaterialInstance(globals::local::PC, Material, FName(), EMIDCreationFlags::None);
    DynamicMat->K2_CopyMaterialInstanceParameters(Material, false);
    DynamicMat->Parent = Material;

    if (!DynamicMat)
        return;

    auto ColorParam = globals::libs::StringLib->STATIC_Conv_StringToName(Xors(L"Color"));
    DynamicMat->SetVectorParameterValue(ColorParam, Col);
   //ColorParam = globals::libs::StringLib->STATIC_Conv_StringToName(Xors(L"ColorParam"));
   //DynamicMat->SetVectorParameterValue(ColorParam, Col);
   //ColorParam = globals::libs::StringLib->STATIC_Conv_StringToName(Xors(L"BaseColor"));
   //DynamicMat->SetVectorParameterValue(ColorParam, Col);
    if (!Mesh || !DynamicMat)
        return;

    for (int x = 0; x < Mesh->GetNumMaterials(); x++)
    {
        Mesh->SetMaterial(x, DynamicMat);
    }
}

void ChamsModule::StaticCreateAndApplyMaterial(UStaticMeshComponent* Mesh, FLinearColor Col, UMaterial* material, FString ColorParamName, bool DisableDepthTest)
{
    if (!material || !Mesh)
        return;

    material->bDisableDepthTest = DisableDepthTest;
    auto DynamicMat = globals::libs::MaterialLib->STATIC_CreateDynamicMaterialInstance(globals::local::PC, material, FName(), EMIDCreationFlags::None);
    DynamicMat->K2_CopyMaterialInstanceParameters(material, false);
    DynamicMat->Parent = material;

    if (!DynamicMat)
        return;

    auto ColorParam = globals::libs::StringLib->STATIC_Conv_StringToName(ColorParamName);
    DynamicMat->SetVectorParameterValue(ColorParam, Col);
    if (!Mesh || !DynamicMat)
        return;

    for (int x = 0; x < Mesh->GetNumMaterials(); x++)
    {
        Mesh->SetMaterial(x, DynamicMat);
    }
}

std::unique_ptr<ChamsModule> ChamsModule::CreateModule()
{
    return std::make_unique<ChamsModule>();
}