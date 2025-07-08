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
/// Fully based on inclusion and exclusion.

void solve(vector<int>& arr, int i, int sum, int &maxi)
{
    // base case
    if (i >= arr.size())
    {
        maxi = max(sum, maxi);
        return;
    }
    // include
    solve(arr, i + 2, sum + arr[i], maxi);
    // exclude
    solve(arr, i + 1, sum, maxi);
}

int main()
{
    vector<int> arr{2, 1, 4, 9};
    int sum = 0;
    int maxi = INT_MIN;
    int i = 0;
    solve(arr, i, sum, maxi);
    cout << maxi << endl;
    return 0;
}