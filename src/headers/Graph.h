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
    void addAncestor(Graph );
    void addASuccesor();

};


#endif //GRAPHSIMULATION_GRAPH_H
