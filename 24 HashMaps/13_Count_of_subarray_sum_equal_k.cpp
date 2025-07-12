#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <limits.h>
#include <string>
using namespace std;
// ✦ Question         :
// ✦ Question Link    :
// ✦ Approach         :
// ✦ Time Complexity  :
// ✦ Space Complexity :
// ✦ Dry Run          : sum[i-1] = sum[j]-k;
int countWith0Sum(vector<int> arr, int k)
{
    unordered_map<int, int> m;
    int ans = 0;
    int Sum = 0;
    for (int j = 0; j < arr.size(); j++)
    {
        Sum += arr[j];
        if (Sum == k)
            ans++; // Prefix sum itself forms a valid subarray
        if (m.count(Sum - k))
        {
            ans += m[Sum - k];
        }
        m[Sum]++;
    }
    return ans;
}
int main()
{

    vector<int> arr = {10, 2, -2, -20, 10};
    int k = -10;
    cout << "Largest subarray with sum " << countWith0Sum(arr, k) << endl;
    return 0;
}