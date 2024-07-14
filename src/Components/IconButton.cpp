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

}
void IconButton::draw() {
    if(is_enabled()) {
        DrawRectangleRec(this->rect,DARKGRAY);
    }else {
        DrawRectangleRec(this->rect,WHITE);
    }

    DrawTexture(icon, this->rect.x + (this->rect.width - icon.width) / 2, this->rect.y + (this->rect.height - icon.height) / 2, WHITE);
     Vector2 position ;
    position.x = this->rect.x;
    position.y = this->rect.y;
   // DrawTextureRec(icon,this->rect,position,LIGHTGRAY);
}
void IconButton::update() {
    if(this->is_clicked()) {
        this->switch_enabled();
    }
}
bool IconButton::is_enabled() {
    return this->enabled;
}
void IconButton::switch_enabled() {
    this->enabled = !this->enabled;
}





