#include<iostream>
#include"raylib/raylib.h"

int main() {

    int width = 1080;
    int height = 720;
    int fps = 144;
    const char* title = "Orbit Sim";

    InitWindow(width, height, title);

    while(!WindowShouldClose()) {
        ClearBackground(WHITE);

        PollInputEvents();
        BeginDrawing();
        DrawRectangle(100, 200, 100, 100, GREEN);
        EndDrawing();
    }

    std::cout << "Hello World!" << std::endl;
    return 0;
}