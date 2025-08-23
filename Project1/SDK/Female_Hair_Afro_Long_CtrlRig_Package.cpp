/**
 * Name: Ark_Survival_Ascended
 * Version: 0.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFemale_Hair_Afro_Long_CtrlRig_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFemale_Hair_Afro_Long_CtrlRig_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("RigVMBlueprintGeneratedClass Female_Hair_Afro_Long_CtrlRig.Female_Hair_Afro_Long_CtrlRig_C");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URigVMMemory_Literal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URigVMMemory_Literal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("RigVMMemoryStorageGeneratorClass Female_Hair_Afro_Long_CtrlRig.RigVMMemory_Literal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URigVMMemory_Work.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URigVMMemory_Work::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("RigVMMemoryStorageGeneratorClass Female_Hair_Afro_Long_CtrlRig.RigVMMemory_Work");
		return ptr;
	}

}


