//
// Created by Farukh Saidmuratov on 4/28/18.
//

#ifndef PATHFINDING_GRAPH_H
#define PATHFINDING_GRAPH_H

#include <cstddef>
#include <cstdlib>
#include <algorithm>
#include <iostream>
#include <time.h>
#include "Edge.h"

class Graph {
public:
    Graph(size_t = 0, size_t = 0, size_t = 5);
    ~Graph();

    void generateGraph();
    void printGraph();
    void DijkstraShortestPath(Vertex, Vertex);

    Vertex* getNodes();
private:
    size_t maximumDist;
    size_t vertices;
    size_t maxEdges;
    Vertex *nodes;
    Edge *links;
};


#endif //PATHFINDING_GRAPH_H
