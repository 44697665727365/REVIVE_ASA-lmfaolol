#include "pch.h"
#include "Rendering.h"

using namespace CG;

namespace Renderer
{
    UFont* MenuFont = nullptr;
    UFont* EspFont = nullptr;
    UFont* Font = nullptr;
    UFont* HudFont = nullptr;
    UFont* HudFontBig = nullptr;

    UCanvas* canvas = nullptr;
    int blendmode = 0;

    std::vector<struct ScreenMessage> ScreenMessages = {};
    std::vector<struct KillFeedMessage> KillFeedMessages = {};
}

/*
void
FVector2D ScreenPosA,
FVector2D ScreenPosB,
float Thickness,
FLinearColor DrawColor
*/

FVector2D GetTextSize(UCanvas* Canvas, UFont* Font, FString RenderText, const FVector2D& Scale)
{
    static uint64_t sig = 0;
    if (!sig)
        sig = signature(Xors("48 85 D2 0F 84 ? ? ? ? 48 89 4C 24 ? 53 48 83 EC 70 41 83 78 ? ?")).GetPointer();

    float buffer_x;
    float buffer_y;

    auto Fn = reinterpret_cast<FVector2D * (__fastcall*)(UCanvas * _this, UFont * InFont, FString * InText, float* xl, float* yl, float ScaleX, float ScaleY)>(sig);
    spoof_call(Fn, Canvas, Font, &RenderText, &buffer_x, &buffer_y, (float)Scale.X, (float)Scale.Y);

    return { buffer_x, buffer_y };
}

void CustomDrawText(UCanvas* Canvas, UFont* RenderFont, FString RenderText, const struct FVector2D& ScreenPosition, const struct FVector2D& Scale, const struct FLinearColor& RenderColor)
{
    static uint64_t sig = 0;
    if (!sig)
        sig = signature(Xors("48 8B C4 48 81 EC ? ? ? ? 83 60 B8 F8 0F 57 C0 83 60 C0 FE 0F 57 C9 48 C7 40 ? ? ? ? ?")).GetPointer();

    Canvas->DrawColor = FColor::FromLinear(RenderColor);

    FFontRenderInfo* Info = nullptr;
    FVector2D TextSize = GetTextSize(Canvas, RenderFont, RenderText, Scale);

    auto Fn = reinterpret_cast<float* (__fastcall*)(UCanvas * _this, UFont * InFont, FString * InText, float X, float Y, float XScale, float YScale, FFontRenderInfo * RenderInfo)>(sig);
    spoof_call(Fn, Canvas, RenderFont, &RenderText, (float)ScreenPosition.X - (float)TextSize.X * 0.5f, (float)ScreenPosition.Y - (float)TextSize.Y * 0.5f, (float)Scale.X, (float)Scale.Y, Info);
}

FVector2D Renderer::GetCanvasSize()
{
    FVector2D CanvasSize;

    if (globals::rendering::canvas)
    {
        CanvasSize.X = globals::rendering::canvas->SizeX / 1;
        CanvasSize.Y = globals::rendering::canvas->SizeY / 1;
    }

    return CanvasSize;
}
FVector2D Renderer::FindClosestPointOnScreen(FVector Tofind, FVector OtherEnd, int precision)
{
    FVector upper = Tofind;
    FVector lower = OtherEnd;
    FVector middle = (upper + lower) / 2;
    FVector2D pos1 = {};
    bool lastValid = false;
    for (int i = 0; i <= precision;i++)
    {
        Actors::PWTS(middle, pos1);
        if (pos1.IsValid())
        {
            lower = middle;
            middle = (upper + lower) / 2;
            lastValid = true;
        }
        else
        {
            upper = middle;
            middle = (upper + lower) / 2;
            lastValid = false;
        }
    }
    if (!lastValid)
    {
        Actors::PWTS(middle, pos1);
    }
    return pos1;
}
void Renderer::DrawLine3DScreenCheck(FVector WorldPosA, FVector WorldPosB, float Thickness, FLinearColor DrawColor, int Precision)
{
    FVector2D pos1 = {};
    if (!Actors::PWTS(WorldPosA, pos1))
        pos1 = FindClosestPointOnScreen(WorldPosA, WorldPosB, Precision);
    FVector2D pos2 = {};
    if (!Actors::PWTS(WorldPosB, pos2))
        pos2 = FindClosestPointOnScreen(WorldPosB, WorldPosA, Precision);

    if (pos1.IsValid() && pos2.IsValid())
        Renderer::DrawLine2D(pos1, pos2, Thickness, DrawColor);
}

void Renderer::DrawLine2D(FVector2D ScreenPosA, FVector2D ScreenPosB, float Thickness, FLinearColor DrawColor)
{
    canvas->K2_DrawLine(ScreenPosA, ScreenPosB, Thickness, DrawColor);
}
/*
void
APlayerController* PC,
FVector WorldPosA,
FVector WorldPosB,
float Thickness,
FLinearColor DrawColor
*/
void Renderer::DrawLine3D(APlayerController* PC, FVector WorldPosA, FVector WorldPosB, float Thickness, FLinearColor DrawColor)
{
    FVector2D ScreenPosA{};
    FVector2D ScreenPosB{};
    if (PC->ProjectWorldLocationToScreen(WorldPosA, &ScreenPosA, false) && PC->ProjectWorldLocationToScreen(WorldPosB, &ScreenPosB, false))
        canvas->K2_DrawLine(ScreenPosA, ScreenPosB, Thickness, DrawColor);
}
/*
void
APlayerController* PC,
FVector WorldPosBot,
FVector WorldPosTop,
float WidthX,
float WidhtY,
float Height,
float Thickness,
FLinearColor DrawColor
*/
void Renderer::DrawBoxEx(APlayerController* PC, FVector WorldPosBot, FVector WorldPosTop, double WidthX, double WidthY, double Height, float Thickness, FLinearColor DrawColor)
{
    /*
    1   2

    3   4
    */
    FVector2D Top1{};
    FVector2D Top2{};
    FVector2D Top3{};
    FVector2D Top4{};
    FVector2D Bot1{};
    FVector2D Bot2{};
    FVector2D Bot3{};
    FVector2D Bot4{};
    FVector WTop1 = { WorldPosTop.X - WidthX,WorldPosTop.Y + WidthY,WorldPosTop.Z + Height };
    FVector WTop2 = { WorldPosTop.X + WidthX,WorldPosTop.Y + WidthY,WorldPosTop.Z + Height };
    FVector WTop3 = { WorldPosTop.X - WidthX,WorldPosTop.Y - WidthY,WorldPosTop.Z + Height };
    FVector WTop4 = { WorldPosTop.X + WidthX,WorldPosTop.Y - WidthY,WorldPosTop.Z + Height };
    FVector WBot1 = { WorldPosBot.X - WidthX,WorldPosBot.Y + WidthY,WorldPosBot.Z - Height };
    FVector WBot2 = { WorldPosBot.X + WidthX,WorldPosBot.Y + WidthY,WorldPosBot.Z - Height };
    FVector WBot3 = { WorldPosBot.X - WidthX,WorldPosBot.Y - WidthY,WorldPosBot.Z - Height };
    FVector WBot4 = { WorldPosBot.X + WidthX,WorldPosBot.Y - WidthY,WorldPosBot.Z - Height };
    if (
        !PC->ProjectWorldLocationToScreen(WTop1, &Top1, false) ||
        !PC->ProjectWorldLocationToScreen(WTop2, &Top2, false) ||
        !PC->ProjectWorldLocationToScreen(WTop3, &Top3, false) ||
        !PC->ProjectWorldLocationToScreen(WTop4, &Top4, false) ||
        !PC->ProjectWorldLocationToScreen(WBot1, &Bot1, false) ||
        !PC->ProjectWorldLocationToScreen(WBot2, &Bot2, false) ||
        !PC->ProjectWorldLocationToScreen(WBot3, &Bot3, false) ||
        !PC->ProjectWorldLocationToScreen(WBot4, &Bot4, false)
        )
        return;

    canvas->K2_DrawLine(Top1, Top2, Thickness, DrawColor);
    canvas->K2_DrawLine(Top2, Top4, Thickness, DrawColor);
    canvas->K2_DrawLine(Top4, Top3, Thickness, DrawColor);
    canvas->K2_DrawLine(Top3, Top1, Thickness, DrawColor);

    canvas->K2_DrawLine(Bot1, Bot2, Thickness, DrawColor);
    canvas->K2_DrawLine(Bot2, Bot4, Thickness, DrawColor);
    canvas->K2_DrawLine(Bot4, Bot3, Thickness, DrawColor);
    canvas->K2_DrawLine(Bot3, Bot1, Thickness, DrawColor);

    canvas->K2_DrawLine(Bot1, Top1, Thickness, DrawColor);
    canvas->K2_DrawLine(Bot2, Top2, Thickness, DrawColor);
    canvas->K2_DrawLine(Bot3, Top3, Thickness, DrawColor);
    canvas->K2_DrawLine(Bot4, Top4, Thickness, DrawColor);
}
/*
void
APlayerController* PC,
FVector WorldPosBot,
FVector WorldPosTop,
float Width,
float Height,
float Thickness,
FLinearColor DrawColor
*/
void Renderer::DrawBox(APlayerController* PC, FVector WorldPosBot, FVector WorldPosTop, double Width, double Height, float Thickness, FLinearColor DrawColor)
{
    /*
    1   2

    3   4
    */
    FVector2D Top1{};
    FVector2D Top2{};
    FVector2D Top3{};
    FVector2D Top4{};
    FVector2D Bot1{};
    FVector2D Bot2{};
    FVector2D Bot3{};
    FVector2D Bot4{};
    FVector WTop1 = { WorldPosTop.X - Width,WorldPosTop.Y + Width,WorldPosTop.Z + Height };
    FVector WTop2 = { WorldPosTop.X + Width,WorldPosTop.Y + Width,WorldPosTop.Z + Height };
    FVector WTop3 = { WorldPosTop.X - Width,WorldPosTop.Y - Width,WorldPosTop.Z + Height };
    FVector WTop4 = { WorldPosTop.X + Width,WorldPosTop.Y - Width,WorldPosTop.Z + Height };
    FVector WBot1 = { WorldPosBot.X - Width,WorldPosBot.Y + Width,WorldPosBot.Z - Height };
    FVector WBot2 = { WorldPosBot.X + Width,WorldPosBot.Y + Width,WorldPosBot.Z - Height };
    FVector WBot3 = { WorldPosBot.X - Width,WorldPosBot.Y - Width,WorldPosBot.Z - Height };
    FVector WBot4 = { WorldPosBot.X + Width,WorldPosBot.Y - Width,WorldPosBot.Z - Height };
    if (
        !PC->ProjectWorldLocationToScreen(WTop1, &Top1, false) ||
        !PC->ProjectWorldLocationToScreen(WTop2, &Top2, false) ||
        !PC->ProjectWorldLocationToScreen(WTop3, &Top3, false) ||
        !PC->ProjectWorldLocationToScreen(WTop4, &Top4, false) ||
        !PC->ProjectWorldLocationToScreen(WBot1, &Bot1, false) ||
        !PC->ProjectWorldLocationToScreen(WBot2, &Bot2, false) ||
        !PC->ProjectWorldLocationToScreen(WBot3, &Bot3, false) ||
        !PC->ProjectWorldLocationToScreen(WBot4, &Bot4, false)
        )
        return;

    canvas->K2_DrawLine(Top1, Top2, Thickness, DrawColor);
    canvas->K2_DrawLine(Top2, Top4, Thickness, DrawColor);
    canvas->K2_DrawLine(Top4, Top3, Thickness, DrawColor);
    canvas->K2_DrawLine(Top3, Top1, Thickness, DrawColor);

    canvas->K2_DrawLine(Bot1, Bot2, Thickness, DrawColor);
    canvas->K2_DrawLine(Bot2, Bot4, Thickness, DrawColor);
    canvas->K2_DrawLine(Bot4, Bot3, Thickness, DrawColor);
    canvas->K2_DrawLine(Bot3, Bot1, Thickness, DrawColor);

    canvas->K2_DrawLine(Bot1, Top1, Thickness, DrawColor);
    canvas->K2_DrawLine(Bot2, Top2, Thickness, DrawColor);
    canvas->K2_DrawLine(Bot3, Top3, Thickness, DrawColor);
    canvas->K2_DrawLine(Bot4, Top4, Thickness, DrawColor);
}
double DegreesToRadians(double deg)
{
    return deg * (PI / 180);
}

