#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;

int main()
{
    int i = 0, j = 0;
    int n;
    cin >> n;
    for (i = 0; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == 1 || j == n || j == i || i == n)
            {
                cout << j << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}