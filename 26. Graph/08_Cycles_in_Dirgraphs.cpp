#include <iostream>
#include <list>
#include <queue>
using namespace std;

class Graph
{
    int v;
    list<int> *l;
    bool isUndir;

public:
    Graph(int v, bool isUndir = true)
    {
        this->v = v;
        l = new list<int>[v];
        this->isUndir = isUndir;
    }
    void addEdge(int u, int v) // directed for only u-->v not u<-->v
    {
        l[u].push_back(v);
        if (isUndir) // if is undir then u--v else u-->v
            l[v].push_back(u);
    }
    bool isCycleDirectedHelper(int src, vector<bool> &visited, vector<bool> &recPath)
    {
        visited[src] = true;
        recPath[src] = true;
        list<int> neighbours = l[src];
        for (int v : neighbours)
        {
            if (!visited[v])
            {
                if (isCycleDirectedHelper(v, visited, recPath))
                    return true;
            }
            else
            {
                if (recPath[v])
                    return true;
            }
        }
        return false;
    }
    bool isCycleDirected()
    {
        vector<bool> visited(v, false);
        vector<bool> recPath(v, false);
        for (int i = 0; i < v; i++)
        {
            if (!visited[i])
            {
                if (isCycleDirectedHelper(i, visited, recPath))
                    return true;
            }
        }
        return false;
    }
};

int main()
{
    Graph graph(4, false);
    // undirected graph
    graph.addEdge(1, 0);
    graph.addEdge(0, 2);
    graph.addEdge(2, 3);

    graph.addEdge(3, 0);
    cout << graph.isCycleDirected();
    return 0;
}
