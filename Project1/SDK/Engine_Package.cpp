#include "pch.h"


/**
 * Function:
 * 		RVA    -> 0x05ACBE20
 * 		Name   -> Function Engine.PrimitiveComponent.SetMaterial
 * 		Flags  -> (Native, Public, BlueprintCallable)
 * Parameters:
 * 		int32_t                                            ElementIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		class UMaterialInterface*                          Material                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void UPrimitiveComponent::SetMaterial(int32_t ElementIndex, class UMaterialInterface* Material)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PrimitiveComponent.SetMaterial"));

	UPrimitiveComponent_SetMaterial_Params params{};
	params.ElementIndex = ElementIndex;
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}


/**
 * Function:
 * 		RVA    -> 0x061A0740
 * 		Name   -> Function Engine.MaterialInstanceDynamic.SetVectorParameterValue
 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
 * Parameters:
 * 		class FName                                        ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FLinearColor                                Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void UMaterialInstanceDynamic::SetVectorParameterValue(const class FName& ParameterName, const struct FLinearColor& Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.MaterialInstanceDynamic.SetVectorParameterValue"));

	UMaterialInstanceDynamic_SetVectorParameterValue_Params params{};
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void UMaterialInstanceDynamic::SetScalarParameterValue(const class FName& ParameterName, float Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.MaterialInstanceDynamic.SetScalarParameterValue"));

	UMaterialInstanceDynamic_SetScalarParameterValue_Params params{};
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void UMaterialInstanceDynamic::SetScalarParameterValueByInfo(const struct FMaterialParameterInfo& ParameterInfo, float Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.MaterialInstanceDynamic.SetScalarParameterValueByInfo"));

	UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Params params{};
	params.ParameterInfo = ParameterInfo;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x0619FC10
 * 		Name   -> Function Engine.MaterialInstanceDynamic.K2_CopyMaterialInstanceParameters
 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
 * Parameters:
 * 		class UMaterialInterface*                          Source                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               bQuickParametersOnly                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void UMaterialInstanceDynamic::K2_CopyMaterialInstanceParameters(class UMaterialInterface* Source, bool bQuickParametersOnly)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.MaterialInstanceDynamic.K2_CopyMaterialInstanceParameters"));

	UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Params params{};
	params.Source = Source;
	params.bQuickParametersOnly = bQuickParametersOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}


/**
 * Function:
 * 		RVA    -> 0x06621BA0
 * 		Name   -> Function Engine.Canvas.K2_DrawTexture
 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
 * Parameters:
 * 		class UTexture*                                    RenderTexture                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector2D                                   ScreenPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector2D                                   ScreenSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector2D                                   CoordinatePosition                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector2D                                   CoordinateSize                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FLinearColor                                RenderColor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		EBlendMode                                         BlendMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		float                                              Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector2D                                   PivotPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void UCanvas::K2_DrawTexture(class UTexture* RenderTexture, const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize, const struct FVector2D& CoordinatePosition, const struct FVector2D& CoordinateSize, const struct FLinearColor& RenderColor, EBlendMode BlendMode, float Rotation, const struct FVector2D& PivotPoint)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Canvas.K2_DrawTexture"));

	UCanvas_K2_DrawTexture_Params params{};
	params.RenderTexture = RenderTexture;
	params.ScreenPosition = ScreenPosition;
	params.ScreenSize = ScreenSize;
	params.CoordinatePosition = CoordinatePosition;
	params.CoordinateSize = CoordinateSize;
	params.RenderColor = RenderColor;
	params.BlendMode = BlendMode;
	params.Rotation = Rotation;
	params.PivotPoint = PivotPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void UMovementComponent::StopMovementImmediately()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.MovementComponent.StopMovementImmediately"));

	UMovementComponent_StopMovementImmediately_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void AActor::SetReplicateMovement(bool bInReplicateMovement)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Actor.SetReplicateMovement"));

	AActor_SetReplicateMovement_Params params{};
	params.bInReplicateMovement = bInReplicateMovement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void UActorComponent::SetIsReplicated(bool ShouldReplicate)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.ActorComponent.SetIsReplicated"));

	UActorComponent_SetIsReplicated_Params params{};
	params.ShouldReplicate = ShouldReplicate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}


/**
 * Function:
 * 		RVA    -> 0x0661E6C0
 * 		Name   -> Function Engine.Canvas.K2_TextSize
 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
 * Parameters:
 * 		class UFont*                                       RenderFont                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		class FString                                      RenderText                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector2D                                   Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
struct FVector2D UCanvas::K2_TextSize(class UFont* RenderFont, const class FString& RenderText, const struct FVector2D& Scale)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Canvas.K2_TextSize"));

	UCanvas_K2_TextSize_Params params{};
	params.RenderFont = RenderFont;
	params.RenderText = RenderText;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x0661EB50
 * 		Name   -> Function Engine.Canvas.K2_StrLen
 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
 * Parameters:
 * 		class UFont*                                       RenderFont                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		class FString                                      RenderText                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
struct FVector2D UCanvas::K2_StrLen(class UFont* RenderFont, const class FString& RenderText)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Canvas.K2_StrLen"));

	UCanvas_K2_StrLen_Params params{};
	params.RenderFont = RenderFont;
	params.RenderText = RenderText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


/**
 * Function:
 * 		RVA    -> 0x0661F150
 * 		Name   -> Function Engine.Canvas.K2_Project
 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
 * Parameters:
 * 		struct FVector                                     WorldLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
struct FVector UCanvas::K2_Project(const struct FVector& WorldLocation)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Canvas.K2_Project"));

	UCanvas_K2_Project_Params params{};
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}



/**
 * Function:
 * 		RVA    -> 0x06620DD0
 * 		Name   -> Function Engine.Canvas.K2_DrawText
 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
 * Parameters:
 * 		class UFont*                                       RenderFont                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		class FString                                      RenderText                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector2D                                   ScreenPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector2D                                   Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FLinearColor                                RenderColor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		float                                              Kerning                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FLinearColor                                ShadowColor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector2D                                   ShadowOffset                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               bCentreX                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               bCentreY                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               bOutlined                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FLinearColor                                OutlineColor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void UCanvas::K2_DrawText(class UFont* RenderFont, const class FString& RenderText, const struct FVector2D& ScreenPosition, const struct FVector2D& Scale, const struct FLinearColor& RenderColor, float Kerning, const struct FLinearColor& ShadowColor, const struct FVector2D& ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, const struct FLinearColor& OutlineColor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Canvas.K2_DrawText"));

	UCanvas_K2_DrawText_Params params{};
	params.RenderFont = RenderFont;
	params.RenderText = RenderText;
	params.ScreenPosition = ScreenPosition;
	params.Scale = Scale;
	params.RenderColor = RenderColor;
	params.Kerning = Kerning;
	params.ShadowColor = ShadowColor;
	params.ShadowOffset = ShadowOffset;
	params.bCentreX = bCentreX;
	params.bCentreY = bCentreY;
	params.bOutlined = bOutlined;
	params.OutlineColor = OutlineColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x0661F270
 * 		Name   -> Function Engine.Canvas.K2_DrawPolygon
 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
 * Parameters:
 * 		class UTexture*                                    RenderTexture                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector2D                                   ScreenPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector2D                                   Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		int32_t                                            NumberOfSides                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FLinearColor                                RenderColor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void UCanvas::K2_DrawPolygon(class UTexture* RenderTexture, const struct FVector2D& ScreenPosition, const struct FVector2D& Radius, int32_t NumberOfSides, const struct FLinearColor& RenderColor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Canvas.K2_DrawPolygon"));

	UCanvas_K2_DrawPolygon_Params params{};
	params.RenderTexture = RenderTexture;
	params.ScreenPosition = ScreenPosition;
	params.Radius = Radius;
	params.NumberOfSides = NumberOfSides;
	params.RenderColor = RenderColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x0661F8F0
 * 		Name   -> Function Engine.Canvas.K2_DrawMaterialTriangle
 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
 * Parameters:
 * 		class UMaterialInterface*                          RenderMaterial                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		TArray<struct FCanvasUVTri>                        Triangles                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
 */
