#pragma once
#include "pch.h"
typedef int RoundedRectFlags;

enum RoundedRectFlags_
{
    RoundedRectFlags_None = 0,
    RoundedRectFlags_NoRoundingTopLeft = 1 << 0,
    RoundedRectFlags_NoRoundingTopRight = 1 << 1,
    RoundedRectFlags_NoRoundingBottomLeft = 1 << 2,
    RoundedRectFlags_NoRoundingBottomRight = 1 << 3
};

typedef struct ScreenMessage 
{
    FVector2D Position;
    FVector2D Size;
    FLinearColor Color;
    std::wstring Text;
    std::chrono::steady_clock::time_point StartTime;
    float DurationSeconds;
}ScreenMessage;

class KillFeedMessage
{
public:
    std::wstring KillerName;
    UTexture2D* WeaponOrDinoIcon;
    UTexture2D* HitBodyPartIcon;
    std::wstring KilledName;
    FLinearColor KillerColor;
    FLinearColor KilledColor;
    float Damage;
    std::chrono::steady_clock::time_point StartTime;
};

typedef struct 
{
    double h; // angle in degrees
    double s; // a fraction between 0 and 1
    double v; // a fraction between 0 and 1
} HSVColor;

namespace Renderer
{
    extern UFont* MenuFont;
    extern UFont* EspFont;
    extern UFont* Font;
    extern UFont* HudFont;
    extern UFont* HudFontBig;

    extern UCanvas* canvas;
    extern int blendmode;
    extern std::vector<struct ScreenMessage> ScreenMessages;
    extern std::vector<struct KillFeedMessage> KillFeedMessages;
    //Draw Functions

