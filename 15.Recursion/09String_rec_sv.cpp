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

bool findWord(string str, int n, int i, char key)
{
    if (str[i] == '\0')
        return false;
    if (str[i] == key)
        return true;
    return findWord(str, n, i + 1, key);
}
int main()
{
    string str = "LoveBabbar";
    int n = 10;
    int i = 0;
    char key = 'b';
    if (findWord(str, n, i, key))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}