void UCanvas::K2_DrawMaterialTriangle(class UMaterialInterface* RenderMaterial, TArray<struct FCanvasUVTri> Triangles)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Canvas.K2_DrawMaterialTriangle"));

	UCanvas_K2_DrawMaterialTriangle_Params params{};
	params.RenderMaterial = RenderMaterial;
	params.Triangles = Triangles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x066216A0
 * 		Name   -> Function Engine.Canvas.K2_DrawMaterial
 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
 * Parameters:
 * 		class UMaterialInterface*                          RenderMaterial                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector2D                                   ScreenPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector2D                                   ScreenSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector2D                                   CoordinatePosition                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector2D                                   CoordinateSize                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		float                                              Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector2D                                   PivotPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               bApplyGammaCorrection                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void UCanvas::K2_DrawMaterial(class UMaterialInterface* RenderMaterial, const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize, const struct FVector2D& CoordinatePosition, const struct FVector2D& CoordinateSize, float Rotation, const struct FVector2D& PivotPoint, bool bApplyGammaCorrection)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Canvas.K2_DrawMaterial"));

	UCanvas_K2_DrawMaterial_Params params{};
	params.RenderMaterial = RenderMaterial;
	params.ScreenPosition = ScreenPosition;
	params.ScreenSize = ScreenSize;
	params.CoordinatePosition = CoordinatePosition;
	params.CoordinateSize = CoordinateSize;
	params.Rotation = Rotation;
	params.PivotPoint = PivotPoint;
	params.bApplyGammaCorrection = bApplyGammaCorrection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x06622320
 * 		Name   -> Function Engine.Canvas.K2_DrawLine
 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
 * Parameters:
 * 		struct FVector2D                                   ScreenPositionA                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector2D                                   ScreenPositionB                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FLinearColor                                RenderColor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void UCanvas::K2_DrawLine(const struct FVector2D& ScreenPositionA, const struct FVector2D& ScreenPositionB, float Thickness, const struct FLinearColor& RenderColor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Canvas.K2_DrawLine"));

	UCanvas_K2_DrawLine_Params params{};
	params.ScreenPositionA = ScreenPositionA;
	params.ScreenPositionB = ScreenPositionB;
	params.Thickness = Thickness;
	params.RenderColor = RenderColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x0661D570
 * 		Name   -> Function Engine.Canvas.K2_DrawBoxEx
 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
 * Parameters:
 * 		struct FVector2D                                   ScreenPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector2D                                   ScreenSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FLinearColor                                RenderColor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		EBlendMode                                         BlendMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void UCanvas::K2_DrawBoxEx(const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize, float Thickness, const struct FLinearColor& RenderColor, EBlendMode BlendMode)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Canvas.K2_DrawBoxEx"));

	UCanvas_K2_DrawBoxEx_Params params{};
	params.ScreenPosition = ScreenPosition;
	params.ScreenSize = ScreenSize;
	params.Thickness = Thickness;
	params.RenderColor = RenderColor;
	params.BlendMode = BlendMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x0661FEE0
 * 		Name   -> Function Engine.Canvas.K2_DrawBox
 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
 * Parameters:
 * 		struct FVector2D                                   ScreenPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector2D                                   ScreenSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FLinearColor                                RenderColor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void UCanvas::K2_DrawBox(const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize, float Thickness, const struct FLinearColor& RenderColor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Canvas.K2_DrawBox"));

	UCanvas_K2_DrawBox_Params params{};
	params.ScreenPosition = ScreenPosition;
	params.ScreenSize = ScreenSize;
	params.Thickness = Thickness;
	params.RenderColor = RenderColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x06620230
 * 		Name   -> Function Engine.Canvas.K2_DrawBorder
 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
 * Parameters:
 * 		class UTexture*                                    BorderTexture                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		class UTexture*                                    BackgroundTexture                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		class UTexture*                                    LeftBorderTexture                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		class UTexture*                                    RightBorderTexture                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		class UTexture*                                    TopBorderTexture                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		class UTexture*                                    BottomBorderTexture                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector2D                                   ScreenPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector2D                                   ScreenSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector2D                                   CoordinatePosition                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector2D                                   CoordinateSize                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FLinearColor                                RenderColor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector2D                                   BorderScale                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector2D                                   BackgroundScale                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		float                                              Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector2D                                   PivotPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector2D                                   CornerSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void UCanvas::K2_DrawBorder(class UTexture* BorderTexture, class UTexture* BackgroundTexture, class UTexture* LeftBorderTexture, class UTexture* RightBorderTexture, class UTexture* TopBorderTexture, class UTexture* BottomBorderTexture, const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize, const struct FVector2D& CoordinatePosition, const struct FVector2D& CoordinateSize, const struct FLinearColor& RenderColor, const struct FVector2D& BorderScale, const struct FVector2D& BackgroundScale, float Rotation, const struct FVector2D& PivotPoint, const struct FVector2D& CornerSize)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Canvas.K2_DrawBorder"));

	UCanvas_K2_DrawBorder_Params params{};
	params.BorderTexture = BorderTexture;
	params.BackgroundTexture = BackgroundTexture;
	params.LeftBorderTexture = LeftBorderTexture;
	params.RightBorderTexture = RightBorderTexture;
	params.TopBorderTexture = TopBorderTexture;
	params.BottomBorderTexture = BottomBorderTexture;
	params.ScreenPosition = ScreenPosition;
	params.ScreenSize = ScreenSize;
	params.CoordinatePosition = CoordinatePosition;
	params.CoordinateSize = CoordinateSize;
	params.RenderColor = RenderColor;
	params.BorderScale = BorderScale;
	params.BackgroundScale = BackgroundScale;
	params.Rotation = Rotation;
	params.PivotPoint = PivotPoint;
	params.CornerSize = CornerSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x0661EEF0
 * 		Name   -> Function Engine.Canvas.K2_Deproject
 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
 * Parameters:
 * 		struct FVector2D                                   ScreenPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector                                     WorldOrigin                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector                                     WorldDirection                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void UCanvas::K2_Deproject(const struct FVector2D& ScreenPosition, struct FVector* WorldOrigin, struct FVector* WorldDirection)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Canvas.K2_Deproject"));

	UCanvas_K2_Deproject_Params params{};
	params.ScreenPosition = ScreenPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WorldOrigin != nullptr)
		*WorldOrigin = params.WorldOrigin;
	if (WorldDirection != nullptr)
		*WorldDirection = params.WorldDirection;
}

/**
 * Function:
 * 		RVA    -> 0x0661D3F0
 * 		Name   -> Function Engine.Canvas.IsPositionInFrontOfViewport
 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
 * Parameters:
 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
bool UCanvas::IsPositionInFrontOfViewport(const struct FVector& Location)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Canvas.IsPositionInFrontOfViewport"));

	UCanvas_IsPositionInFrontOfViewport_Params params{};
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x0661D990
 * 		Name   -> Function Engine.Canvas.BPDrawTextWrapped
 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
 * Parameters:
 * 		class UFont*                                       InFont                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		class FString                                      InText                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		float                                              X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		float                                              Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		float                                              XWidth                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		float                                              YWidth                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		float                                              XScale                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		float                                              YScale                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               bDoCenterX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               bDoCenterY                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector2D                                   SpacingAdjust                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
float UCanvas::BPDrawTextWrapped(class UFont* InFont, const class FString& InText, float X, float Y, float XWidth, float YWidth, float XScale, float YScale, bool bDoCenterX, bool bDoCenterY, const struct FVector2D& SpacingAdjust)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Canvas.BPDrawTextWrapped"));

	UCanvas_BPDrawTextWrapped_Params params{};
	params.InFont = InFont;
	params.InText = InText;
	params.X = X;
	params.Y = Y;
	params.XWidth = XWidth;
	params.YWidth = YWidth;
	params.XScale = XScale;
	params.YScale = YScale;
	params.bDoCenterX = bDoCenterX;
	params.bDoCenterY = bDoCenterY;
	params.SpacingAdjust = SpacingAdjust;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x0661E150
 * 		Name   -> Function Engine.Canvas.BPDrawTextCentered
 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
 * Parameters:
 * 		class UFont*                                       InFont                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		class FString                                      InText                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		float                                              X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		float                                              Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		float                                              XScale                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		float                                              YScale                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               bDoCenterX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               bDoCenterY                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
float UCanvas::BPDrawTextCentered(class UFont* InFont, const class FString& InText, float X, float Y, float XScale, float YScale, bool bDoCenterX, bool bDoCenterY)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Canvas.BPDrawTextCentered"));

	UCanvas_BPDrawTextCentered_Params params{};
	params.InFont = InFont;
	params.InText = InText;
	params.X = X;
	params.Y = Y;
	params.XScale = XScale;
	params.YScale = YScale;
	params.bDoCenterX = bDoCenterX;
	params.bDoCenterY = bDoCenterY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x06388460
 * 		Name   -> Function Engine.PlayerController.ServerAcknowledgePossession
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
 * Parameters:
 * 		class APawn*                                       P                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void APlayerController::ServerAcknowledgePossession(class APawn* P)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PlayerController.ServerAcknowledgePossession"));

	APlayerController_ServerAcknowledgePossession_Params params{};
	params.P = P;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void APlayerController::ServerRestartPlayer()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PlayerController.ServerRestartPlayer"));

	APlayerController_ServerRestartPlayer_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void ACharacter::ServerMovePacked(const struct FCharacterServerMovePackedBits& PackedBits)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>("Function Engine.Character.ServerMovePacked");

	ACharacter_ServerMovePacked_Params params{};
	params.PackedBits = PackedBits;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x0638D710
 * 		Name   -> Function Engine.PlayerController.CopyStringToClipboard
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
 * Parameters:
 * 		class FString                                      S                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void APlayerController::CopyStringToClipboard(const class FString& S)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PlayerController.CopyStringToClipboard"));

	APlayerController_CopyStringToClipboard_Params params{};
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}


/**
 * Function:
 * 		RVA    -> 0x032BFC60
 * 		Name   -> Function Engine.PlayerCameraManager.StopCameraFade
 * 		Flags  -> (Native, Public, BlueprintCallable)
 */
