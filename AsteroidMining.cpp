#include <string>
#include <iostream>
#include "AsteroidMining.hpp"

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

void PlanetResourcesLL::DisplayGameMenu(){
    int choice;
  do
   {
       cout<<"======Main Menu======" << endl;
       cout << "1. Begin tour" << endl;
       cout << "2. Find shortest path between any two planets" << endl;
       cout << "3. Print the graph of our solar system" << endl;
       cout << "4. Delete a planet :(" << endl;
       cout << "5. Create Planet :)" << endl;
       cout << "6. Quit " << endl;

       cin>>choice;
       switch(choice) //based on command number call diffent functions
       {

           case 1:

               //find a title
            /*
                    here I should basically just print out information on each planet in our solar system taking in user input
            */

               break;
           case 2:

               //rent a title
               /* use dijkstra's algorithm to find the shortest path between any two planets

               */
               break;
           case 3:

               //print graph
               break;
           case 4:

               //delete node from graph???
               break;
           case 5:

               //add node to graph
               break;
           case 6:
               cout << "Goodbye!" << endl;
               //Delete Graph
               break;
           default:
               ;

       }

   }while(choice!=6);




}
