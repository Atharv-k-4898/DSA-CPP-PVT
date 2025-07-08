#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int main()
{
    int i, j, n;
    cout << "Enter row" << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            cout << " " << j + 1;
        }
        cout << endl;
    }

    return 0;
}