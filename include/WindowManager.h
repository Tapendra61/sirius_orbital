//
// Created by Tapendra on 6/28/2025.
//

#ifndef SIRIUS_ORBITAL_WINDOWMANAGER_H
#define SIRIUS_ORBITAL_WINDOWMANAGER_H

#include"raylib/raylib.h"
#include"camera/CameraManager.h"

class WindowManager {
    const int WIDTH;
	const int HEIGHT;
	const char* TITLE;
    int FPS;

public:
	CameraManager camera_manager;

public:
	WindowManager(const int width, const int height, const char* title, const int fps) : WIDTH(width), HEIGHT(height), TITLE(title), FPS(fps) {};
	WindowManager(WindowManager& windowManager) = delete;

	void Run();

private:
	void Start();
	void Update();
	void LateUpdate();
};


#endif //SIRIUS_ORBITAL_WINDOWMANAGER_H
