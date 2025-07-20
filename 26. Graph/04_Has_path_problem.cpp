#include <iostream>
#include <list>
#include <queue>
using namespace std;

class Graph
{
    int v;
    list<int> *l;

public:
    Graph(int v)
    {
        this->v = v;
        l = new list<int>[v];
    }
    void addEdge(int u, int v)
    {
        l[u].push_back(v);
        l[v].push_back(u);
    }
    bool hasPathHelper(int src, int dest, vector<bool> &vis)
    {
        if (src == dest)
            return true;
        vis[src] = true;
        list<int> neighbours = l[src];

        for (int v : neighbours)
        {
            if (!vis[v])
            {
                if (hasPathHelper(v, dest, vis))
                    return true;
            }
        }
        return false;
    }
    bool hasPath(int src, int dest)
    {
        vector<bool> visited(7, false);
        return hasPathHelper(src, dest, visited);
    }
};

int main()
{
    Graph graph(7);
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 4);
    graph.addEdge(3, 4);
    graph.addEdge(3, 5);
    graph.addEdge(4, 5);
    graph.addEdge(5, 6);
    // graph.printGraph();
    cout << graph.hasPath(1, 5) << endl;
    return 0;
}