void Renderer::DrawTurningBox(APlayerController* PC, FVector FeetPosition, FVector HeadPosition, FVector BoxScaling, float Thickness, double Yaw, FLinearColor DrawColor)
{
    FVector b1, b2, b3, b4, t1, t2, t3, t4;
    FVector2D b1Out, b2Out, b3Out, b4Out, t1Out, t2Out, t3Out, t4Out;
    b1.Z = b2.Z = b3.Z = b4.Z = FeetPosition.Z;
    b1.X = FeetPosition.X + cos(DegreesToRadians(Yaw + 45)) * BoxScaling.X;
    b1.Y = FeetPosition.Y + sin(DegreesToRadians(Yaw + 45)) * BoxScaling.X;
    b2.X = FeetPosition.X + cos(DegreesToRadians(Yaw + 135)) * BoxScaling.X;
    b2.Y = FeetPosition.Y + sin(DegreesToRadians(Yaw + 135)) * BoxScaling.X;
    b3.X = FeetPosition.X + cos(DegreesToRadians(Yaw + 225)) * BoxScaling.X;
    b3.Y = FeetPosition.Y + sin(DegreesToRadians(Yaw + 225)) * BoxScaling.X;
    b4.X = FeetPosition.X + cos(DegreesToRadians(Yaw + 315)) * BoxScaling.X;
    b4.Y = FeetPosition.Y + sin(DegreesToRadians(Yaw + 315)) * BoxScaling.X;
    t1 = b1, t2 = b2, t3 = b3, t4 = b4;
    t1.Z = t2.Z = t3.Z = t4.Z = HeadPosition.Z + (BoxScaling.Y * 4.f);

    if (
        !PC->ProjectWorldLocationToScreen(b1, &b1Out, false) ||
        !PC->ProjectWorldLocationToScreen(b2, &b2Out, false) ||
        !PC->ProjectWorldLocationToScreen(b3, &b3Out, false) ||
        !PC->ProjectWorldLocationToScreen(b4, &b4Out, false) ||
        !PC->ProjectWorldLocationToScreen(t1, &t1Out, false) ||
        !PC->ProjectWorldLocationToScreen(t2, &t2Out, false) ||
        !PC->ProjectWorldLocationToScreen(t3, &t3Out, false) ||
        !PC->ProjectWorldLocationToScreen(t4, &t4Out, false))
        return;

    DrawLine2D(b1Out, b2Out, Thickness, DrawColor);
    DrawLine2D(b2Out, b3Out, Thickness, DrawColor);
    DrawLine2D(b3Out, b4Out, Thickness, DrawColor);
    DrawLine2D(b4Out, b1Out, Thickness, DrawColor);
    DrawLine2D(b1Out, t1Out, Thickness, DrawColor);
    DrawLine2D(b2Out, t2Out, Thickness, DrawColor);
    DrawLine2D(b3Out, t3Out, Thickness, DrawColor);
    DrawLine2D(b4Out, t4Out, Thickness, DrawColor);
    DrawLine2D(t1Out, t2Out, Thickness, DrawColor);
    DrawLine2D(t2Out, t3Out, Thickness, DrawColor);
    DrawLine2D(t3Out, t4Out, Thickness, DrawColor);
    DrawLine2D(t4Out, t1Out, Thickness, DrawColor);
}

void Renderer::DrawTurningBox(APlayerController* PC, FVector Position, FVector BoxScaling, float Thickness, double Yaw, FLinearColor DrawColor)
{
    FVector b1, b2, b3, b4, t1, t2, t3, t4;
    FVector2D b1Out, b2Out, b3Out, b4Out, t1Out, t2Out, t3Out, t4Out;
    b1.Z = b2.Z = b3.Z = b4.Z = Position.Z - BoxScaling.Z;
    b1.X = Position.X + cos(DegreesToRadians(Yaw + 45)) * BoxScaling.X;
    b1.Y = Position.Y + sin(DegreesToRadians(Yaw + 45)) * BoxScaling.X;
    b2.X = Position.X + cos(DegreesToRadians(Yaw + 135)) * BoxScaling.X;
    b2.Y = Position.Y + sin(DegreesToRadians(Yaw + 135)) * BoxScaling.X;
    b3.X = Position.X + cos(DegreesToRadians(Yaw + 225)) * BoxScaling.X;
    b3.Y = Position.Y + sin(DegreesToRadians(Yaw + 225)) * BoxScaling.X;
    b4.X = Position.X + cos(DegreesToRadians(Yaw + 315)) * BoxScaling.X;
    b4.Y = Position.Y + sin(DegreesToRadians(Yaw + 315)) * BoxScaling.X;
    t1 = b1, t2 = b2, t3 = b3, t4 = b4;
    t1.Z = t2.Z = t3.Z = t4.Z = Position.Z + BoxScaling.Y;

    if (
        !PC->ProjectWorldLocationToScreen(b1, &b1Out, false) ||
        !PC->ProjectWorldLocationToScreen(b2, &b2Out, false) ||
        !PC->ProjectWorldLocationToScreen(b3, &b3Out, false) ||
        !PC->ProjectWorldLocationToScreen(b4, &b4Out, false) ||
        !PC->ProjectWorldLocationToScreen(t1, &t1Out, false) ||
        !PC->ProjectWorldLocationToScreen(t2, &t2Out, false) ||
        !PC->ProjectWorldLocationToScreen(t3, &t3Out, false) ||
        !PC->ProjectWorldLocationToScreen(t4, &t4Out, false))
        return;

    DrawLine2D(b1Out, b2Out, Thickness, DrawColor);
    DrawLine2D(b2Out, b3Out, Thickness, DrawColor);
    DrawLine2D(b3Out, b4Out, Thickness, DrawColor);
    DrawLine2D(b4Out, b1Out, Thickness, DrawColor);
    DrawLine2D(b1Out, t1Out, Thickness, DrawColor);
    DrawLine2D(b2Out, t2Out, Thickness, DrawColor);
    DrawLine2D(b3Out, t3Out, Thickness, DrawColor);
    DrawLine2D(b4Out, t4Out, Thickness, DrawColor);
    DrawLine2D(t1Out, t2Out, Thickness, DrawColor);
    DrawLine2D(t2Out, t3Out, Thickness, DrawColor);
    DrawLine2D(t3Out, t4Out, Thickness, DrawColor);
    DrawLine2D(t4Out, t1Out, Thickness, DrawColor);
}
/*
void
AShooterPlayerController* PC,
AActor* actor,
float Thickness,
FLinearColor DrawColor
*/
void Renderer::DrawBoundingBox(APlayerController* PC, AActor* actor, float Thickness, FLinearColor DrawColor)
{
    FVector Locaction = actor->K2_GetActorLocation();
    FVector Bounds;
    actor->GetActorBounds(true, &Locaction, &Bounds, false);
    DrawBoxEx(PC, Locaction, Locaction, Bounds.X, Bounds.Y, Bounds.Z, Thickness, DrawColor);
}
/*
void
AShooterPlayerController* PC,
AActor* actor,
float Thickness,
FLinearColor DrawColor
*/
void Renderer::DrawTurningBoundingBox(APlayerController* PC, AActor* actor, float Thickness, FLinearColor DrawColor)
{
    FVector Locaction = actor->K2_GetActorLocation();
    FVector Bounds;
    actor->GetActorBounds(true, &Locaction, &Bounds, false);
    double yaw = actor->K2_GetActorRotation().Yaw;
    DrawBoxEx(PC, Locaction, Locaction, Bounds.X, Bounds.Y, Bounds.Z, Thickness, DrawColor);
}

