//
// Created by محمد عبد العزيز on 7/7/2024.
//

#ifndef HOME_H
#define HOME_H
#include  "Page.h"
#include "raylib.h"

class Home :public Page{
public:
    Home();
    Rectangle rect;
    void  draw();
    void  update();

};
#endif //HOME_H
