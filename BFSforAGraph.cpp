#include "BFSforAGraph.h"

Graph::Graph(int V)
{
    this -> V = V;              //Init V
    adj = new list<int>[V];     //adj list.
}

void Graph::addEdge(int v, int w)
{
    //insert a new element at the end of the container
    adj[v].push_back(w);
}

void Graph::BFS(int s)
{
    //Mark all the vertices as not visited.
    bool *visited = new bool[V];
    for(int i = 0; i < V; i++)
        visited[i] = false;

    //Create a queue for BFS.
    list<int> queue;

    //Mark the current node as visited and enqueue it.
    visited[s] = true;
    queue.push_back(s);
}