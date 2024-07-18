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
    InitWindow(Utils::WINDOW_WIDTH,Utils::WINDOW_HEIGHT,Utils::WINDOW_TITLE.c_str());
    Home home;
    Start start;
    Help help;

    std::map<string,Page*> pages ;
    pages.insert(std::make_pair("home",&home));
    pages.insert(std::make_pair("start",&start));
    pages.insert(std::make_pair("help",&help));

    Page* current_page;
    Page::next = "start";

    while (!WindowShouldClose()){

        if (IsKeyPressed(KEY_F11)) {
            ToggleFullscreen();
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