void Renderer::DrawString(FString Text, FVector2D ScreenPos, FVector2D Scale, FLinearColor DrawColor, bool Outlined, bool CenteredX, FLinearColor OutlineColor)
{
    //CustomDrawText(canvas, Font, Text, ScreenPos, Scale, DrawColor);
    canvas->K2_DrawText(Font, Text, ScreenPos, Scale, DrawColor, 2.f, FLinearColor{ 0,0,0,0 }, FVector2D{ 0,0 }, CenteredX, true, Outlined, OutlineColor);
}
void Renderer::DrawString(std::wstring Text, FVector2D ScreenPos, FVector2D Scale, FLinearColor DrawColor,bool Outlined,FLinearColor OutlineColor,bool CenterX,bool CenterY)
{
    //CustomDrawText(canvas, Font, Text.c_str(), ScreenPos, Scale, DrawColor);
    canvas->K2_DrawText(Font, Text.c_str(), ScreenPos, Scale, DrawColor, 2.f, FLinearColor{0,0,0,0}, FVector2D{0,0}, CenterX, CenterY, Outlined, {0, 0, 0, 1.0f});
}
void Renderer::DrawString(const wchar_t* Text, FVector2D ScreenPos, FVector2D Scale, FLinearColor DrawColor, bool Outlined, FLinearColor OutlineColor, bool centerX, bool centerY)
{
    //CustomDrawText(canvas, Font, Text, ScreenPos, Scale, DrawColor);
    canvas->K2_DrawText(Font, FString(Text), ScreenPos, Scale, DrawColor, 2.f, FLinearColor{ 0,0,0,0 }, FVector2D{ 0,0 }, centerX, centerY, Outlined, OutlineColor);
}
void Renderer::DrawString(float Text, FVector2D ScreenPos, FVector2D Scale, FLinearColor DrawColor, bool Outlined, FLinearColor OutlineColor)
{
    canvas->K2_DrawText(Font, FString(std::to_wstring(Text).c_str()), ScreenPos, Scale, DrawColor, 2.f, FLinearColor{ 0,0,0,0 }, FVector2D{ 0,0 }, false, true, Outlined, OutlineColor);
}
void Renderer::DrawString(int Text, FVector2D ScreenPos, FVector2D Scale, FLinearColor DrawColor, bool Outlined, FLinearColor OutlineColor)
{
    canvas->K2_DrawText(Font, FString(std::to_wstring(Text).c_str()), ScreenPos, Scale, DrawColor, 2.f, FLinearColor{ 0,0,0,0 }, FVector2D{ 0,0 }, false, true, Outlined, OutlineColor);
}
void Renderer::DrawString(double Text, FVector2D ScreenPos, FVector2D Scale, FLinearColor DrawColor, bool Outlined, FLinearColor OutlineColor)
{
    canvas->K2_DrawText(Font, FString(std::to_wstring(Text).c_str()), ScreenPos, Scale, DrawColor, 2.f, FLinearColor{ 0,0,0,0 }, FVector2D{ 0,0 }, true, false, Outlined, OutlineColor);
}
void Renderer::DrawStringEx(FString Text, FVector2D ScreenPos, FVector2D Scale, FLinearColor DrawColor, FLinearColor ShadowColor, FVector2D ShadowOffset, bool Outlined, FLinearColor OutlineColor)
{
    canvas->K2_DrawText(Font, Text, ScreenPos, Scale, DrawColor, 2.f, ShadowColor, ShadowOffset, false, true, Outlined, OutlineColor);
}

/*
void
FVector2D ScreenPos,
int radius,
int numSides,
float Thickness,
FLinearColor DrawColor
*/
void Renderer::DrawCircle(FVector2D pos, int radius, int numSides, float Thickness, FLinearColor Color)
{
    float Step = PI * 2.0 / numSides;
    int Count = 0;
    FVector2D V[128];
    for (float a = 0; a < PI * 2.0; a += Step) {
        float X1 = radius * cos(a) + pos.X;
        float Y1 = radius * sin(a) + pos.Y;
        float X2 = radius * cos(a + Step) + pos.X;
        float Y2 = radius * sin(a + Step) + pos.Y;
        V[Count].X = X1;
        V[Count].Y = Y1;
        V[Count + 1].X = X2;
        V[Count + 1].Y = Y2;
        canvas->K2_DrawLine(FVector2D{ V[Count].X, V[Count].Y }, FVector2D{ X2, Y2 }, Thickness, Color);
    }
}

/*
void
FVector2D ScreenPos,
float radius,
float Thickness,
FLinearColor DrawColor
*/
void Renderer::DrawFilledCircle(FVector2D Pos, float Radius, FLinearColor Color)
{

    int x = Radius;
    int y = 0;
    int decision = 1 - Radius;

    while (y <= x)
    {
        canvas->K2_DrawLine({ Pos.X - y, Pos.Y - x }, { Pos.X + y , Pos.Y - x }, 1, Color);
        canvas->K2_DrawLine({ Pos.X - x, Pos.Y - y }, { Pos.X + x, Pos.Y - y }, 1, Color);
        canvas->K2_DrawLine({ Pos.X - x, Pos.Y + y }, { Pos.X + x, Pos.Y + y }, 1, Color);
        canvas->K2_DrawLine({ Pos.X + y, Pos.Y + x }, { Pos.X - y, Pos.Y + x }, 1, Color);

        y++;

        if (decision <= 0)
            decision += 2 * y + 1;
        else
        {
            x--;
            decision += 2 * (y - x) + 1;
        }

    }
}
void Renderer::DrawProgressCircle(FVector2D pos, float radius, float percentage, int numSides, float thickness, FLinearColor Color)
{
    float granularity = 2 * PI / numSides;
    float Step = PI * 2.0 / 100.f;
    FVector2D prevPoint;
    for (float a = 0; a < percentage * Step; a += granularity) {
        float X1 = radius * cos(a) + pos.X;
        float Y1 = radius * sin(a) + pos.Y;
        if (prevPoint.IsValid())
            canvas->K2_DrawLine(FVector2D{ X1,Y1 }, prevPoint, thickness, Color);
        prevPoint = FVector2D{ X1,Y1 };
    }
}
/*
void
FVector2D BottomLeftPos,
FVector2D TopRightPos,
float Thickness,
FLinearColor DrawColor
*/
void Renderer::DrawRectangle(FVector2D TopLeft, FVector2D BottomRight, float Thickness, FLinearColor DrawColor)
{
    DrawLine2D({ TopLeft.X,BottomRight.Y }, BottomRight, Thickness, DrawColor);
    DrawLine2D(BottomRight, { BottomRight.X,TopLeft.Y }, Thickness, DrawColor);
    DrawLine2D({ BottomRight.X,TopLeft.Y }, TopLeft, Thickness, DrawColor);
    DrawLine2D({ TopLeft.X,BottomRight.Y }, TopLeft, Thickness, DrawColor);
    
}

void Renderer::DrawRectangleSize(FVector2D Position, FVector2D Size, float Thickness, FLinearColor DrawColor)
{
    //for (int i = 0; i < Size.Y;i++)
    FVector2D TopRightPos = Position + Size;
    DrawLine2D({ Position.X,TopRightPos.Y }, Position, Thickness, DrawColor);
    DrawLine2D(Position, { TopRightPos.X,Position.Y }, Thickness, DrawColor);
    DrawLine2D({ TopRightPos.X,Position.Y }, TopRightPos, Thickness, DrawColor);
    DrawLine2D({ Position.X,TopRightPos.Y }, TopRightPos, Thickness, DrawColor);
}
void Renderer::DrawPixelSquare(const FVector2D& Pos, const FLinearColor& Color, const double Size, const bool Center)
{
    const double HalfSize = Size * 0.5f;
    return canvas->K2_DrawTexture(canvas->DefaultTexture, !Center ? Pos : CG::FVector2D(Pos.X - HalfSize, Pos.Y - HalfSize), { Size, Size }, { 0, 0 }, { 0, 0 }, Color, CG::EBlendMode::BLEND_Translucent, 0, { 0, 0 });
}
void Renderer::PushFont(UFont* font)
{
	Font = font;
}
/*
void
FVector2D TopLeft,
FVector2D BottomRightPos,
FLinearColor DrawColor
*/
void Renderer::DrawFilledRectangle(FVector2D TopLeft, FVector2D BottomRightPos, FLinearColor DrawColor)
{

    FVector2D Size = BottomRightPos - TopLeft;
    //for(int i = 0; i < Size.Y; i++)
		//DrawLine2D({ TopLeft.X,TopLeft.Y + i }, { BottomRightPos.X,TopLeft.Y + i }, 1, DrawColor);
    return canvas->K2_DrawTexture(canvas->DefaultTexture, TopLeft, Size, {0, 0}, {0, 0}, DrawColor, CG::EBlendMode::BLEND_Masked, 0, {0, 0});
}

/*
void
FVector2D TopLeft,
FVector2D Size,
FLinearColor DrawColor
*/
void Renderer::DrawFilledRectangleSize(FVector2D Position, FVector2D Size, FLinearColor DrawColor)
{
    //for (int i = 0; i < Size.Y; i++)
		//DrawLine2D({ Position.X,Position.Y + i }, { Position.X + Size.X,Position.Y + i }, 1, DrawColor);
    return canvas->K2_DrawTexture(canvas->DefaultTexture, Position, Size, { 0, 0 }, { 0, 0 }, DrawColor, CG::EBlendMode::BLEND_Masked, 0, { 0, 0 });
}

void Renderer::DrawRoundedRectangle(FVector2D Pos, FVector2D Size, float Thickness, FLinearColor DrawColor)
{
    canvas->K2_DrawBoxEx(Pos, Size, Thickness, DrawColor, EBlendMode::BLEND_MAX);
}

