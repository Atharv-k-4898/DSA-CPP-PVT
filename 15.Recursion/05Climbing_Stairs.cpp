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

//Question : Climbing Stairs (fint total ways to jump 1 step at once and 2 at once)
//Link : https://leetcode.com/problems/climbing-stairs/
//Approach : use recursion easy like fibonacci series base case is imp

//Time Complexity :
//Space Complexity :
//Dry Run ::
// Climb stairs (n = 4)
// You can take either 1 or 2 steps

/*
Recursion Tree for climbStairs(4):

climbStairs(4)
├── climbStairs(3)
│   ├── climbStairs(2)
│   │   ├── climbStairs(1) = 1
│   │   └── climbStairs(0) = 1
│   └── climbStairs(1) = 1
└── climbStairs(2)
    ├── climbStairs(1) = 1
    └── climbStairs(0) = 1

Ways: 5
             __*   for 5  we have ans from our code  8
          __|
       __|
    __|
*__| 

*/
class Solution {
public:
    int climbStairs(int n) {
        if(n==0 || n==1) return 1;
        return climbStairs(n-1) + climbStairs(n-2);     /// This gives TLE
    }
};

int main()
{
    Solution soln;
    int n;
    cin>>n;
    cout<<soln.climbStairs(n)<<endl;
    return 0;
}