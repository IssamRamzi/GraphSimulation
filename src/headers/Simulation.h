//
// Created by محمد عبد العزيز on 7/14/2024.
//

#ifndef SIMULATION_H
#define SIMULATION_H
#include "Graph.h"
#include "raylib.h"

using  std::string;
class Simulation {
private:
    Color ExploringNode;
    Color ExploredNode;
    Color NotExploredNode;
    Graph graph;
    string algorithm; // temporary data format until finding a solution hoe to represent the algorithm
    // * 1 - using predefined algorithmes (easy)
    // * 2 - making an algorithems interpretor for custom algorithme (mabe for version:2.0)
public:
    void startSimulation();
    void pauseSimulation();




};


#endif //SIMULATION_H
