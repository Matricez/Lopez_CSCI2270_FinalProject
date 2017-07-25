#ifndef ASTEROIDMINING_HPP
#define ASTEROIDMINING_HPP
//#include "MovieTree.cpp"
#include <string>
#include <iostream>
#include <vector>
using namespace std;


template<class T>
struct vertex;

template<class T>
struct adjVertex{
    vertex<T> *v;
    int weight;
};

template<class T>
struct vertex{
    T name;
    vector<adjVertex<T>> adj;
};


template<class T>
class PlanetGraph
{
    public:
        PlanetGraph();
        ~PlanetGraph();
        void addEdge(T v1, T v2, int weight);
        void addVertex(T name);
        void displayEdges();


    //protected:
    private:
        vector<vertex<T> > vertices;

};

struct Resources{
    std::string cityName;
    std::string message;
    Resources *next;
    Resources *previous;
    //struct constructor (default and parametrized)
    /*City(std::string initName, City *initNext=nullptr,
      City *initPrevious=nullptr, std::string initMessage=""):
      cityName(initName), message(initMessage), next(initNext),
      previous(initPrevious){} */
};

class PlanetResourcesLL
{
    public:
        PlanetResourcesLL();
        ~PlanetResourcesLL();
        void addResource(std::string newCityName, std::string previousCityName);
        void buildResources();
        //void transmitMsg(char *); //this is like a string
        void printResources();
        void deleteResource(std::string removeCity);
        void deleteAllResources();
        void DisplayGameMenu();
        void displayResourcesMenu();
    protected:
    private:
        Resources *head;
        Resources *tail;
};





#endif
