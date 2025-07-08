#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        int rsum = 0;
        for (int j = 0; j < m; j++)
        {
            rsum+=arr[i][j];
        }
        cout << "Row-Sum is : " << rsum << endl;
    }
    return 0;
}