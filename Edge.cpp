#include "Edge.h"


/**
 * 
 * 
**/
Edge::Edge(Vertex start, Vertex destination, unsigned int cost) : start(start), destination(destination), cost(cost) {}

Edge::~Edge() {}

/**
 * 
 * 
**/
void Edge::setSource(Vertex start) {
    this->start = start;
}


/**
 * 
 * 
**/
void Edge::setSink(Vertex destination) {
    this->destination = destination;
}


/**
 * 
 * 
**/
void Edge::setCost(int cost) {
    this->cost = cost;
}