/*
void
std::vector<FString>* Text,
FVector2D StartScreenPos,
FVector2D Scale,
FLinearColor DrawColor,
bool Outlined = false,
FLinearColor OutlineColor = FLinearColor{ 0,0,0,0 }
*/
void Renderer::DrawMultilineText(std::vector<FString>* Text, FVector2D StartScreenPos, FVector2D Scale, FLinearColor DrawColor, bool Outlined, bool CenteredX, FLinearColor OutlineColor)
{
    double steps = Scale.Y * 25;
    for (int i = 0; i < Text->size(); i++)
    {
        //DrawStringFixed(Text->at(i), { StartScreenPos.X,StartScreenPos.Y + (steps * i) }, Scale.X, DrawColor);
        DrawString(Text->at(i), { StartScreenPos.X,StartScreenPos.Y + (steps * i) }, Scale, DrawColor, Outlined, CenteredX, OutlineColor);
    }
}
/*
void
std::vector<FString>* Text,
FVector2D StartScreenPos,
FVector2D Scale,
FLinearColor DrawColor,
bool Outlined = false,
FLinearColor OutlineColor = FLinearColor{ 0,0,0,0 }
*/
void Renderer::DrawMultilineTextWithSpacing(std::vector<std::wstring>* Text, FVector2D StartScreenPos, FVector2D Scale, FLinearColor DrawColor, bool Outlined, bool CenteredX, FLinearColor OutlineColor, double spacing)
{
    for (int i = 0; i < Text->size(); i++)
    {
        //DrawStringFixed(Text->at(i), { StartScreenPos.X,StartScreenPos.Y + (steps * i) }, Scale.X, DrawColor);
        DrawString(FString(Text->at(i).c_str()), { StartScreenPos.X, StartScreenPos.Y + spacing * i }, Scale, DrawColor, Outlined, CenteredX, OutlineColor);
    }
}
/*
void
std::vector<FString>* Text,
FVector2D StartScreenPos,
FVector2D Scale,
FLinearColor DrawColor,
bool Shadow,
FLinearColor ShadowColor,
FVector2D ShadowOffset,
bool Outlined,
FLinearColor OutlineColor
*/
//void Renderer::DrawMultilineTextEx(std::vector<FString>* Text, FVector2D StartScreenPos, FVector2D Scale, FLinearColor DrawColor, bool Shadow, FLinearColor ShadowColor, FVector2D ShadowOffset, bool Outlined, FLinearColor OutlineColor)
//{
//    float steps = Scale.Y * 25;
//    for (int i = 0; i < Text->size();i++)
//    {
//        DrawStringEx(Text->at(i), {StartScreenPos.X,StartScreenPos.Y + (steps * i)}, Scale, DrawColor,ShadowColor,ShadowOffset, Outlined, OutlineColor);
//    }
//}
/*
void
float x,
float y,
float w,
float h,
float thick,
FLinearColor color
*/
void Renderer::DrawCornerBox(FVector2D FeetPos,FVector2D HeadPos, float thick, FLinearColor color)
{
    double x, y, w, h;
    y = HeadPos.Y;
    x = FeetPos.X - (FeetPos.Y - HeadPos.Y) / 4.f;
    w = (FeetPos.Y - HeadPos.Y) / 2.f;
    h = FeetPos.Y - HeadPos.Y;
    DrawLine2D(FVector2D(x, y), FVector2D(x + w / 4.f, y), thick, color);
    DrawLine2D(FVector2D(x, y), FVector2D(x, y + h / 4.f), thick, color);

    DrawLine2D(FVector2D(x + w, y), FVector2D(x + w - w / 4.f, y), thick, color);
    DrawLine2D(FVector2D(x + w, y), FVector2D(x + w, y + h / 4.f), thick, color);

    DrawLine2D(FVector2D(x, y + h), FVector2D(x + w / 4.f, y + h), thick, color);
    DrawLine2D(FVector2D(x, y + h), FVector2D(x, y + h - h / 4.f), thick, color);

    DrawLine2D(FVector2D(x + w, y + h), FVector2D(x + w, y + h - h / 4.f), thick, color);
    DrawLine2D(FVector2D(x + w, y + h), FVector2D(x + w - w / 4.f, y + h), thick, color);
}
/*
FVector
AShooterCharacter* Player,
int BoneId
*/
FVector Renderer::BoneToLocation(AShooterCharacter* Player, int BoneId) {
    FVector NULLReturn = { 0, 0, 0 };

    if (!Player) return NULLReturn;

    USkeletalMeshComponent* Mesh = Player->Mesh;
    if (!Mesh) return NULLReturn;

    FVector BoneLocation = Mesh->GetSocketLocation(Mesh->GetBoneName(BoneId));
    return BoneLocation;
}
/*
FVector2D
APlayerController* Controller,
AShooterCharacter* Player,
int BoneId
*/
FVector2D Renderer::BoneToScreenLocation(APlayerController* Controller, AShooterCharacter* Player, int BoneId)
{

    if (!Controller || !Player || !Player->Mesh)
        return { 0, 0 };

    USkeletalMeshComponent* Mesh = Player->Mesh;

    FVector BoneLocation = Mesh->GetSocketLocation(Mesh->GetBoneName(BoneId));
    FVector2D BoneScreenLocation{};

    BoneScreenLocation = W2S(Controller, BoneLocation);
    if (BoneScreenLocation.X > 0 && BoneScreenLocation.Y > 0)
        return BoneScreenLocation;

    return { 0, 0 };
}
/*
void
float& horizontal,
float& vertical
*/
void Renderer::GetDesktopResolution(float& horizontal, float& vertical)
{
    RECT desktop;
    const HWND hDesktop = GetDesktopWindow();
    GetWindowRect(hDesktop, &desktop);
    horizontal = (float)desktop.right;
    vertical = (float)desktop.bottom;
}
/*
FVector2D
FVector pos
*/
FVector2D Renderer::W2S(APlayerController* PC, FVector pos)
{
    FVector2D ret;
    FVector ret3 = canvas->K2_Project(pos);

    if (ret3.Z == 0)
        return {0,0};

    ret = { ret3.X, ret3.Y };
    return ret;
}

void Renderer::DrawIcon(UTexture* Icon, FVector2D ScreenPos, FVector2D TextureSize, EBlendMode blendMode, FLinearColor Color, float Rotation, FVector2D PivonPoint)
{
    double CenterX = TextureSize.X * 0.5f;
	double CenterY = TextureSize.Y * 0.5f;
	canvas->K2_DrawTexture(Icon, { ScreenPos.X - CenterX,ScreenPos.Y - CenterY }, TextureSize, { 0.f,0.f }, { 1.f,1.f }, Color, blendMode, Rotation, PivonPoint);

}

void Renderer::DrawIconCursed(UTexture* Icon, FVector2D ScreenPos, FVector2D TextureSize)
{
    double CenterX = TextureSize.X * 0.5f;
    double CenterY = TextureSize.Y * 0.5f;
    canvas->K2_DrawTexture(Icon, { ScreenPos.X - CenterX,ScreenPos.Y - CenterY }, TextureSize, { 0.f,0.f }, { 1.f,1.f }, { 1.f,0.f,0.f,0.f }, EBlendMode::BLEND_Masked, 0.f, { 0.f,0.f });
}

