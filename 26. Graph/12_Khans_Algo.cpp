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

    void addEdge(int u, int v)
    {
        l[u].push_back(v);
        if (isUndir)
            l[v].push_back(u);
    }

    void calcIndegree(vector<int> &indeg)
    {
        for (int u = 0; u < v; u++)
        {
            for (int v : l[u])
            {
                indeg[v]++;
            }
        }
    }

    void topoSort2() // Kahn's Algorithm
    {
        vector<int> inDegree(v, 0);
        calcIndegree(inDegree);
        queue<int> q;

        for (int i = 0; i < v; i++)
        {
            if (inDegree[i] == 0)
                q.push(i);
        }

        while (!q.empty())
        {
            int curr = q.front();
            q.pop();
            cout << curr << " ";
            for (int v : l[curr])
            {
                inDegree[v]--;
                if (inDegree[v] == 0)
                {
                    q.push(v);
                }
            }
        }
        cout << endl;
    }
};

int main()
{
    // DAG
    Graph graph(6, false); // Directed graph
    graph.addEdge(2, 3);
    graph.addEdge(3, 1);
    graph.addEdge(4, 0);
    graph.addEdge(4, 1);
    graph.addEdge(5, 0);
    graph.addEdge(5, 2);

    graph.topoSort2();
    return 0;
}
