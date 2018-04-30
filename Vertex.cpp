//
// Created by Farukh Saidmuratov on 4/28/18.
//

#include "Vertex.h"

Vertex::Vertex() {
    this->label = NULL;
}

Vertex::Vertex(char label) {
    this->label = label;
}

Vertex::~Vertex() {
}

void Vertex::setLabel(char label) {
    this->label = label;
}