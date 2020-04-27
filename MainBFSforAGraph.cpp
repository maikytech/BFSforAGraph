//
//  MainBFSforAGraph.cpp
//
//  Created by Maiqui Cedeño on 12/4/18.
//  Copyright © 2018 Maiqui Cedeño. All rights reserved.
//
// Program to print BFS traversal from a given source vertex.
//

#include <iostream>
#include "BFSforAGraph.h"

using namespace std;

int main()
{
    //Create a Graph with 4 vertices

    Graph g(4);

    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(2,0);
    g.addEdge(2,3);
    g.addEdge(3,3);

    cout << "Following is Breadth First Traversal"
         << "(starting from vertex 2) \n";

    g.BFS(2);

    return 0;       
}