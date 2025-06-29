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