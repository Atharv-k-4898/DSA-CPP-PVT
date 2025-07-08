#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;
void linearSearch(int arr[][100], int n, int m, int key)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == key)
            {
                cout << "Found at " << i << " " << j << endl;
                return;
            }
            else{
                cout <<" Not Found";
            }
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    int key;
    cin >> key;
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
    linearSearch(arr, n, m,key);
    return 0;
}