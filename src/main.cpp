#include <iostream>

#include "raylib.h"
#include "headers/Node.h"
int main() {
    InitWindow(800,800,"Graph Visualizer");

    Node node1{15, Vector2{320,50}};
    Node node2{2, Vector2{60,50}};
    Node node3{8, Vector2{123,320}};
    Node node4{46, Vector2{426,650}};

    while (!WindowShouldClose()){
        BeginDrawing();

        ClearBackground(RAYWHITE);
        node1.draw();
        node2.draw();
        node3.draw();
        node4.draw();

        EndDrawing();
    }
    return 0;
}
