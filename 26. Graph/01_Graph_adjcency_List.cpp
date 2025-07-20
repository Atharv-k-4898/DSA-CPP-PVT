#include <iostream>
#include <list>
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
};

int main()
{
    Graph graph(5);
    graph.addEdge(0, 1);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 3);
    graph.addEdge(2, 4);
    graph.printGraph();
    return 0;
}
