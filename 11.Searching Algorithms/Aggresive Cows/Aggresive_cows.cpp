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
//Link :https://www.geeksforgeeks.org/problems/aggressive-cows/1
//Approach :
//1 2 4 8 9
// 1    2   4   8   9 
// c1  c2  c3           1
// c1  c2       c3      1
// c1      c2   c3      1
// c1      c2      c3   3
//     c1  c2   c3      2
//     c1  c2      c3   2
//     c1      c2  c3   1
//         c1  c2  c3   1

//                     max = 3

//Soln   max pos - min pos = 8
        //   mid = 4
        //   check for 4 if not(possibleSoln) then end=mid-1
        //   so for 0 to 3 if (posibleSoln) then st=mid+1
        //   till we get correct ans
//Time Complexity :
//Space Complexity :
//Dry Run ::

// User function Template for C++
#define ll long long

class Solution {
public:
    bool isPossibleSoln(vector<int>& stalls, int k, int mid) {
        int cnt = 1;
        int pos = stalls[0];
        for (int i = 1; i < stalls.size(); i++) {
            if (stalls[i] - pos >= mid) {
                cnt++;
                pos = stalls[i];
            }
            if (cnt == k) return true;
        }
        return false;
    }

    int aggressiveCows(vector<int>& stalls, int k) {
        sort(stalls.begin(), stalls.end());

        ll st = 0;
        ll end = stalls[stalls.size() - 1] - stalls[0];
        int ans = -1;

        while (st <= end) {
            ll mid = st + (end - st) / 2;
            if (isPossibleSoln(stalls, k, mid)) {
                ans = mid;
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return ans;
    }
};

int main()
{
    Solution soln;
    vector<int> arr{1,2,4,8,9};
    int k;
    cin>>k;
    cout<<soln.aggressiveCows(arr,k);
    return 0;
}