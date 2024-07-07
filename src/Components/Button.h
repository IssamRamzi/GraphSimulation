//
// Created by محمد عبد العزيز on 7/7/2024.
//

#ifndef BUTTON_H
#define BUTTON_H
#include "Component.h"
#include "raylib.h"



class Button : public Component{
private:
    int width;
    int hieght;
    Vector2 position;


public:
    Button();
    bool is_clicked() override;
    void draw() override;
    void update() override;
};



#endif //BUTTON_H
