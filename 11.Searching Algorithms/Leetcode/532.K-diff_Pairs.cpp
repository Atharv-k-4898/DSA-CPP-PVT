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

//Question :K-diff Pairs in an Array
//Link :Leetcode 532
//Approach :
// 1) Brute force O(n^2) two loops and abs(arr[i]-arr[j])    wrong app

// 2) Two pointer approach
        // a)sort array
        // b)diff=arr[i]-arr[j] 
        // c)if k then store and i++ j++
        // d)else if diff>k then i++
        // e)else diff<k then j++

// 3) OP approach a[i]+k-a[i]==k


//Time Complexity :
//Space Complexity :
//Dry Run ::1 | 3 | 1 | 5 | 4   k is 2 
//    sort 1 1 3 4 5 
//         i j          diff!=k      j++
//         i   j        diff==k  i++ j++  store 1,3
//           i   j      diff>k   i++ 
//             i j      diff!=k      j++  
//             i  j     diff==k  i++ j++  j out of bound stop      

class Solution {
public:
    // int findPairs(vector<int>& nums, int k) {
    //     sort(nums.begin(),nums.end());
    //     set<pair<int,int>>ans;
    //     int i=0,j=i+1;
    //     while(j<nums.size()){
    //         int diff=nums[j]-nums[i];
    //         if(diff==k){
    //             ans.insert({nums[i],nums[j]});
    //             i++;
    //             j++;
    //         }
    //         else if(diff>k){
    //             i++;
    //         }
    //         else{
    //             j++;
    //         }
    //         if(i==j){
    //             j++;
    //         }
    //     }
    //     return ans.size();
    // }
    int binarySearch(vector<int>& nums,int st,int target){
        int end=nums.size()-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return -1;
    }
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        set<pair<int,int>>ans;
        for(int i=0;i<nums.size();i++){
            if(binarySearch(nums,i+1,nums[i]+k) != -1){
                ans.insert({nums[i],nums[i]+k});
            }
        }
        return ans.size();
    }
};
// error for 1 1 1 1 1  now take set it will remove multiple values
    int main() {
    Solution sol;
    vector<int> nums1 = {1, 3, 1, 5, 4};
    int k1 = 2;
    cout << "Test case 1: " << sol.findPairs(nums1, k1) << endl;
    return 0;
}