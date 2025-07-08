#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;
// Sort 0 and 1 in the array

// Eg. 1,0,1,1,0. st=0 end=4 i=0
//    0,0,1,1,1  st=0 end=3 i=0
//    0,0,1,1,1  st=1 end=3 i=1
//    0,0,1,1,1  st=2 end=3 i=2
//    0,0,1,1,1  st=3 end=3 i=3

// int main()
// {
//     int n;
//     cin >> n;
//     int i=0;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int start = 0;
//     int end = arr.size() - 1;
//     while (start<=end)
//     {
//         if (arr[start] == 0)
//         {
//             swap(arr[start], arr[i]);
//             i++;
//             start++;
//         }
//         else
//         {
//             swap(arr[i], arr[end]);
//             end--;
//         }
//     }
//     for(auto value: arr){
//         cout<<value<<" ";
//     }
//     return 0;
// }

//  Or
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int zcnt = 0, ocnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
            zcnt++;
        else
            ocnt++;
    }
    while (zcnt--)
    {
        cout << 0 << " ";
    }
    while (ocnt--)      
    {
        cout << 1 << " ";
    }
}