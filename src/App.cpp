//
// Created by محمد عبد العزيز on 7/12/2024.
//
#include "headers/Node.h"
#include "headers/Utils.h"
#include "pages/Home.h"
#include "pages/Page.h"
#include "pages/Start.h"
#include <map>
#include "App.h"
App::App() {

}
void App::launch() {
    Utils utils;
    InitWindow(utils.WINDOW_WIDTH,utils.WINDOW_HEIGHT,"Graph Visualizer");
    Home home;
    Start start;
    std::map<string,Page*> pages ;
    pages.insert(std::make_pair("home",&home));
    pages.insert(std::make_pair("start",&start));
    Page* current_page = &start ;
    Page::next = "start";


    while (!WindowShouldClose()){
        current_page = pages[Page::next];
        BeginDrawing();

        current_page->draw();
        current_page->update();
        current_page->handel_events();
        ClearBackground(RAYWHITE);
        EndDrawing();
    }
}

