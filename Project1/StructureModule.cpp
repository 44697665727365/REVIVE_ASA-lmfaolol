#include "pch.h"
#include "StructureModule.h"
#include "ChamsModule.h"
#include "StructureAutoModule.h"

std::vector<Structure> StructureModule::VecStructures;
std::vector<Structure> StructureModule::VecMultiStructures;
std::vector<uint64_t> classes;
std::vector<std::string> foundStructs = {};
bool foundfound = false;

void StructureModule::InitStructureMap()
{
	VecStructures =
	{
		{ StructureType::SleepingBag, Xors(L"Sleeping Bag"), nullptr,0 },
		{ StructureType::Bed, Xors(L"Simple Bed"), nullptr ,1},
		{ StructureType::BunkBed, Xors(L"Bunk Bed"), nullptr ,2},
		{ StructureType::BunkBed, Xors(L"Tek Sleeping Pod"), nullptr ,2},
		{ StructureType::BunkBed, Xors(L"Standing Tek Sleeping Pod"), nullptr, 2 },
		{ StructureType::SmallTeleporter, Xors(L"Small Tek Teleporter"), nullptr ,3},
		{ StructureType::MediumTeleporter, Xors(L"Medium Tek Teleporter"), nullptr ,4},
		{ StructureType::LargeTeleporter, Xors(L"Large Tek Teleporter"), nullptr ,5},
		{ StructureType::AutoTurret, Xors(L"Auto Turret"), nullptr ,6},
		{ StructureType::HeavyTurret, Xors(L"Heavy Auto Turret"), nullptr ,7},
		{ StructureType::TekTurret, Xors(L"Tek Turret"), nullptr ,8},
		{ StructureType::SmallCropPlot, Xors(L"Small Crop Plot"), nullptr ,9},
		{ StructureType::MediumCropPlot, Xors(L"Medium Crop Plot"), nullptr ,10},
		{ StructureType::LargeCropPlot, Xors(L"Large Crop Plot"), nullptr ,11},
		{ StructureType::ElectricalGenerator, Xors(L"Power Generator"), nullptr ,12},
		{ StructureType::TekGenerator, Xors(L"Tek Generator"), nullptr ,13},
		{ StructureType::TekTransmitter,Xors(L"Tek Transmitter"),nullptr,14},
		{ StructureType::CryoFridge, Xors(L"Cryofridge"), nullptr ,15},
		{ StructureType::CloningChamber, Xors(L"Tek Cloning Chamber"), nullptr ,16},
		{ StructureType::VacuumCompartment, Xors(L"Vacuum Compartment"), nullptr ,17},
		{ StructureType::SmallStorageBox, Xors(L"Storage Box"), nullptr ,24},
		{ StructureType::LargeStorageBox, Xors(L"Large Storage Box"), nullptr ,25},
		{ StructureType::Vault, Xors(L"Vault"), nullptr ,26},
		{ StructureType::Refrigerator, Xors(L"Refrigerator"), nullptr ,27},
		{ StructureType::AirConditioner, Xors(L"Air Conditioner"), nullptr ,28},
		{ StructureType::DedicatedStorage, Xors(L"Tek Dedicated Storage"), nullptr ,29},
		{ StructureType::TekForceField, Xors(L"Tek Forcefield"), nullptr ,30},
		{ StructureType::Replicator, Xors(L"Tek Replicator"), nullptr ,31},
		{ StructureType::Fabricator, Xors(L"Fabricator"), nullptr ,32},
		{ StructureType::Smithy, Xors(L"Smithy"), nullptr ,33},
		{ StructureType::MortarAndPestle, Xors(L"Mortar and Pestle"), nullptr ,34},
		{ StructureType::ChemistryBench, Xors(L"Chemistry Bench"), nullptr ,35},
		{ StructureType::IndustrialForge, Xors(L"Industrial Forge"), nullptr ,36},
		{ StructureType::IndustrialGrill, Xors(L"Industrial Grill"), nullptr ,37},
		{ StructureType::IndustrialCookingPot, Xors(L"Industrial Cooker"), nullptr ,38},
		{ StructureType::Grinder, Xors(L"Industrial Grinder"), nullptr ,39},
		{ StructureType::CookingPot, Xors(L"Cooking Pot"), nullptr ,40},
		{ StructureType::C4Charge, Xors(L"C4 Charge"), nullptr ,41},
		{ StructureType::BearTrap, Xors(L"Bear Trap"), nullptr ,42},
		{ StructureType::LargeBearTrap, Xors(L"Large Bear Trap"), nullptr ,43},
		{ StructureType::WaterMine, Xors(L"Underwater Mine"), nullptr ,44},
		{ StructureType::SupplyDrop, Xors(L"Supply Crate"), nullptr,45 },
		{ StructureType::CaveDrop, Xors(L"Loot Crate"), nullptr ,46},
		{ StructureType::Artifact, Xors(L"Artifact"), nullptr ,47},
		{ StructureType::BeaverDam, Xors(L"Giant Beaver Dam"), nullptr ,48},
		{ StructureType::BeeHive, Xors(L"Bee Hive"), nullptr ,49},
		{ StructureType::Note,Xors(L"Note"),nullptr,50},
		{ StructureType::ChargeNode,Xors(L"Charge Node"),nullptr,51},
		{ StructureType::ChargeNode,Xors(L"Hypercharge Node"),nullptr,51},
		{ StructureType::ItemCache,Xors(L"Item Cache"),nullptr,52},
		{ StructureType::ItemCache,Xors(L"Dedicated Storage Cache"),nullptr,52},
		{ StructureType::CliffPlat,Xors(L"Stone Tree Platform"),nullptr,53},
		{ StructureType::CliffPlat,Xors(L"Stone Small Cliff Platform"),nullptr,53},
		{ StructureType::CliffPlat,Xors(L"Stone Medium Cliff Platform"),nullptr,53},
		{ StructureType::CliffPlat,Xors(L"Stone Large Cliff Platform"),nullptr,53},
		{ StructureType::CliffPlat,Xors(L"Wood Small Cliff Platform"),nullptr,53},
		{ StructureType::CliffPlat,Xors(L"Wood Medium Cliff Platform"),nullptr,53},
		{ StructureType::CliffPlat,Xors(L"Wood Large Cliff Platform"),nullptr,53},
		{ StructureType::CliffPlat,Xors(L"Metal Small Cliff Platform"),nullptr,53},
		{ StructureType::CliffPlat,Xors(L"Metal Medium Cliff Platform"),nullptr,53},
		{ StructureType::CliffPlat,Xors(L"Metal Large Cliff Platform"),nullptr,53},
		{ StructureType::Nest,Xors(L"Rock Drake Nest"),nullptr,54},
		{ StructureType::PlantX, Xors(L"Plant Species X"), nullptr, 55 },
		{ StructureType::LinkedStorageBox, Xors(L"Linked Storage Box"), nullptr, 56 },
		{ StructureType::TeslaCoil, Xors(L"Tesla Coil"), nullptr, 57 },

		////////////////////////////////////Random ones we dont care about
		{ StructureType::NONE, Xors(L"Terminal"),nullptr,0},
		{ StructureType::NONE, Xors(L"Tribute Terminal"),nullptr,0},
		{ StructureType::NONE, Xors(L"Small Crop Plot"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Single Panel Flag"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Refining Forge"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Training Dummy"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Gravestone"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Wood Signpost"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Preserving Bin"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Compost Bin"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Campfire"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Stone Water Intake"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Tek Quarter Wall"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Wood Cage"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Wardrums"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Stone Water Tap"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Wood Spike Wall"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Painting Canvas"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Rocket Turret"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Rope Ladder"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Metal Spike Wall"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Elevator Track"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Artifact Pedestal"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Wood Table"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Wood Chair"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Small Elevator Platform"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Tripwire Alarm Trap"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Metal Water Tank"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Display Case"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Fireplace"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Water Tank"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Catapult Turret"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Cannon"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Large Crop Plot"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Toilet"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Small Decor Box"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Small Metal Signpost"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Wood Bench"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Medium Elevator Platform"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Large Elevator Platform"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Omnidirectional Lamppost"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Remote Keypad"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Tek Trough"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Feeding Trough"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Spider Flag"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Standing Torch"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Red Obelisk Terminal"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Metal Water Intake"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Artifact Container"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Gorilla Flag"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Train Platform Car"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Drawing Paper"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Medium Decor Box"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Fancy Armchair"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Large Decor Box"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Wind Turbine"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Coffin"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Plant Pot"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Upright Piano"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Tent"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Wooden Scaffold"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Swivel Stool"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Train Track (Straight Incline)"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Train Track (Curved Left Level)"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Train Track (Split Straight/Left)"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Train Track (Level/Decline Transistion)"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Train Track (Split Straight/Right)"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Train Track (Curved Right Level)"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Train Track (Curved Right Incline)"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Train Track (Level/Incline Transistion)"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Train Track (Straight Level)"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Train Track (Curved Left Incline)"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Mirror"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Poker Table"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Vessel"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Oil Pump"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Water Well"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Saloon Chair"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Tickle Chicken Bottle"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Wild Dodo Bottle"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Scorched Gut Bottle"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Northen Comfort Bottle"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Wyvern Nest"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Wood Single Track"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Wood Track 2-Way Split"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Wood Track 2-Way Merge"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Wood Track 3-Way"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Train Track (Short Level)"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Train Track (Connector)"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Metal Water Tap"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Tek Vacuum Gate"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Wall Torch"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Trophy Wall-Mount"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Wood Roof Corner"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Oil Lamppost"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Droopy Holiday Lights"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Metal Wall Sign"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Lamppost"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Gigantoraptor Nest"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Green Obelisk Terminal"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Double Holiday Lights"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Oasis Resources"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Ballista Turret"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Boss Loot Gamma"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Fancy Sofa"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Saloon Table"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Barrel Storage"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Bookshelf"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Holiday Tree"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Manticore Flag"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Vacuum Compartment Moonpool"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Medium Crop Plot"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Beer Barrel"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Metal Roof Corner"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Town Bell"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Oil Chandelier"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Treasure Chest"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Hanging Sign"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Snowman"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Blue Obelisk Terminal"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Minigun Turret"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Dragon Flag"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Single Holiday Lights"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Tripwire Narcotic Trap"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Metal Tree Platform"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Gift Box"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Water Reservoir"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Submarine Terminal"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Windmill"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Tree Sap Tap"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Wood Tree Platform"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Metal Ocean Platform"), nullptr, 0 },
		{ StructureType::NONE, Xors(L""), nullptr, 0 }, 
		{ StructureType::NONE, Xors(L"War Map"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Tek Terminal"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Natural Zipline"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Gas Vein"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Shag Rug"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Fish Basket"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Wood Elevator Track"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Small Wood Elevator Platform"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Medium Wood Elevator Platform"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Large Wood Elevator Platform"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Gas Collector"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Zipline Anchor"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Item Container"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"SIR-5rM8 Docking Pad"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Embryo Incubator"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Clockface"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Industrial Preserving Bin"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Library Storage"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Steam Forge,"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Spotlight"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Tinkering Desk"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Steam Forge"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Wall Steam Light"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Desk Steam Light"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Discovery Bed"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Ground Steam Light"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Ceiling Steam Light"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Deployable Rope Ladder"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Charge Lantern"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Plant Species Z"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Gene Storage"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Rockwell Flag"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Bank"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Double Door"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Mission Board"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Structure"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Spin the Wheel"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Wardrobe"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Oil Wall Lamp"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Contains a random Item from an assortment of loot. Try your luck and get the best armor!"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Contains a random Item from an assortment of loot. Try your luck and get the best resources!"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Contains a random Item from an assortment of loot. Try your luck and get the best weapon!"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Contains a random Item from an assortment of loot. Try your luck and get the best consumables!"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Contains a random Item from an assortment of loot. Try your luck and get the best saddle!"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Contains a random Item from an assortment of loot. Try your luck and get the best creature!"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Poker Table (High Stakes 50/100)"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Poker Table (Mid Stakes 25/50)"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Poker Table (Low Stakes 10/20)"), nullptr, 0 },
		{ StructureType::NONE, Xors(L"Poker Table (Micro Stakes 5/10)"), nullptr, 0 },
	};
}

bool StructureModule::OnModuleInit()
{
	CreateStructureVariants({ StructureType::Foundation,Xors(L"Thin Pillar"),nullptr,18 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::NONE,Xors(L"Thin Beam"),nullptr,0 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::NONE,Xors(L"Staircase"),nullptr,0 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::NONE,Xors(L"Trapdoor"),nullptr,0 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::NONE,Xors(L"Ramp"),nullptr,0 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::NONE,Xors(L"Gate"),nullptr,0 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::Foundation,Xors(L"Pillar"),nullptr,18 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::Wall,Xors(L"Large Wall"),nullptr,19 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::Wall,Xors(L"Sloped Wall"),nullptr,19 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::NONE,Xors(L"Short Doorway"),nullptr,0 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::NONE,Xors(L"Billboard"),nullptr,0 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::Foundation, Xors(L"Foundation"), nullptr ,18 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::Foundation, Xors(L"Triangle Foundation"), nullptr ,18 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::Wall, Xors(L"Wall"), nullptr ,19 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::Door, Xors(L"Door"), nullptr ,20 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::DoorFrame, Xors(L"Doorway"), nullptr ,21 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::Ceiling, Xors(L"Ceiling"), nullptr ,22 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::Ceiling, Xors(L"Triangle Ceiling"), nullptr ,22 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::FenceFoundation, Xors(L"Fence Foundation"), nullptr ,23 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::NONE,Xors(L"Beam"),nullptr,0 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::NONE,Xors(L"Ladder"),nullptr,0 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::NONE,Xors(L"Railing"),nullptr,0 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::DoorFrame,Xors(L"Secret Doorway"),nullptr,21 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::DoorFrame,Xors(L"Double Doorway"),nullptr,21 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::Door,Xors(L"Double Door"),nullptr,20 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::Door,Xors(L"Short Door"),nullptr,20 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::NONE,Xors(L"Stairs"),nullptr,0 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::NONE,Xors(L"Fence Support"),nullptr,0 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::Wall,Xors(L"Window Wall"),nullptr,19 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::Ceiling,Xors(L"Quarter Ceiling"),nullptr,22 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::Door,Xors(L"Cellar Door"),nullptr,20 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::NONE,Xors(L"Behemoth Gate"),nullptr,0 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::Foundation,Xors(L"Behemoth Gateway"),nullptr,18}, &VecMultiStructures);
	CreateStructureVariants({ StructureType::Door,Xors(L"Large Cellar Door"),nullptr,20 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::NONE,Xors(L"Hatchframe"),nullptr,0 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::Foundation,Xors(L"Gateway"),nullptr,18 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::Door,Xors(L"Behemoth Cellar Door"),nullptr,20 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::NONE,Xors(L"Roof"),nullptr,0 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::Ceiling,Xors(L"Triangle Roof"),nullptr,22 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::Wall,Xors(L"Quarter Wall"),nullptr,19 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::NONE,Xors(L"Window"),nullptr,0 }, &VecMultiStructures);
	CreateStructureVariants({ StructureType::Foundation,Xors(L"Quarter Foundation"),nullptr,18 }, &VecMultiStructures);
    InitStructureMap();
    return true;
}

bool StructureModule::OnActorModule(CurrentActor* Current)
{
	APrimalStructure* str = (APrimalStructure*)Current->Actor;

	if (!str || !str->Class)
		return false;

    uint64_t cls = (uint64_t)str->Class;
    Structure* currentStructure = StructureMap[cls];

    if (!currentStructure && cls) 
	{
		bool found = false;

		if (!str->DescriptiveName.IsValid())
			return false;

		for (int i = 0; i < VecStructures.size();i++)
		{
			std::wstring wstr = str->DescriptiveName.ToWString();

			if (wstr == VecStructures[i].descName)
			{
				StructureMap[cls] = &VecStructures[i];
				found = true;
				break;
			}
		}

		if (!found)
		{
			for (int i = 0; i < VecMultiStructures.size(); i++)
			{
				if (VecMultiStructures[i].descName.empty() || !VecMultiStructures[i].descName.c_str())
					continue;

				std::wstring wstr = str->DescriptiveName.ToWString();

				if (wstr == VecMultiStructures[i].descName)
				{
					StructureMap[cls] = &VecMultiStructures[i];
					found = true;
					break;
				}
			}
		}

		if (!found)
		{
			foundfound = false;

			for (int i = 0; i < foundStructs.size();i++)
			{
				if (foundStructs[i] == str->DescriptiveName.ToString())
				{
					foundfound = true;
					break;
				}
			}

			if (!foundfound)
			{
				foundStructs.push_back(str->DescriptiveName.ToString());
				
				if (settings::menu::ShowStructureMissingAlerts.Enabled)
					Renderer::AddScreenMessage(Xors(L"Missing structure found! \nStructure name has been copied to clipboard,\nplease send it in the channel\nStructure: ") + str->DescriptiveName.ToWString(), { Renderer::GetCanvasSize().X / 2.f,Renderer::GetCanvasSize().Y * 0.1f }, { 1.4f,1.4f }, { 1.f, 0.f, 0.f, 1.f }, 10.f);

				std::wstring StructureNames = Xors(L"Missing: ");

				for (int i = 0; i < foundStructs.size(); i++)
				{
					StructureNames += std::wstring(foundStructs[i].begin(),foundStructs[i].end());
					StructureNames += Xors(L", ");
				}

				globals::local::PC->CopyStringToClipboard(StructureNames.c_str());
			}
		}
		
		return true;
    }

	if (!currentStructure || !Current || !Current->Actor)
		return false;

	StructureAutoModule::OnStructure(currentStructure, Current);

	if (currentStructure->type == StructureType::NONE)
		return true;

	Current->IsFriendly = str->TargetingTeam == globals::local::LP->TargetingTeam;

    StructureVar* var = Current->IsFriendly ? settings::teamStructure::TeamStructureVars[currentStructure->Index] : settings::enemyStructure::EnemyStructureVars[currentStructure->Index];

    if (!var) 
        return true;

	switch (currentStructure->type)
	{
		case StructureType::AutoTurret:
		{
			settings::autoMation::AutoTurretLoaded = true;
			break;
		}
		case StructureType::HeavyTurret:
		{
			settings::autoMation::HeavyTurretLoaded = true;
			break;
		}
		case StructureType::TekTurret:
		{
			settings::autoMation::TekTurretLoaded = true;
			break;
		}
		case StructureType::LargeCropPlot:
		{
			settings::autoMation::CropPlotLoaded = true;
			break;
		}
		case StructureType::MediumCropPlot:
		{
			settings::autoMation::CropPlotLoaded = true;
			break;
		}
		case StructureType::SmallCropPlot:
		{
			settings::autoMation::CropPlotLoaded = true;
			break;
		}
		case StructureType::ItemCache:
		{
			if (settings::misc::TransBag.Enabled && Current->IsFriendly)
			{
				ADeathItemCache_C* Cache = (ADeathItemCache_C*)Current->Actor;
				Cache->MyInventoryComponent->bIsTributeInventory = true;
				Cache->MyInventoryComponent->bHideTributeUploadDinosPanel = false;
			}

			break;
		}
		default:
		{
			break;
		}
	}

	if (!var->Enabled)
        return true;

	if (Current->IsFriendly && !settings::teamStructure::DrawTStructures.Enabled)
		return false;

	if (!Current->IsFriendly && !settings::enemyStructure::DrawEStructures.Enabled)
		return false;

    std::vector<std::wstring> strings;

    if (var->DrawName || var->Distance || var->TribeName || var->Slots) 
	{
		Current->Pos = str->K2_GetActorLocation();
			
		if (!Actors::PWTS(Current->Pos, Current->ScreenPos))
			return true;

		std::wstring nameStr;
		FLinearColor DrawColor = var->Color.Color;

		if (var->DrawName)
		{
			switch (currentStructure->type)
			{
				default:
				{
					nameStr = str->DescriptiveName.ToWString();
					break;
				}
				case StructureType::AutoTurret:
				{
					nameStr = Xors(L"AT ");
					break;
				}
				case StructureType::HeavyTurret:
				{
					nameStr = Xors(L"HT ");
					break;
				}
				case StructureType::TekTurret:
				{
					nameStr = Xors(L"TT ");
					break;
				}
				case StructureType::TeslaCoil:
				{
					nameStr = Xors(L"TC ");
					break;
				}
			}
		}

		if ((var->Slots || var->HideEmpty) && str->IsA(APrimalStructureItemContainer::StaticClass()))
		{
			APrimalStructureItemContainer* Container = (APrimalStructureItemContainer*)str;

			if (var->HideEmpty && Container->CurrentItemCount == 0)
				return false;

			std::wstring fmt;

			switch (currentStructure->type)
			{
				default:
				{
					fmt += Xors(L" [");
					fmt += std::to_wstring(Container->CurrentItemCount);
					fmt += Xors(L"/");
					fmt += std::to_wstring(Container->MaxItemCount);
					fmt += Xors(L"]");
					break;
				}
				case StructureType::DedicatedStorage:
				{
					std::wstring dedistring; 
					ABP_DedicatedStorage_C* dedi = (ABP_DedicatedStorage_C*)Container;
					dedistring += std::to_wstring(dedi->ResourceCount);
					strings.push_back(dedistring);
					break;
				}
				case StructureType::AutoTurret:
				{
					fmt += Xors(L" [");
					APrimalStructureTurret* turret = (APrimalStructureTurret*)Container;
					fmt += std::to_wstring(turret->NumBullets);
					fmt += Xors(L"B]");
					break;
				}
				case StructureType::HeavyTurret:
				{
					fmt += Xors(L" [");
					APrimalStructureTurret* turret = (APrimalStructureTurret*)Container;
					fmt += std::to_wstring(turret->NumBullets);
					fmt += Xors(L"B]");
					break;
				}
				case StructureType::TekTurret:
				{
					fmt += Xors(L" [");
					APrimalStructureTurret* turret = (APrimalStructureTurret*)Container;
					fmt += std::to_wstring(turret->NumBullets);
					fmt += Xors(L"B]");
					break;
				}
				case StructureType::TeslaCoil:
				{
					fmt += Xors(L" [");
					APrimalStructureTurret* turret = (APrimalStructureTurret*)Container;
					fmt += std::to_wstring(turret->NumBullets);
					fmt += Xors(L"B]");
					break;
				}
			}

			nameStr += fmt;
		}

		strings.push_back(nameStr);
        
		std::wstring fmt = Xors(L"");

		if (currentStructure->type == StructureType::AutoTurret || currentStructure->type == StructureType::HeavyTurret || currentStructure->type == StructureType::TekTurret || currentStructure->type == StructureType::TeslaCoil)
		{
			StructureExtraVar* SEV = (StructureExtraVar*)var;
			auto turret = (APrimalStructureTurret*)str;

			if (SEV->ExtraOption1)
			{
				switch (turret->AISetting)
				{
				case 0:
					fmt += Xors(L"All");
					break;
				case 1:
					fmt += Xors(L"PT");
					break;
				case 2:
					fmt += Xors(L"OP");
					break;
				case 3:
					fmt += Xors(L"OW");
					break;
				case 4:
					fmt += Xors(L"OD");
					break;
				case 5:
					fmt += Xors(L"PM");
					break;
				}
			}

			if (SEV->ExtraOption2)
			{
				switch (turret->RangeSetting)
				{
				case 0:
					fmt += Xors(L" Low");
					break;
				case 1:
					fmt += Xors(L" Medium");
					break;
				case 2:
					fmt += Xors(L" High");
					break;
				}
			}

			if (SEV->ExtraOption3 && (turret->NumBullets <= turret->NumBulletsPerShot))
				return false;

			if (!turret->bContainerActivated && SEV->ExtraOption6)
				return false;
			else if (!turret->bContainerActivated)
				DrawColor = FLinearColor(0.33f, 0.33f, 0.33f, 1.f);

			if (SEV->ExtraOption1 || SEV->ExtraOption2)
				strings.push_back(fmt);
		}

		if (var->TribeName)
			strings.push_back(str->OwnerName.ToWString());

		if (var->Distance)
		{
			std::wstring fmt1 = Xors(L"");

			Current->distance = (float)globals::local::LP->K2_GetActorLocation().Distance(Current->Pos);

			fmt1 += Xors(L" [");
			fmt1 += std::to_wstring(int(Current->distance / 100));
			fmt1 += Xors(L"m]");
			strings.push_back(fmt1);
		}

        Renderer::DrawMultilineTextWithSpacing(&strings, Current->ScreenPos, { 0.5f,0.5f }, DrawColor, true, true, { 0,0,0,0 }, 12);
    }

    if (var->Chams) 
	{
        switch (currentStructure->type)
        {
        default:
        {
            UStaticMeshComponent* staticMesh = str->MyStaticMesh;
            ChamsModule::StaticCreateAndApplyMaterial(staticMesh, var->Color.Color);
            break;
        }
        case StructureType::SupplyDrop:
        {
			ASupplyCrateBaseBP_C* drop = (ASupplyCrateBaseBP_C*)str;
            //ChamsModule::CreateAndApplyMaterial(drop->SkeletalMesh1, var->Color.Color);
            break;
        }
        case StructureType::CaveDrop:
        {
			ASupplyCrate_Cave_C* drop = (ASupplyCrate_Cave_C*)str;
			ChamsModule::CreateAndApplyMaterial(drop->SkeletalMesh1, var->Color.Color);
			break;
		}
        case StructureType::Artifact:
        {
			AArtifactCrate_Instantaneous_Alt_C* artifact = (AArtifactCrate_Instantaneous_Alt_C*)str;
			ChamsModule::CreateAndApplyMaterial(artifact->SkeletalMesh1, var->Color.Color);
			break;
		}
        case StructureType::TekGenerator:
        {
			AStorageBox_TekGenerator_C* generator = (AStorageBox_TekGenerator_C*)str;
			ChamsModule::CreateAndApplyMaterial(generator->SkeletalMesh1, var->Color.Color);
			break;
        }
        case StructureType::Replicator:
        {
			AStorageBox_TekReplicator_C* replicator = (AStorageBox_TekReplicator_C*)str;
            ChamsModule::CreateAndApplyMaterial(replicator->SkeletalMesh1, var->Color.Color);
            break;
        }
        case StructureType::TekTransmitter:
        {
			AStorageBox_TekTransmitter_C* transmitter = (AStorageBox_TekTransmitter_C*)str;
            ChamsModule::CreateAndApplyMaterial(transmitter->SkeletalMesh1, var->Color.Color);
            break;
        }
        case StructureType::TekForceField:
        {
			AStorageBox_TekShield_C* forceField = (AStorageBox_TekShield_C*)str;
			ChamsModule::CreateAndApplyMaterial(forceField->SkeletalMesh1, var->Color.Color);
			break;
        }
        case StructureType::AutoTurret:
        {
			AStructureTurretBaseBP_C* autoTurret = (AStructureTurretBaseBP_C*)str;
            ChamsModule::CreateAndApplyMaterial(autoTurret->SkeletalMesh1, var->Color.Color);
            break;
        }
        case StructureType::HeavyTurret:
        {
			AStructureTurretBaseBP_BaseHeavy_C* heavyTurret = (AStructureTurretBaseBP_BaseHeavy_C*)str;
            ChamsModule::CreateAndApplyMaterial(heavyTurret->SkeletalMesh1, var->Color.Color);
            break;
        }
        case StructureType::TekTurret:
        {
			AStructureTurretTek_C* tekTurret = (AStructureTurretTek_C*)str;
            ChamsModule::CreateAndApplyMaterial(tekTurret->SkeletalMesh1, var->Color.Color);
			break;
		}
        }
    }

    return false;
}

bool StructureModule::ModuleRequirements(CurrentActor* Current)
{
	if (!settings::enemyStructure::DrawEStructures.Enabled && !settings::teamStructure::DrawTStructures.Enabled)
		return false;

    if (Current && Current->Actor && Current->Type == ActorType::Structure) 
        return true;

    return false;
}

void StructureModule::PostActors()
{
	StructureAutoModule::PostActors();
}

std::unique_ptr<StructureModule> StructureModule::CreateModule()
{
    return std::make_unique<StructureModule>();
}

void StructureModule::CreateStructureVariants(Structure Struct, std::vector<Structure>* MultiStructures)
{
    Structure Thatch = Struct;
    std::wstring nameThatch = Xors(L"Thatch ");
    nameThatch += std::wstring(Struct.descName);
    Thatch.descName = nameThatch.c_str();

    Structure Wood = Struct;
    std::wstring nameWood = Xors(L"Wood ");
    nameWood += std::wstring(Struct.descName);
    Wood.descName = nameWood.c_str();

    Structure Stone = Struct;
    std::wstring nameStone = Xors(L"Stone ");
    nameStone += std::wstring(Struct.descName);
    Stone.descName = nameStone.c_str();
    
	Structure StoneR = Struct;
	std::wstring nameStoneR = Xors(L"Stone Reinforced ");
	nameStoneR += std::wstring(Struct.descName);
	StoneR.descName = nameStoneR.c_str();

    Structure Metal = Struct;
    std::wstring nameMetal = Xors(L"Metal ");
    nameMetal += std::wstring(Struct.descName);
    Metal.descName = nameMetal.c_str();

    Structure Tek = Struct;
    std::wstring nameTek = Xors(L"Tek ");
    nameTek += std::wstring(Struct.descName);
    Tek.descName = nameTek.c_str();

	Structure Adobe = Struct;
	std::wstring nameAdobe = Xors(L"Adobe ");
	nameAdobe += std::wstring(Struct.descName);
	Adobe.descName = nameAdobe.c_str();

	Structure Green = Struct;
	std::wstring nameGreen = Xors(L"Greenhouse ");
	nameGreen += std::wstring(Struct.descName);
	Green.descName = nameGreen.c_str();

    MultiStructures->push_back(Thatch);
    MultiStructures->push_back(Wood);
    MultiStructures->push_back(Stone);
	MultiStructures->push_back(StoneR);
    MultiStructures->push_back(Metal);
    MultiStructures->push_back(Tek);
	MultiStructures->push_back(Adobe);
	MultiStructures->push_back(Green);
}

std::map<uint64_t, Structure*> StructureModule::StructureMap;
StructureType StructureModule::GetStructureType(AActor* actor)
{
    auto str = (APrimalStructure*)actor;
    Structure* currentStructure = StructureMap[std::hash<std::wstring>{}(std::wstring(str->DescriptiveName.ToWString()))];

    if (currentStructure)
        return currentStructure->type;

    return StructureType::Other;
}
