//
// Created by محمد عبد العزيز on 7/6/2024.
//
#include "Home.h"
#include  "Page.h"

Home::Home() {
    this->rect = Rectangle();

    this->components.push_back(std::make_unique<TaskBar>(this->task_bar));
}
void Home::draw() {
    this->rect;

    for (const auto & c: this->components) {
        c->draw();

    }
}
void Home::update() {

}
