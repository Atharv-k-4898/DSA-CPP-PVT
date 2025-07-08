#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;

int main()
{
    // 1

    // int arr[3][3];// no of rows then columns
    //  Memory stors this 2_D array in single row itself
    //  To find pos in single array of [a][b] pairs is  """(a+b)*a+b"""

    // 2
    int brr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
    cout << brr[2][2] << endl; /// See index are from n-1 and m-1 not n and m

    // 3

    int n, m;
    cin >> n >> m;
    int crr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> crr[i][j];
        }
    }
    cout<<"Row-Wise"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<< crr[i][j]<< "  ";
        }
        cout<<endl;
    }
    cout<<"Cloumn-Wise"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<< crr[j][i]<< "  ";
        }
        cout<<endl;
    }
    return 0;
}