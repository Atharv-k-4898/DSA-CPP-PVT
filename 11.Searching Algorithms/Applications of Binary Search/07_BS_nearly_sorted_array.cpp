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

// Question :  Binary Search in nearly/almost  sorted array
// Link :#
// Approach : 10 2 40 20 50 80 70     sorted is 2 10 20 40 50 70 80
//       nearly sorted means ith index element shiuld be in    "i-1 or i or i+1"
//
//        So here 3  in sorted array must be in -1  0  1 pos in original array it is at 1
//        similarly for all next elements..if all then it is nearly sorted array
//
//   app 1 for linear search O(n)
//   app 2 for binary search O(logn)
// Time Complexity :O(logn)
// Space Complexity :O(1)
// Dry Run ::
//     a=10 2 40 20 50 80 70     sorted is   b=2 10 20 40 50 70 80

//"""""""""""""Very easy only check mid-1 or mid or mid+1 in binary search code""""""""""""""""""""""
//  Imp as we have checked mid+1 and mid -1 do mid+2 and mid-2 for st and end
// ,,,,,,,,,,,,,,,,,,,,,,,,,,,Done ok,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,

int binarySearch(vector<int> arr, int n, int key)
{
    int s = 0;
    int i = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2; // for(s+e)/2 overflow condition
        if (arr[mid] == key)
        {
            return mid;
        }
        if (mid - 1 >= 0 && arr[mid - 1] == key) // it should not go beyond
        {
            return mid - 1;
        }
        if (mid + 1 <= arr.size() && arr[mid + 1] == key)
        {
            return mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 2; // imp
        }
        else
        {
            e = mid - 2; // imp
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int key;
    cin >> key;
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    int ans = binarySearch(arr, n, key);
    cout << "Found at index : " << ans << endl;
    return 0;
}