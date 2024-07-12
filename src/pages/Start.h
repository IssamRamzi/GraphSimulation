//
// Created by محمد عبد العزيز on 7/7/2024.
//

#ifndef START_H
#define START_H
#include "Page.h"
#include "../Components/Button.h"


class Start : public  Page{
private:
    Button start = Button(utils.WINDOW_WIDTH/2,utils.WINDOW_HEIGHT*0.8,20,40,RED,DARKBLUE,"START");
public:
    Start();
    void draw() override;
    void  update() override;
    void handel_events() override;
};



#endif //START_H
