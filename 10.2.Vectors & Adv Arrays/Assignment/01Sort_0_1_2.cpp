// // 2 methods to solve this problem
// 1 Sorting using sort function
// 2 Counting Method count then push

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
        
//         int zeros=0,ones=0,twos=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==0){
//                 zeros++;
//             }
//             else if(nums[i]==1){
//                 ones++;
//             }
//             else{
//                 twos++;
//             }
//         }
//         int i=0;
//         while(zeros--){
//             nums[i]=0;
//             i++;
//         }
//         while(ones--){
//             nums[i]=1;
//             i++;
//         }while(twos--){
//             nums[i]=2;
//             i++;
//         }
//    }
// };



// But this is not the best approach we want to shuffle the array in place.


// 3 Approaches is to use 3 pointers

// 1. Low pointer
// 2. Mid pointer
// 3. High pointer

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;
// 1,1,0,2,0,1,2

// Dry run                  low   mid   high
//          1,1,0,2,0,1,2    0     0     6   initial
//          1,1,0,2,0,1,2    0     1     6   arr[mid]==1
//          1,1,0,2,0,1,2    0     2     6   arr[mid]==1
//          0,1,1,2,0,1,2    1     3     6   arr[mid]==0
//          0,1,1,2,0,1,2    1     3     5   arr[mid]==2
//          0,1,1,1,0,2,2    1     3     4   arr[mid]==2
//          0,1,1,1,0,2,2    1     4     4   arr[mid]==1
//          0,0,1,1,1,2,2    2     5     4   arr[mid]==0
//        //////////// terminate

int main()
{
    int n,mid,low,high;
    cin>>n;
    vector<int>arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }
    low=0;
    mid=0;
    high=arr.size()-1;
    while(mid<=high){
        if (arr[mid]==0)
        {
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
        
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}