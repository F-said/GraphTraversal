#pragma once 

#include "Vertex.h"

/**
 * 
 * 
**/
class Edge {
    public:
        Edge(Vertex, Vertex, unsigned int = 0);
        ~Edge();

        Vertex getSource() { return start; }
        Vertex getSink() { return destination; }
        int getCost() { return cost; }

        void setSource(Vertex);
        void setSink(Vertex);
        void setCost(int);
    private:
        Vertex start;
        Vertex destination;
        int cost;
};