    FVector2D GetCanvasSize();
    void DrawLine3DScreenCheck(FVector WorldPosA, FVector WorldPosB, float Thickness, FLinearColor DrawColor,int Precision = 20);
    void DrawLine2D(FVector2D ScreenPosA, FVector2D ScreenPosB, float Thickness, FLinearColor DrawColor);
    void DrawLine3D(APlayerController* PC, FVector WorldPosA, FVector WorldPosB, float Thickness, FLinearColor DrawColor);
    void DrawBoxEx(APlayerController* PC, FVector WorldPosBot, FVector WorldPosTop, double WidthX, double WidthY, double Height, float Thickness, FLinearColor DrawColor);
    void DrawBox(APlayerController* PC, FVector WorldPosBot, FVector WorldPosTop, double Width, double Height, float Thickness, FLinearColor DrawColor);
    void DrawTurningBox(APlayerController* PC, FVector FeetPosition, FVector HeadPosition, FVector BoxScaling, float Thickness, double Yaw, FLinearColor DrawColor);
    void DrawTurningBox(APlayerController* PC, FVector Position, FVector BoxScaling, float Thickness, double Yaw, FLinearColor DrawColor);
    void DrawBoundingBox(APlayerController* PC, AActor* actor, float Thickness, FLinearColor DrawColor);
    void DrawTurningBoundingBox(APlayerController* PC, AActor* actor, float Thickness, FLinearColor DrawColor);
    void DrawString(FString Text, FVector2D ScreenPos, FVector2D Scale, FLinearColor DrawColor, bool Outlined, bool CenteredX, FLinearColor OutlineColor);
    void DrawString(const wchar_t* Text, FVector2D ScreenPos, FVector2D Scale, FLinearColor DrawColor, bool Outlined = false, FLinearColor OutlineColor = FLinearColor{ 0,0,0,0 }, bool centerX = false, bool centerY = true);
    void DrawString(float Text, FVector2D ScreenPos, FVector2D Scale, FLinearColor DrawColor, bool Outlined = false, FLinearColor OutlineColor = FLinearColor{ 0,0,0,0 });
    void DrawString(std::wstring Text, FVector2D ScreenPos, FVector2D Scale, FLinearColor DrawColor, bool Outlined = false, FLinearColor OutlineColor = {0.f,0.f,0.f,1.f}, bool CenterX = false, bool CenterY = true);
    void DrawString(int Text, FVector2D ScreenPos, FVector2D Scale, FLinearColor DrawColor, bool Outlined = false, FLinearColor OutlineColor = FLinearColor{ 0,0,0,0 });
    void DrawString(double Text, FVector2D ScreenPos, FVector2D Scale, FLinearColor DrawColor, bool Outlined = false, FLinearColor OutlineColor = FLinearColor{ 0,0,0,0 });
    void DrawStringEx(FString Text, FVector2D ScreenPos, FVector2D Scale, FLinearColor DrawColor, FLinearColor ShadowColor, FVector2D ShadowOffset, bool Outlined, FLinearColor OutlineColor);
    void DrawCircle(FVector2D pos, int radius, int numSides, float Thickness, FLinearColor Color);
    void DrawFilledCircle(FVector2D ScreenPos, float radius, FLinearColor DrawColor);
    void DrawMultilineText(std::vector<FString>* Text, FVector2D StartScreenPos, FVector2D Scale, FLinearColor DrawColor, bool Outlined = false, bool CenteredX = true, FLinearColor OutlineColor = FLinearColor{ 0,0,0,0 });
    void DrawMultilineTextWithSpacing(std::vector<std::wstring>* Text, FVector2D StartScreenPos, FVector2D Scale, FLinearColor DrawColor, bool Outlined = false, bool CenteredX = true , FLinearColor OutlineColor = FLinearColor{ 0,0,0,0 }, double spacing = 8);
    void DrawRectangle(FVector2D TopLeft, FVector2D BottomRight, float Thickness, FLinearColor DrawColor);
    void DrawRectangleSize(FVector2D Position, FVector2D Size, float Thickness, FLinearColor DrawColor);
    void DrawFilledRectangle(FVector2D TopLeft, FVector2D BottomRightPos, FLinearColor DrawColor);
    void DrawFilledRectangleSize(FVector2D Position, FVector2D Size, FLinearColor DrawColor);
    void DrawRoundedRectangle(FVector2D Pos, FVector2D Size, float Thickness, FLinearColor DrawColor);
    void DrawCornerBox(FVector2D FeetPos, FVector2D HeadPos, float thick, FLinearColor color);
    FVector BoneToLocation(AShooterCharacter* Player, int BoneId);
    FVector2D BoneToScreenLocation(APlayerController* Controller, AShooterCharacter* Player, int BoneId);
    void GetDesktopResolution(float& horizontal, float& vertical);
    FVector2D W2S(APlayerController* PC, FVector pos);
    void DrawIcon(UTexture* Icon, FVector2D ScreenPos, FVector2D TextureSize, EBlendMode blendMode = EBlendMode::BLEND_Masked, FLinearColor Color = { 1.f,1.f,1.f,1.f }, float Rotation = 0.f, FVector2D PivonPoint = {0.5f,0.5f});
    void RenderFilledRectangle( FVector2D initial_pos, float w, float h, FLinearColor color);
    void RenderFilledRoundedRectangle( FVector2D* Position, float Width, float Height, float Rounding, FLinearColor DrawColor, RoundedRectFlags Flags = RoundedRectFlags_None);
    void RenderHorizontalHealth(AShooterCharacter* actor, FVector2D Pos);
    void RenderHorizontalStam(AShooterCharacter* actor, FVector2D Pos);
    void DrawBone(APlayerController* PC,AShooterCharacter* Char, ShooterBones bone1, ShooterBones bone2, float Thickness, FLinearColor col);
    FLinearColor HealthColorGradient(float HpDivByMaxHp);
    void DrawHealthBar(AShooterCharacter* Char, FVector2D Pos);
    void DrawHealthBar(float CurrentHealth, float MaxHealth, FVector2D Pos);
    void DrawTorpBar(AShooterCharacter* Char, FVector2D Pos);
    void DrawSkeleton(APlayerController* PC, AShooterCharacter* Char, float Thickness, FLinearColor col);
    void DrawSnapLine(APlayerController* PC, AShooterCharacter* Char, float Thickness, FLinearColor Drawcolor);
    void DrawFlooredSnapLine(APlayerController* PC, AShooterCharacter* Char, float Thickness, FLinearColor Drawcolor);
    void DrawViewLine(AShooterCharacter* Char, float Thickness, FLinearColor DrawColor, float Length);
    void DrawPlayerBox(AActor* Actor, int PlayerBoxIndex, APlayerController* PC, FVector FeetPosition, FVector HeadPosition, FVector BoxScaling, float Thickness, double Yaw, FLinearColor DrawColor);
    void RenderPlayerArmor(AShooterCharacter* Character, FVector2D Position);
    void DrawPixelSquare(const FVector2D& Pos, const FLinearColor& Color, const double Size = 1.f, const bool Center = false);
    void PushFont(UFont* font);
    void DrawProgressCircle(FVector2D pos, float radius, float percentage, int numSides, float thickness, FLinearColor Color);
    //FLinearColor GetDrawColor(bool Friendly, bool Visible, bool Alive); TO BE DONE WHEN GLOBALS ARE DONE
    //FLinearColor GetDinoDrawColor(bool Friendly, bool Visible, bool Dead); TO BE DONE WHEN GLOBALS ARE DONE
    void DrawIconCursed(UTexture* Icon, FVector2D ScreenPos, FVector2D TextureSize);
    FLinearColor SkyRainbow(int moduleIndex, float bright, float speed);
    void AddScreenMessage(std::wstring Text, FVector2D Position, FVector2D Size, FLinearColor Color, float DurationSeconds);
    void AddErrorMessage(std::wstring Text);
    void AddInfoMessage(std::wstring Text);
    void AddSuccessMessage(std::wstring Text);
    void AddWarningMessage(std::wstring Text);
    void AddKillFeed(std::wstring KillerName, UTexture2D* WeaponOrDinoIcon, UTexture2D* HitBodyPartIcon, std::wstring KilledName, float damage, FLinearColor KillerColor = { 0.f,1.f,0.f,1.f }, FLinearColor KilledColor = { 1.f,0.f,0.f,1.f });
    void DrawKillFeedMessage(KillFeedMessage* Message,int PreviousDrawnMessages);
    void DrawScreenMessages();
    FVector2D FindClosestPointOnScreen(FVector Tofind, FVector OtherEnd, int precision);
    void DrawDebugBoxWithLines(const FVector& Center, const FVector& Extent, const FQuat& Rotation, FLinearColor Color, float Thickness = 1.0f);
    HSVColor RGBtoHSV(FLinearColor in);
    FLinearColor HSVtoRGB(HSVColor in);

    void DrawHueLine(FVector2D pos, float Width, float Height);
    float GetHueUnderMousePos(FVector2D MousePos, FVector2D HueLinePos, float Width, float Height);
    void DrawSaturationLine(FVector2D pos, float Width, float Height, float Hue);
    float GetSaturationUnderMousePos(FVector2D MousePos, FVector2D SaturationLinePos, float Width, float Height);
    void DrawValueLine(FVector2D pos, float Width, float Height, float Hue, float Saturation);
    float GetValueUnderMousePos(FVector2D MousePos, FVector2D ValueLinePos, float Width, float Height);

    int Distance2D(int X1, int Y1, int X2, int Y2);
};

