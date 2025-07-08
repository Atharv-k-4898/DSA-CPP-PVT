#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;
void transposeOfmatrix(int arr[][100], int n, int m)
{
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         //swap(arr[i][j],arr[j][i]);   only this will swap nos 2 times and remain same
    //     }
    // }
    

    //////// """"""""" For this Use Vector of vector """""""""""""""///////

    cout<<"Transpose is :"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
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
    transposeOfmatrix(arr, n, m);
    return 0;
}