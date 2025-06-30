//
// Created by Tapendra on 6/28/2025.
//
#pragma once

#include"raylib/raylib.h"
#include"camera/CameraManager.h"
#include "ui/UiManager.h"

class WindowManager {
    const int WIDTH;
	const int HEIGHT;
	const char* TITLE;
    int FPS;

public:
	CameraManager camera_manager;
	UiManager ui_manager;

public:
	WindowManager(const int width, const int height, const char* title, const int fps) : WIDTH(width), HEIGHT(height), TITLE(title), FPS(fps) {};
	WindowManager(WindowManager& windowManager) = delete;

	void Run();
	int GetWidth();
	int GetHeight();

private:
	void Start();
	void Update();
	void LateUpdate();
};
