//
// Created by محمد عبد العزيز on 7/7/2024.
//

#ifndef HOME_H
#define HOME_H
#include <memory>
#include <vector>

#include  "Page.h"
#include "raylib.h"
#include "../Components/Button.h"
#include "../Components/Component.h"
#include "../Components/IconButton.h"
#include "../Components/TaskBar.h"
#include  "../headers/Utils.h"

class Home :public Page{
public:

    Home();
    Rectangle rect;
    void  draw() override;
    void  update() override;
    void handel_events() override;
private:

    TaskBar task_bar =  TaskBar(100,5,600,60,BLACK);
    Button btn= Button(5,5,70,42,RED,DARKBLUE,"HOME");
    IconButton  deleteAllButton =   IconButton(105,10,50,50,"../src/assets/icons/delete_all.png");
    IconButton  deleteButton =   IconButton(205,10,50,50,"../src/assets/icons/delete.png");
    IconButton  startSimulationrtButton =   IconButton(305,10,50,50,"../src/assets/icons/start.png");
    IconButton  pauseSimulationButton =   IconButton(405,10,50,50,"../src/assets/icons/pause.png");
    IconButton  addEdgeButton =   IconButton(505,10,50,50,"../src/assets/icons/edge.png");
    IconButton  addNodeButton =   IconButton(605,10,50,50,"../src/assets/icons/node.png");
};
#endif //HOME_H
