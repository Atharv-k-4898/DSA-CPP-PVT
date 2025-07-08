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

//Question :
//Link :
//Approach :

//Time Complexity :
//Space Complexity :
//Dry Run ::
void solve(int arr[]) {// Size 8 becoz pointer is passed not array so array is pass by reference
    cout << "Size of arr in solve fun :" << sizeof(arr) << endl;  // Will print size of pointer
    int i=0;
    arr[i+1]=5600;// this changes arr[01] in main/original arr
}

int main() {
    int arr[10] = {2, 3, 4, 5};
    cout << "Size of arr in main function :" << sizeof(arr) << endl;  // Will print 40 (10 * 4)
    solve(arr);
    for (int i = 0; i < 4; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
/// Why this happens 8 and 40 
// | Location     | What `arr` actually is  | `sizeof(arr)` | Explanation                |
// | ------------ | ----------------------- | ------------- | -------------------------- |
// | In `main()`  | Real array of 10 ints   | `10 * 4 = 40` | Full array size            |
// | In `solve()` | Pointer to int (`int*`) | `8`           | Size of pointer, not array |
