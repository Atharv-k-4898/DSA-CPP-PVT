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

// Question :Max no of seg from 3 lengths x,y,z of length n all x y z is not needed correct
// Link :
// Approach :same for 2 questions

// Time Complexity :
// Space Complexity :
// Dry Run ::
// Recursion Tree for solve(7, 5, 2, 2)

// solve(7)
// ├── solve(2)       // 7 - 5
// │   ├── solve(-3)  // 2 - 5 → INT_MIN
// │   ├── solve(0)   // 2 - 2 → 0 → returns 0
// │   └── solve(0)   // 2 - 2 → 0 → returns 0
// │   => max = 1 + 1 = 2
// │
// ├── solve(5)       // 7 - 2
// │   ├── solve(0)   // 5 - 5 → 0 → returns 0
// │   ├── solve(3)   // 5 - 2
// │   │   ├── solve(-2)  // 3 - 5 → INT_MIN
// │   │   ├── solve(1)   // 3 - 2
// │   │   │   ├── solve(-4)  // 1 - 5 → INT_MIN
// │   │   │   ├── solve(-1)  // 1 - 2 → INT_MIN
// │   │   │   └── solve(-1)  // 1 - 2 → INT_MIN
// │   │   │   => max = INT_MIN
// │   │   └── solve(1)   // repeat → INT_MIN
// │   │   => max = INT_MIN
// │   └── solve(3) → same as above → INT_MIN
// │   => max = 1 + 1 = 2
// │
// └── solve(5)       // 7 - 2 again
//     ├── solve(0)   // returns 0
//     ├── solve(3)   // same as earlier → INT_MIN
//     └── solve(3)   // same as earlier → INT_MIN
//     => max = 1 + 1 = 2

// // Final Answer = max(2, 2, 2) = 2

int solve(int n, int x, int y, int z)
{
    if (n == 0)
        return 0; // if rodlenrth=0 we cant cut
    if (n < 0)
        return INT_MIN; // not possibler
    int ans1 = solve(n - x, x, y, z)+1;
    int ans2 = solve(n - y, x, y, z)+1;
    int ans3 = solve(n - z, x, y, z)+1;
    int ans = max(ans1, max(ans2, ans3));
    return ans;
}
int main()
{
    int n = 7;
    int x = 5;
    int y = 2;
    int z = 2;
    cout << solve(n, x, y, z);
    return 0;
}