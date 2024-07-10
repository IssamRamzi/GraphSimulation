//
// Created by محمد عبد العزيز on 7/7/2024.
//

#include "Button.h"

#include <string>

static const int DEFAULT_FONT_SIZE = 25;

Button::Button(int x,int y,int width,int hieght,Color color,Color hooverColor,std::string text){
    this->position.x = x;
    this->position.y = y;
    this->hieght = hieght;
    this->width = width;
    this->color = color;
    this->hooverColor = hooverColor;
    this->text = text;


}
void Button::draw() {
    DrawRectangle(this->position.x,this->position.y,this->width,this->hieght,this->color);
    int textWidth = MeasureText(this->text.c_str(), DEFAULT_FONT_SIZE);
    int textX = position.x + 5;
    int textY = position.y + this->hieght/5;

    DrawText(this->text.c_str(), textX, textY, DEFAULT_FONT_SIZE, BLACK);

}
bool Button::is_clicked() {
    return false;
}
void Button::update() {

}



