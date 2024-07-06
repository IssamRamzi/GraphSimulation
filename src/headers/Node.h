//
// Created by golde on 06/07/2024.
//

#ifndef GRAPHSIMULATION_NODE_H
#define GRAPHSIMULATION_NODE_H

#include "raylib.h"
#include <iostream>

class Node {
private:
    int             value_int;
    std::string     value_str;
    int             fontSize;
    int             radius;
    Vector2         position;
    Node            *ancestors;
    Node            *Successors;


public:
    Node        (int value);
    Node        (int value, Vector2 position);
    ~           Node();
    void        draw();
};


#endif //GRAPHSIMULATION_NODE_H
