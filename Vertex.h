#pragma once 

#include <string>
using namespace std;


/**
 * 
 * 
**/
class Vertex {
    public:
        Vertex(char);
        ~Vertex();

        char getLabel() { return label; }
    private:
        char label;
};
