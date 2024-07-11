//
// Created by محمد عبد العزيز on 7/7/2024.
//

#ifndef PAGE_H
#define PAGE_H
#include <iostream>
using std::string;
class Page {
public:
    static  string next;
    virtual void draw()=0;
    virtual  void update()=0;
};

#endif //PAGE_H
