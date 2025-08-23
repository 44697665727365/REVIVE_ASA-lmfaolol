#pragma once
class SearchBar
{
private:
	void DrawSearchBar();
	void DrawSearchTab();
	void UpdateInputText();
	float CursorOffset;
public:
	void Draw();
	void Update();
	std::wstring SearchText;
};

