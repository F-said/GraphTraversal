//
// Created by Farukh Saidmuratov on 4/28/18.
//

#include "Graph.h"

Graph::Graph(size_t nodeAmount, size_t maxLinks, size_t maxDistance) {
    maximumDist = maxDistance;
    vertices = nodeAmount;

    if(maxLinks < vertices)
        maxEdges = maxLinks;
    else
        maxEdges = vertices;

    nodes = new Vertex[vertices];
    links = new Edge[maxEdges * vertices];
    generateGraph();
}
Graph::~Graph() {
    delete[] nodes;
    delete[] links;
}

void Graph::generateGraph() {
    char label = 65;
    for(size_t i = 0; i < vertices; ++i) {
        nodes[i].setLabel(label);
        ++label;
    }

    size_t newSize = 0;
    srand(time(NULL));

    for(size_t i = 0; i < vertices; ++i) {
        size_t randEdge = (rand() % (maxEdges)) + 1;
        for (size_t j = i; j < i + randEdge; ++j) {
            links[j].setStart(nodes[i]);

            size_t rand_offset = (rand() % maxEdges);
            while(randEdge > 0) {
                if(rand_offset == i)
                    rand_offset = (rand_offset + 1) % maxEdges;
                
                links[j].setEnd(nodes[rand_offset]);
                --randEdge;
                ++rand_offset;
            }

            size_t randDist = (rand() % maximumDist) + 1;
            links[j].setDist(randDist);

            ++newSize;
        }
    }
    maxEdges = newSize;

    Edge* temp = new Edge[maxEdges];
    std::copy(links, links + maxEdges, temp);
    delete[] links;

    links = temp;
}
void Graph::printGraph() {
    for(size_t i = 0; i < maxEdges; ++i) {
        std::cout << links[i].getStart().getLabel() << "-->" << links[i].getEnd().getLabel() << endl;
        std:: cout << "Distance between vertices: " << links[i].getDist() << endl;
    }
}
void DijkstraShortestPath(Vertex start, Vertex end) {
}