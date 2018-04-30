//
// Created by Farukh Saidmuratov on 4/28/18.
//

#include "Edge.h"

Edge::Edge() {
    this->start = NULL;
    this->destination = NULL;
    this->distance = 0;
}

Edge::Edge(Vertex start, Vertex destination, unsigned int distance) {
    this->start = start;
    this->destination = destination;
    this->distance = distance;
}

Edge::~Edge() {
}

void Edge::setStart(Vertex start) {
    if(start.getLabel() != this->destination.getLabel())
        this->start = start;
    else
        return;
}
void Edge::setEnd(Vertex destination) {
    if(destination.getLabel() != this->start.getLabel())
        this->destination = destination;
    else
        return;
}

void Edge::setDist(size_t distance) {
    this->distance = distance;
}