void APlayerCameraManager::StopCameraFade()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PlayerCameraManager.StopCameraFade"));

	APlayerCameraManager_StopCameraFade_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}


/**
 * Function:
 * 		RVA    -> 0x030E2B10
 * 		Name   -> Function Engine.PlayerCameraManager.StopAllCameraShakes
 * 		Flags  -> (Native, Public, BlueprintCallable)
 * Parameters:
 * 		bool                                               bImmediately                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void APlayerCameraManager::StopAllCameraShakes(bool bImmediately)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PlayerCameraManager.StopAllCameraShakes"));

	APlayerCameraManager_StopAllCameraShakes_Params params{};
	params.bImmediately = bImmediately;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}


/**
 * Function:
 * 		RVA    -> 0x05AAFC70
 * 		Name   -> Function Engine.PlayerCameraManager.StopAllCameraAnims
 * 		Flags  -> (Native, Public, BlueprintCallable)
 * Parameters:
 * 		bool                                               bImmediate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void APlayerCameraManager::StopAllCameraAnims(bool bImmediate)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PlayerCameraManager.StopAllCameraAnims"));

	APlayerCameraManager_StopAllCameraAnims_Params params{};
	params.bImmediate = bImmediate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}


/**
 * Function:
 * 		RVA    -> 0x05AB24C0
 * 		Name   -> Function Engine.PlayerCameraManager.ClearCameraLensEffects
 * 		Flags  -> (Native, Public, BlueprintCallable)
 */
void APlayerCameraManager::ClearCameraLensEffects()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PlayerCameraManager.ClearCameraLensEffects"));

	APlayerCameraManager_ClearCameraLensEffects_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}


/**
 * Function:
 * 		RVA    -> 0x030E6FC0
 * 		Name   -> Function Engine.Character.Jump
 * 		Flags  -> (Native, Public, BlueprintCallable)
 */
void ACharacter::Jump()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Character.Jump"));

	ACharacter_Jump_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}


/**
 * Function:
 * 		RVA    -> 0x031E3870
 * 		Name   -> Function Engine.Character.ClientCheatWalk
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
 */
void ACharacter::ClientCheatWalk()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Character.ClientCheatWalk"));

	ACharacter_ClientCheatWalk_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

UClass* UKismetRenderingLibrary::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class Engine.KismetRenderingLibrary"));
	return ptr;
}

class UTexture2D* UKismetRenderingLibrary::STATIC_ImportBufferAsTexture2D(class UObject* WorldContextObject, TArray<unsigned char> Buffer)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.KismetRenderingLibrary.ImportBufferAsTexture2D"));

	UKismetRenderingLibrary_ImportBufferAsTexture2D_Params params{};
	params.WorldContextObject = WorldContextObject;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


/**
 * Function:
 * 		RVA    -> 0x032C7BB0
 * 		Name   -> Function Engine.Character.ClientCheatGhost
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
 */
void ACharacter::ClientCheatGhost()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Character.ClientCheatGhost"));

	ACharacter_ClientCheatGhost_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x031C4F40
 * 		Name   -> Function Engine.Character.ClientCheatFly
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
 */
void ACharacter::ClientCheatFly()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Character.ClientCheatFly"));

	ACharacter_ClientCheatFly_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}


/**
 * Function:
 * 		RVA    -> 0x05B25660
 * 		Name   -> Function Engine.Actor.SetActorEnableCollision
 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
 * Parameters:
 * 		bool                                               bNewActorEnableCollision                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void AActor::SetActorEnableCollision(bool bNewActorEnableCollision)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Actor.SetActorEnableCollision"));

	AActor_SetActorEnableCollision_Params params{};
	params.bNewActorEnableCollision = bNewActorEnableCollision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void APlayerController::ClientReturnToMainMenu(const class FString& ReturnReason)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PlayerController.ClientReturnToMainMenu"));

	APlayerController_ClientReturnToMainMenu_Params params{};
	params.ReturnReason = ReturnReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}


/**
 * Function:
 * 		RVA    -> 0x05B29B60
 * 		Name   -> Function Engine.Actor.GetActorBounds
 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
 * Parameters:
 * 		bool                                               bOnlyCollidingComponents                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector                                     Origin                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector                                     BoxExtent                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               bIncludeFromChildActors                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void AActor::GetActorBounds(bool bOnlyCollidingComponents, struct FVector* Origin, struct FVector* BoxExtent, bool bIncludeFromChildActors)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Actor.GetActorBounds"));

	AActor_GetActorBounds_Params params{};
	params.bOnlyCollidingComponents = bOnlyCollidingComponents;
	params.bIncludeFromChildActors = bIncludeFromChildActors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Origin != nullptr)
		*Origin = params.Origin;
	if (BoxExtent != nullptr)
		*BoxExtent = params.BoxExtent;
}

/**
 * Function:
 * 		RVA    -> 0x05B2AC60
 * 		Name   -> Function Engine.Actor.EnableInput
 * 		Flags  -> (Native, Public, BlueprintCallable)
 * Parameters:
 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void AActor::EnableInput(class APlayerController* PlayerController)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Actor.EnableInput"));

	AActor_EnableInput_Params params{};
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x05B2AA80
 * 		Name   -> Function Engine.Actor.DisableInput
 * 		Flags  -> (Native, Public, BlueprintCallable)
 * Parameters:
 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void AActor::DisableInput(class APlayerController* PlayerController)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Actor.DisableInput"));

	AActor_DisableInput_Params params{};
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

FVector USkeletalMeshComponent::GetBoneLocation(int32_t BoneIndex)
{
	return this->GetSocketLocation(this->GetBoneName(BoneIndex));
}


struct FVector UPrimalActor::GetActorViewDirection()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PrimalActor.GetActorViewDirection"));

	UPrimalActor_GetActorViewDirection_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x05AE4C90
 * 		Name   -> Function Engine.SkeletalMeshSocket.GetSocketLocation
 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
 * Parameters:
 * 		class USkeletalMeshComponent*                      SkelComp                                                   (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
struct FVector USkeletalMeshSocket::GetSocketLocation(class USkeletalMeshComponent* SkelComp)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.SkeletalMeshSocket.GetSocketLocation"));

	USkeletalMeshSocket_GetSocketLocation_Params params{};
	params.SkelComp = SkelComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


bool UNavMovementComponent::IsFalling()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.NavMovementComponent.IsFalling"));

	UNavMovementComponent_IsFalling_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x05ADBD00
 * 		Name   -> Function Engine.SceneComponent.GetSocketLocation
 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
 * Parameters:
 * 		class FName                                        InSocketName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
struct FVector USceneComponent::GetSocketLocation(const class FName& InSocketName)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.SceneComponent.GetSocketLocation"));

	USceneComponent_GetSocketLocation_Params params{};
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x05D3DC50
 * 		Name   -> Function Engine.CharacterMovementComponent.GetCurrentAcceleration
 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
 */
struct FVector UCharacterMovementComponent::GetCurrentAcceleration()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.CharacterMovementComponent.GetCurrentAcceleration"));

	UCharacterMovementComponent_GetCurrentAcceleration_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

struct FVector UKismetMathLibrary::STATIC_Quat_RotateVector(const struct FQuat& Q, const struct FVector& V)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.KismetMathLibrary.Quat_RotateVector"));

	UKismetMathLibrary_Quat_RotateVector_Params params{};
	params.Q = Q;
	params.V = V;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

struct FVector UKismetMathLibrary::STATIC_RotateAngleAxis(const struct FVector& InVect, float AngleDeg, const struct FVector& Axis)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.KismetMathLibrary.RotateAngleAxis"));

	UKismetMathLibrary_RotateAngleAxis_Params params{};
	params.InVect = InVect;
	params.AngleDeg = AngleDeg;
	params.Axis = Axis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

struct FVector UKismetMathLibrary::STATIC_TransformLocation(const struct FTransform& T, const struct FVector& Location)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.KismetMathLibrary.TransformLocation"));

	UKismetMathLibrary_TransformLocation_Params params{};
	params.T = T;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

