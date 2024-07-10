//
// Created by محمد عبد العزيز on 7/7/2024.
//

#ifndef BUTTON_H
#define BUTTON_H
#include <string>

#include "Component.h"
#include "raylib.h"



class Button : public Component{
private:
    Color hooverColor;
    int width;
    int hieght;
    int fontSize;
    Vector2 position;
    std::string text;
    Rectangle rect;
    


public:
    Button(int x,int y,int width,int hieght,Color color,Color hooverColor ,std::string text);
    bool is_clicked() override;
    void draw() override;
    void update() override;
};



#endif //BUTTON_H
