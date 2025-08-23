#pragma once
#include "Globals.h"
enum class VarT {
    Base,
    Toggle,
    KeyBind,
    Color,
    Int,
    Float,
    NoToggleInt,
    NoToggleFloat,
    NoToggleColor,
    KeyBindOptional,
    Structure,
    ExtraStructure
};

class VarBase {
protected:

public:
    bool Initialized = false;
    bool Enabled;
    int keyBindForToggle;
    VarT Type;
    bool ShowOnHud;
    const wchar_t* VarName;
    const wchar_t* VarDesc;
    void virtual Initialize()
    {
        if (Initialized) {
            //nlog(Xors("Var already Initialized"));
            return;
        }
        if (!VarName) {
            //nlog(Xors("VarName is null"));
			return;
        }
        if (!VarDesc) {
			//nlog(Xors("VarDesc is null"));
            return;
        }
        wchar_t* newname = new wchar_t[wcslen(VarName) + 1];
        wcscpy_s(newname, wcslen(VarName) + 1, VarName);
        this->VarName = newname;

        wchar_t* newdesc = new wchar_t[wcslen(VarDesc) + 1];
        wcscpy_s(newdesc, wcslen(VarDesc) + 1, VarDesc);
        this->VarDesc = newdesc;
		Initialized = true;
    }
    const wchar_t* GetName() {
        return VarName;
    }
    const wchar_t* GetDesc() {
		return VarDesc;
	}
    virtual void Uninitialize() {
        if (!Initialized) {
            //nlog(Xors("Var not Initialized"));
            return;
        }
        delete[] VarName;
        delete[] VarDesc;
		Initialized = false;
    }
};
//KeyBindVar(bool enabled, int keyBindForToggle,int keyBindForVar, const wchar_t* varName, const wchar_t* varDesc, bool showOnHud = false, VarT type = VarT::KeyBind)
class ToggleVar : public VarBase
{

public:
    ToggleVar(bool enabled, int keyBindForToggle, const wchar_t* varName, const wchar_t* varDesc, bool showOnHud = false, VarT type = VarT::Toggle) {

        this->Enabled = enabled;
        this->keyBindForToggle = keyBindForToggle;
        this->ShowOnHud = showOnHud;
        this->VarName = varName;
        this->VarDesc = varDesc;
        this->Type = type;
    }

    ToggleVar() = default;

};
//KeyBindVar(bool enabled, int keyBindForToggle,int keyBindForVar, const wchar_t* varName, const wchar_t* varDesc, bool showOnHud = false, VarT type = VarT::KeyBind)
class KeyBindVar : public VarBase
{

public:
    int KeyBindForVar;
    wchar_t* KB;
    KeyBindVar(bool enabled, int keyBindForToggle, int keyBindForVar, const wchar_t* varName, const wchar_t* varDesc, bool showOnHud = false, VarT type = VarT::KeyBind) {

        this->Enabled = enabled;
        this->keyBindForToggle = keyBindForToggle;
        this->ShowOnHud = showOnHud;
        this->VarName = varName;
        this->VarDesc = varDesc;
        this->KeyBindForVar = keyBindForVar;
        this->Type = type;
    }

    KeyBindVar() = default;

};
//KeyBindOptionalVar(bool enabled, int keyBindForToggle, int keyBindForVar, bool useKeyBind, const wchar_t* varName, const wchar_t* varDesc, bool showOnHud = false, VarT type = VarT::KeyBind)
class KeyBindOptionalVar : public VarBase
{

public:
    wchar_t* KB;
    int KeyBindForVar;
    bool UseKeyBind = false;
    KeyBindOptionalVar(bool enabled, int keyBindForToggle, int keyBindForVar, bool useKeyBind, const wchar_t* varName, const wchar_t* varDesc, bool showOnHud = false, VarT type = VarT::KeyBindOptional) {

        this->Enabled = enabled;
        this->keyBindForToggle = keyBindForToggle;
        this->ShowOnHud = showOnHud;
        this->VarName = varName;
        this->VarDesc = varDesc;
        this->KeyBindForVar = keyBindForVar;
        this->Type = type;
        this->UseKeyBind = useKeyBind;
    }
	[[nodiscard]] inline bool ShouldExecute()
    {
		if (!Enabled) 
            return false;

		if (UseKeyBind) 
        {
			return Keyboard::GetState(KeyBindForVar,1);
		}

		return true;
	}
    KeyBindOptionalVar() = default;

};
//ColorVar(bool enabled, int keyBindForToggle, FLinearColor col, const wchar_t* varName, const wchar_t* varDesc, bool showOnHud = false, VarT type = VarT::Color)
class ColorVar : public VarBase
{
public:
    bool UseRGB;
    FLinearColor Color;

