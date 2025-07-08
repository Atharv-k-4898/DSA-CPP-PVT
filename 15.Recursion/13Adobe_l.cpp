#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <string>
#include <map>
#include <set>
#include <limits.h>/////////////// NO NO No
using namespace std;

//Question : Given array of elements find target sum duplicate no 
//Link :
//Approach :Given array of 1 2  find 3 with minimum no of elements

//Time Complexity :
//Space Complexity :
//Dry Run ::
// target 3  arr={1,2}  so mini must be 2 ways i.e 1,2 and 1 1 1
// solve(3)
// ├── take 1 → solve(2)
// │   ├── take 1 → solve(1)
// │   │   ├── take 1 → solve(0) ✅ returns 0
// │   │   │                   → total = 0+1 = 1
// │   │   └── take 2 → solve(-1) ❌ returns INT_MAX
// │   │                   → min = 1
// │   └── solve(1) → returns 1 ⇒ total = 1+1 = 2
// ├── take 2 → solve(1)
// │   ├── take 1 → solve(0) ✅ returns 0
// │   │   └── total = 0+1 = 1
// │   └── take 2 → solve(-1) ❌ returns INT_MAX
// │       → min = 1 ⇒ total = 1+1 = 2
// └── Final answer: min(2,2) = 2 ✅


int solve(vector<int>&arr,int target){
    if(target==0) return 0;        // 0 case
    if(target<0) return INT_MAX;  // -1 case 
    // Let's solve 1 case
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
    vector<int> arr{1,2};
    int target=5;
    int ans = solve(arr,target);
    cout<<"Ans is "<<ans<<endl;
    return 0;
}