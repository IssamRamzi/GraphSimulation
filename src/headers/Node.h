//
// Created by golde on 06/07/2024.
//

#ifndef GRAPHSIMULATION_NODE_H
#define GRAPHSIMULATION_NODE_H

#include "raylib.h"
#include <iostream>
#include <vector>

class Node {
private:
    int             value_int;
    std::string     value_str;
    int             fontSize;
    int             radius;
    Vector2         position;
    Node            *ancestors;
    Node            *Successors;
    static std::vector<Node> nodes;

public:
    Node        (int value);
    Node        (int value, Vector2 position);
    Node        (int value, Vector2 position, int radius);
    ~           Node();
    void        draw();
    static void        create_node();
    void               toString();
    static void        handleCreation();
    static void         test();

    static void testDraw();
};


#endif //GRAPHSIMULATION_NODE_H
