#include <iostream>

#include "raylib.h"
#include "headers/Node.h"
int main() {
    InitWindow(800,800,"Graph Visualizer");

    Node node1{15, Vector2{320,50}};
    Node node2{2, Vector2{60,50}};
    Node node3{8, Vector2{123,320}};
    Node node4{46, Vector2{426,650}};


    while (!WindowShouldClose()){
        BeginDrawing();
        Node::update();

        int key = GetCharPressed();
        if(key){
            std::cout << key << std::endl;
            Node node{key, {GetMousePosition().x, GetMousePosition().y}};
            node.draw();
            system("pause");
        }



        ClearBackground(RAYWHITE);
        node1.draw();
        node2.draw();
        node3.draw();
        node4.draw();

        EndDrawing();
    }
    return 0;
}
