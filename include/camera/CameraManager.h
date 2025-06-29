//
// Created by Tapendra on 6/29/2025.
//

#ifndef SIRIUS_ORBITAL_CAMERAMANAGER_H
#define SIRIUS_ORBITAL_CAMERAMANAGER_H

#include"raylib/raylib.h"

class CameraManager {
private:
	Camera2D camera = {0};

public:
	CameraManager(CameraManager& self) = delete;
	CameraManager();
	CameraManager(Vector2 offset, Vector2 target, float rotation, float zoom);
	Camera2D GetCamera();

};


#endif //SIRIUS_ORBITAL_CAMERAMANAGER_H
