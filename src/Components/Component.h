//
// Created by محمد عبد العزيز on 7/7/2024.
//

#ifndef COMPONENT_H
#define COMPONENT_H
#include "raylib.h"


class Component {
protected:
    Rectangle rect;
    Color color;

public:
    virtual  void draw() =0;
    virtual  void update()=0;
    virtual  bool is_clicked() =0;
     Rectangle getRect() {
         return  this->rect;
     };
    virtual ~Component(){};

};



#endif //COMPONENT_H
