//
// Created by محمد عبد العزيز on 7/7/2024.
//

#ifndef HOME_H
#define HOME_H
#include <memory>
#include <vector>

#include  "Page.h"
#include "raylib.h"
#include "../Components/Component.h"
#include "../Components/TaskBar.h"

class Home :public Page{
public:
    std::vector<std::unique_ptr<Component>> components;
    Home();
    Rectangle rect;
    void  draw();
    void  update();
    TaskBar task_bar =  TaskBar(5,5,600,60,BLACK);
};
#endif //HOME_H
