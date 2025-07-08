#include <iostream>
using namespace std;

int main()
{
    int i = 0, j = 0, n = 3;

    // Top half
    for (i = 0; i < n; i++)
    {
        // Left stars
        for (j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        // Middle spaces
        for (j = 0; j < 2 * i + 1; j++)
        {
            cout << "  ";
        }
        // Right stars
        for (j = 0; j < n - i; j++)
        {
            cout << "* " ;
        }
        cout << endl;
    }

    // Bottom half
    for (i = n - 2; i >= 0; i--)
    {
        // Left stars
        for (j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        // Middle pyramids.
        for (j = 0; j < 2 * i + 1; j++)
        {
            cout << "  ";
        }
        // Right stars
        for (j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