struct FTransform UKismetMathLibrary::STATIC_MakeTransform(const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.KismetMathLibrary.MakeTransform"));

	UKismetMathLibrary_MakeTransform_Params params{};
	params.Location = Location;
	params.Rotation = Rotation;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

struct FQuat UKismetMathLibrary::STATIC_Conv_RotatorToQuaternion(const struct FRotator& InRot)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.KismetMathLibrary.Conv_RotatorToQuaternion"));

	UKismetMathLibrary_Conv_RotatorToQuaternion_Params params{};
	params.InRot = InRot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x05AB26E0
 * 		Name   -> Function Engine.PlayerCameraManager.GetCameraLocation
 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
 */
struct FVector APlayerCameraManager::GetCameraLocation()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PlayerCameraManager.GetCameraLocation"));

	APlayerCameraManager_GetCameraLocation_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

struct FVector UKismetMathLibrary::STATIC_GetForwardVector(const struct FRotator& InRot)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.KismetMathLibrary.GetForwardVector"));

	UKismetMathLibrary_GetForwardVector_Params params{};
	params.InRot = InRot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


/**
 * Function:
 * 		RVA    -> 0x05B2A3D0
 * 		Name   -> Function Engine.Actor.K2_GetActorLocation
 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
 */
//struct FVector AActor::K2_GetActorLocation()
//{
//	static UFunction* fn = nullptr;
//	if (!fn)
//		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Actor.K2_GetActorLocation"));
//
//	AActor_K2_GetActorLocation_Params params{};
//
//	auto flags = fn->FunctionFlags;
//	fn->FunctionFlags |= 0x00000400;
//	UObject::ProcessEvent(fn, &params);
//	fn->FunctionFlags = flags;
//
//	return params.ReturnValue;
//}

struct FVector AActor::K2_GetActorLocation()
{
	static uint64_t sig = 0;
	if (!sig)
		sig = signature(Xors("48 8B 81 ? ? ? ? 48 85 C0 74 07 48 05 ? ? ? ?")).GetPointer();

	FTransform temp_buffer;

	auto Fn = reinterpret_cast<FTransform * (__fastcall*)(AActor * _this)>(sig);
	temp_buffer = *spoof_call(Fn, this);

	return temp_buffer.Translation;
}

void APrimalPlayerController::ServerProcessNetExecCommand(class AActor* ForActor, const class FName& CommandName, const struct FBPNetExecParams& ExecParams)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PrimalPlayerController.ServerProcessNetExecCommand"));

	APrimalPlayerController_ServerProcessNetExecCommand_Params params{};
	params.ForActor = ForActor;
	params.CommandName = CommandName;
	params.ExecParams = ExecParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

bool AActor::K2_SetActorLocation(const struct FVector& NewLocation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Actor.K2_SetActorLocation"));

	AActor_K2_SetActorLocation_Params params{};
	params.NewLocation = NewLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;

	return params.ReturnValue;
}

int32_t APlayerState::GetPlayerId()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PlayerState.GetPlayerId"));

	APlayerState_GetPlayerId_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

struct FVector UCharacterMovementComponent::GetLastUpdateLocation()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.CharacterMovementComponent.GetLastUpdateLocation"));

	UCharacterMovementComponent_GetLastUpdateLocation_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

void AActor::MulticastDrawDebugSphere(const struct FVector& Center, float Radius, int32_t Segments, const struct FLinearColor& LineColor, float Duration, bool enableInShipping)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Actor.MulticastDrawDebugSphere"));

	AActor_MulticastDrawDebugSphere_Params params{};
	params.Center = Center;
	params.Radius = Radius;
	params.Segments = Segments;
	params.LineColor = LineColor;
	params.Duration = Duration;
	params.enableInShipping = enableInShipping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void UKismetSystemLibrary::STATIC_DrawDebugSphere(class UObject* WorldContextObject, const struct FVector& Center, float Radius, int32_t Segments, const struct FLinearColor& LineColor, float Duration, float Thickness, bool bPersistent)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.KismetSystemLibrary.DrawDebugSphere"));

	UKismetSystemLibrary_DrawDebugSphere_Params params{};
	params.WorldContextObject = WorldContextObject;
	params.Center = Center;
	params.Radius = Radius;
	params.Segments = Segments;
	params.LineColor = LineColor;
	params.Duration = Duration;
	params.Thickness = Thickness;
	params.bPersistent = bPersistent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

class AGameModeBase* UGameplayStatics::STATIC_GetGameMode(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.GameplayStatics.GetGameMode"));

	UGameplayStatics_GetGameMode_Params params{};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x05B27030
 * 		Name   -> Function Engine.Actor.K2_SetActorTransform
 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
 * Parameters:
 * 		struct FTransform                                  NewTransform                                               (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               bSweep                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FHitResult                                  SweepHitResult                                             (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
 * 		bool                                               bTeleport                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
bool AActor::K2_SetActorTransform(const struct FTransform& NewTransform, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Actor.K2_SetActorTransform"));

	AActor_K2_SetActorTransform_Params params{};
	params.NewTransform = NewTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;

	return params.ReturnValue;
}

UClass* AKillZVolume::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class Engine.KillZVolume"));
	
	return ptr;
}
/**
 * Function:
 * 		RVA    -> 0x05AB6920
 * 		Name   -> Function Engine.Actor.GetActorEyesViewPoint
 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
 * Parameters:
 * 		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FRotator                                    OutRotation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
 */
void AActor::GetActorEyesViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Actor.GetActorEyesViewPoint"));

	AActor_GetActorEyesViewPoint_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;
}

/**
 * Function:
 * 		RVA    -> 0x05ADB740
 * 		Name   -> Function Engine.SceneComponent.SetVisibility
 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
 * Parameters:
 * 		bool                                               bNewVisibility                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               bPropagateToChildren                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               bSetChildrenRenderState                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void USceneComponent::SetVisibility(bool bNewVisibility, bool bPropagateToChildren, bool bSetChildrenRenderState)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.SceneComponent.SetVisibility"));

	USceneComponent_SetVisibility_Params params{};
	params.bNewVisibility = bNewVisibility;
	params.bPropagateToChildren = bPropagateToChildren;
	params.bSetChildrenRenderState = bSetChildrenRenderState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x05ADD250
 * 		Name   -> Function Engine.SceneComponent.K2_GetComponentToWorld
 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
 */
struct FTransform USceneComponent::K2_GetComponentToWorld()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.SceneComponent.K2_GetComponentToWorld"));

	USceneComponent_K2_GetComponentToWorld_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x05B2A450
 * 		Name   -> Function Engine.Actor.GetTransform
 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
 */
struct FTransform AActor::GetTransform()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Actor.GetTransform"));

	AActor_GetTransform_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x05ADE8D0
 * 		Name   -> Function Engine.SceneComponent.K2_SetWorldLocation
 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
 * Parameters:
 * 		struct FVector                                     NewLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               bSweep                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FHitResult                                  SweepHitResult                                             (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
 * 		bool                                               bTeleport                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void USceneComponent::K2_SetWorldLocation(const struct FVector& NewLocation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.SceneComponent.K2_SetWorldLocation"));

	USceneComponent_K2_SetWorldLocation_Params params{};
	params.NewLocation = NewLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}

/**
 * Function:
 * 		RVA    -> 0x05D8FA00
 * 		Name   -> Function Engine.MeshComponent.GetMaterials
 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
 */
TArray<class UMaterialInterface*> UMeshComponent::GetMaterials()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.MeshComponent.GetMaterials"));

	UMeshComponent_GetMaterials_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}
/**
 * Function:
 * 		RVA    -> 0x057BB670
 * 		Name   -> Function Engine.ActorComponent.Activate
 * 		Flags  -> (Native, Public, BlueprintCallable)
 * Parameters:
 * 		bool                                               bReset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void UActorComponent::Activate(bool bReset)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.ActorComponent.Activate"));

	UActorComponent_Activate_Params params{};
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x05D130E0
 * 		Name   -> Function Engine.ActorComponent.SetOwner
 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
 * Parameters:
 * 		class AActor*                                      newOwner                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void UActorComponent::SetOwner(class AActor* newOwner)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.ActorComponent.SetOwner"));

	UActorComponent_SetOwner_Params params{};
	params.newOwner = newOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x05ADB000
 * 		Name   -> Function Engine.SceneComponent.K2_SetRelativeLocationAndRotation
 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
 * Parameters:
 * 		struct FVector                                     NewLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FRotator                                    NewRotation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
 * 		bool                                               bSweep                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FHitResult                                  SweepHitResult                                             (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
 * 		bool                                               bTeleport                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void USceneComponent::K2_SetRelativeLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.SceneComponent.K2_SetRelativeLocationAndRotation"));

	USceneComponent_K2_SetRelativeLocationAndRotation_Params params{};
	params.NewLocation = NewLocation;
	params.NewRotation = NewRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}

/**
 * Function:
 * 		RVA    -> 0x05AE04B0
 * 		Name   -> Function Engine.SceneComponent.K2_SetRelativeLocation
 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
 * Parameters:
 * 		struct FVector                                     NewLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               bSweep                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FHitResult                                  SweepHitResult                                             (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
 * 		bool                                               bTeleport                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void USceneComponent::K2_SetRelativeLocation(const struct FVector& NewLocation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.SceneComponent.K2_SetRelativeLocation"));

	USceneComponent_K2_SetRelativeLocation_Params params{};
	params.NewLocation = NewLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


void UCharacterMovementComponent::K2_ComputeFloorDist(const struct FVector& CapsuleLocation, float LineDistance, float SweepDistance, float SweepRadius, struct FFindFloorResult* FloorResult)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.CharacterMovementComponent.K2_ComputeFloorDist"));

	UCharacterMovementComponent_K2_ComputeFloorDist_Params params{};
	params.CapsuleLocation = CapsuleLocation;
	params.LineDistance = LineDistance;
	params.SweepDistance = SweepDistance;
	params.SweepRadius = SweepRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FloorResult != nullptr)
		*FloorResult = params.FloorResult;
}

void UCharacterMovementComponent::K2_FindFloor(const struct FVector& CapsuleLocation, struct FFindFloorResult* FloorResult)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.CharacterMovementComponent.K2_FindFloor"));

	UCharacterMovementComponent_K2_FindFloor_Params params{};
	params.CapsuleLocation = CapsuleLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FloorResult != nullptr)
		*FloorResult = params.FloorResult;
}

void UCharacterMovementComponent::DisableMovement()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.CharacterMovementComponent.DisableMovement"));

	UCharacterMovementComponent_DisableMovement_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void UCharacterMovementComponent::ClearAccumulatedForces()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.CharacterMovementComponent.ClearAccumulatedForces"));

	UCharacterMovementComponent_ClearAccumulatedForces_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}


UClass* UGameplayStatics::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class Engine.GameplayStatics"));
	return ptr;
}

void UGameplayStatics::STATIC_GetAllActorsOfClass(class UObject* WorldContextObject, class UClass* ActorClass, TArray<class AActor*>* OutActors)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.GameplayStatics.GetAllActorsOfClass"));

	UGameplayStatics_GetAllActorsOfClass_Params params{};
	params.WorldContextObject = WorldContextObject;
	params.ActorClass = ActorClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;
}

struct FVector USceneComponent::K2_GetComponentLocation()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.SceneComponent.K2_GetComponentLocation"));

	USceneComponent_K2_GetComponentLocation_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

float UCharacterMovementComponent::K2_GetWalkableFloorZ()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.CharacterMovementComponent.K2_GetWalkableFloorZ"));

	UCharacterMovementComponent_K2_GetWalkableFloorZ_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x05B29F30
 * 		Name   -> Function Engine.Actor.GetActorForwardVector
 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
 */
struct FVector AActor::GetActorForwardVector()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Actor.GetActorForwardVector"));

	AActor_GetActorForwardVector_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x05AB8F80
 * 		Name   -> Function Engine.PrimalActor.GetInterpolatedRotation
 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
 */
struct FRotator UPrimalActor::GetInterpolatedRotation()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PrimalActor.GetInterpolatedRotation"));

	UPrimalActor_GetInterpolatedRotation_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}



/**
 * Function:
 * 		RVA    -> 0x06078FF0
 * 		Name   -> Function Engine.KismetMathLibrary.FindLookAtRotation
 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
 * Parameters:
 * 		struct FVector                                     Start                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector                                     Target                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
struct FRotator UKismetMathLibrary::STATIC_FindLookAtRotation(const struct FVector& Start, const struct FVector& Target)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.KismetMathLibrary.FindLookAtRotation"));

	UKismetMathLibrary_FindLookAtRotation_Params params{};
	params.Start = Start;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}



/**
 * Function:
 * 		RVA    -> 0x05AB2730
 * 		Name   -> Function Engine.PlayerCameraManager.GetCameraRotation
 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
 */
struct FRotator APlayerCameraManager::GetCameraRotation()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PlayerCameraManager.GetCameraRotation"));

	APlayerCameraManager_GetCameraRotation_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

struct FMultiUseWheelOption UPrimalActor::GetWheelOptionInfo(class APlayerController* ForPC, int32_t WheelCategory)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PrimalActor.GetWheelOptionInfo"));

	UPrimalActor_GetWheelOptionInfo_Params params{};
	params.ForPC = ForPC;
	params.WheelCategory = WheelCategory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x05B29FA0
 * 		Name   -> Function Engine.Actor.K2_GetActorRotation
 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
 */
struct FRotator AActor::K2_GetActorRotation()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Actor.K2_GetActorRotation"));

	AActor_K2_GetActorRotation_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_SetActorRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                         NewRotation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                                    bTeleportPhysics                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AActor::K2_SetActorRotation(const struct FRotator& NewRotation, bool bTeleportPhysics)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = UObject::FindObject<UFunction>(Xors("Function Engine.Actor.K2_SetActorRotation"));

	AActor_K2_SetActorRotation_Params Parms{};

	Parms.NewRotation = std::move(NewRotation);
	Parms.bTeleportPhysics = bTeleportPhysics;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x060CEF40
 * 		Name   -> Function Engine.KismetStringLibrary.Conv_StringToName
 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
 * Parameters:
 * 		class FString                                      InString                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
class FName UKismetStringLibrary::STATIC_Conv_StringToName(const class FString& InString)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.KismetStringLibrary.Conv_StringToName"));

	UKismetStringLibrary_Conv_StringToName_Params params{};
	params.InString = InString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

class FString UKismetStringLibrary::STATIC_Concat_StrStr(const class FString& A, const class FString& B)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.KismetStringLibrary.Concat_StrStr"));

	UKismetStringLibrary_Concat_StrStr_Params params{};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

void UKismetStringLibrary::STATIC_Conv_StringToColor(const class FString& InString, struct FLinearColor* OutConvertedColor, bool* OutIsValid)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.KismetStringLibrary.Conv_StringToColor"));

	UKismetStringLibrary_Conv_StringToColor_Params params{};
	params.InString = InString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutConvertedColor != nullptr)
		*OutConvertedColor = params.OutConvertedColor;
	if (OutIsValid != nullptr)
		*OutIsValid = params.OutIsValid;
}