    ColorVar(bool enabled, int keyBindForToggle, FLinearColor col, const wchar_t* varName, const wchar_t* varDesc, bool showOnHud = false, VarT type = VarT::NoToggleColor) /*: VarBase(enabled, keyBindForToggle, varName, VarDesc, showOnHud, type)*/ {
        this->Enabled = enabled;
        this->keyBindForToggle = keyBindForToggle;
        this->ShowOnHud = showOnHud;
        this->VarName = varName;
        this->VarDesc = varDesc;
        this->Color = col;
        this->Type = type;
        this->UseRGB = false;
    }

    ColorVar() = default;
};
class IntVar : public VarBase
{
public:
    int Val;
    int Min;
    int Max;

    IntVar(bool enabled, int keyBindForToggle, int val, int min, int max, const wchar_t* varName, const wchar_t* varDesc, bool showOnHud = false, VarT type = VarT::NoToggleInt) {

        this->Enabled = enabled;
        this->keyBindForToggle = keyBindForToggle;
        this->ShowOnHud = showOnHud;
        this->VarName = varName;
        this->VarDesc = varDesc;
        this->Val = val;
        this->Type = type;
        this->Min = min;
        this->Max = max;

    }
   
    IntVar() = default;
};

//FloatVar(bool enabled, int keyBindForToggle, float val,float min, float max, const wchar_t* varName, const wchar_t* varDesc, bool showOnHud = false,VarT type = VarT::Float)
class FloatVar : public VarBase
{
public:
    float Val;
    float Min;
    float Max;


    FloatVar(bool enabled, int keyBindForToggle, float val, float min, float max, const wchar_t* varName, const wchar_t* varDesc, bool showOnHud = false, VarT type = VarT::NoToggleFloat) {

        this->Enabled = enabled;
        this->keyBindForToggle = keyBindForToggle;
        this->ShowOnHud = showOnHud;
        this->VarName = varName;
        this->VarDesc = varDesc;
        this->Val = val;
        this->Type = type;
        this->Min = min;
        this->Max = max;

    }
    FloatVar() = default;
    
};

//StructureVar(bool enabled, int keyBindForToggle, const wchar_t* varName, const wchar_t* varDesc, ColorVar color, bool drawName = true, bool chams = false, bool slots = false, bool distance = false, bool tribeName = false, VarT type = VarT::Structure)
class StructureVar : public VarBase
{
public:
    ColorVar Color;
    bool DrawName;
    bool Distance;
    bool TribeName;
    bool Chams;
    bool Slots;
    bool HideEmpty;

    StructureVar(bool enabled, int keyBindForToggle, const wchar_t* varName, const wchar_t* varDesc, ColorVar color, bool drawName = true, bool chams = false, bool slots = false,bool distance = false, bool tribeName = false, VarT type = VarT::Structure) {

        this->Enabled = enabled;
        this->keyBindForToggle = keyBindForToggle;
        this->VarName = varName;
        this->VarDesc = varDesc;
        this->Type = type;
        this->Color = color;
        this->DrawName = drawName;
        this->Distance = distance;
        this->TribeName = tribeName;
        this->Chams = chams;
        this->Slots = slots;
        this->HideEmpty = false;
    }

    StructureVar() = default;
};

class StructureExtraVar : public StructureVar
{
public:
	bool ExtraOption1;
	bool ExtraOption2;
	bool ExtraOption3;
	float ExtraOption4;
	int ExtraOption5;
    bool ExtraOption6;

	StructureExtraVar(bool enabled, int keyBindForToggle, const wchar_t* varName, const wchar_t* varDesc, ColorVar color, bool drawName = true, bool chams = false, bool slots = false, bool distance = false, bool tribeName = false, VarT type = VarT::ExtraStructure) {

		this->Enabled = enabled;
		this->keyBindForToggle = keyBindForToggle;
		this->VarName = varName;
		this->VarDesc = varDesc;
		this->Type = type;
		this->Color = color;
		this->DrawName = drawName;
		this->Distance = distance;
		this->TribeName = tribeName;
		this->Chams = chams;
		this->Slots = slots;
        this->HideEmpty = false;
		this->ExtraOption1 = false;
		this->ExtraOption2 = false;
		this->ExtraOption3 = false;
		this->ExtraOption4 = 0.f;
		this->ExtraOption5 = 0;
        this->ExtraOption6 = false;
	}

	StructureExtraVar() = default;
};

typedef struct VarInfo
{
    bool ToggleState;
    float MessageTime;
    const wchar_t* Name;
}VarInfo;
extern std::vector<VarInfo> ShownMessages;
void UpdateMenuVars();