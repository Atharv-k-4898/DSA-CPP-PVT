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
    void printGraph()
    {
        for (int u = 0; u < v; u++)
        {
            cout << u << " : ";
            for (int neighbor : l[u])
            {
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }
    bool isCycleUndirHelper(int src, int par, vector<bool> &visited)
    {
        visited[src] = true;
        list<int> neighbours = l[src];
        for (int v : neighbours)
        {
            if (!visited[v])
            {
                if (isCycleUndirHelper(v, src, visited))
                    return true;
            }
            else
            {
                if (v != par)
                    return true;
            }
        }
        return false;
    }
    bool isCycleUndir()
    {
        vector<bool> visited(v, false);
        return isCycleUndirHelper(0, -1, visited);
    }
};

int main()
{
    int v = 5;
    Graph graph(v);
    // undirected graph
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(0, 3);

    graph.addEdge(1, 2);

    graph.addEdge(3, 4);
    cout << graph.isCycleUndir();
    return 0;
}
