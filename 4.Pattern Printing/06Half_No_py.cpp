#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int main()
{
    int i, j, n, m;
    cout << "Enter rows." << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            cout << " " << j + 1;
        }
        cout << endl;
    }

    return 0;
}