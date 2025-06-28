#include<iostream>
#include"WindowManager.h"

int main() {
	WindowManager win_manager{1080, 720, "Orbital Sim", 144};
	win_manager.Run();
    return 0;
}