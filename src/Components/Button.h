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
    Color drawColor;

    int fontSize;
    std::string text;


    


public:
    Button(int x,int y,int width,int hieght,Color color,Color hooverColor ,std::string text);
    Button();
    bool is_clicked() override;
    void draw() override;
    void update() override;
};



#endif //BUTTON_H
