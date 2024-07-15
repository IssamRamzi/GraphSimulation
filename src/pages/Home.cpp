//
// Created by محمد عبد العزيز on 7/6/2024.
//
#include "Home.h"
#include  "Page.h"
#include "../Components/Button.h"
#include "../headers/Node.h"

Home::Home() {
    this->rect = Rectangle();

    this->components.push_back(std::make_unique<TaskBar>(this->task_bar));
    this->components.push_back(std::make_unique<Button>(btn));
    this->components.push_back(std::make_unique<IconButton>(this->deleteAllButton));
    this->components.push_back(std::make_unique<IconButton>(this->deleteButton));
    this->components.push_back(std::make_unique<IconButton>(this->addEdgeButton));
    this->components.push_back(std::make_unique<IconButton>(this->addNodeButton));
    this->components.push_back(std::make_unique<IconButton>(this->pauseSimulationButton));
    this->components.push_back(std::make_unique<IconButton>(this->startSimulationrtButton));


}
void Home::draw() {
    this->rect;

    for (const auto & c: this->components) {
        c->draw();
    }
    Node::handle_creation();
    Node::update();
}
void Home::update() {
    Node :: handle_creation();
    for (const auto & c: this->components) {
        c->update();

    }
}
void Home::handel_events() {
   // std::cout << "state is : " <<this->deleteButton.is_enabled()<< std::endl;
    if(this->deleteAllButton.is_clicked()) {
        Node::delete_all();
    }
    if(this->deleteButton.is_enabled()) {
         SetMouseCursor(3);
     }else {
        // SetMouseCursor(0);
     }
    if(this->btn.is_clicked()) {
        Page::next = "start";
    }
}

