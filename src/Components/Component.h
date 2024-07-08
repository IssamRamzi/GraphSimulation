//
// Created by محمد عبد العزيز on 7/7/2024.
//

#ifndef COMPONENT_H
#define COMPONENT_H
#include "raylib.h"


class Component {
private:
    Vector2 posirion;
public:
    void draw();
    void uplate();
    bool is_clicked();


};



#endif //COMPONENT_H
