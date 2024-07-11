//
// Created by محمد عبد العزيز on 7/6/2024.
//
#include "Home.h"
#include  "Page.h"
#include "../Components/Button.h"
#include "../headers/Node.h"

Home::Home() {
    this->rect = Rectangle();
    Button btn= Button(100,400,70,42,RED,DARKBLUE,"HOME");
    this->components.push_back(std::make_unique<TaskBar>(this->task_bar));
    this->components.push_back(std::make_unique<Button>(btn));
}
void Home::draw() {
    this->rect;

    for (const auto & c: this->components) {
        c->draw();

    }
}
void Home::update() {
    Node :: handle_creation();
    for (const auto & c: this->components) {
        c->update();

    }
}
