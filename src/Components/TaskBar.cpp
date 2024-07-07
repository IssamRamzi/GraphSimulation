//
// Created by محمد عبد العزيز on 7/7/2024.
//

#include "TaskBar.h"


TaskBar::TaskBar(int x,int y,int width,int hieght,Color color){
    this->position.x = x;
    this->position.y = y;
    this->hieght = hieght;
    this->width = width;
    this->color = color;


}
void TaskBar::draw() {

   DrawLine(this->position.x,this->position.y,this->position.x+this->width,this->position.y,this->color);
    DrawLine(this->position.x,this->position.y+this->hieght,this->position.x+this->width,this->position.y+this->hieght,this->color);

}
void TaskBar::update() {
}
bool TaskBar:: is_clicked() {
    return false;
}


