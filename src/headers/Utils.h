//
// Created by golde on 06/07/2024.
//

#ifndef GRAPHSIMULATION_UTILS_H
#define GRAPHSIMULATION_UTILS_H
#include <string>

#include "raylib.h"


class Utils {
public:
    const int       WINDOW_WIDTH = 1600;
    const int       WINDOW_HEIGHT =900;
    const int       FPS = 30;
    const char      *WINDOW_TITLE = "Graph Simulation";
    static  Texture2D uplodIcons(const char* path,int newWidth,int newHeight);
};


#endif //GRAPHSIMULATION_UTILS_H
