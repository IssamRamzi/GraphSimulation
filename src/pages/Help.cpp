//
// Created by golde on 13/07/2024.
//

#include "Help.h"
Help::Help() {
    this->rect = Rectangle();
   this->components.push_back(std::make_unique<Button>(btn));
}
void Help::draw(){
    for (const auto & c: this->components) {
        c->draw();

    }

}
void Help::update(){
    for (const auto & c: this->components) {
        c->update();

    }

}
void Help::handel_events(){
    if(this->btn.is_clicked()) {
        Help::next="start";
    }

}