int32_t UKismetStringLibrary::STATIC_FindSubstring(const class FString& SearchIn, const class FString& subString, bool bUseCase, bool bSearchFromEnd, int32_t StartPosition)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.KismetStringLibrary.FindSubstring"));

	UKismetStringLibrary_FindSubstring_Params params{};
	params.SearchIn = SearchIn;
	params.subString = subString;
	params.bUseCase = bUseCase;
	params.bSearchFromEnd = bSearchFromEnd;
	params.StartPosition = StartPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

int32_t UKismetStringLibrary::STATIC_Len(const class FString& S)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.KismetStringLibrary.Len"));

	UKismetStringLibrary_Len_Params params{};
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

class FString UKismetStringLibrary::STATIC_Mid(const class FString& SourceString, int32_t Start, int32_t Count)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.KismetStringLibrary.Mid"));

	UKismetStringLibrary_Mid_Params params{};
	params.SourceString = SourceString;
	params.Start = Start;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

int32_t UKismetStringLibrary::STATIC_Conv_StringToInt(const class FString& InString)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.KismetStringLibrary.Conv_StringToInt"));

	UKismetStringLibrary_Conv_StringToInt_Params params{};
	params.InString = InString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

double UKismetStringLibrary::STATIC_Conv_StringToDouble(const class FString& InString)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.KismetStringLibrary.Conv_StringToDouble"));

	UKismetStringLibrary_Conv_StringToDouble_Params params{};
	params.InString = InString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

class FString UKismetStringLibrary::STATIC_Conv_ColorToString(const struct FLinearColor& InColor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.KismetStringLibrary.Conv_ColorToString"));

	UKismetStringLibrary_Conv_ColorToString_Params params{};
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


class UWorld** UWorld::GWorld = nullptr;                                // 0x0000(0x0008) PREDEFINED PROPERTY
/**
 * Function:
 * 		RVA    -> 0x00000000
 * 		Name   -> PredefinedFunction UWorld.StaticClass
 * 		Flags  -> (Predefined, Static)
 */
UClass* UWorld::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class Engine.World"));
	return ptr;
}

UWorld* UWorld::Singleton()
{
	if (!UWorld::GWorld || !*UWorld::GWorld)
		return nullptr;
	return *UWorld::GWorld;
}

/**
 * Function:
 * 		RVA    -> 0x00000000
 * 		Name   -> PredefinedFunction UEngine.StaticClass
 * 		Flags  -> (Predefined, Static)
 */
UClass* UEngine::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class Engine.Engine"));
	return ptr;
}
UEngine* UEngine::GetEngine()
{
	static UEngine* GEngine = nullptr;

	if (!GEngine)
	{
		for (int i = 0; i < UObject::GObjects->Count(); i++)
		{
			UObject* Obj = UObject::GObjects->GetByIndex(i);

			if (!Obj)
				continue;

			if (Obj->IsA(UEngine::StaticClass()) && !Obj->IsDefaultObject())
			{
				GEngine = static_cast<UEngine*>(Obj);
				break;
			}
		}
	}

	return GEngine;
}


/**
 * Function:
 * 		RVA    -> 0x00000000
 * 		Name   -> PredefinedFunction ULightWeightInstanceBlueprintFunctionLibrary.StaticClass
 * 		Flags  -> (Predefined, Static)
 */
UClass* ULightWeightInstanceBlueprintFunctionLibrary::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class Engine.LightWeightInstanceBlueprintFunctionLibrary"));
	return ptr;
}


/**
 * Function:
 * 		RVA    -> 0x00000000
 * 		Name   -> PredefinedFunction UKismetSystemLibrary.StaticClass
 * 		Flags  -> (Predefined, Static)
 */
UClass* UKismetSystemLibrary::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class Engine.KismetSystemLibrary"));
	return ptr;
}

/**
 * Function:
 * 		RVA    -> 0x00000000
 * 		Name   -> PredefinedFunction UKismetStringLibrary.StaticClass
 * 		Flags  -> (Predefined, Static)
 */
