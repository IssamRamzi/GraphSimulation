//
// Created by golde on 06/07/2024.
//

#include "Utils.h"

#include <iostream>

Texture2D Utils::uplodIcons(const char* path,int newWidth,int newHeight) {
    Image iconImage = LoadImage(path);
    ImageResize(&iconImage, newWidth, newHeight);
    Texture2D icon = LoadTextureFromImage(iconImage);
    UnloadImage(iconImage);
    return  icon;
}

