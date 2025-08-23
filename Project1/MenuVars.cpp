#include "pch.h"
#include "MenuVars.h"

std::vector<VarInfo> ShownMessages;
void UpdateMenuVars()
{
	for (int i = 0; i < settings::MenuVars.size();i++)
	{
		auto Var = settings::MenuVars[i];

		if (Var->keyBindForToggle <= 0 || Var->keyBindForToggle > 300)
			continue;

		if (Var == &settings::menu::ShowMenu)
		{
			if (Keyboard::GetState(Var->keyBindForToggle, 0) || Keyboard::MenuGetState(Var->keyBindForToggle, 0))
			{
				Var->Enabled = !Var->Enabled;
			}
			if (Renderer::Font == Renderer::MenuFont)
				return;
			continue;
		}

		if (Keyboard::GetState(Var->keyBindForToggle, 0))
		{
			Var->Enabled = !Var->Enabled;
			if (settings::user::ShowToggleMessage.Enabled)
			{
				VarInfo vi{
				.ToggleState = Var->Enabled,
				.MessageTime = settings::user::MessageTime.Val,
				.Name = Var->GetName() };
				ShownMessages.push_back(vi);
			}
		}
	}

	if (!settings::user::ShowToggleMessage.Enabled)
		return;

	for (int i = 0;i < ShownMessages.size();i++)
	{
		FVector2D Pos = { Renderer::GetCanvasSize().X / 2, (double)(Renderer::GetCanvasSize().Y / 1.8f) + 50 + (i * 20) };
		std::wstring fmt = ShownMessages[i].Name;
		fmt += Xors(L"[");
		fmt += ShownMessages[i].ToggleState ? Xors(L"ON") : Xors(L"OFF");
		fmt += Xors(L"]");
		Renderer::DrawString(fmt, Pos, { 0.80f, 0.80f }, ShownMessages[i].ToggleState ? FLinearColor{ 0.f,1.f,0.f,1.f } : FLinearColor{ 1.f,0.f,0.f,1.f }, true, { 0.f,0.f,0.f,0.5f }, true, true);
		ShownMessages[i].MessageTime -= 1.f / 45.f;

		if (ShownMessages[i].MessageTime <= 0)
			ShownMessages.erase(ShownMessages.begin() + i);
	}
}