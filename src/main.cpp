#include <iostream>

#include "raylib.h"


int main() {
    InitWindow(800,800,"hello");

    while (!WindowShouldClose()){
        BeginDrawing();

        ClearBackground(BLACK);

        EndDrawing();
    }
    return 0;
}
