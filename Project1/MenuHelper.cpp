#include "pch.h"
#include "MenuHelper.h"

float GetWidth(Rect Area)
{
	return Area.BR.X - Area.TL.X;
}

float GetHeight(Rect Area)
{
	return Area.BR.Y - Area.TL.Y;
}

FVector2D GetCursorPos()
{
	float x, y;
	APlayerController::Singleton()->GetMousePosition(&x, &y, true);
	return { x ,y };
}

void Format(wchar_t* Buffer, const wchar_t* format, ...)
{
	va_list args;
	va_start(args, format);
	int len = _vscwprintf(format, args) + 1;
	vswprintf_s(Buffer, len, format, args);
	va_end(args);
};

bool InBounds(FVector2D Pos, Rect Bounds)
{
	if (Pos.X >= Bounds.TL.X && Pos.X <= Bounds.BR.X && Pos.Y >= Bounds.TL.Y && Pos.Y <= Bounds.BR.Y)
	{
		return true;
	}
	return false;
}

int FindFirstIndex(std::wstring source, std::wstring substring, size_t sourceLen, size_t substrLen)
{


	std::transform(
		source.begin(), source.end(),
		source.begin(),
		towlower);

	std::transform(
		substring.begin(), substring.end(),
		substring.begin(),
		towlower);

	int index = -1;
	for (int i = 0; i < sourceLen; i++)
	{
		if (source[i] == substring[0])
		{
			bool found = true;
			for (int j = 0; j < substrLen; j++)
			{
				if (source[i + j] != substring[j])
				{
					found = false;
					break;
				}
			}
			if (found)
			{
				index = i;
				break;
			}
		}
	}
	return index;

}

//FString GetDataPath()
//{
//	return FString();
//}
//UTexture2D* GetItemBG()
//{
//	static UTexture2D* ItemBG = nullptr;
//	if (!ItemBG)
//		ItemBG = Images::ImportTextureFromFile(Renderer::canvas, Xors(L"C:\\Users\\allot\\images\\ItemBG.png"));
//	if (!ItemBG)
//	{
//		nlog(Xors("Failed to load ItemBG.png"));
//		return nullptr;
//	}
//	return ItemBG;
//}
//UTexture2D* GetToggleBG()
//{
//
//}
//UTexture2D* GetCircleTexture()
//{
//
//}