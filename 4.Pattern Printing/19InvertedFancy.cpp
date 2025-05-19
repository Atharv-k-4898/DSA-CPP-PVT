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
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (j == 0 || j == n - i - 1 || i == 0)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}