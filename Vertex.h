//
// Created by Farukh Saidmuratov on 4/28/18.
//

#ifndef PATHFINDING_VERTEX_H
#define PATHFINDING_VERTEX_H

#include <string>
using namespace std;

class Vertex {
public:
    Vertex();
    Vertex(char);
    ~Vertex();

    char getLabel() { return label; }
    void setLabel(char);
private:
    char label;
};

#endif //PATHFINDING_VERTEX_H
