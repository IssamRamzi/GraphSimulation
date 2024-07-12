//
// Created by محمد عبد العزيز on 7/12/2024.
//

#ifndef ICONBUTTON_H

#define ICONBUTTON_H
#include "Button.h"


class IconButton : public  Button{
    Texture2D icon;
    bool enabled;
public:
    void switch_enabled();
    bool is_enabled();
    IconButton(int pos_x,int pos_y,int hieght,int width,const char* iconPath);
    void draw() override;
    void update() override;

};



#endif //ICONBUTTON_H
