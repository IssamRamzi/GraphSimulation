//
// Created by محمد عبد العزيز on 7/12/2024.
//

#include "IconButton.h"

#include "../headers/Utils.h"

IconButton::IconButton(int pos_x, int pos_y, int hieght, int width, const char* icon){
    this->rect.x = pos_x;
    this->rect.y = pos_y;
    this->rect.height = hieght;
    this->rect.width = width;
    this->enabled = false;
    this->icon = Utils::uplodIcons(icon,this->rect.width-10,this->rect.height-10);
    this->color = WHITE;
    this->hooverColor= GRAY;
    this->drawColor = this->color;

}
void IconButton::draw() {

        DrawRectangleRec(this->rect,this->drawColor);


    DrawTexture(icon, this->rect.x + (this->rect.width - icon.width) / 2, this->rect.y + (this->rect.height - icon.height) / 2, WHITE);
     Vector2 position ;
    position.x = this->rect.x;
    position.y = this->rect.y;
}
void IconButton::update() {

    if(CheckCollisionPointRec(GetMousePosition(),this->rect)) {
        this->drawColor = hooverColor;
    }else {
        this->drawColor =this->color;
    }
}
bool IconButton::is_enabled() {
    return this->enabled;
}
void IconButton::switch_enabled() {
    this->enabled = !this->enabled;
}





