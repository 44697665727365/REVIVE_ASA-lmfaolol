#include "pch.h"
#include "Config.h"
#include "settings.h"
#include "Menu.h"

namespace ConsoleConfigs
{
	enum class ValueType 
	{
		Int, 
		Double,
		Float,
		Bool,
	};

	FString CreateVarString(FString VarName, FString VarString, FString Value)
	{
		FString ReturnString = Xors(L"\"");

		ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, VarName);
		ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, VarString);
		ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Xors(L"\" : ["));
		ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Value);
		ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Xors(L"], "));

		return ReturnString;
	}

	FString CreateParseString(FString VarName, FString VarString)
	{
		FString ReturnString = Xors(L"\"");

		ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, VarName);
		ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, VarString);
		ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Xors(L"\""));

		return ReturnString;
	}

	template <typename Val>
	void TryLoadValue(ValueType ValType , FString StringToParse, FString SearchValue, Val& Value)
	{
		int32 KeyIndex = globals::libs::StringLib->STATIC_FindSubstring(StringToParse, SearchValue, false, false , 0);

		if (KeyIndex != -1)  
		{
			int32 StartIndex = globals::libs::StringLib->STATIC_FindSubstring(StringToParse, Xors(L"["), false, false, KeyIndex + globals::libs::StringLib->STATIC_Len(SearchValue));
			
			if (StartIndex != -1)  
			{
				int32 EndIndex = globals::libs::StringLib->STATIC_FindSubstring(StringToParse, Xors(L"]"), false, false, StartIndex);
				
				if (EndIndex != -1) 
				{
					FString ValueString = globals::libs::StringLib->STATIC_Mid(StringToParse, StartIndex + 1, EndIndex - StartIndex - 1);

					switch (ValType)
					{
					case ValueType::Bool:
					{
						Value = globals::libs::StringLib->STATIC_Conv_StringToInt(ValueString);
						break;
					};
					case ValueType::Int:
					{
						Value = globals::libs::StringLib->STATIC_Conv_StringToInt(ValueString);
						break;
					};
					case ValueType::Double:
					{
						Value = globals::libs::StringLib->STATIC_Conv_StringToDouble(ValueString);
						break;
					};
					case ValueType::Float:
					{
						Value = globals::libs::StringLib->STATIC_Conv_StringToDouble(ValueString);
						break;
					};
					}
				}
			}
		}
	}

	void TryLoadColor(FString StringToParse, FString SearchValue, FLinearColor& Value)
	{
		int32 KeyIndex = globals::libs::StringLib->STATIC_FindSubstring(StringToParse, SearchValue, false, false, 0);

		if (KeyIndex != -1)
		{
			int32 StartIndex = globals::libs::StringLib->STATIC_FindSubstring(StringToParse, Xors(L"["), false, false, KeyIndex + globals::libs::StringLib->STATIC_Len(SearchValue));

			if (StartIndex != -1)
			{
				int32 EndIndex = globals::libs::StringLib->STATIC_FindSubstring(StringToParse, Xors(L"]"), false, false, StartIndex);

				if (EndIndex != -1)
				{
					FString ValueString = globals::libs::StringLib->STATIC_Mid(StringToParse, StartIndex + 1, EndIndex - StartIndex - 1);

					FLinearColor Color;
					bool IsValid = false;

					globals::libs::StringLib->STATIC_Conv_StringToColor(ValueString, &Color, &IsValid);

					if (IsValid)
						Value = Color;
				}
			}
		}
	}

	void SaveConsoleConfigVar(VarBase* Var, FString &ReturnString)
	{
		switch (Var->Type)
		{
		case VarT::KeyBind:
		{
			auto KBVar = (KeyBindVar*)Var;

			FString Enabled = CreateVarString(KBVar->VarName, Xors(L" Enabled"), std::to_wstring(KBVar->Enabled).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Enabled);

			FString Key = CreateVarString(KBVar->VarName, Xors(L" Key"), std::to_wstring(KBVar->keyBindForToggle).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Key);

			FString BindForVar = CreateVarString(KBVar->VarName, Xors(L" KeyBindForVar"), std::to_wstring(KBVar->KeyBindForVar).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, BindForVar);

			break;
		};
		case VarT::KeyBindOptional:
		{
			auto KBOVar = (KeyBindOptionalVar*)Var;

			FString Enabled = CreateVarString(KBOVar->VarName, Xors(L" Enabled"), std::to_wstring(KBOVar->Enabled).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Enabled);

			FString Key = CreateVarString(KBOVar->VarName, Xors(L" Key"), std::to_wstring(KBOVar->keyBindForToggle).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Key);

			FString BindForVar = CreateVarString(KBOVar->VarName, Xors(L" KeyBindForVar"), std::to_wstring(KBOVar->KeyBindForVar).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, BindForVar);

			FString UseKeybind = CreateVarString(KBOVar->VarName, Xors(L" UseKey"), std::to_wstring(KBOVar->UseKeyBind).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, UseKeybind);
			break;
		};
		case VarT::Color:
		{
			auto VarC = (ColorVar*)Var;

			FString Enabled = CreateVarString(VarC->VarName, Xors(L" Enabled"), std::to_wstring(VarC->Enabled).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Enabled);

			FString Key = CreateVarString(VarC->VarName, Xors(L" Key"), std::to_wstring(VarC->keyBindForToggle).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Key);

			FString Color = CreateVarString(VarC->VarName, Xors(L" Color"), globals::libs::StringLib->STATIC_Conv_ColorToString(VarC->Color));
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Color);

			break;
		};
		case VarT::NoToggleColor:
		{
			auto VarC = (ColorVar*)Var;

			FString Enabled = CreateVarString(VarC->VarName, Xors(L" Enabled"), std::to_wstring(VarC->Enabled).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Enabled);

			FString Key = CreateVarString(VarC->VarName, Xors(L" Key"), std::to_wstring(VarC->keyBindForToggle).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Key);

			FString Color = CreateVarString(VarC->VarName, Xors(L" Color"), globals::libs::StringLib->STATIC_Conv_ColorToString(VarC->Color));
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Color);

			break;
		};
		case VarT::Int:
		{
			auto VarI = (IntVar*)Var;

			FString Enabled = CreateVarString(VarI->VarName, Xors(L" Enabled"), std::to_wstring(VarI->Enabled).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Enabled);

			FString Key = CreateVarString(VarI->VarName, Xors(L" Key"), std::to_wstring(VarI->keyBindForToggle).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Key);

			FString Value = CreateVarString(VarI->VarName, Xors(L" Value"), std::to_wstring(VarI->Val).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Value);

			break;
		};
		case VarT::Float:
		{
			auto VarF = (FloatVar*)Var;

			FString Enabled = CreateVarString(VarF->VarName, Xors(L" Enabled"), std::to_wstring(VarF->Enabled).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Enabled);

			FString Key = CreateVarString(VarF->VarName, Xors(L" Key"), std::to_wstring(VarF->keyBindForToggle).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Key);

			FString Value = CreateVarString(VarF->VarName, Xors(L" Value"), std::to_wstring(VarF->Val).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Value);

			break;
		};
		case VarT::NoToggleInt:
		{
			auto VarI = (IntVar*)Var;

			FString Enabled = CreateVarString(VarI->VarName, Xors(L" Enabled"), std::to_wstring(VarI->Enabled).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Enabled);

			FString Key = CreateVarString(VarI->VarName, Xors(L" Key"), std::to_wstring(VarI->keyBindForToggle).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Key);

			FString Value = CreateVarString(VarI->VarName, Xors(L" Value"), std::to_wstring(VarI->Val).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Value);

			break;
		};
		case VarT::NoToggleFloat:
		{
			auto VarF = (FloatVar*)Var;

			FString Enabled = CreateVarString(VarF->VarName, Xors(L" Enabled"), std::to_wstring(VarF->Enabled).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Enabled);

			FString Key = CreateVarString(VarF->VarName, Xors(L" Key"), std::to_wstring(VarF->keyBindForToggle).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Key);

			FString Value = CreateVarString(VarF->VarName, Xors(L" Value"), std::to_wstring(VarF->Val).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Value);

			break;
		};
		case VarT::Structure:
		{
			auto VarS = (StructureVar*)Var;

			FString Enabled = CreateVarString(VarS->VarName, Xors(L" Enabled"), std::to_wstring(VarS->Enabled).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Enabled);

			FString Key = CreateVarString(VarS->VarName, Xors(L" Key"), std::to_wstring(VarS->keyBindForToggle).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Key);

			FString DrawName = CreateVarString(VarS->VarName, Xors(L" DrawName"), std::to_wstring(VarS->DrawName).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, DrawName);

			FString Distance = CreateVarString(VarS->VarName, Xors(L" Distance"), std::to_wstring(VarS->Distance).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Distance);

			FString TribeName = CreateVarString(VarS->VarName, Xors(L" TribeName"), std::to_wstring(VarS->TribeName).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, TribeName);

			FString Chams = CreateVarString(VarS->VarName, Xors(L" Chams"), std::to_wstring(VarS->Chams).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Chams);

			FString Slots = CreateVarString(VarS->VarName, Xors(L" Slots"), std::to_wstring(VarS->Slots).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Slots);

			FString HideEmpty = CreateVarString(VarS->VarName, Xors(L" HideEmpty"), std::to_wstring(VarS->HideEmpty).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, HideEmpty);

			FString Color = CreateVarString(VarS->VarName, Xors(L" Color"), globals::libs::StringLib->STATIC_Conv_ColorToString(VarS->Color.Color));
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Color);

			break;
		};
		case VarT::ExtraStructure:
		{
			auto VarS = (StructureExtraVar*)Var;

			FString Enabled = CreateVarString(VarS->VarName, Xors(L" Enabled"), std::to_wstring(VarS->Enabled).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Enabled);

			FString Key = CreateVarString(VarS->VarName, Xors(L" Key"), std::to_wstring(VarS->keyBindForToggle).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Key);

			FString DrawName = CreateVarString(VarS->VarName, Xors(L" DrawName"), std::to_wstring(VarS->DrawName).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, DrawName);

			FString Distance = CreateVarString(VarS->VarName, Xors(L" Distance"), std::to_wstring(VarS->Distance).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Distance);

			FString TribeName = CreateVarString(VarS->VarName, Xors(L" TribeName"), std::to_wstring(VarS->TribeName).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, TribeName);

			FString Chams = CreateVarString(VarS->VarName, Xors(L" Chams"), std::to_wstring(VarS->Chams).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Chams);

			FString Slots = CreateVarString(VarS->VarName, Xors(L" Slots"), std::to_wstring(VarS->Slots).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Slots);

			FString HideEmpty = CreateVarString(VarS->VarName, Xors(L" HideEmpty"), std::to_wstring(VarS->HideEmpty).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, HideEmpty);

			FString Color = CreateVarString(VarS->VarName, Xors(L" Color"), globals::libs::StringLib->STATIC_Conv_ColorToString(VarS->Color.Color));
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Color);

			FString Extra1 = CreateVarString(VarS->VarName, Xors(L" Extra1"), std::to_wstring(VarS->ExtraOption1).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Extra1);

			FString Extra2 = CreateVarString(VarS->VarName, Xors(L" Extra2"), std::to_wstring(VarS->ExtraOption2).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Extra2);

			FString Extra3 = CreateVarString(VarS->VarName, Xors(L" Extra3"), std::to_wstring(VarS->ExtraOption3).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Extra3);

			FString Extra4 = CreateVarString(VarS->VarName, Xors(L" Extra4"), std::to_wstring(VarS->ExtraOption4).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Extra4);

			FString Extra5 = CreateVarString(VarS->VarName, Xors(L" Extra5"), std::to_wstring(VarS->ExtraOption5).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Extra5);

			break;
		};
		case VarT::Toggle:
		{
			FString Enabled = CreateVarString(Var->VarName, Xors(L" Enabled"), std::to_wstring(Var->Enabled).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Enabled);

			FString Key = CreateVarString(Var->VarName, Xors(L" Key"), std::to_wstring(Var->keyBindForToggle).c_str());
			ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, Key);

			break;
		};
		default:
			//log(Xors("Var type not found"));
			break;
		};
	}

	void LoadConsolConfigVar(VarBase* Var, FString StringToParse)
	{
		switch (Var->Type)
		{
		case VarT::KeyBind:
		{
			auto KBVar = (KeyBindVar*)Var;

			FString Enabled = CreateParseString(KBVar->VarName, Xors(L" Enabled"));
			TryLoadValue(ValueType::Bool, StringToParse, Enabled, KBVar->Enabled);

			FString Key = CreateParseString(KBVar->VarName, Xors(L" Key"));
			TryLoadValue(ValueType::Int, StringToParse, Key, KBVar->keyBindForToggle);

			FString KeyBindForVar = CreateParseString(KBVar->VarName, Xors(L" KeyBindForVar"));
			TryLoadValue(ValueType::Int, StringToParse, KeyBindForVar, KBVar->KeyBindForVar);

			break;
		};
		case VarT::KeyBindOptional:
		{
			auto KBOVar = (KeyBindOptionalVar*)Var;

			FString Enabled = CreateParseString(KBOVar->VarName, Xors(L" Enabled"));
			TryLoadValue(ValueType::Bool, StringToParse, Enabled, KBOVar->Enabled);

			FString Key = CreateParseString(KBOVar->VarName, Xors(L" Key"));
			TryLoadValue(ValueType::Int, StringToParse, Key, KBOVar->keyBindForToggle);

			FString KeyBindForVar = CreateParseString(KBOVar->VarName, Xors(L" KeyBindForVar"));
			TryLoadValue(ValueType::Int, StringToParse, KeyBindForVar, KBOVar->KeyBindForVar);

			FString UseKeybind = CreateParseString(KBOVar->VarName, Xors(L" UseKey"));
			TryLoadValue(ValueType::Int, StringToParse, UseKeybind, KBOVar->UseKeyBind);

			break;
		};
		case VarT::Color:
		{
			auto VarC = (ColorVar*)Var;

			FString Enabled = CreateParseString(VarC->VarName, Xors(L" Enabled"));
			TryLoadValue(ValueType::Bool, StringToParse, Enabled, VarC->Enabled);

			FString Key = CreateParseString(VarC->VarName, Xors(L" Key"));
			TryLoadValue(ValueType::Int, StringToParse, Key, VarC->keyBindForToggle);

			FString Color = CreateParseString(VarC->VarName, Xors(L" Color"));
			TryLoadColor(StringToParse, Color, VarC->Color);

			break;
		};
		case VarT::NoToggleColor:
		{
			auto VarC = (ColorVar*)Var;

			FString Enabled = CreateParseString(VarC->VarName, Xors(L" Enabled"));
			TryLoadValue(ValueType::Bool, StringToParse, Enabled, VarC->Enabled);

			FString Key = CreateParseString(VarC->VarName, Xors(L" Key"));
			TryLoadValue(ValueType::Int, StringToParse, Key, VarC->keyBindForToggle);

			FString Color = CreateParseString(VarC->VarName, Xors(L" Color"));
			TryLoadColor(StringToParse, Color, VarC->Color);

			break;
		};
		case VarT::Int:
		{
			auto VarI = (IntVar*)Var;

			FString Enabled = CreateParseString(VarI->VarName, Xors(L" Enabled"));
			TryLoadValue(ValueType::Bool, StringToParse, Enabled, VarI->Enabled);

			FString Key = CreateParseString(VarI->VarName, Xors(L" Key"));
			TryLoadValue(ValueType::Int, StringToParse, Key, VarI->keyBindForToggle);

			FString Value = CreateParseString(VarI->VarName, Xors(L" Value"));
			TryLoadValue(ValueType::Int, StringToParse, Value, VarI->Val);

			break;
		};
		case VarT::Float:
		{
			auto VarF = (FloatVar*)Var;

			FString Enabled = CreateParseString(VarF->VarName, Xors(L" Enabled"));
			TryLoadValue(ValueType::Bool, StringToParse, Enabled, VarF->Enabled);

			FString Key = CreateParseString(VarF->VarName, Xors(L" Key"));
			TryLoadValue(ValueType::Int, StringToParse, Key, VarF->keyBindForToggle);

			FString Value = CreateParseString(VarF->VarName, Xors(L" Value"));
			TryLoadValue(ValueType::Float, StringToParse, Value, VarF->Val);

			break;
		};
		case VarT::NoToggleInt:
		{
			auto VarI = (IntVar*)Var;

			FString Enabled = CreateParseString(VarI->VarName, Xors(L" Enabled"));
			TryLoadValue(ValueType::Bool, StringToParse, Enabled, VarI->Enabled);

			FString Key = CreateParseString(VarI->VarName, Xors(L" Key"));
			TryLoadValue(ValueType::Int, StringToParse, Key, VarI->keyBindForToggle);

			FString Value = CreateParseString(VarI->VarName, Xors(L" Value"));
			TryLoadValue(ValueType::Int, StringToParse, Value, VarI->Val);

			break;
		};
		case VarT::NoToggleFloat:
		{
			auto VarF = (FloatVar*)Var;

			FString Enabled = CreateParseString(VarF->VarName, Xors(L" Enabled"));
			TryLoadValue(ValueType::Bool, StringToParse, Enabled, VarF->Enabled);

			FString Key = CreateParseString(VarF->VarName, Xors(L" Key"));
			TryLoadValue(ValueType::Int, StringToParse, Key, VarF->keyBindForToggle);

			FString Value = CreateParseString(VarF->VarName, Xors(L" Value"));
			TryLoadValue(ValueType::Float, StringToParse, Value, VarF->Val);

			break;
		};
		case VarT::Structure:
		{
			auto VarS = (StructureVar*)Var;

			FString Enabled = CreateParseString(VarS->VarName, Xors(L" Enabled"));
			TryLoadValue(ValueType::Bool, StringToParse, Enabled, VarS->Enabled);

			FString Key = CreateParseString(VarS->VarName, Xors(L" Key"));
			TryLoadValue(ValueType::Int, StringToParse, Key, VarS->keyBindForToggle);

			FString DrawName = CreateParseString(VarS->VarName, Xors(L" DrawName"));
			TryLoadValue(ValueType::Bool, StringToParse, DrawName, VarS->DrawName);

			FString Distance = CreateParseString(VarS->VarName, Xors(L" Distance"));
			TryLoadValue(ValueType::Bool, StringToParse, Distance, VarS->Distance);

			FString TribeName = CreateParseString(VarS->VarName, Xors(L" TribeName"));
			TryLoadValue(ValueType::Bool, StringToParse, TribeName, VarS->TribeName);

			FString Chams = CreateParseString(VarS->VarName, Xors(L" Chams"));
			TryLoadValue(ValueType::Bool, StringToParse, Chams, VarS->Chams);

			FString Slots = CreateParseString(VarS->VarName, Xors(L" Slots"));
			TryLoadValue(ValueType::Bool, StringToParse, Slots, VarS->Slots);

			FString HideEmpty = CreateParseString(VarS->VarName, Xors(L" HideEmpty"));
			TryLoadValue(ValueType::Bool, StringToParse, HideEmpty, VarS->HideEmpty);

			FString Color = CreateParseString(VarS->VarName, Xors(L" Color"));
			TryLoadColor(StringToParse, Color, VarS->Color.Color);


			break;
		};
		case VarT::ExtraStructure:
		{
			auto VarS = (StructureExtraVar*)Var;

			FString Enabled = CreateParseString(VarS->VarName, Xors(L" Enabled"));
			TryLoadValue(ValueType::Bool, StringToParse, Enabled, VarS->Enabled);

			FString Key = CreateParseString(VarS->VarName, Xors(L" Key"));
			TryLoadValue(ValueType::Int, StringToParse, Key, VarS->keyBindForToggle);

			FString DrawName = CreateParseString(VarS->VarName, Xors(L" DrawName"));
			TryLoadValue(ValueType::Bool, StringToParse, DrawName, VarS->DrawName);

			FString Distance = CreateParseString(VarS->VarName, Xors(L" Distance"));
			TryLoadValue(ValueType::Bool, StringToParse, Distance, VarS->Distance);

			FString TribeName = CreateParseString(VarS->VarName, Xors(L" TribeName"));
			TryLoadValue(ValueType::Bool, StringToParse, TribeName, VarS->TribeName);

			FString Chams = CreateParseString(VarS->VarName, Xors(L" Chams"));
			TryLoadValue(ValueType::Bool, StringToParse, Chams, VarS->Chams);

			FString Slots = CreateParseString(VarS->VarName, Xors(L" Slots"));
			TryLoadValue(ValueType::Bool, StringToParse, Slots, VarS->Slots);

			FString HideEmpty = CreateParseString(VarS->VarName, Xors(L" HideEmpty"));
			TryLoadValue(ValueType::Bool, StringToParse, HideEmpty, VarS->HideEmpty);

			FString Color = CreateParseString(VarS->VarName, Xors(L" Color"));
			TryLoadColor(StringToParse, Color, VarS->Color.Color);

			FString Extra1 = CreateParseString(VarS->VarName, Xors(L" Extra1"));
			TryLoadValue(ValueType::Bool, StringToParse, Extra1, VarS->ExtraOption1);

			FString Extra2 = CreateParseString(VarS->VarName, Xors(L" Extra2"));
			TryLoadValue(ValueType::Bool, StringToParse, Extra2, VarS->ExtraOption2);

			FString Extra3 = CreateParseString(VarS->VarName, Xors(L" Extra3"));
			TryLoadValue(ValueType::Bool, StringToParse, Extra3, VarS->ExtraOption3);

			FString Extra4 = CreateParseString(VarS->VarName, Xors(L" Extra4"));
			TryLoadValue(ValueType::Float, StringToParse, Extra4, VarS->ExtraOption4);

			FString Extra5 = CreateParseString(VarS->VarName, Xors(L" Extra5"));
			TryLoadValue(ValueType::Bool, StringToParse, Extra5, VarS->ExtraOption5);

			break;
		};
		case VarT::Toggle:
		{
			FString Enabled = CreateParseString(Var->VarName, Xors(L" Enabled"));
			TryLoadValue(ValueType::Bool, StringToParse, Enabled, Var->Enabled);

			FString Key = CreateParseString(Var->VarName, Xors(L" Key"));
			TryLoadValue(ValueType::Int, StringToParse, Key, Var->keyBindForToggle);

			break;
		};
		default:
			break;
		};
	}

	void SaveConsoleMenuSettings(FString& ReturnString)
	{
		FVector2D Size = Menu::State->Size;
		float ExtraUserScale = Menu::State->ExtraUserScale;
		FVector2D Pos = Menu::State->Position;

		FString MenuSizeX = CreateVarString(Xors(L"MenuSize"), Xors(L" X"), std::to_wstring(Size.X).c_str());
		ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, MenuSizeX);

		FString MenuSizeY = CreateVarString(Xors(L"MenuSize"), Xors(L" Y"), std::to_wstring(Size.Y).c_str());
		ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, MenuSizeY);

		FString MenuPosX = CreateVarString(Xors(L"MenuPos"), Xors(L" X"), std::to_wstring(Pos.X).c_str());
		ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, MenuPosX);

		FString MenuPosY = CreateVarString(Xors(L"MenuPos"), Xors(L" Y"), std::to_wstring(Pos.Y).c_str());
		ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, MenuPosY);

		FString MenuExtraUserScale = CreateVarString(Xors(L"MenuExtraUserScale"), Xors(L""), std::to_wstring(ExtraUserScale).c_str());
		ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(ReturnString, MenuExtraUserScale);
	}

	void LoadConsoleMenuSettings(FString StringToParse)
	{
		FVector2D Size = { 0,0 };
		FVector2D Pos = { 0,0 };
		float ExtraUserScale = 0.f;

		FString MenuSizeX = CreateParseString(Xors(L"MenuSize"), Xors(L" X"));
		TryLoadValue(ValueType::Double, StringToParse, MenuSizeX, Size.X);

		FString MenuSizeY = CreateParseString(Xors(L"MenuSize"), Xors(L" Y"));
		TryLoadValue(ValueType::Double, StringToParse, MenuSizeY, Size.Y);

		FString MenuPosX = CreateParseString(Xors(L"MenuPos"), Xors(L" X"));
		TryLoadValue(ValueType::Double, StringToParse, MenuPosX, Pos.X);

		FString MenuPosY = CreateParseString(Xors(L"MenuPos"), Xors(L" Y"));
		TryLoadValue(ValueType::Double, StringToParse, MenuPosY, Pos.Y);

		FString MenuExtraUserScale = CreateParseString(Xors(L"MenuExtraUserScale"), Xors(L""));
		TryLoadValue(ValueType::Float, StringToParse, MenuExtraUserScale, MenuExtraUserScale);

		Menu::State->Size = Size;
		Menu::State->Position = Pos;
		Menu::State->ExtraUserScale = ExtraUserScale;
	}

	FString CopyConfigValues()
	{
		FString ReturnString;

		for (VarBase* var : settings::MenuVars)
		{
			if (!var || !var->Initialized)
				continue;

			SaveConsoleConfigVar(var, ReturnString);
		}

		SaveConsoleMenuSettings(ReturnString);

		for (int x = 0; x < globals::libs::StringLib->STATIC_Len(ReturnString); x++)
			ReturnString[x] += 1;

		ReturnString = globals::libs::StringLib->STATIC_Concat_StrStr(Xors(L"CFG :\n"), ReturnString);

		globals::local::PC->CopyStringToClipboard(ReturnString);

		return ReturnString;
	}

	void ParseConfigValues(FString ParseString)
	{
		for (int x = 0; x < globals::libs::StringLib->STATIC_Len(ParseString); x++)
			ParseString[x] -= 1;

		for (VarBase* var : settings::MenuVars)
		{
			if (!var || !var->Initialized)
				continue;

			LoadConsolConfigVar(var, ParseString);
		}

		LoadConsoleMenuSettings(ParseString);
	}
}