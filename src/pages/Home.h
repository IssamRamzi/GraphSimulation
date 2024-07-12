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
#include "../Components/TaskBar.h"

class Home :public Page{
public:

    Home();
    Rectangle rect;
    void  draw();
    void  update();
    void handel_events() override;
private:
    TaskBar task_bar =  TaskBar(5,5,600,60,BLACK);
    Button btn= Button(100,400,70,42,RED,DARKBLUE,"HOME");
};
#endif //HOME_H
