#pragma once
#include "MenuItemBase.h"
float GetWidth(Rect Area);
float GetHeight(Rect Area);
FVector2D GetCursorPos();
void Format(wchar_t* Buffer, const wchar_t* format, ...);
inline FVector2D GuiMin(const FVector2D& lhs, const FVector2D& rhs) { return FVector2D(lhs.X < rhs.X ? lhs.X : rhs.X, lhs.Y < rhs.Y ? lhs.Y : rhs.Y); }
inline FVector2D GuiMax(const FVector2D& lhs, const FVector2D& rhs) { return FVector2D(lhs.X >= rhs.X ? lhs.X : rhs.X, lhs.Y >= rhs.Y ? lhs.Y : rhs.Y); }
inline FVector2D GuiClamp(const FVector2D& v, const FVector2D& mn, FVector2D mx) { return FVector2D((v.X < mn.X) ? mn.X : (v.X > mx.X) ? mx.X : v.X, (v.Y < mn.Y) ? mn.Y : (v.Y > mx.Y) ? mx.Y : v.Y); }
inline FVector2D GuiLerp(const FVector2D& a, const FVector2D& b, float t) { return FVector2D(a.X + (b.X - a.X) * t, a.Y + (b.Y - a.Y) * t); }
inline FVector2D GuiLerp(const FVector2D& a, const FVector2D& b, const FVector2D& t) { return FVector2D(a.X + (b.X - a.X) * t.X, a.Y + (b.X - a.Y) * t.X); }
inline FLinearColor GuiLerp(const FLinearColor& a, const FLinearColor& b, float t) { return FLinearColor(a.R + (b.R - a.R) * t, a.G + (b.G - a.G) * t, a.B + (b.B - a.B) * t, a.A + (b.A - a.A) * t); }
template<typename T> static inline T GuiLerp(T a, T b, float t) { return (T)(a + (b - a) * t); }
bool InBounds(FVector2D Pos, Rect Bounds);
int FindFirstIndex(std::wstring source, std::wstring substring, size_t sourceLen, size_t substrLen);
//FString GetDataPath();
//UTexture2D* GetItemBG();
//UTexture2D* GetToggleBG();
//UTexture2D* GetCircleTexture();