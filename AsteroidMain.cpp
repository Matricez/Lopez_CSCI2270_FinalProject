#include <iostream>
#include "AsteroidMining.cpp"
#include <sstream>
#include <fstream>


int main()
{

    PlanetGraph<int> g;
    g.addVertex(1);
    g.addVertex(2);
    g.addVertex(3);
    g.addVertex(4);
    g.addEdge(1,2,30);
    g.addEdge(3,4,300);
    g.addEdge(2,4,10);
    g.displayEdges();


    return 0;



}
