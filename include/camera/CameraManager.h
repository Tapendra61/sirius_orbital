//
// Created by Tapendra on 6/29/2025.
//
#pragma once

#include"raylib/raylib.h"

class CameraManager {
private:
	Camera2D camera = {0};

public:
	CameraManager(CameraManager& self) = delete;
	CameraManager();
	CameraManager(Vector2 offset, Vector2 target, float rotation, float zoom);
	Camera2D GetCamera();
	void MoveCamera();

};