void Renderer::DrawBone(APlayerController* PC, AShooterCharacter* Char, ShooterBones bone1, ShooterBones bone2, float Thickness, FLinearColor col)
{
    if (!Char || !canvas)
        return;
    FVector2D pos1 = BoneToScreenLocation(PC, Char, bone1);
    FVector2D pos2 = BoneToScreenLocation(PC, Char, bone2);
    if (pos1.X && pos1.Y && pos2.X && pos2.Y)
        DrawLine2D(pos1, pos2, Thickness, col);
}
FLinearColor Renderer::HealthColorGradient(float HpDivByMaxHp)
{
    float minValue = 0.f;
    float maxValue = 1.f;
    FLinearColor retColor;
    HpDivByMaxHp = min(max(HpDivByMaxHp, minValue), maxValue);
    float t = (HpDivByMaxHp - minValue) / (maxValue - minValue);
    retColor.R = (1 - t) * 1.f;
    retColor.G = t * 1.f;
    retColor.B = 0;
    retColor.A = 1.f;
    return retColor;
}
void Renderer::DrawHealthBar(AShooterCharacter* Char, FVector2D Pos)
{
    FVector2D LeftPos = { Pos.X - 60.f,Pos.Y };
    FVector2D RightPos = { Pos.X + 60.f,Pos.Y };
    Renderer::DrawLine2D({ LeftPos.X - 2.f,LeftPos.Y }, { RightPos.X + 2.f,RightPos.Y }, 7.f, FLinearColor{ 0.f,0.f,0.f,1.f });
    Renderer::DrawLine2D(LeftPos, RightPos, 5.f, FLinearColor{ 1.f,0.f,0.f,1.f });
    Renderer::DrawLine2D(LeftPos, { LeftPos.X + ((RightPos.X - LeftPos.X) * (Char->ReplicatedCurrentHealth / Char->ReplicatedMaxHealth)),RightPos.Y }, 5.f, FLinearColor{ 0.f,1.f,0.f,1.f });

    std::wstring Health = Xors(L" [");
    Health += std::to_wstring((int)Char->ReplicatedCurrentHealth);
    Health += Xors(L"]");
    Renderer::DrawString(FString(Health.c_str()), (LeftPos * 0.5) + (RightPos * 0.5), { 0.6f,0.6f }, FLinearColor{ 1.f,1.f,1.f,1.f }, true, true, { 0.f,0.f,0.f,1.f });
}
void Renderer::DrawHealthBar(float CurrentHealth,float MaxHealth, FVector2D Pos)
{
    FVector2D LeftPos = { Pos.X - 60.f,Pos.Y };
    FVector2D RightPos = { Pos.X + 60.f,Pos.Y };
    Renderer::DrawLine2D({ LeftPos.X - 2.f,LeftPos.Y }, { RightPos.X + 2.f,RightPos.Y }, 7.f, FLinearColor{ 0.f,0.f,0.f,1.f });
    Renderer::DrawLine2D(LeftPos, RightPos, 5.f, FLinearColor{ 1.f,0.f,0.f,1.f });
    Renderer::DrawLine2D(LeftPos, { LeftPos.X + ((RightPos.X - LeftPos.X) * (CurrentHealth / MaxHealth)),RightPos.Y }, 5.f, FLinearColor{ 0.f,1.f,0.f,1.f });
    std::wstring Health = Xors(L" [");
    Health += std::to_wstring((int)CurrentHealth);
    Health += Xors(L"]");
    Renderer::DrawString(FString(Health.c_str()), (LeftPos * 0.5) + (RightPos * 0.5), { 0.6f,0.6f }, FLinearColor{ 1.f,1.f,1.f,1.f }, true, true, { 0.f,0.f,0.f,1.f });
}
void Renderer::DrawTorpBar(AShooterCharacter* Char, FVector2D Pos)
{
    FVector2D LeftPos = { Pos.X - 40.f,Pos.Y };
    FVector2D RightPos = { Pos.X + 40.f,Pos.Y };
    Renderer::DrawLine2D(LeftPos, RightPos, 5.f, FLinearColor{ 0,0,0,1 });
    //this->DrawLine2D(LeftPos, RightPos, 4.f, FLinearColor{ 1,0,0,1 });
    Renderer::DrawLine2D(LeftPos, { LeftPos.X + ((RightPos.X - LeftPos.X) * (Char->ReplicatedCurrentTorpor / Char->ReplicatedMaxTorpor)),RightPos.Y }, 4.f, FLinearColor{ 1,0,1,1 });
    std::wstring Torp = Xors(L" [");
    Torp += std::to_wstring((int)Char->ReplicatedCurrentTorpor);
    Torp += Xors(L"]");
    Renderer::DrawString(FString(Torp.c_str()), (LeftPos * 0.5) + (RightPos * 0.5), { 0.6f,0.6f }, FLinearColor{ 1,1,1,1 }, true, true, { 0,0,0,1 });
}
void Renderer::DrawSkeleton(APlayerController* PC, AShooterCharacter* Char, float Thickness, FLinearColor col)
{
    if (!Char || !canvas)
        return;

    DrawBone(PC, Char, cnt_Head_jnt_skl, Cnt_Neck_Joint000_JNT_SKL, Thickness, col);         //Head, neck_01
    DrawBone(PC, Char, cnt_spine_003_jnt_skl, Cnt_Neck_Joint000_JNT_SKL, Thickness, col); //spine_03, neck_01
    DrawBone(PC, Char, cnt_spine_003_jnt_skl, Cnt_Spine_002_JNT_SKL, Thickness, col);     //spine_03, spine_02
    DrawBone(PC, Char, Cnt_Spine_001_JNT_SKL, Cnt_Spine_002_JNT_SKL, Thickness, col);     //spine_01, spine_02
    DrawBone(PC, Char, Cnt_Spine_001_JNT_SKL, Cnt_Pelvis_000_JNT_SKL, Thickness, col);     //spine_01, pelvis

    DrawBone(PC, Char, Lft_Arm_001Tear000_JNT_SKL, Cnt_Neck_Joint000_JNT_SKL, Thickness, col);     //upperarm_l, neck_01
    DrawBone(PC, Char, Lft_Arm_001Tear000_JNT_SKL, Lft_Arm_002Tear000_JNT_SKL, Thickness, col);     //upperarm_l, lowerarm_l
    DrawBone(PC, Char, Lft_Arm_002Tear000_JNT_SKL, Lft_Arm_002Tear006_JNT_SKL, Thickness, col);//lowerarm_l, hand_l

    DrawBone(PC, Char, Rht_Arm_001Tear000_JNT_SKL, Cnt_Neck_Joint000_JNT_SKL, Thickness, col);     //upperarm_r, neck_01
    DrawBone(PC, Char, Rht_Arm_001Tear000_JNT_SKL, Rht_Arm_002Tear000_JNT_SKL, Thickness, col);     //upperarm_r, lowerarm_r
    DrawBone(PC, Char, Rht_Arm_002Tear000_JNT_SKL, Rht_Arm_002Tear006_JNT_SKL, Thickness, col);//lowerarm_r, hand_r

    DrawBone(PC, Char, Lft_Leg_001Tear000_JNT_SKL, Cnt_Pelvis_000_JNT_SKL, Thickness, col);         //thigh_l, pelvis
    DrawBone(PC, Char, Lft_Leg_002Tear000_JNT_SKL, Lft_Leg_001Tear000_JNT_SKL, Thickness, col);                 //calf_l, thigh_l
    DrawBone(PC, Char, Lft_Leg_002Tear000_JNT_SKL, Lft_Leg_002_JNT_SKL, Thickness, col);             //calf_l, foot_l

    DrawBone(PC, Char, Rht_Leg_001Tear000_JNT_SKL, Cnt_Pelvis_000_JNT_SKL, Thickness, col);         //thigh_e, pelvis
    DrawBone(PC, Char, Rht_Leg_002Tear000_JNT_SKL, Rht_Leg_001Tear000_JNT_SKL, Thickness, col);                 //calf_e, thigh_e
    DrawBone(PC, Char, Rht_Leg_002Tear000_JNT_SKL, Rht_Leg_002_JNT_SKL, Thickness, col);             //calf_e, foot_e


}
void Renderer::DrawSnapLine(APlayerController* PC, AShooterCharacter* Char, float Thickness, FLinearColor Drawcolor)
{
    float width{};
    float height{};
    GetDesktopResolution(width, height);
    FVector2D CharLoc;
    PC->ProjectWorldLocationToScreen(Char->K2_GetActorLocation(), &CharLoc, false);
    DrawLine2D({ width / 2,height }, CharLoc, Thickness, Drawcolor);
}
void Renderer::DrawFlooredSnapLine(APlayerController* PC, AShooterCharacter* Char, float Thickness, FLinearColor Drawcolor)
{
    float width{};
    float height{};
    GetDesktopResolution(width, height);
    FVector CharLoc3D = Char->K2_GetActorLocation();
    CharLoc3D.Z = PC->AcknowledgedPawn->K2_GetActorLocation().Z;
    FVector2D CharLoc;
    PC->ProjectWorldLocationToScreen(CharLoc3D, &CharLoc, false);
    DrawLine2D({ width / 2,height }, CharLoc, Thickness, Drawcolor);
}
void Renderer::RenderFilledRectangle( FVector2D initial_pos, float w, float h, FLinearColor color)
{
    for (float i = 0; i < h; i++)
    {
        canvas->K2_DrawLine({ initial_pos.X, initial_pos.Y + i }, { initial_pos.X + w, initial_pos.Y + i }, 1.0f, color);
    }
}
void Renderer::RenderFilledRoundedRectangle( FVector2D* Position, float Width, float Height, float Rounding, FLinearColor DrawColor, RoundedRectFlags Flags)
{
    FVector2D TopTopLeft = {};
    FVector2D TopBottomRight = {};
    FVector2D BottomTopLeft = {};
    FVector2D BottomBottomRight = {};

    FVector2D LeftTopLeft = { Position->X, Position->Y + Rounding };
    FVector2D LeftBottomRight = { Position->X + Rounding,Position->Y + Height - Rounding };
    FVector2D RightTopLeft = { Position->X + Width - Rounding, Position->Y + Rounding };
    FVector2D RightBottomRight = { Position->X + Width,Position->Y + Height - Rounding };

    DrawColor.A = 1.0f;

    if (Flags & RoundedRectFlags_NoRoundingTopLeft) {
        TopTopLeft = { Position->X, Position->Y };
    }
    else
    {
        DrawFilledCircle({ Position->X + Rounding + 1.f, Position->Y + Rounding + 1.f }, Rounding, DrawColor);
        TopTopLeft = { Position->X + Rounding, Position->Y };
    }
    if (Flags & RoundedRectFlags_NoRoundingTopRight) {
        TopBottomRight = { Position->X + Width, Position->Y + Rounding };
    }
    else
    {
        DrawFilledCircle({ Position->X + Width - Rounding - 1.f, Position->Y + Rounding + 1.f }, Rounding, DrawColor);
        TopBottomRight = { Position->X + Width - Rounding, Position->Y + Rounding };
    }

    if (Flags & RoundedRectFlags_NoRoundingBottomLeft) {
        BottomTopLeft = { Position->X, Position->Y + Height - Rounding};
    }
    else
    {
        DrawFilledCircle({ Position->X + Rounding + 1.f, Position->Y + Height - Rounding - 1.f }, Rounding, DrawColor);
        BottomTopLeft = { Position->X + Rounding, Position->Y + Height - Rounding };
    }
    if (Flags & RoundedRectFlags_NoRoundingBottomRight) {
        BottomBottomRight = { Position->X + Width, Position->Y + Height };
    }
    else
    {
        DrawFilledCircle({ Position->X + Width - Rounding - 1.f, Position->Y + Height - Rounding - 1.f}, Rounding, DrawColor);
        BottomBottomRight = { Position->X + Width - Rounding, Position->Y + Height };
    }

    DrawFilledRectangle(TopTopLeft, TopBottomRight, DrawColor);
    DrawFilledRectangle(BottomTopLeft, BottomBottomRight, DrawColor);
    DrawFilledRectangle(LeftTopLeft, LeftBottomRight, DrawColor);
    DrawFilledRectangle(RightTopLeft, RightBottomRight, DrawColor);

    DrawFilledRectangleSize({ Position->X + Rounding, Position->Y + Rounding }, { Width - (Rounding * 2), Height - (Rounding * 2 )}, DrawColor);

}

//void Renderer::RenderHorizontalHealth(AShooterCharacter* actor,FVector2D Pos)
//{
//    if (!actor)
//        return;
//
//    if (!actor->RootComponent)
//        return;
//
//    if (!actor->Mesh)
//        return;
//
//    auto world = *UWorld::GWorld;
//
//    auto Player = static_cast<APrimalCharacter*>(actor);
//    auto SelfPlayer = reinterpret_cast<AShooterCharacter*>(world->OwningGameInstance->LocalPlayers[0]->PlayerController->AcknowledgedPawn);
//
//    //float max_health = Player->ReplicatedMaxHealth;
//    //float health = Player->ReplicatedCurrentHealth;
//
//    //if (health <= 0.f)
//    //    return;
//
//    //FVector2D Left = FVector2D(Pos.X - 25, Pos.Y - 1.25);
//    //FVector2D Right = FVector2D(Left.X + (50 * (health / max_health)), Pos.Y + 1.25);
//
//    //FLinearColor color = HealthColorGradient(health / max_health);
//
//    //float health_width = (50) * (health / max_health);
//
//    //RenderFilledRectangle(FVector2D(Left.X + health_width, Left.Y), 50 - (50 * (health / max_health)), 2.5, { 0.0f, 0.0f, 0.0f, 0.6f });
//    //RenderFilledRectangle(Left, Right.X - Left.X, 2.5, color);
//
//    //std::wstring HealthString = std::to_wstring((int)(health));
//    //DrawString(HealthString, FVector2D(Pos.X, Pos.Y - 6.5), { 0.50f, 0.50f }, {1,1,1,1}, true, FLinearColor{0.f,0.f,0.f,1.0f}, true, true);
//
//    float width = 30.f;
//    float rg = 1.f / 255.f;
//    float height = 3.f;
//    float maxHealth = round(Player->ReplicatedMaxHealth);
//    float currentHealth = round(Player->ReplicatedCurrentHealth);
//    RenderFilledRectangle({ Pos.X - (width / 2) - 1 + 5 ,Pos.Y - 1 }, width + 2, height + 2, FLinearColor{ rg, rg,rg, 0.1f });
//    float health = (currentHealth / maxHealth) * 100;
//    float r = (255 - 2.55 * health) / 255.0f;
//    float g = (2.55 * health) / 255.0f;
//    auto screenW = width * (health / 100);
//    RenderFilledRectangle({ Pos.X - (width / 2) + 5 , Pos.Y }, screenW, height, FLinearColor{ r,g, 0.0f, 1.0f });
//}

