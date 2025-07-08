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

// Question :Find Sq. root of a number(find only int part sqrt(10)=3)
// Link :
// Approach :10 search from 0 to 10 this space is work space
//             mid is 5 now is mid*mid > target then go to left otherwise right and soo on

// Time Complexity :O(logn).
// Space Complexity :O(1).
// Dry Run ::
//     25
//     mid st   end
//     12  0   25  12*12>25 so left search
//     5   0   11  5*5>=25  ans//
int findSqrt(int n)
{
    int s = 0;
    int e = n;
    int target = n;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (mid * mid == target)
        {
            return mid;
        }
        else if (mid * mid > target)
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;//only int will get..
}
int main()
{
    int n;
    cin >> n;
    int ans = findSqrt(n);
    cout << ans << endl;
    return 0;
}