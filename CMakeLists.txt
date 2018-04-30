cmake_minimum_required(VERSION 3.9)
project(PathFinding)

set(CMAKE_CXX_STANDARD 11)

add_executable(PathFinding main.cpp Graph.cpp Graph.h Edge.cpp Edge.h Vertex.cpp Vertex.h)