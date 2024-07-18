//
// Created by golde on 06/07/2024.
//

#include "Utils.h"

#include <iostream>

int Utils::WINDOW_HEIGHT = 960;
int Utils::WINDOW_WIDTH = 1600;
std::string Utils::WINDOW_TITLE = "Graph Simulation";
Utils::Utils() {


}

Texture2D Utils::uplodIcons(const char* path,int newWidth,int newHeight) {
    Image iconImage = LoadImage(path);
    ImageResize(&iconImage, newWidth, newHeight);
    Texture2D icon = LoadTextureFromImage(iconImage);
    UnloadImage(iconImage);
    return  icon;
}





