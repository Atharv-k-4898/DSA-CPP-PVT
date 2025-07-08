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

int main()
{
    vector<int> v{1, 2, 4, 4, 4,5, 6, 7};
    int key = 4;
    auto ans = upper_bound(v.begin(), v.end(), key);
    cout<<ans<<endl;
    return 0;
}