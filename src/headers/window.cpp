//
// Created by golde on 10/07/2024.
//

#include "window.h"
#include "raylib.h"

Window::Window() {
    height = 800;
    width = 800;
    title = "Raylib Window";
    InitWindow(width, height, title.c_str());
}

Window::Window(int size) {
    height = size;
    width = size;
    title = "Raylib Window";
    InitWindow(width, height, title.c_str());
}

Window::Window(int height, int width) {
    this->height = height;
    this->width = width;
    InitWindow(width, height, title.c_str());
}

Window::Window(int height, int width, std::string title) {
    this->height = height;
    this->width = width;
    this->title = title;
    InitWindow(width, height, title.c_str());
}
