//
// Created by محمد عبد العزيز on 7/12/2024.
//

#ifndef ICONBUTTON_H

#define ICONBUTTON_H
#include "Button.h"


class IconButton : public  Button{
    Texture2D icon{};
public:
    IconButton(int pos_x,int pos_y,int hieght,int width,Texture2D icon);
    void draw() override;
    void update() override;

};



#endif //ICONBUTTON_H
