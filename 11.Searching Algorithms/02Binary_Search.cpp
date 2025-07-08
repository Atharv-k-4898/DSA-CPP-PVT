#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <string>
#include <map>
#include <set>
#include <limits.h>
using namespace std; ///""""" Only for Sorted array"""""""///

// Question :Binary Search
// Link :
// Approach ://mid =(st+end)/2
//            1. if arr[mid] == key return mid
//            2. if arr[mid] < key search in right half
//            3. if arr[mid] > key search in left half
//            4. if key not found return -1

// Time Complexity :O(log n)  each iteration /2 so array halves n/2^k=1
// Space Complexity :
// Dry Run ::
//  eg = 1|2|3|4|5|6|7|8|9|10
//  key = 2
//  mid =(st+end)/2 = (0+9)/2 = 4
//  key <arr[mid] => search in left half
//  mid--;
//  mid = (0+3)/2=1
//  key >arr[mid] => search in right half
//  mid++;
//  mid = (2+3)/2=2
//  key == arr[mid] => return mid
int binarySearch(vector<int> arr, int n, int key)
{
    int st = 0;
    int i = 0;
    int end = n - 1;
    while (st <= end)
    {
        int mid = s + (e - s) / 2; // for(s+e)/2 overflow condition
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    if (binarySearch == -1)
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Found at position :" << binarySearch(arr, n, key) << endl;
    }
    return 0;
}