void Renderer::RenderHorizontalHealth(AShooterCharacter* actor, FVector2D Pos)
{
    if (!actor || !actor->RootComponent || !actor->Mesh)
        return;

    auto world = *UWorld::GWorld;

    auto Player = static_cast<APrimalCharacter*>(actor);

    float maxHealth = Player->ReplicatedMaxHealth;
    float currentHealth = Player->ReplicatedCurrentHealth;

    if (currentHealth <= 0.f || maxHealth <= 0.f)
        return;

    Pos.X += 2;

    float healthPercentage = currentHealth / maxHealth;
    float width = 40.f;  // Width of the health bar
    float height = 3.f;  // Height of the health bar
    FLinearColor backgroundColor = { 0.f, 0.f, 0.f, 0.6f }; // Black background
    float r = (255 - 255 * healthPercentage) / 255.0f;
    float g = (255 * healthPercentage) / 255.0f;
    FLinearColor healthColor = { r, g, 0.0f, 1.0f }; // Red to green gradient
    float filledWidth = width * healthPercentage;
    FVector2D backgroundPos = { Pos.X - width / 2 - 1, Pos.Y - 1 }; // Center background
    FVector2D filledPos = { Pos.X - width / 2 , Pos.Y }; // Center the filled bar inside the background

    // Render the health bar
    RenderFilledRectangle(backgroundPos, width + 2, height + 2, backgroundColor);
    RenderFilledRectangle(filledPos, filledWidth, height, healthColor);

    std::wstring HealthString = std::to_wstring((int)(currentHealth));
    DrawString(HealthString, { backgroundPos.X + width / 2 , backgroundPos.Y + height / 2 - 1}, FVector2D(0.35f, 0.35f), FLinearColor{ 1.f,1.f,1.f,1.f }, true, FLinearColor{ 0.f,0.f,0.f,0.5f }, true, true);
}

void Renderer::RenderHorizontalStam(AShooterCharacter* actor, FVector2D Pos)
{
    if (!actor || !actor->RootComponent || !actor->Mesh)
        return;

    auto world = *UWorld::GWorld;

    auto Player = static_cast<APrimalCharacter*>(actor);

    float maxStam = Player->MyCharacterStatusComponent->BPGetMaxStatusValue(EPrimalCharacterStatusValue::Stamina);
    float currentStam = Player->MyCharacterStatusComponent->BPGetCurrentStatusValue(EPrimalCharacterStatusValue::Stamina);

    if (currentStam <= 0.f || maxStam <= 0.f)
        return;

    Pos.X += 2;

    float stamPercentage = currentStam / maxStam;
    float width = 40.f;
    float height = 3.f;
    float halfWidth = width / 2;
    float backgroundMargin = 1; // You can adjust this value for a bigger or smaller margin
    float backgroundWidth = width + 2 * backgroundMargin;
    float backgroundHeight = height + 2 * backgroundMargin;

    float rg = 1.f / 255.f;
    FLinearColor backgroundColor = { rg, rg, rg, 0.6f };

    float r = (255 - 255 * stamPercentage) / 255.0f;
    float g = (255 * stamPercentage) / 255.0f;
    FLinearColor staminaColor = { 0.0f, 0.6f, 0.8f, 1.0f };

    float filledWidth = width * stamPercentage;

    FVector2D backgroundPos = { Pos.X - halfWidth - backgroundMargin, Pos.Y - backgroundMargin };
    RenderFilledRectangle(backgroundPos, backgroundWidth, backgroundHeight, backgroundColor);
    FVector2D filledPos = { Pos.X - halfWidth, Pos.Y }; // Center the filled bar inside the background
    RenderFilledRectangle(filledPos, filledWidth, height, staminaColor);

    std::wstring StamString = std::to_wstring((int)(currentStam));
    DrawString(StamString, { backgroundPos.X + backgroundWidth / 2 - 1, backgroundPos.Y + backgroundHeight / 2 - 3}, FVector2D(0.35f, 0.35f), FLinearColor{ 1.f,1.f,1.f,1.f }, true, FLinearColor{ 0.f,0.f,0.f,0.5f }, true, true);
}

void Renderer::DrawViewLine(AShooterCharacter* Char, float Thickness, FLinearColor DrawColor, float Length)
{
    FVector Start = BoneToLocation(Char, ShooterBones::cnt_Head_jnt_skl);
    FVector End = Start + (Char->GetActorForwardVector() * Length);
    DrawLine3D(APlayerController::Singleton(),Start, End, Thickness, DrawColor);
}
void Renderer::DrawPlayerBox(AActor* Actor, int PlayerBoxIndex, APlayerController* PC, FVector FeetPosition, FVector HeadPosition, FVector BoxScaling, float Thickness, double Yaw, FLinearColor DrawColor)
{
    FVector2D Feet2D{};
    PC->ProjectWorldLocationToScreen({ FeetPosition.X,FeetPosition.Y,FeetPosition.Z  }, &Feet2D, false);
    FVector2D Head2D{};
    PC->ProjectWorldLocationToScreen({ HeadPosition.X,HeadPosition.Y,HeadPosition.Z + BoxScaling.Z }, &Head2D, false);
    switch (PlayerBoxIndex)
    {
    case 0:
        Renderer::DrawRectangle({ Feet2D.X - ((Feet2D.Y - Head2D.Y) / 4.f),Head2D.Y}, { Feet2D.X + ((Feet2D.Y - Head2D.Y) / 4.f),Feet2D.Y}, Thickness, DrawColor);
        break;
    case 1:
        Renderer::DrawCornerBox(Feet2D, Head2D, Thickness, DrawColor);
        break;
    case 2:
        Renderer::DrawTurningBox(PC, FeetPosition, HeadPosition, BoxScaling, Thickness, Yaw, DrawColor);
        break;
    default:
        break;
    }
}
void Renderer::RenderPlayerArmor(AShooterCharacter* Character, FVector2D Position)
{
    FVector2D HeadLoc = Position;
    FVector2D IconWidth = { 30.f , 30.f };

    auto Helmet = Character->MyInventoryComponent->GetEquippedItemOfType(EPrimalEquipmentType::Hat);
    auto Chest = Character->MyInventoryComponent->GetEquippedItemOfType(EPrimalEquipmentType::Shirt);
    auto Gaunts = Character->MyInventoryComponent->GetEquippedItemOfType(EPrimalEquipmentType::Gloves);
    auto Legs = Character->MyInventoryComponent->GetEquippedItemOfType(EPrimalEquipmentType::Pants);
    auto Boots = Character->MyInventoryComponent->GetEquippedItemOfType(EPrimalEquipmentType::Boots);
    auto Shield = Character->MyInventoryComponent->GetEquippedItemOfType(EPrimalEquipmentType::Shield);

    static UTexture2D* HelmetTexture = nullptr;
    static UTexture2D* ChestTexture = nullptr;
    static UTexture2D* GauntsTexture = nullptr;
    static UTexture2D* LegsTexture = nullptr;
    static UTexture2D* BootsTexture = nullptr;
    static UTexture2D* ShieldTexture = nullptr;

    if (!HelmetTexture)
        HelmetTexture = UObject::FindObject<UTexture2D>(Xors("Texture2D MetalHat_Icon.MetalHat_Icon"));

    if (!ChestTexture)
        ChestTexture = UObject::FindObject<UTexture2D>(Xors("Texture2D MetalShirt_Icon.MetalShirt_Icon"));

    if (!GauntsTexture)
        GauntsTexture = UObject::FindObject<UTexture2D>(Xors("Texture2D MetalGloves_Icon.MetalGloves_Icon"));

    if (!LegsTexture)
        LegsTexture = UObject::FindObject<UTexture2D>(Xors("Texture2D MetalPants_Icon.MetalPants_Icon"));

    if (!BootsTexture)
        BootsTexture = UObject::FindObject<UTexture2D>(Xors("Texture2D MetalBoots_Icon.MetalBoots_Icon"));

    if (!ShieldTexture)
        ShieldTexture = UObject::FindObject<UTexture2D>(Xors("Texture2D TransparentRiotShield_Icon.TransparentRiotShield_Icon"));


    if (Shield)
    {
        DrawIcon(Shield->ItemIcon, { HeadLoc.X + IconWidth.X * 2.5 , HeadLoc.Y - IconWidth.Y * 0.5}, IconWidth);
        //RenderFilledRectangle({ HeadLoc.X + IconWidth.X * 2.25, HeadLoc.Y + IconWidth.Y / 2 }, IconWidth.X * Helmet->GetDurabilityPercentage() / 2, 2, { 0.0f, 1.0f, 0.0f, 1.0f });
        DrawString(std::to_wstring((int)Shield->ItemDurability).c_str(), { HeadLoc.X + IconWidth.Y * 2.5, HeadLoc.Y - IconWidth.Y / 4.5 - IconWidth.Y * 0.5}, { 0.45f, 0.45f }, {1.0f, 1.0f, 1.0f, 1.0f}, true, { 0,0,0,0 }, true);
    }
    else if (ShieldTexture)
    {
        DrawIconCursed(ShieldTexture, { HeadLoc.X + IconWidth.X * 2.5 , HeadLoc.Y - IconWidth.Y * 0.5 }, IconWidth);
    }

    if (Boots)
    {
        DrawIcon(Boots->ItemIcon, { HeadLoc.X + IconWidth.X * 1.5, HeadLoc.Y - IconWidth.Y * 0.5 }, IconWidth);
        //RenderFilledRectangle({ HeadLoc.X + IconWidth.X * 1.25, HeadLoc.Y + IconWidth.Y / 2 }, IconWidth.X * Chest->GetDurabilityPercentage() / 2, 2, { 0.0f, 1.0f, 0.0f, 1.0f });
        DrawString(std::to_wstring((int)Boots->ItemDurability).c_str(), { HeadLoc.X + IconWidth.X * 1.5, HeadLoc.Y - IconWidth.Y / 4.5 - IconWidth.Y * 0.5 }, { 0.45f, 0.45f }, { 1.0f, 1.0f, 1.0f, 1.0f }, true, { 0,0,0,0 }, true);
    }
    else if (BootsTexture)
    {
        DrawIconCursed(BootsTexture, { HeadLoc.X + IconWidth.X * 1.5, HeadLoc.Y - IconWidth.Y * 0.5 }, IconWidth);
    }

    if (Legs)
    {
        DrawIcon(Legs->ItemIcon, { HeadLoc.X + IconWidth.X * 0.5 , HeadLoc.Y - IconWidth.Y * 0.5}, IconWidth);
        //RenderFilledRectangle({ HeadLoc.X + IconWidth.X * 0.25, HeadLoc.Y + IconWidth.Y / 2 }, IconWidth.X * Gaunts->GetDurabilityPercentage() / 2, 2, { 0.0f, 1.0f, 0.0f, 1.0f });
        DrawString(std::to_wstring((int)Legs->ItemDurability).c_str(), { HeadLoc.X + IconWidth.X * 0.5, HeadLoc.Y - IconWidth.Y / 4.5 - IconWidth.Y * 0.5 },{ 0.45f, 0.45f }, { 1.0f, 1.0f, 1.0f, 1.0f }, true, { 0,0,0,0 }, true);
    }
    else if (LegsTexture)
    {
        DrawIconCursed(LegsTexture, { HeadLoc.X + IconWidth.X * 0.5 , HeadLoc.Y - IconWidth.Y * 0.5 }, IconWidth);
    }

    if (Gaunts)
    {
        DrawIcon(Gaunts->ItemIcon, { HeadLoc.X - IconWidth.X * 0.5, HeadLoc.Y - IconWidth.Y * 0.5}, IconWidth);
        //RenderFilledRectangle({ HeadLoc.X - IconWidth.X * 0.75, HeadLoc.Y + IconWidth.Y / 2 }, IconWidth.X * Legs->GetDurabilityPercentage() / 2, 2, { 0.0f, 1.0f, 0.0f, 1.0f });
        DrawString(std::to_wstring((int)Gaunts->ItemDurability).c_str(), { HeadLoc.X - IconWidth.X * 0.5, HeadLoc.Y - IconWidth.Y / 4.5 - IconWidth.Y * 0.5 }, { 0.45f, 0.45f }, { 1.0f, 1.0f, 1.0f, 1.0f }, true, { 0,0,0,0 }, true);
    }
    else if (GauntsTexture)
    {
        DrawIconCursed(GauntsTexture, { HeadLoc.X - IconWidth.X * 0.5, HeadLoc.Y - IconWidth.Y * 0.5 }, IconWidth);
    }

    if (Chest)
    {
        DrawIcon(Chest->ItemIcon, { HeadLoc.X - IconWidth.X * 1.5, HeadLoc.Y - IconWidth.Y * 0.5}, IconWidth);
        //RenderFilledRectangle({ HeadLoc.X - IconWidth.X * 1.75, HeadLoc.Y + IconWidth.Y / 2 }, IconWidth.X * Boots->GetDurabilityPercentage() / 2, 2, { 0.0f, 1.0f, 0.0f, 1.0f });
        DrawString(std::to_wstring((int)Chest->ItemDurability).c_str(), { HeadLoc.X - IconWidth.X * 1.5, HeadLoc.Y - IconWidth.Y / 4.5 - IconWidth.Y * 0.5 },{ 0.45f, 0.45f }, { 1.0f, 1.0f, 1.0f, 1.0f }, true, { 0,0,0,0 }, true);
    }
    else if (ChestTexture)
    {
        DrawIconCursed(ChestTexture, { HeadLoc.X - IconWidth.X * 1.5, HeadLoc.Y - IconWidth.Y * 0.5 }, IconWidth);
    }

    if (Helmet)
    {
        DrawIcon(Helmet->ItemIcon, { HeadLoc.X - IconWidth.X * 2.5, HeadLoc.Y - IconWidth.Y * 0.5}, IconWidth);
        //RenderFilledRectangle({ HeadLoc.X - IconWidth.X * 2.75, HeadLoc.Y + IconWidth.Y / 2}, IconWidth.X * Shield->GetDurabilityPercentage() / 2, 2, { 0.0f, 1.0f, 0.0f, 1.0f });
        DrawString(std::to_wstring((int)Helmet->ItemDurability).c_str(), { HeadLoc.X - IconWidth.X * 2.5, HeadLoc.Y - IconWidth.Y / 4 - IconWidth.Y * 0.5 }, { 0.45f, 0.45f }, { 1.0f, 1.0f, 1.0f, 1.0f }, true, { 0,0,0,0 }, true);
    }
    else if (HelmetTexture)
    {
        DrawIconCursed(HelmetTexture, { HeadLoc.X - IconWidth.X * 2.5, HeadLoc.Y - IconWidth.Y * 0.5 }, IconWidth);
    }
}

