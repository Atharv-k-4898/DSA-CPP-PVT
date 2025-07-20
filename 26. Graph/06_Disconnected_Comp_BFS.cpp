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
    void BFShelper(int st, vector<bool> &visited)
    { // O(V+E)
        queue<int> q;
        // vector<bool> visited(v, false);
        q.push(st);
        visited[st] = true;
        while (q.size() > 0)
        {
            int u = q.front();
            q.pop();
            cout << u << " ";

            list<int> neighbours = l[u];
            for (int v : neighbours)
            {
                if (!visited[v])
                {
                    visited[v] = true;
                    q.push(v);
                }
            }
        }
    }
    void BFS()
    {
        vector<bool> visited(v, false);
        for (int i = 0; i < v; i++)
        {
            if (!visited[i])
            {
                BFShelper(i, visited);
                cout << endl;
            }
        }
    }
};

int main()
{
    Graph graph(10); // give 10
    // one
    graph.addEdge(1, 6);
    graph.addEdge(6, 4);
    graph.addEdge(4, 9);
    graph.addEdge(4, 3);
    graph.addEdge(3, 8);
    graph.addEdge(3, 7);
    // other
    graph.addEdge(0, 2);
    graph.addEdge(2, 5);
    // graph.printGraph();
    graph.BFS();
    return 0;
}
