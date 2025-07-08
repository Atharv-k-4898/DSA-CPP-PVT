
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <limits.h>
using namespace std;
void minMax(int arr[][100], int n, int m)
{
    int max = INT_MIN, min = INT_MAX;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
            else if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    cout << "Min is :" << min << "\nMax is :" << max << endl;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
    minMax(arr, n, m);
    return 0;
}