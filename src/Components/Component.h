//
// Created by محمد عبد العزيز on 7/7/2024.
//

#ifndef COMPONENT_H
#define COMPONENT_H
#include "raylib.h"


class Component {
protected:
    Vector2 position;
    int width;
    int hieght;
    Color color;

public:
    virtual  void draw() =0;
    virtual  void update()=0;
    virtual  bool is_clicked() =0;
    virtual ~Component(){};
};



#endif //COMPONENT_H
