#include <iostream>

#include "raylib.h"
#include "headers/Node.h"
int main() {
    InitWindow(800,800,"Graph Visualizer");


    Node::test();

    while (!WindowShouldClose()){

        BeginDrawing();
        Node::testDraw();
        Node::handleCreation();





        ClearBackground(RAYWHITE);


        EndDrawing();
    }
    return 0;
}
