//
//  main.cpp
//  Pong-Game-C++
//
//  Created by MEDLAO on 08/11/2024.
//

#include <iostream>
#include <raylib.h>

using namespace std;

class Ball{
public:
    float x, y;
    int speed_x, speed_y;
    int radius;
    
    void draw(){
        DrawCircle(x, y, radius, WHITE);
    }
    
    void update(){
        x += speed_x;
        y += speed_y;
        
        if(y + radius >= GetScreenHeight() || y - radius <= 0)
        {
            speed_y *= -1;
        }
        if(x + radius >= GetScreenWidth() || x - radius <= 0)
        {
            speed_x *= -1;
        }
    }
};

Ball ball;

int main(int argc, const char * argv[]) {
    cout << "Starting the game" << endl;
    const int screen_width = 1280;
    const int screen_height = 800;
    InitWindow(screen_width, screen_height, "Pong Game C++");
    SetTargetFPS(60);
    
    ball.radius = 20;
    ball.x = screen_width / 2;
    ball.y = screen_height / 2;
    ball.speed_x = 7;
    ball.speed_y = 7;
    
    
    while (WindowShouldClose() == false) {
        BeginDrawing();
        
        //Updating
        ball.update();
        
        //Drawing
        ClearBackground(BLACK);
        DrawLine(screen_width / 2, 0, screen_width / 2, screen_height, WHITE);
        ball.draw();
        DrawRectangle(10, screen_height / 2 - 60, 25, 120, WHITE);
        DrawRectangle(screen_width - 35, screen_height / 2 - 60, 25, 120, WHITE);
        
        EndDrawing();
    }
    
    CloseWindow();
    return 0;
}
