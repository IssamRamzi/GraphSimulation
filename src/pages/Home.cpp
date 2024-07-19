//
// Created by محمد عبد العزيز on 7/6/2024.
//
#include "Home.h"

#include <algorithm>

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
    Node::create_node();
    Node::update_node();
    if(Node::can_create)
        DrawRectangle(Utils::WINDOW_WIDTH - 30,0,30,30,GREEN);
    else DrawRectangle(Utils::WINDOW_WIDTH - 30,0,30,30,RED);
}
void Home::update() {
    Node::create_node();
    for (const auto & c: this->components) {
        c->update();

    }
}
void Home::handel_events() {
   // std::cout << "state is : " <<this->deleteButton.is_enabled()<< std::endl;
    if(this->deleteAllButton.is_clicked() || IsKeyPressed(KEY_Q) ) {
        Node::delete_all();
    }
    if(this->btn.is_clicked()) {
        Page::next = "start";
    }
    //if(CheckCollisionPointRec(GetMousePosition(),this->deleteButton.getRect()) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
    if(this->deleteButton.is_clicked()){
       this->deleteButton.switch_enabled();
    }
    if(this->deleteButton.is_enabled()) {
        SetMouseCursor(3);
        if(IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
            Node::nodes.erase(std::remove_if(Node::nodes.begin(), Node::nodes.end(), []( Node n) {
            return n.is_clicked();
      }),  Node::nodes.end());
        }
    }else {
        SetMouseCursor(0);
    }

}

