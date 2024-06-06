#include <iostream>
#include <list>
#include <vector>
#include <queue>
using namespace std;

class Graph
{
    int V; // Number of vertices
    list<int> *adj; // Pointer to an array containing adjacency lists

public:
    Graph(int V); // Constructor
    void addEdge(int v, int w); // Function to add an edge to the graph
    void BFS(int s); // Function to perform BFS starting from vertex s
};

// Constructor
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

// Function to add an edge to the graph
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}

// Function to perform BFS starting from vertex s
void Graph::BFS(int s)
{
    // Mark all the vertices as not visited
    vector<bool> visited(V, false);

    // Create a queue for BFS
    queue<int> queue;

    // Mark the current node as visited and enqueue it
    visited[s] = true;
    queue.push(s);

    while (!queue.empty())
    {
        // Dequeue a vertex from the queue and print it
        s = queue.front();
        cout << s << " ";
        queue.pop();

        // Get all adjacent vertices of the dequeued vertex s
        // If an adjacent vertex has not been visited, then mark it
        // visited and enqueue it
        for (auto adjacent : adj[s])
        {
            if (!visited[adjacent])
            {
                visited[adjacent] = true;
                queue.push(adjacent);
            }
        }
    }
}

int main()
{
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "Breadth First Traversal starting from vertex 2:\n";
    g.BFS(2);

    return 0;
}
