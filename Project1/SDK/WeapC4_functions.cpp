#pragma once
// Dumped with Dumper-7!
#include "pch.h"

namespace CG
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeapC4.WeapC4_C
// (Actor)

class UClass* AWeapC4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass("BlueprintGeneratedClass WeapC4.WeapC4_C");
	return ptr;
}


// WeapC4_C WeapC4.Default__WeapC4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeapC4_C* AWeapC4_C::GetDefaultObj()
{
	static class AWeapC4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeapC4_C*>(AWeapC4_C::StaticClass()->CreateDefaultObject());

	return Default;
}

}


