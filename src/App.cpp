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
#include "pages/Help.h"

App::App() {

}
void App::launch() {
    Utils utils;
    InitWindow(utils.WINDOW_WIDTH,utils.WINDOW_HEIGHT,"Graph Visualizer");
    Home home;
    Start start;
    Help help;

    std::map<string,Page*> pages ;
    pages.insert(std::make_pair("home",&home));
    pages.insert(std::make_pair("start",&start));
    pages.insert(std::make_pair("help",&help));

    Page* current_page = &start ;
    Page::next = "start";


    while (!WindowShouldClose()){

        if(IsKeyPressed(KEY_F11)){
//            Utils::getFullScreenSize();
            ToggleFullscreen();
//            SetWindowSize(Utils::WINDOW_HEIGHT_FS, Utils::WINDOW_WIDTH_FS);
        }

        current_page = pages[Page::next];
        BeginDrawing();
        current_page->draw();
        current_page->update();
        current_page->handel_events();
        ClearBackground(RAYWHITE);
        EndDrawing();
    }
}