UClass* UKismetStringLibrary::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class Engine.KismetStringLibrary"));
	return ptr;
}

class FString UKismetStringLibrary::STATIC_Conv_IntToString(int32_t inInt)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.KismetStringLibrary.Conv_IntToString"));

	UKismetStringLibrary_Conv_IntToString_Params params{};
	params.inInt = inInt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


/**
 * Function:
 * 		RVA    -> 0x00000000
 * 		Name   -> PredefinedFunction UKismetMathLibrary.StaticClass
 * 		Flags  -> (Predefined, Static)
 */
UClass* UKismetMathLibrary::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class Engine.KismetMathLibrary"));
	return ptr;
}

/**
 * Function:
 * 		RVA    -> 0x00000000
 * 		Name   -> PredefinedFunction UKismetMaterialLibrary.StaticClass
 * 		Flags  -> (Predefined, Static)
 */
UClass* UKismetMaterialLibrary::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class Engine.KismetMaterialLibrary"));
	return ptr;
}

UClass* UWidgetBlueprintLibrary::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class UMG.WidgetBlueprintLibrary"));
	return ptr;
}

void UWidgetBlueprintLibrary::STATIC_SetInputMode_GameAndUIEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture, bool bFlushInput)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx"));

	UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Params params{};
	params.PlayerController = PlayerController;
	params.InWidgetToFocus = InWidgetToFocus;
	params.InMouseLockMode = InMouseLockMode;
	params.bHideCursorDuringCapture = bHideCursorDuringCapture;
	params.bFlushInput = bFlushInput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void UWidgetBlueprintLibrary::STATIC_SetInputMode_GameOnly(class APlayerController* PlayerController, bool bFlushInput)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly"));

	UWidgetBlueprintLibrary_SetInputMode_GameOnly_Params params{};
	params.PlayerController = PlayerController;
	params.bFlushInput = bFlushInput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}
// Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)

void UWidgetBlueprintLibrary::STATIC_SetFocusToGameViewport()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = UObject::FindObject<UFunction>(Xors("Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport"));

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

APlayerController* APlayerController::Singleton()
{
	return UWorld::Singleton()->OwningGameInstance->LocalPlayers[0]->PlayerController;
}

/**
 * Function:
 * 		RVA    -> 0x05AC4240
 * 		Name   -> Function Engine.PrimitiveComponent.GetNumMaterials
 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
 */
int32_t UPrimitiveComponent::GetNumMaterials()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PrimitiveComponent.GetNumMaterials"));

	UPrimitiveComponent_GetNumMaterials_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


void UGameplayStatics::STATIC_SetGlobalTimeDilation(class UObject* WorldContextObject, float TimeDilation)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.GameplayStatics.SetGlobalTimeDilation"));

	UGameplayStatics_SetGlobalTimeDilation_Params params{};
	params.WorldContextObject = WorldContextObject;
	params.TimeDilation = TimeDilation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x05D94530
 * 		Name   -> Function Engine.MovementComponent.GetMaxSpeed
 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
 */
float UMovementComponent::GetMaxSpeed()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.MovementComponent.GetMaxSpeed"));

	UMovementComponent_GetMaxSpeed_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x063AA690
 * 		Name   -> Function Engine.PlayerState.GetExactPing
 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
 */
float APlayerState::GetExactPing()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PlayerState.GetExactPing"));

	APlayerState_GetExactPing_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x05B22FC0
 * 		Name   -> Function Engine.Actor.GetGameTimeSinceCreation
 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
 */
float AActor::GetGameTimeSinceCreation()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Actor.GetGameTimeSinceCreation"));

	AActor_GetGameTimeSinceCreation_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x05B29110
 * 		Name   -> Function Engine.Actor.GetDistanceTo
 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
 * Parameters:
 * 		class AActor*                                      OtherActor                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
float AActor::GetDistanceTo(class AActor* OtherActor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Actor.GetDistanceTo"));

	AActor_GetDistanceTo_Params params{};
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x0604A980
 * 		Name   -> Function Engine.KismetMaterialLibrary.CreateDynamicMaterialInstance
 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
 * Parameters:
 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		class UMaterialInterface*                          Parent                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		class FName                                        OptionalName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		EMIDCreationFlags                                  CreationFlags                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
class UMaterialInstanceDynamic* UKismetMaterialLibrary::STATIC_CreateDynamicMaterialInstance(class UObject* WorldContextObject, class UMaterialInterface* Parent, const class FName& OptionalName, EMIDCreationFlags CreationFlags)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.KismetMaterialLibrary.CreateDynamicMaterialInstance"));

	UKismetMaterialLibrary_CreateDynamicMaterialInstance_Params params{};
	params.WorldContextObject = WorldContextObject;
	params.Parent = Parent;
	params.OptionalName = OptionalName;
	params.CreationFlags = CreationFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x06077620
 * 		Name   -> Function Engine.KismetMathLibrary.Conv_RotatorToVector
 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
 * Parameters:
 * 		struct FRotator                                    InRot                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
 */
struct FVector UKismetMathLibrary::STATIC_Conv_RotatorToVector(const struct FRotator& InRot)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.KismetMathLibrary.Conv_RotatorToVector"));

	UKismetMathLibrary_Conv_RotatorToVector_Params params{};
	params.InRot = InRot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

int32_t UKismetMathLibrary::STATIC_RandomInteger(int32_t Max)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.KismetMathLibrary.RandomInteger"));

	UKismetMathLibrary_RandomInteger_Params params{};
	params.Max = Max;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x060EDA00
 * 		Name   -> Function Engine.KismetSystemLibrary.LineTraceSingle
 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
 * Parameters:
 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector                                     Start                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector                                     End                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		ETraceTypeQuery                                    TraceChannel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               bTraceComplex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		TArray<class AActor*>                              ActorsToIgnore                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
 * 		EDrawDebugTrace                                    DrawDebugType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FHitResult                                  OutHit                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
 * 		bool                                               bIgnoreSelf                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FLinearColor                                TraceColor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FLinearColor                                TraceHitColor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		float                                              DrawTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
bool UKismetSystemLibrary::STATIC_LineTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, EDrawDebugTrace DrawDebugType, struct FHitResult* OutHit, bool bIgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.KismetSystemLibrary.LineTraceSingle"));

	UKismetSystemLibrary_LineTraceSingle_Params params{};
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;
	params.ActorsToIgnore = ActorsToIgnore;
	params.DrawDebugType = DrawDebugType;
	params.bIgnoreSelf = bIgnoreSelf;
	params.TraceColor = TraceColor;
	params.TraceHitColor = TraceHitColor;
	params.DrawTime = DrawTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}

class FString UKismetSystemLibrary::STATIC_GetPathName(class UObject* Object)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.KismetSystemLibrary.GetPathName"));

	UKismetSystemLibrary_GetPathName_Params params{};
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x01378430
 * 		Name   -> Function Engine.ActorComponent.GetOwner
 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
 */
class AActor* UActorComponent::GetOwner()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.ActorComponent.GetOwner"));

	UActorComponent_GetOwner_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x05AB8DD0
 * 		Name   -> Function Engine.PrimalActor.IsPrimalStructureTurret
 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
 */
bool UPrimalActor::IsPrimalStructureTurret()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PrimalActor.IsPrimalStructureTurret"));

	UPrimalActor_IsPrimalStructureTurret_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x05AB8D70
 * 		Name   -> Function Engine.PrimalActor.IsPrimalStructureItemContainer
 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
 */
bool UPrimalActor::IsPrimalStructureItemContainer()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PrimalActor.IsPrimalStructureItemContainer"));

	UPrimalActor_IsPrimalStructureItemContainer_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x05AB8E20
 * 		Name   -> Function Engine.PrimalActor.IsPrimalStructureExplosive
 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
 */
bool UPrimalActor::IsPrimalStructureExplosive()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PrimalActor.IsPrimalStructureExplosive"));

	UPrimalActor_IsPrimalStructureExplosive_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x05AB8E50
 * 		Name   -> Function Engine.PrimalActor.IsPrimalStructure
 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
 */
bool UPrimalActor::IsPrimalStructure()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PrimalActor.IsPrimalStructure"));

	UPrimalActor_IsPrimalStructure_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x05AB8EE0
 * 		Name   -> Function Engine.PrimalActor.IsPrimalDino
 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
 */
bool UPrimalActor::IsPrimalDino()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PrimalActor.IsPrimalDino"));

	UPrimalActor_IsPrimalDino_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x05AB8E00
 * 		Name   -> Function Engine.PrimalActor.IsPrimalCharacterOrStructure
 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
 */
bool UPrimalActor::IsPrimalCharacterOrStructure()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PrimalActor.IsPrimalCharacterOrStructure"));

	UPrimalActor_IsPrimalCharacterOrStructure_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x05AB8E80
 * 		Name   -> Function Engine.PrimalActor.IsPrimalCharacter
 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
 */
bool UPrimalActor::IsPrimalCharacter()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PrimalActor.IsPrimalCharacter"));

	UPrimalActor_IsPrimalCharacter_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x05AB9B80
 * 		Name   -> Function Engine.PrimalActor.IsDead
 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
 */
