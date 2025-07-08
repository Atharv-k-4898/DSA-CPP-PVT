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

// Question :
// Link :
// Approach :

// Time Complexity :
// Space Complexity :
// Dry Run ::
    
// | Function Call              | `arr[i]` | `maxi` before | `maxi` after | Action                   |
// | -------------------------- | -------- | ------------- | ------------ | ------------------------ |
// | `findMax(arr, 7, 0, maxi)` | 10       | `-∞`          | 10           | 10 > -∞ → update maxi    |
// | `findMax(arr, 7, 1, maxi)` | 20       | 10            | 20           | 20 > 10 → update maxi    |
// | `findMax(arr, 7, 2, maxi)` | 30       | 20            | 30           | 30 > 20 → update maxi    |
// | `findMax(arr, 7, 3, maxi)` | 40       | 30            | 40           | 40 > 30 → update maxi    |
// | `findMax(arr, 7, 4, maxi)` | 50       | 40            | 50           | 50 > 40 → update maxi    |
// | `findMax(arr, 7, 5, maxi)` | 99       | 50            | 99           | 99 > 50 → update maxi    |
// | `findMax(arr, 7, 6, maxi)` | 39       | 99            | 99           | 39 < 99 → no change      |
// | `findMax(arr, 7, 7, maxi)` | -        | 99            | 99           | `i == n` → base case hit |


// findMax(arr, 7, 0, maxi=INT_MIN)
//   └──>>>>> findMax(arr, 7, 1, maxi=10)
//        └──>>>>> findMax(arr, 7, 2, maxi=20)
//             └──>>>>> findMax(arr, 7, 3, maxi=30)
//                  └──>>>>> findMax(arr, 7, 4, maxi=40)
//                       └──>>>>>findMax(arr, 7, 5, maxi=50)
//                            └──>>>>> findMax(arr, 7, 6, maxi=99)
//                                 └──>>>>> findMax(arr, 7, 7, maxi=99) ← base case


void findMax(int arr[], int n, int i, int &maxi) // very imp pass by reference
{
    if (i >= n)
    {
        return;
    }
    if (arr[i] > maxi)
    {
        maxi = arr[i];
    }
    findMax(arr, n, i + 1, maxi);
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 99, 39};
    int n = 7;
    int i = 0;
    int maxi = INT_MIN;
    findMax(arr, n, i, maxi);
    cout << maxi << endl;
    return 0;
}