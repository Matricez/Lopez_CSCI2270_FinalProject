/*
*CSCI2270SU17 CS2:Data Structures
*Author: Lorenzo Lopez
*Date: July 28, 2017
*C++ Final Project
*/
#include <string>
#include <iostream>
#include "AsteroidMining.hpp"
//test
 #include <climits>
 #include <vector>
#include <cstdlib>


template<class T>
PlanetGraph<T>::PlanetGraph()
{
}

template<class T>
PlanetGraph<T>::~PlanetGraph()
{
}


template<class T>
void PlanetGraph<T>::addEdge(T v1, T v2, int weight){

    for(int i = 0; i < vertices.size(); i++){
        if(vertices[i].name == v1){
            for(int j = 0; j < vertices.size(); j++){
                if(vertices[j].name == v2 && i != j){
                    adjVertex<T> av;
                    av.v = &vertices[j];
                    av.weight = weight;
                    vertices[i].adj.push_back(av);
                }
            }
        }
    }
}

template<class T>
void PlanetGraph<T>::addVertex(T n){
    bool found = false;
    for(int i = 0; i < vertices.size(); i++){
        if(vertices[i].name == n){
            found = true;
            cout<<vertices[i].name<<" found."<<endl;
        }
    }
    if(found == false){
        vertex<T> v;
        v.name = n;
        vertices.push_back(v);

    }
}

template<class T>
void PlanetGraph<T>::displayEdges(){
    //loop through all vertices and adjacent vertices
    for(int i = 0; i < vertices.size(); i++){
        cout<<vertices[i].name<<"-->";
        for(int j = 0; j < vertices[i].adj.size(); j++){
            //i = j;
            cout<<vertices[i].adj[j].v->name<<"***";
        }
        cout<<endl;
    }

}

/////////////////////////////////////

/*PlanetResourcesLL::PlanetResourcesLL()

{

}

PlanetResourcesLL::~PlanetResourcesLL()
{

}*/
//template<class T>
/*void PlanetGraph<T>::Dijkstra(string starting, string destination){

    vertex<T> * start = nullptr;
    vertex<T> * ending = nullptr;

    for(int i =0; i< vertices.size(); i++)
    {
        vertices[i].visited = false;
        vertices[i].distance = INT_MAX;
        vertices[i].previous = nullptr;
        if(vertices[i].name == starting)
        {
            start = &vertices[i];
        }
        if(vertices[i].name == destination)
        {
            ending = &vertices[i];
        }

    }
    if( start != nullptr && ending != nullptr)
    {
         start -> visited = true;
         start -> distance = 0;
         vector <T *> solved;
         vector <T *> path;
         //solved.push_back(start);
         adjVertex<T> *v;
         vertex<T> * u;
         vertex<T> * minVertex;
         vertex<T> * prev;
         while(ending -> visited == false)
        {
             int minDistance = INT_MAX;
             for (int i = 0; i< solved.size(); i++)
            {
                u=solved[i];
                for(int j = 0; j < u->adj.size(); j++  )
                {
                     v = &solved[i] ->adj[j];
                     if(v->v->visited == false)
                     {
                          int dist = u ->distance + v->weight;
                          if(dist < minDistance)
                          {
                               minDistance = dist;
                               minVertex = v -> v;
                               prev = u;

                          }

                     }
                }
            }
            solved.push_back(minVertex);
            minVertex -> distance = minDistance;
            minVertex ->previous = prev;
            minVertex -> visited = true;
        }
        vertex<T> *vert = ending;
       while (vert != nullptr) {
          path.push_back(vert);
          vert = vert->previous;
      }
          cout << "Shortest Path" << endl;
          for (int i = 0; i < path.size(); i++) {
            if (i == path.size()-1)
              cout<<path[path.size()-1-i]->name;
            else
              cout<<path[path.size()-1-i]->name<<" - ";

          }
      cout<<endl;
      cout<<"Minimum Distance: "<<solved[solved.size()-1]->distance<<endl;
  }else if (ending!=nullptr){
    cout<<"start not found"<<endl;
    exit(1);
  }else{
    cout<<"ending not found"<<endl;
    exit(1);
  }
}
*/

template<class T>
void PlanetGraph<T>::DisplayGameMenu(){
    int choice;
    PlanetGraph<string> CreatePlanet;
  do
   {
       cout<<"======Main Menu======" << endl;
       cout << "1. Pick a planet to learn about" << endl;
       cout << "2. Shortest path between any two planets using simulated graph" << endl;
       cout << "3. Print the graph of our solar system" << endl;
       //cout << "4. Delete a planet :(" << endl;
      // cout << "5. Create Planet :)" << endl;
       cout << "4. Quit " << endl;

       cin>>choice;
       switch(choice) //based on command number call diffent functions
       {

           case 1:
            cout << "What planet in our solar system would you like to learn about?" << endl;
               //find a title
            /*
                    here I should basically just print out information on each planet in our solar system taking in user input
            */

               break;
           case 2:{
               cin.ignore();
               string planet1;
               string planet2;
               cout << "Name of first planet: " << endl;
               cin >> planet1;
               cout << "Name of second planet: " << endl;
               cin >> planet2;
                cout << "The shortest path is ///Dijkstra's algorithm goes here /// " << "Million miles" << endl;
               //Dijkstra(planet1, planet2);

               //cin >> choice2;
               /* use dijkstra's algorithm to find the shortest path between any two planets

               */}
               break;
           case 3:
                cin.ignore();
               cout << "Test" << endl;
                displayEdges();
               //print graph
               break;
           case 4:
                cout << "Goodbye!" << endl;
               //delete node from graph???
               break;
          /* case 5:

               //add node to graph
               break;
           case 6:
               cout << "Goodbye!" << endl;
               //Delete Graph
               break;
        */
           default:
               ;

       }

   }while(choice!=6);




}
