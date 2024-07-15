//
// Created by محمد عبد العزيز on 7/14/2024.
//

#include "IconButtonGroup.h"
void IconButtonGroup::addButton(IconButton button) {
    this->buttonsGroup.push_back(button);
}
bool IconButtonGroup::enableButton(IconButton button) {
    for(IconButton b :this->buttonsGroup) {
        if( b.is_enabled() == true) return false;
    }
}
void IconButtonGroup::draw() {
    for (IconButton b: this->buttonsGroup) {
                 b.draw();
    }
}
void IconButtonGroup::update() {
    if(CheckCollisionPointRec(GetMousePosition(),this->rect)) {

    }

}
bool IconButtonGroup::is_clicked() {

}