FLinearColor Renderer::SkyRainbow(int moduleIndex, float bright, float speed)
{
    double time = std::ceil(std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count() + static_cast<long>(moduleIndex * 209)) / (5.0 * speed);
    float hue = static_cast<float>(std::fmod(time, 360.0) / 360.0);

    float r = 0.0f, g = 0.0f, b = 0.0f;
    if (hue < 0.16666667f) {
        r = 1.0f;
        g = hue * 6.0f;
    }
    else if (hue < 0.33333333f) {
        r = (0.33333333f - hue) * 6.0f;
        g = 1.0f;
    }
    else if (hue < 0.5f) {
        g = 1.0f;
        b = (hue - 0.33333333f) * 6.0f;
    }
    else if (hue < 0.66666667f) {
        g = (0.66666667f - hue) * 6.0f;
        b = 1.0f;
    }
    else if (hue < 0.83333333f) {
        r = (hue - 0.66666667f) * 6.0f;
        b = 1.0f;
    }
    else {
        r = 1.0f;
        b = (1.0f - hue) * 6.0f;
    }

    return { r * bright, g * bright, b * bright, 1.0f };
}

void Renderer::AddScreenMessage(std::wstring Text, FVector2D Position, FVector2D Size, FLinearColor Color, float DurationSeconds)
{
    ScreenMessage Message;
	Message.Text = Text;
	Message.Position = Position;
	Message.Size = Size;
	Message.Color = Color;
	Message.DurationSeconds = DurationSeconds;
	Message.StartTime = std::chrono::high_resolution_clock::now();
	ScreenMessages.push_back(Message);
}

std::vector<ScreenMessage> Messages = {};

void Renderer::AddErrorMessage(std::wstring Text)
{
    ScreenMessage Message;
    Message.Text = Text;
    Message.Position = {};
    Message.Size = {};
    Message.Color = {1.f,0.f,0.f,1.f};
    Message.DurationSeconds = 5;
    Message.StartTime = std::chrono::high_resolution_clock::now();
    Messages.push_back(Message);
}

void Renderer::AddInfoMessage(std::wstring Text)
{
    ScreenMessage Message;
    Message.Text = Text;
    Message.Position = {};
    Message.Size = {};
    Message.Color = { 1.f,1.f,1.f,1.f };
    Message.DurationSeconds = 5;
    Message.StartTime = std::chrono::high_resolution_clock::now();
    Messages.push_back(Message);
}

void Renderer::AddSuccessMessage(std::wstring Text)
{
    ScreenMessage Message;
    Message.Text = Text;
    Message.Position = {};
    Message.Size = {};
    Message.Color = { 0.f,1.f,0.f,1.f };
    Message.DurationSeconds = 5;
    Message.StartTime = std::chrono::high_resolution_clock::now();
    Messages.push_back(Message);
}

void Renderer::AddWarningMessage(std::wstring Text)
{
    ScreenMessage Message;
    Message.Text = Text;
    Message.Position = {};
    Message.Size = {};
    Message.Color = { 1.f,1.f,0.f,1.f };
    Message.DurationSeconds = 5;
    Message.StartTime = std::chrono::high_resolution_clock::now();
    Messages.push_back(Message);
}
void Renderer::AddKillFeed(std::wstring KillerName, UTexture2D* WeaponOrDinoIcon, UTexture2D* HitBodyPartIcon, std::wstring KilledName, float damage, FLinearColor KillerColor, FLinearColor KilledColor)
{
	KillFeedMessage Message;
	Message.KillerName = KillerName;
	Message.WeaponOrDinoIcon = WeaponOrDinoIcon;
	Message.HitBodyPartIcon = HitBodyPartIcon;
	Message.KilledName = KilledName;
    Message.KillerColor = KillerColor;
    Message.KilledColor = KilledColor;
	Message.Damage = damage;
	Message.StartTime = std::chrono::high_resolution_clock::now();
	KillFeedMessages.push_back(Message);
}

#define Lerp(a,b,t) (a + (b - a) * t)
void Renderer::DrawKillFeedMessage(KillFeedMessage* Message, int PreviousDrawnMessages)
{
    FVector2D KillFeedRightPos = { GetCanvasSize().X - 80.f, 10.f};
    FVector2D IconSize = { 30.f, 30.f };
    FVector2D TextScale = { 0.8f, 0.8f };
    FVector2D Spacing = { 10.f, 5.f };
    FVector2D KillerNameSize = Renderer::canvas->K2_TextSize(Renderer::Font, Message->KillerName.c_str(), TextScale * 1.2f);
    FVector2D KilledNameSize = Renderer::canvas->K2_TextSize(Renderer::Font, Message->KilledName.c_str(), TextScale * 1.2f);
    float IconsWidth = 0;
    if(IsValid(Message->WeaponOrDinoIcon))
		IconsWidth += IconSize.X;
    if(IsValid(Message->HitBodyPartIcon))
        IconsWidth += IconSize.X;
    float TotalWidth = KillerNameSize.X + KilledNameSize.X + IconsWidth + (Spacing.X * 5.f);

    KillFeedRightPos.Y += (PreviousDrawnMessages * (IconSize.Y + Spacing.Y * 4.f));

    float SlideAtTime = 250.f;
    if (std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - Message->StartTime).count() > (settings::user::KillFeedTime.Val * 1000.f) - SlideAtTime)
	{
		float t = (std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - Message->StartTime).count() - ((settings::user::KillFeedTime.Val * 1000.f) - SlideAtTime)) / SlideAtTime;
		KillFeedRightPos.X = Lerp(GetCanvasSize().X, GetCanvasSize().X + TotalWidth, t);
	}

    FVector2D StartPos = { KillFeedRightPos.X - TotalWidth, KillFeedRightPos.Y };

    FVector2D RectStart = { StartPos.X - Spacing.X, StartPos.Y - Spacing.Y };
    FVector2D OuterRectStart = { RectStart.X - 2.f, RectStart.Y - 2.f };
    Renderer::RenderFilledRoundedRectangle(&OuterRectStart, TotalWidth + (Spacing.X * 2.f) + 4.f, IconSize.Y + (Spacing.Y * 2.f) + 4.f, 10.f, { 0.0f, 0.0f, 0.0f, 1.f });
    Renderer::RenderFilledRoundedRectangle(&RectStart, TotalWidth + (Spacing.X * 2.f), IconSize.Y + (Spacing.Y * 2.f), 10.f, { 0.15f, 0.15f, 0.15f, 1.f });
    StartPos.Y += (Spacing.Y / 2);

    DrawString(Message->KillerName, StartPos, TextScale, Message->KillerColor, true, { 0.f,0.f,0.f,1.f }, false, false);

    if (IsValid(Message->WeaponOrDinoIcon)) {
        DrawIcon(Message->WeaponOrDinoIcon, { StartPos.X + KillerNameSize.X + Spacing.X + (IconSize.X / 2.f), StartPos.Y + (IconSize.Y / 2.f)}, IconSize * 1.2f, EBlendMode::BLEND_AlphaHoldout, {1.f,1.f,1.f,1.f});
    }
    if (IsValid(Message->HitBodyPartIcon)) {
        DrawIcon(Message->HitBodyPartIcon, { StartPos.X + KillerNameSize.X + Spacing.X + (Message->WeaponOrDinoIcon != nullptr) ? (IconSize.X + Spacing.X) : 0 + Spacing.X + (IconSize.X / 2.f), StartPos.Y + (IconSize.Y / 2.f) }, IconSize * 1.2f, EBlendMode::BLEND_AlphaHoldout, { 1.f,1.f,1.f,1.f });
    }
    DrawString(Message->KilledName, { StartPos.X + KillerNameSize.X + Spacing.X + IconsWidth + (Spacing.X * 3.f), StartPos.Y }, TextScale, Message->KilledColor, true, { 0.f,0.f,0.f,1.f }, false, false);
}

