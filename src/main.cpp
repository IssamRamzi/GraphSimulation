#include <iostream>

#include "../cmake-build-debug/_deps/raylib-src/src/raylib.h"
#include "headers/Node.h"
int main() {
    InitWindow(800,800,"Graph Visualizer");


//    Node::test();

    while (!WindowShouldClose()){

        BeginDrawing();

        Node::handleCreation();
        Node::updateDraw();



        ClearBackground(RAYWHITE);


        EndDrawing();
    }
    return 0;
}
