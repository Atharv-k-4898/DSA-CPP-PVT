#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int main()
{
    int i, j, n, m;
    cout << "Enter row" << endl;
    cin >> n;
    cout << "Enter column" << endl;
    cin >> m;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (i == 1 || i == n || j == 1 || j == m)
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }

    return 0;
}