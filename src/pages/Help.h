////
//// Created by golde on 13/07/2024.
////
//
#ifndef GRAPHSIMULATION_HELP_H
#define GRAPHSIMULATION_HELP_H


#include "Page.h"
#include "../Components/Button.h"

class Help : public Page{
public:
    Help();
    Rectangle rect;
    void  draw() override;
    void  update() override;
    void handel_events() override;

private:
    Button btn = Button(5,5,70,42,RED,DARKBLUE,"HELP");

};


#endif //GRAPHSIMULATION_HELP_H
