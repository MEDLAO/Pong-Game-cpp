//
//  main.cpp
//  Pong-Game-C++
//
//  Created by MEDLAO on 08/11/2024.
//

#include <iostream>
#include <raylib.h>

using namespace std;

int main(int argc, const char * argv[]) {
    cout << "Starting the game" << endl;
    const int screen_width = 1280;
    const int screen_height = 800;
    InitWindow(screen_width, screen_height, "Pong Game C++");
    SetTargetFPS(60);
    
    while (WindowShouldClose() == false) {
        BeginDrawing();
        
        EndDrawing();
    }
    
    CloseWindow();
    return 0;
}
