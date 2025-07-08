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

// Question :Merge Sort Algorithms
// // What is actually merging
//    leftwala part          |            rightwala part 
//    sort them using recursion 
//    then merge them accordinglt to the ascending order

44
// Dry Run ::
//  Merge two sorted halves of the array
//  mergeSort(0, 5)
//  ├─ mergeSort(0, 2)
//  │  ├─ mergeSort(0, 1)
//  │  │  ├─ mergeSort(0,0) --> return
//  │  │  └─ mergeSort(1,1) --> return
//  │  │  └─ merge(0,1) -> [4,5]
//  │  └─ mergeSort(2,2) --> return
//  │  └─ merge(0,2) -> [4,5,13]
//  ├─ mergeSort(3,5)
//  │  ├─ mergeSort(3,4)
//  │  │  ├─ mergeSort(3,3) --> return
//  │  │  └─ mergeSort(4,4) --> return
//  │  │  └─ merge(3,4) -> [2,12]
//  │  └─ mergeSort(5,5) --> return
//  │  └─ merge(3,5) -> [2,12,19]
//  └─ merge(0,5) -> [2,4,5,12,13,19]

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1; // Length of left half
    int len2 = e - mid;     // Length of right half

    // Dynamically allocate temporary arrays for left and right halves
    int *left = new int[len1];  // left wala array
    int *right = new int[len2]; // right wala array

    // Copy data to temp arrays
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        left[i] = arr[k++];
    }
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        right[i] = arr[k++];
    }

    // Merge the temp arrays back into the main array
    int leftIdx = 0;
    int rightIdx = 0;
    int mainArrayIdx = s;

    while (leftIdx < len1 && rightIdx < len2)
    {
        if (left[leftIdx] < right[rightIdx])
        {
            arr[mainArrayIdx++] = left[leftIdx++];
        }
        else
        {
            arr[mainArrayIdx++] = right[rightIdx++];
        }

    }

    // Copy remaining elements (if any)
    while (leftIdx < len1)
    {
        arr[mainArrayIdx++] = left[leftIdx++];
    }

    while (rightIdx < len2)
    {
        arr[mainArrayIdx++] = right[rightIdx++];
    }

    // Free memory
    delete[] left;
    delete[] right;
}

// Recursive merge sort function
void mergeSort(int arr[], int s, int e)
{
    if (s >= e)
        return;
    int mid = s + (e - s) / 2;
    // Recursively sort the left half
    mergeSort(arr, s, mid);
    // Recursively sort the right half
    mergeSort(arr, mid + 1, e);
    // Merge the sorted halves
    merge(arr, s, e);
}

int main()
{
    int arr[] = {4, 5, 2, 2, 12, 19};
    int n = 6;

    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    mergeSort(arr, 0, n - 1);

    cout << "Sorted Array:   ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

/// Dry run
            // 5     2      3       |       1     9     4
            // 5     2|     3       |       1     9|    4
            //    /\        |       |         / \       |
            // 5 | 2    |   3       |       1  |  9|    4
// now merge   2 | 2        3       |       1  |  9     4
// now again marge all 
           // 1    2        3       |       4     5     9 



           ///vapas atte vakt merge karta he if condition lagta he

           // Time complexity is O(nlogn)    /// as binary search used there 
           // space complixity 
    // in merge fun we are creating the copy        