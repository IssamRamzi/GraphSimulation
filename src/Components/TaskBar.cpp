//
// Created by محمد عبد العزيز on 7/7/2024.
//

#include "TaskBar.h"


TaskBar::TaskBar(int x,int y,int width,int hieght,Color color){
    this->rect.x = x;
    this->rect.y = y;
    this->rect.height= hieght;
    this->rect.width = width;
    this->color = color;


}
void TaskBar::draw() {
    DrawRectangleLinesEx(this->rect, 5,this->color);


}
void TaskBar::update() {
}
bool TaskBar:: is_clicked() {
    return false;
}


