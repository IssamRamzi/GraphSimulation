#include "Node.h"
#include <iostream>
std::vector<Node> Node::nodes;

Node::Node(int value) {
    this->value_int = value;
    radius = 30;
    fontSize = 20;
}

Node::Node(int value, Vector2 position) {
    this->value_int = value;
    this->position = position;
    radius = 30;
    fontSize = 25;
}

void Node::draw() {
    DrawCircleLines(position.x, position.y, radius, BLACK);
    value_str = std::to_string(this->value_int);

    int textWidth = MeasureText(value_str.c_str(), fontSize);

    int textX = position.x - textWidth / 2;
    int textY = position.y - fontSize / 2;

    DrawText(value_str.c_str(), textX, textY, fontSize, BLACK);
}

Node::~Node() {

}


void Node::handleCreation() {
    if (IsMouseButtonDown(MOUSE_BUTTON_LEFT)) {
        int key = GetCharPressed();
        if (key >= 48 && key <= 57) {
            key -=48;
            Vector2 mousePosition = GetMousePosition();
            Node node{key, mousePosition};
            Node::nodes.push_back(node);
            node.toString();
        }
    }
}

void Node::toString() {
    std::cout << "Value : " << value_int << ", Position : (" << position.x << ", " << position.y << ")" << std::endl;
}

void Node::test() {
    Node node1{15, Vector2{320, 50}};
    Node node2{2, Vector2{60, 50}};
    Node node3{8, Vector2{123, 320}};
    Node node4{46, Vector2{426, 650}};
    nodes.push_back(node1);
    nodes.push_back(node2);
    nodes.push_back(node3);
    nodes.push_back(node4);
}

void Node::updateDraw() {
    for (auto &node : nodes) {
        node.draw();
    }
}
