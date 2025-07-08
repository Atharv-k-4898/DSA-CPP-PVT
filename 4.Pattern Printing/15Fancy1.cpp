#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 4*4*4*4
// 3*3*3
// 2*2
// 1
int main()
{
    int i = 0, j = 0, n;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i;
            if (j != i)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << n - i;
            if (j != n - i)
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}