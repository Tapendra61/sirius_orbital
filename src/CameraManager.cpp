//
// Created by Tapendra on 6/29/2025.
//

#include "camera/CameraManager.h"

CameraManager::CameraManager() {
	camera.offset = {0, 0};
	camera.target = {0, 0};
	camera.rotation = 0;
	camera.zoom = 1.0;
}

CameraManager::CameraManager(Vector2 offset, Vector2 target, float rotation, float zoom) {
	camera.offset = offset;
	camera.target = target;
	camera.rotation = rotation;
	camera.zoom = zoom;
}

Camera2D CameraManager::GetCamera() {
	return camera;
}

void CameraManager::MoveCamera() {
	if(IsKeyDown(KEY_W)) {
		camera.offset.y += 1;
	}
	if(IsKeyDown(KEY_S)) {
		camera.offset.y -= 1;
	}
	if(IsKeyDown(KEY_A)) {
		camera.offset.x += 1;
	}
	if(IsKeyDown(KEY_D)) {
		camera.offset.x -= 1;
	}
}