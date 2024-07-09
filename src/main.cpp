#include <iostream>

#include "../cmake-build-debug/_deps/raylib-src/src/raylib.h"
#include "headers/Node.h"
#include "pages/Home.h"
#include "pages/Page.h"

int main() {
    InitWindow(800,800,"Graph Visualizer");
    Home current_page ;
    std::cout ">>" << std::endl;

    while (!WindowShouldClose()){


        BeginDrawing();
//        current_page.draw();
        Node::handle_creation();
        Node::update();
        ClearBackground(RAYWHITE);
        EndDrawing();
    }
    return 0;
}
