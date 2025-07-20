
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
    void printAllPathsHelper(int src, int dst, vector<bool> visited, string &path)
    {
        // base
        if (src == dst)
        {
            cout << path << endl;
            return;
        }
        visited[src] = true;
        // path.push_back(src); not correct
        path += to_string(src);
        list<int> neighbour = l[src];
        for (int v : neighbour)
        {
            if (!visited[v])
                printAllPathsHelper(v, dst, visited, path);
        }
        path = path.substr(0, path.size() - 1);
        visited[src] = false; // backtrack
    }
    void printAllPaths(int src, int dst)
    {
        vector<bool> vis(v, false);
        string path = "";
        printAllPathsHelper(src, dst, vis, path);
    }
};

int main()
{
    Graph graph(6, false);
    graph.addEdge(0, 3);
    graph.addEdge(2, 3);
    graph.addEdge(3, 1);
    graph.addEdge(4, 0);
    graph.addEdge(4, 1);
    graph.addEdge(5, 0);
    graph.addEdge(5, 2);
    // graph.printGraph();
    graph.printAllPaths(5, 1);
    return 0;
}
