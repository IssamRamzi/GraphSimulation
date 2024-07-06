#ifndef GRAPHSIMULATION_GRAPH_H
#define GRAPHSIMULATION_GRAPH_H


#include "Node.h"

class Graph {
private:
    Node head;


public:
    Graph(int value); // Constructor
    ~Graph(); // Destructor

    void draw();
};


#endif //GRAPHSIMULATION_GRAPH_H