bool UPrimalActor::IsDead()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PrimalActor.IsDead"));

	UPrimalActor_IsDead_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x030CCF70
 * 		Name   -> Function Engine.PrimalActor.CurrentlyHasRider
 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
 */
bool UPrimalActor::CurrentlyHasRider()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PrimalActor.CurrentlyHasRider"));

	UPrimalActor_CurrentlyHasRider_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x06386AB0
 * 		Name   -> Function Engine.PlayerController.WasInputKeyJustReleased
 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
 * Parameters:
 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
bool APlayerController::WasInputKeyJustReleased(const struct FKey& Key)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PlayerController.WasInputKeyJustReleased"));

	APlayerController_WasInputKeyJustReleased_Params params{};
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x06386C60
 * 		Name   -> Function Engine.PlayerController.WasInputKeyJustPressed
 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
 * Parameters:
 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
bool APlayerController::WasInputKeyJustPressed(const struct FKey& Key)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PlayerController.WasInputKeyJustPressed"));

	APlayerController_WasInputKeyJustPressed_Params params{};
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x0638FF40
 * 		Name   -> Function Engine.PlayerController.ProjectWorldLocationToScreen
 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
 * Parameters:
 * 		struct FVector                                     WorldLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector2D                                   ScreenLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               bPlayerViewportRelative                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
bool APlayerController::ProjectWorldLocationToScreen(const struct FVector& WorldLocation, struct FVector2D* ScreenLocation, bool bPlayerViewportRelative)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PlayerController.ProjectWorldLocationToScreen"));

	APlayerController_ProjectWorldLocationToScreen_Params params{};
	params.WorldLocation = WorldLocation;
	params.bPlayerViewportRelative = bPlayerViewportRelative;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScreenLocation != nullptr)
		*ScreenLocation = params.ScreenLocation;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x06386E10
 * 		Name   -> Function Engine.PlayerController.IsInputKeyDown
 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
 * Parameters:
 * 		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
bool APlayerController::IsInputKeyDown(const struct FKey& Key)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PlayerController.IsInputKeyDown"));

	APlayerController_IsInputKeyDown_Params params{};
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

struct FPlatformUserId APawn::GetPlatformUserId()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Pawn.GetPlatformUserId"));

	APawn_GetPlatformUserId_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x06385EF0
 * 		Name   -> Function Engine.PlayerController.GetMousePosition
 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
 * Parameters:
 * 		float                                              LocationX                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		float                                              LocationY                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               bEvenWhenMouseNotAttached                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
bool APlayerController::GetMousePosition(float* LocationX, float* LocationY, bool bEvenWhenMouseNotAttached)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PlayerController.GetMousePosition"));

	APlayerController_GetMousePosition_Params params{};
	params.bEvenWhenMouseNotAttached = bEvenWhenMouseNotAttached;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LocationX != nullptr)
		*LocationX = params.LocationX;
	if (LocationY != nullptr)
		*LocationY = params.LocationY;

	return params.ReturnValue;
}


/**
 * Function:
 * 		RVA    -> 0x05E4C0D0
 * 		Name   -> Function Engine.Controller.LineOfSightTo
 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
 * Parameters:
 * 		class AActor*                                      Other                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector                                     ViewPoint                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               bAlternateChecks                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
bool AController::LineOfSightTo(class AActor* Other, const struct FVector& ViewPoint, bool bAlternateChecks)
{
	static uint64_t GPC = 0;
	if (!GPC)
		GPC = signature(Xors("40 55 53 56 57 48 8D AC 24 78 FF")).GetPointer();
	auto Fn = reinterpret_cast<bool (__fastcall*)(AController* _this, AActor * Other, FVector ViewPoint, bool bAlternateChecks)>(GPC);
	return spoof_call(Fn, this, Other, ViewPoint, bAlternateChecks);
}

bool UKismetStringLibrary::STATIC_Contains(const class FString& SearchIn, const class FString& subString, bool bUseCase, bool bSearchFromEnd)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.KismetStringLibrary.Contains"));

	UKismetStringLibrary_Contains_Params params{};
	params.SearchIn = SearchIn;
	params.subString = subString;
	params.bUseCase = bUseCase;
	params.bSearchFromEnd = bSearchFromEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x05CCB730
 * 		Name   -> Function Engine.Character.CanJump
 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
 */
bool ACharacter::CanJump()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Character.CanJump"));

	ACharacter_CanJump_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


/**
 * Function:
 * 		RVA    -> 0x05AE90E0
 * 		Name   -> Function Engine.SkinnedMeshComponent.GetBoneName
 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
 * Parameters:
 * 		int32_t                                            BoneIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
class FName USkinnedMeshComponent::GetBoneName(int32_t BoneIndex)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.SkinnedMeshComponent.GetBoneName"));

	USkinnedMeshComponent_GetBoneName_Params params{};
	params.BoneIndex = BoneIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.K2_SetWorldRotation
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                         NewRotation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                                    bSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                       SweepHitResult                                         (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
// bool                                    bTeleport                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TArray<class UActorComponent*> AActor::K2_GetComponentsByClass(class UClass* ComponentClass)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Actor.K2_GetComponentsByClass"));

	AActor_K2_GetComponentsByClass_Params params{};
	params.ComponentClass = ComponentClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

void USceneComponent::K2_SetWorldRotation(const struct FRotator& NewRotation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.SceneComponent.K2_SetWorldRotation"));

	USceneComponent_K2_SetWorldRotation_Params params{};
	params.NewRotation = NewRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


void UPrimalActor::GetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries, int32_t HitBodyIndex)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PrimalActor.GetMultiUseEntries"));

	UPrimalActor_GetMultiUseEntries_Params params{};
	params.ForPC = ForPC;
	params.HitBodyIndex = HitBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;
}

void UPrimalActor::SetTickFunctionEnabled(bool bEnableTick)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PrimalActor.SetTickFunctionEnabled"));

	UPrimalActor_SetTickFunctionEnabled_Params params{};
	params.bEnableTick = bEnableTick;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

UClass* USkeletalMeshComponent::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class Engine.SkeletalMeshComponent"));
	return ptr;
}

UClass* UStaticMeshComponent::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class Engine.StaticMeshComponent"));
	return ptr;
}

void APlayerController::ClientRestart(class APawn* NewPawn)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PlayerController.ClientRestart"));

	APlayerController_ClientRestart_Params params{};
	params.NewPawn = NewPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

class APlayerController* AActor::GetOwnerController()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.Actor.GetOwnerController"));

	AActor_GetOwnerController_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


float UMovementComponent::GetGravityZ()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.MovementComponent.GetGravityZ"));

	UMovementComponent_GetGravityZ_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

UClass* AActor::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class Engine.Actor"));
	return ptr;
}

class UClass* ASpectatorPawn::StaticClass()
{
	static class UClass* Clss = nullptr;

	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class Engine.SpectatorPawn"));
	return ptr;
}

class APlayerState* UGameplayStatics::STATIC_GetPlayerStateFromUniqueNetId(class UObject* WorldContextObject, const struct FUniqueNetIdRepl& UniqueID)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.GameplayStatics.GetPlayerStateFromUniqueNetId"));

	UGameplayStatics_GetPlayerStateFromUniqueNetId_Params params{};
	params.WorldContextObject = WorldContextObject;
	params.UniqueID = UniqueID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

struct FPlatformUserId APlayerController::GetPlatformUserId()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PlayerController.GetPlatformUserId"));

	APlayerController_GetPlatformUserId_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.K2_SetWorldTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                       NewTransform                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                       SweepHitResult                                         (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                                    bTeleport                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USceneComponent::K2_SetWorldTransform(const struct FTransform& NewTransform, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = UObject::FindObject<UFunction>(Xors("Function Engine.SceneComponent.K2_SetWorldTransform"));

	USceneComponent_K2_SetWorldTransform_Params Parms{};

	Parms.NewTransform = std::move(NewTransform);
	Parms.bSweep = bSweep;
	Parms.bTeleport = bTeleport;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (SweepHitResult != nullptr)
		*SweepHitResult = std::move(Parms.SweepHitResult);
}

// Function Engine.SceneComponent.K2_SetRelativeRotation
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                         NewRotation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                                    bSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                       SweepHitResult                                         (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
// bool                                    bTeleport                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USceneComponent::K2_SetRelativeRotation(const struct FRotator& NewRotation, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = UObject::FindObject<UFunction>(Xors("Function Engine.SceneComponent.K2_SetRelativeRotation"));

	USceneComponent_K2_SetRelativeRotation_Params Parms{};

	Parms.NewRotation = std::move(NewRotation);
	Parms.bSweep = bSweep;
	Parms.bTeleport = bTeleport;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (SweepHitResult != nullptr)
		*SweepHitResult = std::move(Parms.SweepHitResult);
}


// Function Engine.SceneComponent.K2_SetRelativeTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform                       NewTransform                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                       SweepHitResult                                         (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                                    bTeleport                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USceneComponent::K2_SetRelativeTransform(const struct FTransform& NewTransform, bool bSweep, struct FHitResult* SweepHitResult, bool bTeleport)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = UObject::FindObject<UFunction>(Xors("Function Engine.SceneComponent.K2_SetRelativeTransform"));

	USceneComponent_K2_SetRelativeTransform_Params Parms{};

	Parms.NewTransform = std::move(NewTransform);
	Parms.bSweep = bSweep;
	Parms.bTeleport = bTeleport;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (SweepHitResult != nullptr)
		*SweepHitResult = std::move(Parms.SweepHitResult);
}


// Function Engine.SceneComponent.GetRelativeTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform                       ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform USceneComponent::GetRelativeTransform()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = UObject::FindObject<UFunction>(Xors("Function Engine.SceneComponent.GetRelativeTransform"));

	USceneComponent_GetRelativeTransform_Params Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


/**
 * Function:
 * 		RVA    -> 0x06388220
 * 		Name   -> Function Engine.PlayerController.ServerChangeName
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
 * Parameters:
 * 		class FString                                      S                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void APlayerController::ServerChangeName(const class FString& S)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PlayerController.ServerChangeName"));

	APlayerController_ServerChangeName_Params params{};
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x05AE9230
 * 		Name   -> Function Engine.SkinnedMeshComponent.GetBoneIndex
 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
 * Parameters:
 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
int32_t USkinnedMeshComponent::GetBoneIndex(const class FName& BoneName)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.SkinnedMeshComponent.GetBoneIndex"));

	USkinnedMeshComponent_GetBoneIndex_Params params{};
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x00000000
 * 		Name   -> PredefinedFunction APawn.StaticClass
 * 		Flags  -> (Predefined, Static)
 */
