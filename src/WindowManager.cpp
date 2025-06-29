//
// Created by Tapendra on 6/28/2025.
//

#include "WindowManager.h"

void WindowManager::Run() {
	Start();
	InitWindow(WIDTH, HEIGHT, TITLE);
	SetTargetFPS(FPS);

	Color clear_color {4, 4, 24, 255};

	Start();
	while(!WindowShouldClose()) {
		ClearBackground(clear_color);
		BeginDrawing();
			BeginMode2D(camera_manager.GetCamera());

			Update();
			LateUpdate();

			EndMode2D();
		EndDrawing();
	}
}

void WindowManager::Start() {

}

void WindowManager::Update() {

}

void WindowManager::LateUpdate() {
	DrawCircle(0, 0, 100, BLACK);
}