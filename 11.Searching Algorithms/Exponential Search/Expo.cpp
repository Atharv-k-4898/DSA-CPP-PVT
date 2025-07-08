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

// Exponential search or doubling search orgalloping search or strazile search
// only for sorted array
// application is for long arrays

// Approach if a[0]==x return 0;
//   int i=1;
//    while(i<n && a[i]<=x){
//     i*=2;
//    }
// and then apply binary search for i/2 to i

// Dry run    3 4 5 6 11 13 14 15 56 70   x =13
//     i     a[i]<x
//     1      true
//     2      true
//     4      true
//     8      false
//   now binary search for i/2=4 to i=8


// Time complixity is O(2^logm)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(vector<int> arr, int st, int end, int key) {
    while (st <= end) {
        int mid = st + (end - st) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] > key) {
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }
    return -1;
}

int main() {
    vector<int> arr{1, 4, 5, 6, 11, 14, 13, 15, 56, 17, 8, 6};
   // sort(arr.begin(), arr.end()); 
    int n = arr.size();
    int k = 13;

    if (arr[0] == k) {
        cout << "0" << endl;
        return 0;
    }

    int i = 1;
    while (i < n && arr[i] <= k) {
        i *= 2;
    }

    int ans = binarySearch(arr, i / 2, min(i, n - 1), k);
    if (ans != -1) {
        cout << ans << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
