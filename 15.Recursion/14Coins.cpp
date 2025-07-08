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

// Question : Infinite coins are there of 1 2 5 make 11 rs
// Link :
// Approach :
// Min no of coins to reach 11 rs. 1)1 coin of 1rs + min coin for 10 rs
                                //    2)1 coin of 2 rs. + min coin for 9 rs 
                                //    3)1 coin of 5 rs + min coin of 6 rs
// Time Complexity :
// Space Complexity :
// // Dry Run ::
// make 5 from 2 and 3
        //          tar =5
        //        2/       \3
        //     tar=3        tar=2
        //     2/  \3       2/  \3
        //  tar=1  tar=0  tar=0 tar=-1
        // 2/  \3   2/\3
        // tar=-1  all base cases

int solve(vector<int>arr,int target){
    if(target==0) return 0;
    if(target<0) return INT_MAX;
    int mini = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        int ans = solve(arr,target-arr[i]);
        if(ans!=INT_MAX)
         mini = min(mini,ans+1); // there is no > than int_max
    }
   return mini;
}

int main()
{
    vector<int> arr{3,2};
    int target=5;
    int ans = solve(arr,target);
    cout<<"Ans is "<<ans<<endl;
    return 0;
}




////// Very imp type for ma questions