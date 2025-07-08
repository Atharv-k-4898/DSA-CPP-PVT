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

//  now for floating values - outer loop for digits after decimal
//                            inner loop for .1 to .10
// Time Complexity :O(logn).
// Space Complexity :O(1).
// Dry Run ::
//     25
//     mid st   end
//     12  0   25  12*12>25 so left search
//     5   0   11  5*5>=25  ans//
// //
//      loop for 3 decimal
//      final ans  i  j              j*j<=n                       step
//      3          0  3        3*3<10 true final ans =j           0.1
//      3          0  3.1             true final ans =j           0.1
//      3.1        0  3.2             false                       0.01
//      3.1        1  3.10            true final ans =j           0.01
//     3.10        1  3.11            true final ans =j           0.01
//     3.11        1  3.12            true final ans =j           0.01
//     3.12        1  3.13            true final ans =j           0.01
//     3.13        1  3.14            true final ans =j           0.01
//     3.14        1  3.15            true final ans =j           0.01
//     3.15        1  3.16            true final ans =j           0.01
//     3.16        1  3.17            false                       0.01

//     out of outer loop final ans 3.16
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
    return ans; // only int will get..
}
int main()
{
    int n;
    cin >> n;
    int ans = findSqrt(n);
    cout << ans << endl;
    int presion;
    cin >> presion;
    double fans = ans;
    double step = 0.1;
    for (double i = 0; i < presion; i++)
    {
        //                                       0.1+
        for (double j = 0; j * j <= n; j += step) // 3.1 3.2 3.3
        {
            fans = j;
        }
        step /= 10;
    }
    cout << "Final ans  :" << fans << endl;
    return 0;
}