//
// Created by محمد عبد العزيز on 7/7/2024.
//

#ifndef TASKBAR_H
#define TASKBAR_H
#include "Component.h"


class TaskBar : public Component {
public:
    TaskBar(int x,int y,int width,int hieght,Color color) ;
    void draw() override;

    bool is_clicked() override;
    void update() override;
};



#endif //TASKBAR_H
