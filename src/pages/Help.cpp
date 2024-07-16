//
// Created by golde on 13/07/2024.
//

#include "Help.h"
Help::Help() {
    this->components.push_back(std::make_unique<Button>(btn));
}

void Help::draw() {
    for(auto& c : this->components) {
        c->draw();
    }
    DrawText("Press A or The DELETE Button to erase all the nodes.", 10,60,20,BLACK);
    DrawText("Press A or The DELETE Button to erase all the nodes.", 10,100,20,BLACK);
}
void Help::update() {
    for(auto& c : this->components) {
        c->update();
    }
}
void Help::handel_events() {
    if(this->btn.is_clicked()) {
        Page::next = "start";
    }

}

