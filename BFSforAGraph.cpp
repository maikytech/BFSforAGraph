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
    //push_back inserts the element at the end of the list.
    visited[s] = true;
    queue.push_back(s);

    //We get all adjacent vertices of a vertex
    list<int>::iterator i;

    while(!queue.empty())
    {
        //Dequeue a vertex from queue and print it.
        //front() return a first element reference.
        //pop_front removes the first item from the list.
        s = queue.front();
        cout << s << " ";
        queue.pop_front();

        //i is first of the list, till i is not the last...
        //begin() return a random access iterator that points to the begining of the list.
        //end() return a random access iterator that points to the end of the list.
        for(i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if(!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }

        }
    }
}