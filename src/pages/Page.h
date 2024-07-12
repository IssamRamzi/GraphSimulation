//
// Created by محمد عبد العزيز on 7/7/2024.
//

#ifndef PAGE_H
#define PAGE_H
#include <iostream>
#include <memory>
#include <vector>

#include "../Components/Component.h"
#include "../headers/Utils.h"
using std::string;
class Page {
public:
    Utils utils;
    std::vector<std::unique_ptr<Component>> components;
    static  string next ;
    virtual void draw()=0;
    virtual  void update()=0;
    virtual  void handel_events()=0;
};

#endif //PAGE_H
