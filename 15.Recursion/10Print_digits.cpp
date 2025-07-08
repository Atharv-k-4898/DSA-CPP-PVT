#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <string>
#include <map>
#include <set>
#include <limits.h>
using namespace std;

// Question :
// Link :
// Approach :

// Time Complexity :
// Space Complexity :
// Dry Run ::

void printDigits(int n)
{
    if (n == 0)
    {
        return;
    }
    printDigits(n / 10);
    int dig = n % 10;
    cout << dig << "  ";
}
int main()
{
    int n = 6789;
    printDigits(n);
    return 0;
}