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
    bool isBipartite()
    {
        queue<int> q;
        // vector<bool> visited(v, false);
        vector<int> color(v, -1);
        q.push(0);
        color[0] = 0;
        while (q.size() > 0)
        {
            int curr = q.front();
            q.pop();
            list<int> neighbour = l[curr];
            for (int v : neighbour)
            {
                if (!color[v] == -1)
                {
                    color[v] = !color[curr];
                    q.push(v);
                }
                else
                {
                    if (color[v] == color[curr])
                        return false;
                }
            }
        }
        return true;
    }
};

int main()
{
    Graph graph(4);
    // undirected bipartite graph
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 3);
    // graph.addEdge(0, 3);
    cout << graph.isBipartite();
    return 0;
}
