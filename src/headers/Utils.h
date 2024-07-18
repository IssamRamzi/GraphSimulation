//
// Created by golde on 06/07/2024.
//

#ifndef GRAPHSIMULATION_UTILS_H
#define GRAPHSIMULATION_UTILS_H
#include <string>

#include "raylib.h"


class Utils {
public:
    static int       WINDOW_WIDTH;
    static int       WINDOW_HEIGHT;


    const int       FPS = 30;
    static std::string  WINDOW_TITLE;

    Utils();
    static  Texture2D uplodIcons(const char* path,int newWidth,int newHeight);

};


#endif //GRAPHSIMULATION_UTILS_H
