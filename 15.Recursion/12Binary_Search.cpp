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

// Time Complexity :from n n/2 n/4 to 1        O(logn)
// Space Complexity :                          O(logn)
//
// Dry run
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(int arr[], int low, int high, int target)
{
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2; // to avoid overflow

    if (arr[mid] == target)
        return mid;             // target found
    else if (arr[mid] > target) // search in left half
        return binarySearch(arr, low, mid - 1, target);
    else // search in right half
        return binarySearch(arr, mid + 1, high, target);
}

int main()
{
    int arr[] = {2, 4, 6, 10, 15, 20, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter target: ";
    cin >> target;

    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}
