#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        if (i == 2 || i == 3)
        {
            continue; // for 2 and 3 below part loop is skipped
        }
        else if (i == 8)
        {
            break; // at 8 loop loop will terminate..
        }
        cout << i << endl;
    }
    return 0;
}