//
// Created by محمد عبد العزيز on 7/14/2024.
//

#ifndef ICONBUTTONGROUP_H
#define ICONBUTTONGROUP_H
#include "IconButton.h"
#include <vector>

class IconButtonGroup {
    std::vector<IconButton> buttonsGroup;
public:
    void addButton(IconButton button);
    bool enableButton(IconButton button);


};



#endif //ICONBUTTONGROUP_H
