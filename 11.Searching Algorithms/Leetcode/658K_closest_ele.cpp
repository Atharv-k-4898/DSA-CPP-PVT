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

//Question :Find Kth closest element
//Link :658 Leetcode 
//Approach :
// 1) Basic 2 pointer approach take l and high 
//                    and come as close till h-l==k
//                    and then print that subarray using stl

// 2)give l=h-1 and h=closest element and go left right till h-l==k
//        form window whose size is k 
//Time Complexity :
//Space Complexity :
//Dry Run ::

class Solution {
public: 
    // vector<int> twoPointermethod(vector<int>& arr, int k, int x) {
    //     int l=0,h=arr.size()-1;
    //     while(h-l>=k){
    //         if(x-arr[l]>arr[h]-x){
    //             l++;
    //         }
    //         else{
    //             h--;
    //         }
    //     }
    //      //// vector<int>ans;
    //     ////     for(int i=l;i<=h;i++){
    //     ////         ans.push_back(arr[i]);
    //     ////     }
    //     //// return ans;// time comp is O(n-k) space is O(k) to return ans


    //     // or using stl
    //     return vector<int>(arr.begin()+l,arr.begin()+h+1); // it removes last 
    // }
  int lowerbound(vector<int>& arr, int x){
    int st = 0, end = arr.size() - 1;
    int ans = arr.size(); // initialize to size (if no element >= x)

    while(st <= end){
        int mid = st + (end - st) / 2;
        if(arr[mid] >= x){
            ans = mid;
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }
    return ans;
}

      vector<int> binarySearchmethod (vector<int>& arr, int k, int x) {
        int h=lowerbound(arr,x);
        int l=h-1;
        while(k--){
            if(l<0){
                h++;
            }
            else if(h>=arr.size()){
                l--;
            }
            else if((x-arr[l])>arr[h]-x){
                h++;
            }
            else{
                l--;
            }
        }
         return vector<int>(arr.begin()+l+1,arr.begin()+h);
      }

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
       // return twoPointermethod(arr,k,x);
        return binarySearchmethod(arr,k,x);
    }
};
int main()
{

    Solution sol;
    vector<int> nums1 = {1, 3, 1, 5, 4};
    int k1 = 2;
    int x=4;
    cout << "Test case 1: " << sol.findClosestElements(nums1, k1,x) << endl;
    return 0;
}