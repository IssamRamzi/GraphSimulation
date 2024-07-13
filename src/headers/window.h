//
// Created by golde on 10/07/2024.
//

#ifndef GRAPHSIMULATION_WINDOW_H
#define GRAPHSIMULATION_WINDOW_H

#include <iostream>

class Window {

private:
    int height, width;
    std::string title;


public:
    Window();
    Window(int size);
    Window(int height, int width);
    Window(int height, int width, std::string title);

};


#endif //GRAPHSIMULATION_WINDOW_H
