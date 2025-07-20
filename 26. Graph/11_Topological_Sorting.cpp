
#include <iostream>
#include <list>
#include <queue>
#include <stack>
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
    void topoHelper(int src, vector<bool> &vis, stack<int> &s)
    {
        vis[src] = true;
        list<int> neighbour = l[src];
        for (int v : neighbour)
        {
            if (!vis[v])
                topoHelper(v, vis, s);
        }
        s.push(src);
    }
    void totoSort()
    {
        vector<bool> visited(v, false);
        stack<int> s;
        for (int i = 0; i < v; i++)
        {
            if (!visited[i])
                topoHelper(i, visited, s);
        }
        // print stack topo
        while (s.size() > 0)
        {
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;
    }
};

int main()
{
    // DAG
    Graph graph(6, false);
    graph.addEdge(2, 3);
    graph.addEdge(3, 1);
    graph.addEdge(4, 0);
    graph.addEdge(4, 1);
    graph.addEdge(5, 0);
    graph.addEdge(5, 2);
    // graph.printGraph();
    graph.totoSort();
    return 0;
}