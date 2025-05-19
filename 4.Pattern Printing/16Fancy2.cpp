#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main()
{

    int i = 0, n = 5;
    for (i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < i+1; j++)
        {
            cout<<j+1;
        }
        for (j=i; j>=1; j--)
        {
        cout<<j;
        }
        cout<<endl;
        
    }

    return 0;
}