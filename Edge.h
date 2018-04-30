//
// Created by Farukh Saidmuratov on 4/28/18.
//

#ifndef PATHFINDING_EDGE_H
#define PATHFINDING_EDGE_H

#include "Vertex.h"

// Directional edge
class Edge {
public:
    Edge();
    Edge(Vertex, Vertex, unsigned int = 0);
    ~Edge();

    Vertex getStart() { return start; }
    Vertex getEnd() { return destination; }
    size_t getDist() { return distance; }

    void setStart(Vertex);
    void setEnd(Vertex);
    void setDist(size_t);
private:
    Vertex start;
    Vertex destination;
    size_t distance;
};


#endif //PATHFINDING_EDGE_H
