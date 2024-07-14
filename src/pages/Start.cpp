//
// Created by محمد عبد العزيز on 7/7/2024.
//

#include "Start.h"

#include "../headers/Utils.h"

Start::Start() {
    this->components.push_back(std::make_unique<Button>(start));
    this->components.push_back(std::make_unique<Button>(help));
    this->components.push_back(std::make_unique<Button>(other));
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
    if(this->help.is_clicked()){
        std::cout << "help page" << std::endl;
        Page::next = "help";
    }
}


