#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;
// Sort 0 and 1 in the array

// 2 pointer approach (Dutch National Flag algorithm)
// Eg.    1,2,-3,4,-5,6  st=0 end=5 i=0
//    6,2,-3,4,-5,1  st=0 end=4 i=0
//    -5,2,-3,4,6,1  st=0 end=3 i=0
//    -5,2,-3,4,6,1  st=1 end=3 i=1
//    -5,4,-3,2,6,1  st=1 end=2 i=1
//    -5,-3,4,2,6,1  st=2 end=2 i=2
//           Terminated

// My approach count all -ve and all positive and then fill the array
 //  but this is not efficient
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int start = 0;
    int end = arr.size() - 1;
    int i = 0;

    while (start <= end)
    {
        if (arr[start] < 0)
        {
            swap(arr[start], arr[i]);
            i++;
            start++;
        }
        else
        {
            swap(arr[start], arr[end]);
            end--;
        }
    }

    for (auto value : arr)
    {
        cout << value << " ";
    }
    return 0;
}