void Renderer::DrawScreenMessages()
{
    if (ScreenMessages.size() > 0)
	{
		for (int i = 0; i < ScreenMessages.size(); i++)
		{
            ScreenMessage Message = ScreenMessages[i];
            double MilliSeconds = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - Message.StartTime).count();
            if ((Message.DurationSeconds * 1000.f) - MilliSeconds > 0)
			{
                DrawString(Message.Text, Message.Position, Message.Size, Message.Color, true, {0.f,0.f,0.f,1.f},true,true);
			}
			else
			{
                if (i == 0)
				{
					ScreenMessages.erase(ScreenMessages.begin());
				}
                else
                {
                    ScreenMessages.erase(ScreenMessages.begin(), ScreenMessages.begin() + i);
                }
			}
		}
	}
    if (KillFeedMessages.size() > 0)
    {
        for (int i = 0; i < KillFeedMessages.size(); i++)
        {
            KillFeedMessage Message = KillFeedMessages[i];
            double MilliSeconds = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - Message.StartTime).count();
            if ((settings::user::KillFeedTime.Val * 1000.f) - MilliSeconds > 0)
            {
				DrawKillFeedMessage(&Message, i);
            }
            else
            {
                if (i == 0)
                {
                    KillFeedMessages.erase(KillFeedMessages.begin());
				}
                else
                {
                    KillFeedMessages.erase(KillFeedMessages.begin(), KillFeedMessages.begin() + i);
                }
            }
        }
    }
}

void Renderer::DrawDebugBoxWithLines(const FVector& Center, const FVector& Extent, const FQuat& Rotation, FLinearColor Color, float Thickness)
{
    // Calculate the eight vertices of the box
    FVector Vertex[8];

    Vertex[0] = Center + Rotation.RotateVector(FVector(-Extent.X, -Extent.Y, -Extent.Z)); // Min X, Min Y, Min Z
    Vertex[1] = Center + Rotation.RotateVector(FVector(Extent.X, -Extent.Y, -Extent.Z));  // Max X, Min Y, Min Z
    Vertex[2] = Center + Rotation.RotateVector(FVector(Extent.X, Extent.Y, -Extent.Z));   // Max X, Max Y, Min Z
    Vertex[3] = Center + Rotation.RotateVector(FVector(-Extent.X, Extent.Y, -Extent.Z));  // Min X, Max Y, Min Z

    Vertex[4] = Center + Rotation.RotateVector(FVector(-Extent.X, -Extent.Y, Extent.Z));  // Min X, Min Y, Max Z
    Vertex[5] = Center + Rotation.RotateVector(FVector(Extent.X, -Extent.Y, Extent.Z));   // Max X, Min Y, Max Z
    Vertex[6] = Center + Rotation.RotateVector(FVector(Extent.X, Extent.Y, Extent.Z));    // Max X, Max Y, Max Z
    Vertex[7] = Center + Rotation.RotateVector(FVector(-Extent.X, Extent.Y, Extent.Z));   // Min X, Max Y, Max Z

    // Draw the edges of the box using your custom DrawLine function
    Renderer::DrawLine3DScreenCheck(Vertex[0], Vertex[1], Thickness, Color);
    Renderer::DrawLine3DScreenCheck(Vertex[1], Vertex[2], Thickness, Color);
    Renderer::DrawLine3DScreenCheck(Vertex[2], Vertex[3], Thickness, Color);
    Renderer::DrawLine3DScreenCheck(Vertex[3], Vertex[0], Thickness, Color);

    Renderer::DrawLine3DScreenCheck(Vertex[4], Vertex[5], Thickness, Color);
    Renderer::DrawLine3DScreenCheck(Vertex[5], Vertex[6], Thickness, Color);
    Renderer::DrawLine3DScreenCheck(Vertex[6], Vertex[7], Thickness, Color);
    Renderer::DrawLine3DScreenCheck(Vertex[7], Vertex[4], Thickness, Color);

    Renderer::DrawLine3DScreenCheck(Vertex[0], Vertex[4], Thickness, Color);
    Renderer::DrawLine3DScreenCheck(Vertex[1], Vertex[5], Thickness, Color);
    Renderer::DrawLine3DScreenCheck(Vertex[2], Vertex[6], Thickness, Color);
    Renderer::DrawLine3DScreenCheck(Vertex[3], Vertex[7], Thickness, Color);


    Renderer::DrawLine3DScreenCheck(Vertex[0], Vertex[6], Thickness, Color);
}

FLinearColor Renderer::HSVtoRGB(HSVColor in) {
    double hh, p, q, t, ff;
    long i;
    FLinearColor out;
    double h = in.h, s = in.s, v = in.v;

    if (s <= 0.0) {       // < is bogus, just shuts up warnings
        out.R = v;
        out.G = v;
        out.B = v;
        out.A = 1.0;
        return out;
    }
    hh = h;
    if (hh >= 360.0) hh = 0.0;
    hh /= 60.0;
    i = (long)hh;
    ff = hh - i;
    p = v * (1.0 - s);
    q = v * (1.0 - (s * ff));
    t = v * (1.0 - (s * (1.0 - ff)));

    switch (i) {
    case 0:
        out.R = v;
        out.G = t;
        out.B = p;
        break;
    case 1:
        out.R = q;
        out.G = v;
        out.B = p;
        break;
    case 2:
        out.R = p;
        out.G = v;
        out.B = t;
        break;

    case 3:
        out.R = p;
        out.G = q;
        out.B = v;
        break;
    case 4:
        out.R = t;
        out.G = p;
        out.B = v;
        break;
    case 5:
    default:
        out.R = v;
        out.G = p;
        out.B = q;
        break;
    }
    out.A = 1.0;
    return out;
}

HSVColor Renderer::RGBtoHSV(FLinearColor in) {
    HSVColor out;
    float max, min, delta;

    max = fmaxf(fmaxf(in.R, in.G), in.B);
    min = fminf(fminf(in.R, in.G), in.B);

    out.v = max; // Value

    delta = max - min;

    if (max != 0)
        out.s = delta / max; // Saturation
    else {
        // r = g = b = 0    // s = 0, v is undefined
        out.s = 0;
        out.h = -1;
        return out;
    }

    if (delta == 0)
        out.h = 0;
    else if (in.R == max)
        out.h = (in.G - in.B) / delta; // between yellow & magenta
    else if (in.G == max)
        out.h = 2 + (in.B - in.R) / delta; // between cyan & yellow
    else
        out.h = 4 + (in.R - in.G) / delta; // between magenta & cyan

    out.h *= 60; // degrees
    if (out.h < 0)
        out.h += 360;

    return out;
}

void Renderer::DrawHueLine(FVector2D pos, float Width, float Height)
{
    for (int i = 0; i < Width; i++) {
        float hue = (float)i / Width;
        HSVColor hsvColor;
        hsvColor.h = hue * 360;
        hsvColor.s = 1;
        hsvColor.v = 1;
        FLinearColor rgbColor = HSVtoRGB(hsvColor);
        Renderer::DrawLine2D({ pos.X + i, pos.Y }, { pos.X + i, pos.Y + Height }, 1.f, rgbColor);
    }
}

float Renderer::GetHueUnderMousePos(FVector2D MousePos, FVector2D HueLinePos, float Width, float Height)
{
    if (MousePos.X >= HueLinePos.X && MousePos.X <= HueLinePos.X + Width && MousePos.Y >= HueLinePos.Y && MousePos.Y <= HueLinePos.Y + Height)
    {
        float hue = (MousePos.X - HueLinePos.X) / Width;
		return hue * 360.f;
	}
    return -1;
}
void Renderer::DrawSaturationLine(FVector2D pos, float Width, float Height, float Hue)
{
    for (int i = 0; i < Width; i++) {
		float saturation = (float)i / Width;
		HSVColor hsvColor;
		hsvColor.h = Hue;
		hsvColor.s = saturation;
		hsvColor.v = 1;
		FLinearColor rgbColor = HSVtoRGB(hsvColor);
		Renderer::DrawLine2D({ pos.X + i, pos.Y }, { pos.X + i, pos.Y + Height }, 1.f, rgbColor);
	}
}
float Renderer::GetSaturationUnderMousePos(FVector2D MousePos, FVector2D SaturationLinePos, float Width, float Height)
{

    if (MousePos.X >= SaturationLinePos.X && MousePos.X <= SaturationLinePos.X + Width && MousePos.Y >= SaturationLinePos.Y && MousePos.Y <= SaturationLinePos.Y + Height)
    {
		float saturation = (MousePos.X - SaturationLinePos.X) / Width;
		return saturation;
	}
	return -1;
}
void Renderer::DrawValueLine(FVector2D pos, float Width, float Height, float Hue, float Saturation)
{
    for (int i = 0; i < Width; i++) {
		float value = (float)i / Width;
		HSVColor hsvColor;
		hsvColor.h = Hue;
		hsvColor.s = Saturation;
		hsvColor.v = value;
		FLinearColor rgbColor = HSVtoRGB(hsvColor);
		Renderer::DrawLine2D({ pos.X + i, pos.Y }, { pos.X + i, pos.Y + Height }, 1.f, rgbColor);
	}
}
float Renderer::GetValueUnderMousePos(FVector2D MousePos, FVector2D ValueLinePos, float Width, float Height)
{
    if (MousePos.X >= ValueLinePos.X && MousePos.X <= ValueLinePos.X + Width && MousePos.Y >= ValueLinePos.Y && MousePos.Y <= ValueLinePos.Y + Height)
    {
		float value = (MousePos.X - ValueLinePos.X) / Width;
		return value;
	}
	return -1;
}

int Renderer::Distance2D(int X1, int Y1, int X2, int Y2)
{
    return globals::libs::MathLib->STATIC_Sqrt((X2 - X1) * (X2 - X1) + (Y2 - Y1) * (Y2 - Y1));
}
