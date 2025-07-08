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



// void printArr(int arr[],int n,int i){
//     if (i>=n)
//     {
//         return;
//     }
//     cout<<arr[i]<<" ";
//     printArr(arr,n,i+1);
    
// }              or
// | Function Call        | arr[0]  | n | Output so far   |
// | -------------------- | ------- | - | --------------- |
// | `printArr(arr+0, 5)` | 10      | 5 | 10              |
// | `printArr(arr+1, 4)` | 20      | 4 | 10 20           |
// | `printArr(arr+2, 3)` | 30      | 3 | 10 20 30        |
// | `printArr(arr+3, 2)` | 40      | 2 | 10 20 30 40     |
// | `printArr(arr+4, 1)` | 50      | 1 | 10 20 30 40 50  |
// | `printArr(arr+5, 0)` | —       | 0 | Stops recursion |

// printArr(arr, 5)
//    |
//    -→ printArr(arr+1, 4)
//        |
//        -→ printArr(arr+2, 3)
//            |
//            -→ printArr(arr+3, 2)
//                |
//                -→ printArr(arr+4, 1)
//                    |
//                    -→ printArr(arr+5, 0)

void printArr(int arr[],int n){
    if (n==0)
    {
        return;
    }
    cout<<arr[0]<<" ";
    printArr(arr+1,n-1);
    
}
int main()
{
    int arr[]={10,20,30,40,50};
    int n = 5;
    printArr(arr,n);
    return 0;
}

// Time complixity 
// Formula method is call for p(kn-1)   so  O(n)

// recursive tree method 
// by tree O()= nk= n  O(n)

// Space COmplixity 
// Os is making stack  O(n)