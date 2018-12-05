//
//  BFSforAGraph.h
//
//  Created by Maiqui Cedeño on 12/4/18.
//  Copyright © 2018 Maiqui Cedeño. All rights reserved.
//
// Program to print BFS traversal from a given source vertex.
//

#include <iostream>
#include <list>     //Template List definition.

using namespace std;

//This class represents a directed graph using adjacency list representation.
class Graph
{
    int V;          // # of Vertices.

    //Pointer to an array containing adjancency lists.
    list<int> *adj;

public:
    Graph(int V);   //Constructor.

    //Funtion to add an edge to graph.
    void addEdge(int v, int w);

    //Print BFS traversal.
    void BFS(int s);
};