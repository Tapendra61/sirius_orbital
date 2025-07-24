//
// Created by Tapendra on 6/30/2025.
//

#pragma once

#include"raylib/raylib.h"
#include"raylib/raygui.h"

class UiManager {
public:
	bool enableEntityPanel;
	Vector2 entityPanelScrollPosition = {0};

public:
	UiManager();
	void RenderEntityPanel();
};