#include <iostream>

#include "../cmake-build-debug/_deps/raylib-src/src/raylib.h"
#include "headers/Node.h"
#include "pages/Home.h"
#include "pages/Page.h"

int main() {
    InitWindow(800,800,"Graph Visualizer");
    Page current_page = Home();
    Node::test();

    while (!WindowShouldClose()){

        BeginDrawing();
        current_page.draw();
        Node::testDraw();
        Node::handleCreation();
        ClearBackground(RAYWHITE);
        EndDrawing();
    }
    return 0;
}
