/*
*CSCI2270SU17 CS2:Data Structures
*Author: Lorenzo Lopez
*Date: July 28, 2017
*C++ Final Project
*/#include <iostream>
#include "AsteroidMining.cpp"
#include <sstream>
#include <fstream>


int main()
{

    PlanetGraph<int> g;
    //PlanetResourcesLL P;
    //Creating Planets
    //g.addVertex(Earth);
    PlanetGraph<string> CreatePlanet;
    CreatePlanet.addVertex("The Sun");
    CreatePlanet.addVertex("Mercury");
    CreatePlanet.addVertex("Venus");
    CreatePlanet.addVertex("Earth");
    CreatePlanet.addVertex("Mars");
    CreatePlanet.addVertex("Jupiter");
    CreatePlanet.addVertex("Saturn");
    CreatePlanet.addVertex("Neptune");
    CreatePlanet.addVertex("Uranus");
    CreatePlanet.addVertex("Pluto");

    CreatePlanet.addEdge("The Sun", "Mercury", 35);
    CreatePlanet.addEdge("The Sun", "Venus", 67);
    CreatePlanet.addEdge("The Sun", "Earth", 93);
    CreatePlanet.addEdge("The Sun", "Saturn", 889);

    CreatePlanet.addEdge("Mars", "Jupiter", 342);
    CreatePlanet.addEdge("Mars", "Mercury", 105);
    CreatePlanet.addEdge("Mars", "Neptune", 2650);

    CreatePlanet.addEdge("Mercury", "Venus", 30);
    CreatePlanet.addEdge("Mercury", "Earth", 35);


    CreatePlanet.addEdge("Venus" , "Earth", 26);

    CreatePlanet.addEdge("Earth", "Jupiter", 390);
    CreatePlanet.addEdge("Earth", "Pluto", 4670);

    CreatePlanet.addEdge("Saturn", "Neptune", 1907);
    CreatePlanet.addEdge("Saturn", "Mercury", 850);

    CreatePlanet.addEdge("Neptune", "Pluto", 2670);

    CreatePlanet.addEdge("Uranus", "Saturn", 892);
    CreatePlanet.addEdge("Uranus", "Pluto", 1890);


    CreatePlanet.DisplayGameMenu();
    CreatePlanet.displayEdges();



    return 0;



}
