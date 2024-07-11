//
// Created by محمد عبد العزيز on 7/7/2024.
//

#include "Button.h"

#include <iostream>
#include <string>

static const int DEFAULT_FONT_SIZE = 25;
static  const int DEFAULT_PADDING = 5;

Button::Button(int x,int y,int width,int hieght,Color color,Color hooverColor,std::string text){
    this->rect.x = x;
    this->rect.y = y;
    this->rect.height = hieght;
    this->drawColor = color;
    this->color = color;
    this->hooverColor = hooverColor;
    this->text = text;
    this->rect.width =  MeasureText(this->text.c_str(), DEFAULT_FONT_SIZE)+DEFAULT_PADDING+5;
}
void Button::draw() {
    DrawRectangleRec(this->rect, this->drawColor);
    int textWidth = MeasureText(this->text.c_str(), DEFAULT_FONT_SIZE);
    int textX = this->rect.x + DEFAULT_PADDING;
    int textY = this->rect.y + DEFAULT_FONT_SIZE*2/5;
    DrawText(this->text.c_str(), textX, textY, DEFAULT_FONT_SIZE, BLACK);

}
bool Button::is_clicked() {
    if( CheckCollisionPointRec(GetMousePosition(),this->rect)&& IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
        std::cout << "button is clicked  \n " ;
        return true;
    }else {
        //std::cout << "button is not clicked \n " ;
        return false;
    }
}


void Button::update() {
    is_clicked();
    if(CheckCollisionPointRec(GetMousePosition(),this->rect)) {
        //Color tmp = this->color;
        this->drawColor = hooverColor;
        //this->hooverColor = tmp;
    }else {
        this->drawColor =this->color;
    }

}



