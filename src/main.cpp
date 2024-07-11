#include <iostream>

#include "../cmake-build-debug/_deps/raylib-src/src/raylib.h"
#include "headers/Node.h"
#include "headers/Utils.h"
#include "pages/Home.h"
#include "pages/Page.h"


int main() {
    Utils utils;
    InitWindow(utils.WINDOW_WIDTH,utils.WINDOW_HEIGHT,"Graph Visualizer");
    Home home;
    Page* current_page = &home ;
//    std::cout ">>" << std::endl;

    while (!WindowShouldClose()){


        BeginDrawing();
        Node::handle_creation();
        Node::update();
        current_page->draw();
        current_page->update();
        ClearBackground(RAYWHITE);
        EndDrawing();
    }
    return 0;
}
