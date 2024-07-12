//
// Created by محمد عبد العزيز on 7/12/2024.
//

#include "IconButton.h"
IconButton::IconButton(int pos_x, int pos_y, int hieght, int width, Texture2D icon){
    this->icon = icon;
    this->rect.x = pos_x;
    this->rect.y = pos_y;
    this->rect.height = hieght;
    this->rect.width = width;
}
void IconButton::draw() {
    DrawRectangleRec(this->rect,DARKBROWN);
    DrawTexture(icon, this->rect.x + (this->rect.width - icon.width) / 2, this->rect.y + (this->rect.height - icon.height) / 2, WHITE);

}
void IconButton::update() {

}




