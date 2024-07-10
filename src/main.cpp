#include <iostream>

#include "../cmake-build-debug/_deps/raylib-src/src/raylib.h"
#include "headers/Node.h"
#include "headers/Utils.h"
#include "pages/Home.h"
#include "pages/Page.h"


int main() {
    Utils utils;
    InitWindow(utils.WINDOW_WIDTH,utils.WINDOW_HEIGHT,"Graph Visualizer");
    Home current_page = Home() ;
//    std::cout ">>" << std::endl;
    Node::handle_creation();
    Node::update();
    while (!WindowShouldClose()){


        BeginDrawing();
        current_page.draw();

        ClearBackground(RAYWHITE);
        EndDrawing();
    }
    return 0;
}
