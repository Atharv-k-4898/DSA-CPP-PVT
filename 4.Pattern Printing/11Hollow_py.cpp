#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int main()
{
    int i, j, n = 4;
    cout << "Enter row" << endl;
    // cin >> n;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j <= n + i-1; j++)
        {
            if ((i + j == n-1) || (j == n + i-1))
            {
                cout << "* ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        cout<< " *   ";
    }
    
}