UClass* APawn::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class Engine.Pawn"));
	return ptr;
}
/**
 * Function:
 * 		RVA    -> 0x061A11D0
 * 		Name   -> Function Engine.MaterialInstanceDynamic.SetTextureParameterValue
 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
 * Parameters:
 * 		class FName                                        ParameterName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		class UTexture*                                    Value                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void UMaterialInstanceDynamic::SetTextureParameterValue(const class FName& ParameterName, class UTexture* Value)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.MaterialInstanceDynamic.SetTextureParameterValue"));

	UMaterialInstanceDynamic_SetTextureParameterValue_Params params{};
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x060B6890
 * 		Name   -> Function Engine.KismetRenderingLibrary.ImportFileAsTexture2D
 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
 * Parameters:
 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
class UTexture2D* UKismetRenderingLibrary::STATIC_ImportFileAsTexture2D(class UObject* WorldContextObject, const class FString& Filename)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.KismetRenderingLibrary.ImportFileAsTexture2D"));

	UKismetRenderingLibrary_ImportFileAsTexture2D_Params params{};
	params.WorldContextObject = WorldContextObject;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x05ABD860
 * 		Name   -> Function Engine.PrimalPawn.CanMove
 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
 */
bool APrimalPawn::CanMove()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PrimalPawn.CanMove"));

	APrimalPawn_CanMove_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x03345C90
 * 		Name   -> Function Engine.KismetSystemLibrary.GetDeviceId
 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
 */
class FString UKismetSystemLibrary::STATIC_GetDeviceId()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.KismetSystemLibrary.GetDeviceId"));

	UKismetSystemLibrary_GetDeviceId_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x03345C90
 * 		Name   -> Function Engine.KismetSystemLibrary.GetUniqueDeviceId
 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
 */
class FString UKismetSystemLibrary::STATIC_GetUniqueDeviceId()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.KismetSystemLibrary.GetUniqueDeviceId"));

	UKismetSystemLibrary_GetUniqueDeviceId_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}
// Function Engine.InputComponent.GetControllerKeyTimeDown
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                             Key                                                    (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UInputComponent::GetControllerKeyTimeDown(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = UObject::FindObject<UFunction>(Xors("Function Engine.InputComponent.GetControllerKeyTimeDown"));

	UInputComponent_GetControllerKeyTimeDown_Params Parms{};

	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

// Function Engine.InputComponent.IsControllerKeyDown
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                             Key                                                    (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInputComponent::IsControllerKeyDown(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = UObject::FindObject<UFunction>(Xors("Function Engine.InputComponent.IsControllerKeyDown"));

	UInputComponent_IsControllerKeyDown_Params Parms{};

	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

// Function Engine.InputComponent.WasControllerKeyJustPressed
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                             Key                                                    (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInputComponent::WasControllerKeyJustPressed(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = UObject::FindObject<UFunction>(Xors("Function Engine.InputComponent.WasControllerKeyJustPressed"));
	UInputComponent_WasControllerKeyJustPressed_Params Parms{};

	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Engine.InputComponent.WasControllerKeyJustReleased
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKey                             Key                                                    (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInputComponent::WasControllerKeyJustReleased(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = UObject::FindObject<UFunction>(Xors("Function Engine.InputComponent.WasControllerKeyJustReleased"));
	UInputComponent_WasControllerKeyJustReleased_Params Parms{};

	Parms.Key = std::move(Key);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

// Function Engine.KismetMathLibrary.Conv_VectorToRotator
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                          InVec                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                         ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UKismetMathLibrary::STATIC_Conv_VectorToRotator(const struct FVector& InVec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = UObject::FindObject<UFunction>(Xors("Function Engine.KismetMathLibrary.Conv_VectorToRotator"));

	UKismetMathLibrary_Conv_VectorToRotator_Params Parms{};

	Parms.inVec = std::move(InVec);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function Engine.GameplayStatics.PlaySound2D
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundBase*                       Sound                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   VolumeMultiplier                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   PitchMultiplier                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   StartTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USoundConcurrency*                ConcurrencySettings                                    (Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           OwningActor                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bIsUISound                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameplayStatics::STATIC_PlaySound2D(class UObject* WorldContextObject, class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, class AActor* OwningActor, bool bIsUISound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GameplayStatics", "PlaySound2D");

	UGameplayStatics_PlaySound2D_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Sound = Sound;
	Parms.VolumeMultiplier = VolumeMultiplier;
	Parms.PitchMultiplier = PitchMultiplier;
	Parms.StartTime = StartTime;
	Parms.ConcurrencySettings = ConcurrencySettings;
	Parms.OwningActor = OwningActor;
	Parms.bIsUISound = bIsUISound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

/**
 * Function:
 * 		RVA    -> 0x05D8F760
 * 		Name   -> Function Engine.MeshComponent.GetOverlayMaterial
 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
 */
class UMaterialInterface* UMeshComponent::GetOverlayMaterial()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.MeshComponent.GetOverlayMaterial"));

	UMeshComponent_GetOverlayMaterial_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x05D93DF0
 * 		Name   -> Function Engine.MovementComponent.K2_MoveUpdatedComponent
 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
 * Parameters:
 * 		struct FVector                                     Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FRotator                                    NewRotation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
 * 		struct FHitResult                                  OutHit                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
 * 		bool                                               bSweep                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               bTeleport                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
bool UMovementComponent::K2_MoveUpdatedComponent(const struct FVector& Delta, const struct FRotator& NewRotation, struct FHitResult* OutHit, bool bSweep, bool bTeleport)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.MovementComponent.K2_MoveUpdatedComponent"));

	UMovementComponent_K2_MoveUpdatedComponent_Params params{};
	params.Delta = Delta;
	params.NewRotation = NewRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}

UClass* AVolume::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class Engine.Volume"));
	return ptr;
}

UClass* APainCausingVolume::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class Engine.PainCausingVolume"));
	return ptr;
}

UClass* ATogglePainVolume::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class ShooterGame.TogglePainVolume"));
	return ptr;
}

// Function Engine.Actor.K2_DestroyActor
// (Native, Public, BlueprintCallable)

void AActor::K2_DestroyActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Actor", "K2_DestroyActor");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

// Function Engine.Actor.SetActorScale3D
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                          NewScale3D                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AActor::SetActorScale3D(const struct FVector& NewScale3D)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Actor", "SetActorScale3D");

	AActor_SetActorScale3D_Params Parms{};

	Parms.NewScale3D = std::move(NewScale3D);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function Engine.MeshComponent.SetOverlayMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*               NewOverlayMaterial                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMeshComponent::SetOverlayMaterial(class UMaterialInterface* NewOverlayMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshComponent", "SetOverlayMaterial");

	UMeshComponent_SetOverlayMaterial_Params Parms{};

	Parms.NewOverlayMaterial = NewOverlayMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

UClass* UMaterial::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class Engine.Material"));
	return ptr;
}


// Function Engine.Controller.Possess
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class APawn*                            InPawn                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AController::Possess(class APawn* InPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Controller", "Possess");

	AController_Possess_Params Parms{};

	Parms.InPawn = InPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

// Function Engine.Controller.ForcePossess
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APawn*                            InPawn                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AController::ForcePossess(class APawn* InPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Controller", "ForcePossess");

	AController_ForcePossess_Params Parms{};

	Parms.InPawn = InPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

double UKismetMathLibrary::STATIC_Sqrt(double A)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.KismetMathLibrary.Sqrt"));

	UKismetMathLibrary_Sqrt_Params params{};
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}