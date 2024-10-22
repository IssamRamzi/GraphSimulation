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
    Color color;

public:
    static bool can_create;
    static std::vector<Node> nodes;
    static std::vector<std::pair<Node*, Node*>> links;
    static std::vector<int> link_distance;
    static std::vector<Node*> link_vector;


    Node                    (int value);
    Node                    (int value, Vector2 position);
    Node                    (int value, Vector2 position, int radius);
    Node                    (int value, Vector2 position, Color color);
    Node                    (int value, Vector2 position, int radius, Color color);
    ~                       Node();


    void                    draw_node();
    static void             update_node();
    static void             create_node();
    static void             draw();
    static void             update();

    bool                    check_for_link();
    static void             link_nodes();
    static void             draw_links();

    static void             delete_all();

    bool                    is_clicked();

    void                    toString();
};


#endif //GRAPHSIMULATION_NODE_H
