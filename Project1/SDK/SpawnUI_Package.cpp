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
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.GetCameraSettings
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TabIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCameraLocationSetting                      Return                                                     (Parm, OutParm, NoDestructor)
	 */
	void USpawnUI_C::GetCameraSettings(int32_t TabIndex, struct FCameraLocationSetting* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.GetCameraSettings");
		
		USpawnUI_C_GetCameraSettings_Params params {};
		params.TabIndex = TabIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.SizeZoomUpdate
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void USpawnUI_C::SizeZoomUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.SizeZoomUpdate");
		
		USpawnUI_C_SizeZoomUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.Get Preview Mesh Normalized Height
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::GetPreviewMeshNormalizedHeight(double* Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.Get Preview Mesh Normalized Height");
		
		USpawnUI_C_GetPreviewMeshNormalizedHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Height != nullptr)
			*Height = params.Height;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.OnPreviewKeyDown
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply USpawnUI_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.OnPreviewKeyDown");
		
		USpawnUI_C_OnPreviewKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.FixPS5Icons
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void USpawnUI_C::FixPS5Icons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.FixPS5Icons");
		
		USpawnUI_C_FixPS5Icons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.HeadZoomUpdate
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void USpawnUI_C::HeadZoomUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.HeadZoomUpdate");
		
		USpawnUI_C_HeadZoomUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.HandleConsoleIcons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USpawnUI_C::HandleConsoleIcons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.HandleConsoleIcons");
		
		USpawnUI_C_HandleConsoleIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.IsFastTravelTeleport
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool USpawnUI_C::IsFastTravelTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.IsFastTravelTeleport");
		
		USpawnUI_C_IsFastTravelTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.Get_BorderCharacterCreation_Visibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility USpawnUI_C::Get_BorderCharacterCreation_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.Get_BorderCharacterCreation_Visibility");
		
		USpawnUI_C_Get_BorderCharacterCreation_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.UpdateHairLenghtSettings
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USpawnUI_C::UpdateHairLenghtSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.UpdateHairLenghtSettings");
		
		USpawnUI_C_UpdateHairLenghtSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.RemoveBed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SpawnPointID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::RemoveBed(int32_t SpawnPointID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.RemoveBed");
		
		USpawnUI_C_RemoveBed_Params params {};
		params.SpawnPointID = SpawnPointID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.GetAllColorSliders
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	TArray<class UDataListValueGeneric*> USpawnUI_C::GetAllColorSliders()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.GetAllColorSliders");
		
		USpawnUI_C_GetAllColorSliders_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.GetAllFloatSliders
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	TArray<class UDataListValueGeneric*> USpawnUI_C::GetAllFloatSliders()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.GetAllFloatSliders");
		
		USpawnUI_C_GetAllFloatSliders_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.UpdateCameraPerTab
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void USpawnUI_C::UpdateCameraPerTab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.UpdateCameraPerTab");
		
		USpawnUI_C_UpdateCameraPerTab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.OnGamepadButtonDownEvent
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FControllerEvent                            ControllerEvent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply USpawnUI_C::OnGamepadButtonDownEvent(const struct FGeometry& MyGeometry, const struct FControllerEvent& ControllerEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.OnGamepadButtonDownEvent");
		
		USpawnUI_C_OnGamepadButtonDownEvent_Params params {};
		params.MyGeometry = MyGeometry;
		params.ControllerEvent = ControllerEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.CombineDynamicMaterialSlidersToFVectors
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	TArray<struct FVector> USpawnUI_C::CombineDynamicMaterialSlidersToFVectors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.CombineDynamicMaterialSlidersToFVectors");
		
		USpawnUI_C_CombineDynamicMaterialSlidersToFVectors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.SetupNameValueOnSlider
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USlider*                                     Slider                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USpawnUI_C::SetupNameValueOnSlider(class USlider* Slider, const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.SetupNameValueOnSlider");
		
		USpawnUI_C_SetupNameValueOnSlider_Params params {};
		params.Slider = Slider;
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.GetIndexSelectedBodyPart
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ArrayIndex                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::GetIndexSelectedBodyPart(int32_t* ArrayIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.GetIndexSelectedBodyPart");
		
		USpawnUI_C_GetIndexSelectedBodyPart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ArrayIndex != nullptr)
			*ArrayIndex = params.ArrayIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.SetupMultiBedButtons
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<int32_t>                                    AverrageIDSSpan                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            IdSpawnSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBedSpawnWidget_ASA_C*                       Bed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::SetupMultiBedButtons(TArray<int32_t> AverrageIDSSpan, int32_t IdSpawnSelected, class UBedSpawnWidget_ASA_C* Bed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.SetupMultiBedButtons");
		
		USpawnUI_C_SetupMultiBedButtons_Params params {};
		params.AverrageIDSSpan = AverrageIDSSpan;
		params.IdSpawnSelected = IdSpawnSelected;
		params.Bed = Bed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.UpdateBedButton
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             OldTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CustomID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanUse                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDataListButton_ASA_C*                       BedButton                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      BedName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::UpdateBedButton(double OldTime, int32_t CustomID, bool CanUse, class UDataListButton_ASA_C* BedButton, const class FString& BedName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.UpdateBedButton");
		
		USpawnUI_C_UpdateBedButton_Params params {};
		params.OldTime = OldTime;
		params.CustomID = CustomID;
		params.CanUse = CanUse;
		params.BedButton = BedButton;
		params.BedName = BedName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.UpdateSelectedBed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USpawnUI_C::UpdateSelectedBed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.UpdateSelectedBed");
		
		USpawnUI_C_UpdateSelectedBed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.CalculateAverageBeds
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void USpawnUI_C::CalculateAverageBeds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.CalculateAverageBeds");
		
		USpawnUI_C_CalculateAverageBeds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.SetupUpdateBedSpawn
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SpawnPointID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             NextAllowedUseTime                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAllowedUse                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumBeds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      BedName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::SetupUpdateBedSpawn(const struct FVector& Location, int32_t Index, int32_t SpawnPointID, double NextAllowedUseTime, bool bAllowedUse, int32_t NumBeds, const class FString& BedName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.SetupUpdateBedSpawn");
		
		USpawnUI_C_SetupUpdateBedSpawn_Params params {};
		params.Location = Location;
		params.Index = Index;
		params.SpawnPointID = SpawnPointID;
		params.NextAllowedUseTime = NextAllowedUseTime;
		params.bAllowedUse = bAllowedUse;
		params.NumBeds = NumBeds;
		params.BedName = BedName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.SetupUpdateSpawnRegion
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Difficult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::SetupUpdateSpawnRegion(const struct FVector& Location, int32_t Index, int32_t Difficult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.SetupUpdateSpawnRegion");
		
		USpawnUI_C_SetupUpdateSpawnRegion_Params params {};
		params.Location = Location;
		params.Index = Index;
		params.Difficult = Difficult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.GetCanvasLocationForMinimapPoint
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector2D USpawnUI_C::GetCanvasLocationForMinimapPoint(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.GetCanvasLocationForMinimapPoint");
		
		USpawnUI_C_GetCanvasLocationForMinimapPoint_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.GetDifficultRegionString
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FString USpawnUI_C::GetDifficultRegionString(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.GetDifficultRegionString");
		
		USpawnUI_C_GetDifficultRegionString_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.GetRespawnPanelMap
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class USpawnMapWidget* USpawnUI_C::GetRespawnPanelMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.GetRespawnPanelMap");
		
		USpawnUI_C_GetRespawnPanelMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.BP_FinalAdjustPlayerCharacterConfigBeforeSpawn
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPrimalPlayerCharacterConfigStruct          InPlayerCharacterConfig                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FPrimalPlayerCharacterConfigStruct USpawnUI_C::BP_FinalAdjustPlayerCharacterConfigBeforeSpawn(const struct FPrimalPlayerCharacterConfigStruct& InPlayerCharacterConfig)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.BP_FinalAdjustPlayerCharacterConfigBeforeSpawn");
		
		USpawnUI_C_BP_FinalAdjustPlayerCharacterConfigBeforeSpawn_Params params {};
		params.InPlayerCharacterConfig = InPlayerCharacterConfig;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.Get or Create Dynamic Material
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    Output_Get                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::GetorCreateDynamicMaterial(class UMaterialInstanceDynamic** Output_Get)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.Get or Create Dynamic Material");
		
		USpawnUI_C_GetorCreateDynamicMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output_Get != nullptr)
			*Output_Get = params.Output_Get;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.Shuffle-SliderValues
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USpawnUI_C::ShuffleSliderValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.Shuffle-SliderValues");
		
		USpawnUI_C_ShuffleSliderValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.Settings-UpdateHistory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ReviseHistory                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FS_CC_Settings                              S_CC_Settings                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::SettingsUpdateHistory(bool ReviseHistory, const struct FS_CC_Settings& S_CC_Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.Settings-UpdateHistory");
		
		USpawnUI_C_SettingsUpdateHistory_Params params {};
		params.ReviseHistory = ReviseHistory;
		params.S_CC_Settings = S_CC_Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.OnLoaded_3E84B3BE41EA3801C29ED5ABF7BB70A9
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void USpawnUI_C::OnLoaded_3E84B3BE41EA3801C29ED5ABF7BB70A9(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.OnLoaded_3E84B3BE41EA3801C29ED5ABF7BB70A9");
		
		USpawnUI_C_OnLoaded_3E84B3BE41EA3801C29ED5ABF7BB70A9_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_RandomizeButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpawnUI_C::BndEvt__SpawnUI_RandomizeButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_RandomizeButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		USpawnUI_C_BndEvt__SpawnUI_RandomizeButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_PlayerVoiceSelectorCombobox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::BndEvt__SpawnUI_PlayerVoiceSelectorCombobox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_PlayerVoiceSelectorCombobox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");
		
		USpawnUI_C_BndEvt__SpawnUI_PlayerVoiceSelectorCombobox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_PlayVoiceDemoButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpawnUI_C::BndEvt__SpawnUI_PlayVoiceDemoButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_PlayVoiceDemoButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		USpawnUI_C_BndEvt__SpawnUI_PlayVoiceDemoButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_PlayerVoiceSelectorCombobox_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpawnUI_C::BndEvt__SpawnUI_PlayerVoiceSelectorCombobox_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_PlayerVoiceSelectorCombobox_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature");
		
		USpawnUI_C_BndEvt__SpawnUI_PlayerVoiceSelectorCombobox_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_PlayerVoiceSelectorCombobox_K2Node_ComponentBoundEvent_4_OnClosingEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpawnUI_C::BndEvt__SpawnUI_PlayerVoiceSelectorCombobox_K2Node_ComponentBoundEvent_4_OnClosingEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_PlayerVoiceSelectorCombobox_K2Node_ComponentBoundEvent_4_OnClosingEvent__DelegateSignature");
		
		USpawnUI_C_BndEvt__SpawnUI_PlayerVoiceSelectorCombobox_K2Node_ComponentBoundEvent_4_OnClosingEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.UpdateVectorParameter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ParameterName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              R                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              G                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::UpdateVectorParameter(const class FName& ParameterName, float R, float G, float B, float A)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.UpdateVectorParameter");
		
		USpawnUI_C_UpdateVectorParameter_Params params {};
		params.ParameterName = ParameterName;
		params.R = R;
		params.G = G;
		params.B = B;
		params.A = A;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.UpdateScalarParameter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ParameterName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::UpdateScalarParameter(const class FName& ParameterName, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.UpdateScalarParameter");
		
		USpawnUI_C_UpdateScalarParameter_Params params {};
		params.ParameterName = ParameterName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.UpdateBodyPartByType
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::UpdateBodyPartByType(const class FString& A, const class FString& B, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.UpdateBodyPartByType");
		
		USpawnUI_C_UpdateBodyPartByType_Params params {};
		params.A = A;
		params.B = B;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.Tick");
		
		USpawnUI_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.BPSetSelectedSpawnRegion
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            spawnRegionIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::BPSetSelectedSpawnRegion(int32_t spawnRegionIndex, const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.BPSetSelectedSpawnRegion");
		
		USpawnUI_C_BPSetSelectedSpawnRegion_Params params {};
		params.spawnRegionIndex = spawnRegionIndex;
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void USpawnUI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.Construct");
		
		USpawnUI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_CloseButton_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpawnUI_C::BndEvt__SpawnUI_CloseButton_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_CloseButton_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		USpawnUI_C_BndEvt__SpawnUI_CloseButton_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_ShowBedsButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpawnUI_C::BndEvt__SpawnUI_ShowBedsButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_ShowBedsButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		USpawnUI_C_BndEvt__SpawnUI_ShowBedsButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.BPCreatedSpawnRegionWidget
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            spawnRegionIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Difficult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::BPCreatedSpawnRegionWidget(int32_t spawnRegionIndex, const struct FVector& Location, int32_t Difficult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.BPCreatedSpawnRegionWidget");
		
		USpawnUI_C_BPCreatedSpawnRegionWidget_Params params {};
		params.spawnRegionIndex = spawnRegionIndex;
		params.Location = Location;
		params.Difficult = Difficult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.AssignSpawnRegionSelect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USpawnRegionWidget_ASA_C*                    SpawnRegion                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::AssignSpawnRegionSelect(class USpawnRegionWidget_ASA_C* SpawnRegion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.AssignSpawnRegionSelect");
		
		USpawnUI_C_AssignSpawnRegionSelect_Params params {};
		params.SpawnRegion = SpawnRegion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.Clicked_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USpawnRegionWidget_ASA_C*                    SpawnRegion                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::Clicked_Event(class USpawnRegionWidget_ASA_C* SpawnRegion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.Clicked_Event");
		
		USpawnUI_C_Clicked_Event_Params params {};
		params.SpawnRegion = SpawnRegion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.BPSetupButtonDataForSpawnRegion
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            spawnRegionIndex                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      SecondText                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::BPSetupButtonDataForSpawnRegion(int32_t spawnRegionIndex, const class FString& Text, const class FString& SecondText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.BPSetupButtonDataForSpawnRegion");
		
		USpawnUI_C_BPSetupButtonDataForSpawnRegion_Params params {};
		params.spawnRegionIndex = spawnRegionIndex;
		params.Text = Text;
		params.SecondText = SecondText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.Clicked_Event_1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDinoListButtonWidget*                       DataList                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::Clicked_Event_1(class UDinoListButtonWidget* DataList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.Clicked_Event_1");
		
		USpawnUI_C_Clicked_Event_1_Params params {};
		params.DataList = DataList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.BPSetupBed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            BedIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SpawnPointID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      BedName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FVector                                     AtLocation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             NextAllowedUseTime                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAllowedUse                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumBeds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::BPSetupBed(int32_t BedIndex, int32_t SpawnPointID, const class FString& BedName, const struct FVector& AtLocation, double NextAllowedUseTime, bool bAllowedUse, int32_t NumBeds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.BPSetupBed");
		
		USpawnUI_C_BPSetupBed_Params params {};
		params.BedIndex = BedIndex;
		params.SpawnPointID = SpawnPointID;
		params.BedName = BedName;
		params.AtLocation = AtLocation;
		params.NextAllowedUseTime = NextAllowedUseTime;
		params.bAllowedUse = bAllowedUse;
		params.NumBeds = NumBeds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.AssignBedSpawnSelect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBedSpawnWidget_ASA_C*                       SpawnRegion                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::AssignBedSpawnSelect(class UBedSpawnWidget_ASA_C* SpawnRegion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.AssignBedSpawnSelect");
		
		USpawnUI_C_AssignBedSpawnSelect_Params params {};
		params.SpawnRegion = SpawnRegion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.Clicked_Event_2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBedSpawnWidget_ASA_C*                       BedSpawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::Clicked_Event_2(class UBedSpawnWidget_ASA_C* BedSpawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.Clicked_Event_2");
		
		USpawnUI_C_Clicked_Event_2_Params params {};
		params.BedSpawn = BedSpawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.AssignBedsButtonSelect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDataListButton_ASA_C*                       Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::AssignBedsButtonSelect(class UDataListButton_ASA_C* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.AssignBedsButtonSelect");
		
		USpawnUI_C_AssignBedsButtonSelect_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.Clicked_Event_3
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDinoListButtonWidget*                       DataList                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::Clicked_Event_3(class UDinoListButtonWidget* DataList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.Clicked_Event_3");
		
		USpawnUI_C_Clicked_Event_3_Params params {};
		params.DataList = DataList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_MainMinimapUI_ASA_K2Node_ComponentBoundEvent_2_Zoom__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpawnUI_C::BndEvt__SpawnUI_MainMinimapUI_ASA_K2Node_ComponentBoundEvent_2_Zoom__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_MainMinimapUI_ASA_K2Node_ComponentBoundEvent_2_Zoom__DelegateSignature");
		
		USpawnUI_C_BndEvt__SpawnUI_MainMinimapUI_ASA_K2Node_ComponentBoundEvent_2_Zoom__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.OnGamepadActiveChangedBP
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsGamepadActive                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::OnGamepadActiveChangedBP(bool bIsGamepadActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.OnGamepadActiveChangedBP");
		
		USpawnUI_C_OnGamepadActiveChangedBP_Params params {};
		params.bIsGamepadActive = bIsGamepadActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_FemaleButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpawnUI_C::BndEvt__SpawnUI_FemaleButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_FemaleButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		USpawnUI_C_BndEvt__SpawnUI_FemaleButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_MaleButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpawnUI_C::BndEvt__SpawnUI_MaleButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_MaleButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		USpawnUI_C_BndEvt__SpawnUI_MaleButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_SkinColor_Slider_K2Node_ComponentBoundEvent_14_ChangedColor__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::BndEvt__SpawnUI_SkinColor_Slider_K2Node_ComponentBoundEvent_14_ChangedColor__DelegateSignature(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_SkinColor_Slider_K2Node_ComponentBoundEvent_14_ChangedColor__DelegateSignature");
		
		USpawnUI_C_BndEvt__SpawnUI_SkinColor_Slider_K2Node_ComponentBoundEvent_14_ChangedColor__DelegateSignature_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_EyeColor_Slider_K2Node_ComponentBoundEvent_15_ChangedColor__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::BndEvt__SpawnUI_EyeColor_Slider_K2Node_ComponentBoundEvent_15_ChangedColor__DelegateSignature(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_EyeColor_Slider_K2Node_ComponentBoundEvent_15_ChangedColor__DelegateSignature");
		
		USpawnUI_C_BndEvt__SpawnUI_EyeColor_Slider_K2Node_ComponentBoundEvent_15_ChangedColor__DelegateSignature_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_HairColor_Slider_K2Node_ComponentBoundEvent_16_ChangedColor__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::BndEvt__SpawnUI_HairColor_Slider_K2Node_ComponentBoundEvent_16_ChangedColor__DelegateSignature(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_HairColor_Slider_K2Node_ComponentBoundEvent_16_ChangedColor__DelegateSignature");
		
		USpawnUI_C_BndEvt__SpawnUI_HairColor_Slider_K2Node_ComponentBoundEvent_16_ChangedColor__DelegateSignature_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_Header_GridPanel_K2Node_ComponentBoundEvent_10_OnSelectionChangedIndex__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::BndEvt__SpawnUI_Header_GridPanel_K2Node_ComponentBoundEvent_10_OnSelectionChangedIndex__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_Header_GridPanel_K2Node_ComponentBoundEvent_10_OnSelectionChangedIndex__DelegateSignature");
		
		USpawnUI_C_BndEvt__SpawnUI_Header_GridPanel_K2Node_ComponentBoundEvent_10_OnSelectionChangedIndex__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.UpdateCharacterFirstSpawnBP
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::UpdateCharacterFirstSpawnBP(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.UpdateCharacterFirstSpawnBP");
		
		USpawnUI_C_UpdateCharacterFirstSpawnBP_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_CreateNewPlayerButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpawnUI_C::BndEvt__SpawnUI_CreateNewPlayerButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_CreateNewPlayerButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		USpawnUI_C_BndEvt__SpawnUI_CreateNewPlayerButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.BPExecutedCommandForPrimalUI
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CommandName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void USpawnUI_C::BPExecutedCommandForPrimalUI(const class FName& CommandName, const struct FBPNetExecParams& ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.BPExecutedCommandForPrimalUI");
		
		USpawnUI_C_BPExecutedCommandForPrimalUI_Params params {};
		params.CommandName = CommandName;
		params.ExecParams = ExecParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.SwitchTheButton
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Next                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::SwitchTheButton(bool Next)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.SwitchTheButton");
		
		USpawnUI_C_SwitchTheButton_Params params {};
		params.Next = Next;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.BPRemoveBed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SpawnPointID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::BPRemoveBed(int32_t SpawnPointID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.BPRemoveBed");
		
		USpawnUI_C_BPRemoveBed_Params params {};
		params.SpawnPointID = SpawnPointID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_FacialHairColor_K2Node_ComponentBoundEvent_8_ChangedColor__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::BndEvt__SpawnUI_FacialHairColor_K2Node_ComponentBoundEvent_8_ChangedColor__DelegateSignature(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_FacialHairColor_K2Node_ComponentBoundEvent_8_ChangedColor__DelegateSignature");
		
		USpawnUI_C_BndEvt__SpawnUI_FacialHairColor_K2Node_ComponentBoundEvent_8_ChangedColor__DelegateSignature_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.OnGenderChange
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isFemale                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::OnGenderChange(bool isFemale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.OnGenderChange");
		
		USpawnUI_C_OnGenderChange_Params params {};
		params.isFemale = isFemale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_debuglightsbutton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpawnUI_C::BndEvt__SpawnUI_debuglightsbutton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_debuglightsbutton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");
		
		USpawnUI_C_BndEvt__SpawnUI_debuglightsbutton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_Slider_53_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::BndEvt__SpawnUI_Slider_53_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_Slider_53_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature");
		
		USpawnUI_C_BndEvt__SpawnUI_Slider_53_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_intensitySlider_K2Node_ComponentBoundEvent_11_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::BndEvt__SpawnUI_intensitySlider_K2Node_ComponentBoundEvent_11_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_intensitySlider_K2Node_ComponentBoundEvent_11_OnFloatValueChangedEvent__DelegateSignature");
		
		USpawnUI_C_BndEvt__SpawnUI_intensitySlider_K2Node_ComponentBoundEvent_11_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.UpdateHairCameraOffset
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USpawnUI_C::UpdateHairCameraOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.UpdateHairCameraOffset");
		
		USpawnUI_C_UpdateHairCameraOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_DataListButtonVariable_HairSylePicker_Widget_ASA_K2Node_ComponentBoundEvent_13_ReturnValue__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::BndEvt__SpawnUI_DataListButtonVariable_HairSylePicker_Widget_ASA_K2Node_ComponentBoundEvent_13_ReturnValue__DelegateSignature(const class FText& ReturnValue, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_DataListButtonVariable_HairSylePicker_Widget_ASA_K2Node_ComponentBoundEvent_13_ReturnValue__DelegateSignature");
		
		USpawnUI_C_BndEvt__SpawnUI_DataListButtonVariable_HairSylePicker_Widget_ASA_K2Node_ComponentBoundEvent_13_ReturnValue__DelegateSignature_Params params {};
		params.ReturnValue = ReturnValue;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_FacialHairStyle_Slider_K2Node_ComponentBoundEvent_6_ReturnValue__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::BndEvt__SpawnUI_FacialHairStyle_Slider_K2Node_ComponentBoundEvent_6_ReturnValue__DelegateSignature(const class FText& ReturnValue, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_FacialHairStyle_Slider_K2Node_ComponentBoundEvent_6_ReturnValue__DelegateSignature");
		
		USpawnUI_C_BndEvt__SpawnUI_FacialHairStyle_Slider_K2Node_ComponentBoundEvent_6_ReturnValue__DelegateSignature_Params params {};
		params.ReturnValue = ReturnValue;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.AddedToViewport
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void USpawnUI_C::AddedToViewport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.AddedToViewport");
		
		USpawnUI_C_AddedToViewport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.RemovedFromViewport
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void USpawnUI_C::RemovedFromViewport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.RemovedFromViewport");
		
		USpawnUI_C_RemovedFromViewport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_TogglePhotoMode_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpawnUI_C::BndEvt__SpawnUI_TogglePhotoMode_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_TogglePhotoMode_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");
		
		USpawnUI_C_BndEvt__SpawnUI_TogglePhotoMode_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_printcharacter_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpawnUI_C::BndEvt__SpawnUI_printcharacter_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_printcharacter_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature");
		
		USpawnUI_C_BndEvt__SpawnUI_printcharacter_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_BodyTemplate_Slider_K2Node_ComponentBoundEvent_19_ReturnValue__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        ReturnValue                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::BndEvt__SpawnUI_BodyTemplate_Slider_K2Node_ComponentBoundEvent_19_ReturnValue__DelegateSignature(const class FText& ReturnValue, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_BodyTemplate_Slider_K2Node_ComponentBoundEvent_19_ReturnValue__DelegateSignature");
		
		USpawnUI_C_BndEvt__SpawnUI_BodyTemplate_Slider_K2Node_ComponentBoundEvent_19_ReturnValue__DelegateSignature_Params params {};
		params.ReturnValue = ReturnValue;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.OnResetToDefault
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void USpawnUI_C::OnResetToDefault()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.OnResetToDefault");
		
		USpawnUI_C_OnResetToDefault_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnUI.SpawnUI_C.ExecuteUbergraph_SpawnUI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnUI_C::ExecuteUbergraph_SpawnUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnUI.SpawnUI_C.ExecuteUbergraph_SpawnUI");
		
		USpawnUI_C_ExecuteUbergraph_SpawnUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SpawnUI.SpawnUI_C");
		return ptr;
	}

}


