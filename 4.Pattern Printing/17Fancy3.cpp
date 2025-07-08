#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main()
{

    int i = 0, j = 0, n = 5;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            char ch = j + 'A';
            cout << ch;
        }
        for (j = i; j >= 1; j--)
        {
            char ch = j + 'A' - 1;
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}