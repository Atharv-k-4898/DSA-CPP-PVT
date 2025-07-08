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

// Question :Find the odd occuring element an array
            //  all element occur even times 1 comes odd time
            //  all repeating occ of element appears in pairs
            // same pairs are far for en 4 4 and 4 4 are diff
            // only 2 times rep not 3 or 4
           //  find that odd element
// Link :#
// Approach :// ans is always at even
//  very simple but hard thinking 
//         check mid is even if it is
//            then check mid==mid +1 true
//                  then ans is right st=mid+2
//            and if not then maybe it is ans so search for left but catch mid may be so e=ans
//       check mid is odd if it is
//           then check mid==mid-1 true
//                 then ans is right st=mid+1
//           and if not then only one possible search right e=mid-1
// Time Complexity :O(logn)
// Space Complexity :O(1)
// Dry Run ::      1,1,2,2,3,3,4,4,5,4,4,2,2
//    s    e    mid     mid+1    mid-1   mid==mid+1  mid==mid-1
//    0    12   6(4)     7(4)     5(3)    true         x 
//    8    12   10(4)    11(2)    9(4)    false        x
//    8    10   9(4)     10(4)    8(5)     x          false
//    8    8          out of loop
int solve(vector<int> arr)
{
    int s = 0;
    int e = arr.size()-1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (s == e)
        {
            return s;
        }
        if (mid % 2 == 0)
        {
            if (arr[mid] == arr[mid + 1])
            {
                s = mid + 2;
            }
            else
            {
                e = mid;
            }
        }
        else
        {
            if (arr[mid] == arr[mid - 1])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    int n;
    vector<int>arr{1,1,2,2,3,3,4,4,3,600,600,4,4};
    int ans = solve(arr);
    cout << "Index :"<<ans << endl;
    cout << "No is : "<<arr[ans]<<endl;
    return 0;
}