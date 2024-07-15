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


    Color color;

public:
    static std::vector<Node> nodes;
    static std::vector<std::pair<Node*, Node*>> links;
    static std::vector<Node*> link_vector;

    Node                    (int value);
    Node                    (int value, Vector2 position);
    Node                    (int value, Vector2 position, int radius);
    Node                    (int value, Vector2 position, Color color);


    Node                    (int value, Vector2 position, int radius, Color color);
    ~                       Node();
    void                    draw();
    void                    toString();
    static void             handle_creation();

    static void             test();
    static void             update();
    bool                    is_clicked();
    static void             link_nodes();
    static void             draw_links();
    static void             delete_all();
    bool                    is_clicked2();
};


#endif //GRAPHSIMULATION_NODE_H
