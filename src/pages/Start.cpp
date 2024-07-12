//
// Created by محمد عبد العزيز on 7/7/2024.
//

#include "Start.h"

#include "../headers/Utils.h"

Start::Start() {

    this->components.push_back(std::make_unique<Button>(start));
}
void Start::draw() {
    for(auto& c : this->components) {
        c->draw();
    }

}
void Start::update() {
    for(auto& c : this->components) {
        c->update();
    }
}
void Start::handel_events() {
    if(this->start.is_clicked()) {
        Page::next = "home";
    }
}


