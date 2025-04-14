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
        for (j = 0; i + j < n - 1; j++)
        {
            cout << " ";
        }
        for (j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
           cout<<" ";
        }
        for (j = 0; j < n-i; j++)
        {
           cout<<"* ";
        }
        cout << endl;
    }
    return 0;
}