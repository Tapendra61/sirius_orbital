//
// Created by Tapendra on 6/30/2025.
//

#include"ui/UiManager.h"
#define RAYGUI_IMPLEMENTATION
#include"raygui/raygui.h"

UiManager::UiManager() {
	enableEntityPanel = true;
}

void UiManager::RenderEntityPanel() {
	Rectangle panelBounds = {50, 50, 100, 400};
	Rectangle contentBounds = {0, 0, 100, 400};
	Rectangle panelView = {0};

	GuiScrollPanel(panelBounds, "Entity Panel", contentBounds, &entityPanelScrollPosition, &panelView);

	BeginScissorMode(panelView.x, panelView.y, panelView.width, panelView.height);

	DrawText("Entity Panel", 50, 50, 20, BLACK);

	EndScissorMode();

}