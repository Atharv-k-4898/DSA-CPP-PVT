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

// Question :Find the pos of key in 2 d array using binary search
// Link :
// Approach :We know arr(i,j)=c+i*j
//  for i and j positions i=mid/cols  and j=mid%cols

// Time Complexity :O(logn)
// Space Complexity :O(1)
// Dry Run :: array is 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20
//   key     rows   cols       mid   s    e    rowIdx  colIdx  pos condition
//    11       5     4          9    0    19     2       1       10<11
//    11       5     4         14   10    19     3       2       14>11
//    11       5     4         11   10    13     2       3       11==11

bool binarySearch(int arr[][4], int rows, int cols, int key)
{
    int s = 0;
    int e = rows * cols - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        int rowIdx = mid / cols;
        int colIdx = mid % cols;
        int pos = arr[rowIdx][colIdx];
        if (pos == key)
        {
            cout<<"Found at : "<<rowIdx<<","<<colIdx<<endl;
            return true;
        }
        else if (pos < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return false;
}

int main()
{
    int key;
    cin >> key;
    int arr[5][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16},
                     {17, 18, 19, 20}};
    int rows = 5 ;
    int cols = 4;
    bool ans = binarySearch(arr, rows, cols, key);
    if (ans)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}