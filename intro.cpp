#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class graph
{
public:
    unordered_map<int, list<int>> adj;

//  made whether graph is directed or undirected.   

    void addEdge(int u, int v, bool direction)
    { // here we have taken bool direction because we dont know the graph is directed or other .
        // direction = 0 -> undirected graph
        // direction = 1 -> directed graph

        // create an edge form u to v
        adj[u].push_back(v);
        if (direction == 0) // if graph is directed we can say that u->v and v->u.
        {
            adj[v].push_back(u);
        }
    }

//  made graph

    void printAdjList()
    {
        for (auto i : adj)
        {
            cout << i.first << "->"; // for creating graph...thoda tricky hye but practice se aa jayega
            for (auto j : i.second)
            {
                cout << j << ",";
            }
            cout << endl;
        }
    }
};

// printed graph

int main()
{

    int n;
    cout << "Enter the number of nodes" << endl;
    cin >> n;

    int m;
    cout << "Enter the number of edges" << endl;
    cin >> m;

    graph g;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        // creating undirected graph
        g.addEdge(u, v, 0); // here we have passed 0 as its a undirected graph as mentioned above at line no. 11 & 12.
    }

    // print graph
    g.printAdjList();
    return 0;
}