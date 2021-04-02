#pragma once 

#include "Edge.h"
#include <unordered_map>
#include <vector>


/**
 * 
 * 
**/
class Graph {
public:
    Graph();
    Graph(const Graph&);

    ~Graph();

    Vertex* getVerts();
    Edge* getNeighbors(Vertex);

    void addVertex(Vertex, vector<Edge>);
    void addNeighbor(Vertex, Vertex, int); 

    bool isEmpty(); 

    void printGraph();
private:
    size_t vertices;
    size_t maxEdges;

    unordered_map<Vertex, vector<Edge>> graph;
};

