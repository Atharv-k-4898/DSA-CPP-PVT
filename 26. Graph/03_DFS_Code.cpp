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
    void DFShelper(int u, vector<bool> &visited)
    { // O()
        visited[u] = true;
        cout << u << " ";
        list<int> neighbours = l[u];
        for (int v : neighbours)
        {
            if (!visited[v])
            {
                DFShelper(v, visited);
            }
        }
    }
    void DFS()
    {
        vector<bool> visited(7, false);
        DFShelper(0, visited);
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
    graph.DFS();
    return 0;
}
