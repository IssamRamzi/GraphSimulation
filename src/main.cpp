#include <iostream>

#include "raylib.h"


int main() {
    InitWindow(800,800,"hello");

    while (!WindowShouldClose()){
        BeginDrawing();

        ClearBackground(BLACK);
        DrawText("Hello",0,0,30,RED);

        EndDrawing();
    }
    return 0;
}
