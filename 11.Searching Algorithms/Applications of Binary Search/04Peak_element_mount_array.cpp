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

// Question :Peak element of mount of array
// Link :leetcode
// Approach : 0 10 5 2  find peak i.e 10
//         10
//          /\
//         /  \ 5
//      0 /    \ 2

// Left          Right
//  // Way 1 is max element but complezxity is O(n)

//  // Way 2 Binary search
//   1. Break in 2 parts 0 to 10 and 5 to 2
//      mountain is created
//      always arr[i]>arr[i+1] both times true..
//      2 conditions to check left line or right
//      arr[mid]>arr[mid+1]   then
//          1 mid be peak
//          2 mid is in line b
//     arr[mid]<arr[mid+1]
//         then it is fix that left line is not having peak element
// Time Complexity :O(logn)
// Space Complexity :O(1)

// Dry Run ::
// 0|1|3|10|5|2
//    s    e    mid  arr[mid]
//    0    5     2     3
//    3    5     4     5
//    3    4     3     10
//    3    3    out loop 
//       3 o/p'
int peakIndexInMountainArray(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}
int main()
{
    vector<int> v{0, 1, 3 ,10, 1005,23,467,345, 2};
    cout << "Index is: "<<peakIndexInMountainArray(v) << endl;
    return 0;
}