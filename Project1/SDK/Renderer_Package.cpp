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
	 * 		Name   -> PredefinedFunction USparseVolumeTextureViewerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USparseVolumeTextureViewerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Renderer.SparseVolumeTextureViewerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASparseVolumeTextureViewer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASparseVolumeTextureViewer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Renderer.SparseVolumeTextureViewer");
		return ptr;
	}

}


