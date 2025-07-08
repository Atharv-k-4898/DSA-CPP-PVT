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

// Question :First occuranse by binary search
// Link :
// Approach :

// Time Complexity :O(logn)
// Space Complexity :O(1)
// Dry Run ::
int firstOcc(vector<int> v, int key)
{
    int st = 0;
    int end = v.size() - 1;
    int mid = (st + end) / 2;
    int ans = -1;
    while (st <= end)
    {
        if (v[mid] == key)
        {
            ans = mid;
            st = mid + 1;
        }
        else if (key > v[mid])
        {
            st = mid + 1;
        }
        else if (key < v[mid])
        {
            end = mid - 1;
        }
        mid = st + (end - st) / 2;/////// this is very imp
    }
    return ans;
}

int main()
{
    vector<int> v{1, 2, 4, 4, 4, 4, 4, 4, 5, 6, 7};
    int key = 4;
    int ans = firstOcc(v, key);
    cout << "Ans is: " << ans << endl;
    return 0;
}