#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main()
{

    int i = 0, j = 0, n = 5;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (i == n ||i == j)
            {
                cout << "* ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}