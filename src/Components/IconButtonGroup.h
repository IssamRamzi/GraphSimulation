//
// Created by محمد عبد العزيز on 7/14/2024.
//

#ifndef ICONBUTTONGROUP_H
#define ICONBUTTONGROUP_H
#include "IconButton.h"
#include <vector>

class IconButtonGroup : private Component{
    std::vector<IconButton> buttonsGroup;
    bool selected;
public:
    void addButton(IconButton button);
    bool enableButton(IconButton button);
    void draw() override;
    bool is_clicked() override;
    void update() override;


};



#endif //ICONBUTTONGROUP_H
