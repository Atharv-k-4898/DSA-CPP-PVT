#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class row
{
public:
    int cnt; // number of soldiers (1s)
    int pos; // row index

    row(int cnt, int pos)
    {
        this->cnt = cnt;
        this->pos = pos;
    }

    bool operator<(const row &obj) const
    {
        if (this->cnt == obj.cnt)
        {
            return this->pos > obj.pos; // min heap by pos if cnt same
        }
        return this->cnt > obj.cnt; // else min heap by cnt
    }
};

void weakestSoldier(vector<vector<int>> matrix, int k)
{
    priority_queue<row> pq;

    for (int i = 0; i < matrix.size(); i++)
    {
        int cnt = 0;
        for (int j = 0; j < matrix[i].size() && matrix[i][j] == 1; j++)
        {
            cnt++;
        }
        pq.push(row(cnt, i));
    }

    cout << k << " Weakest Rows:\n";
    while (k-- && !pq.empty())
    {
        cout << "Row : " << pq.top().pos << endl;
        pq.pop();
    }
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 0, 0, 0},
        {1, 1, 1, 1},
        {1, 0, 0, 0},
        {1, 0, 0, 0}};
    weakestSoldier(matrix, 2);
    return 0;
}
