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
// ✦ Dry Run          :
//  Remember the property of the array that
//  sum[i,j] = sum[j] - sum[i-1]
//  for e.g arr={1,2,3,-6,4,5}
//  So sum[0,3] = sum[3] - sum[-1]
//  sum[0,3] = -6 - 0 = -6
//  sum[0,2] = sum[2] - sum[-1]
//  sum[0,2] = 3 - 0 = 3

// Here in this q we want sum[i,j]=0
// so sum[j] = sum[i-1]
// If we encounter the same sum[j] again, it means that the subarray from i to j has sum 0
// So we use map to store the first occurrence of each sum
// If sum[j] is found again, we can calculate the length of the subarray and update the maximum length if needed.
int largestSubarrayWithSum0(vector<int> &arr)
{
    unordered_map<int, int> sumMap; // sum and index
    int maxLength = 0;
    int currentSum = 0;
    for (int j = 0; j < arr.size(); j++)
    {
        currentSum += arr[j];
        if (sumMap.count(currentSum))
        {
            int length = j - sumMap[currentSum];
            maxLength = max(maxLength, length);
        }
        else
        {
            sumMap[currentSum] = j; // store the first occurrence of the sum
        }
    }
    return maxLength;
}

int main()
{

    vector<int> arr = {15, -2, 2, -8, 1, 7, 10};
    cout << "Largest subarray with sum 0 has length: " << largestSubarrayWithSum0(arr) << endl;
    return 0;
}