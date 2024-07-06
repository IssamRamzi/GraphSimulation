//
// Created by golde on 06/07/2024.
//

#include "Node.h"

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
    DrawCircleLines(position.x,position.y,30, BLACK);
    value_str= std::to_string(this->value_int);
//    std::cout << "String Value : " << value_str <<", Int value : " << value_int <<  std::endl;

    int textWidth = MeasureText(value_str.c_str(), fontSize);
    // Pas besoin du textHeight vu que deja 3ndna fontSize f attributs

    int textX = position.x - textWidth / 2;
    int textY = position.y - fontSize / 2;

    DrawText(value_str.c_str(), textX, textY, fontSize, BLACK);
}

Node::~Node() {

}

