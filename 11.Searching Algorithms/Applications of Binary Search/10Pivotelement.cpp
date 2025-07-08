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

//Question : Find Pivot element (10 to 2 so 10 is pivot)
//Link :Leetcode
//Approach : 
// Sorted array is the array with increasing order of elements
// And rotated array is last element comes first and 1 1 elements jumps next
// eg 2 4 6 8 10 ten rotated is 10 2 4 6 8

//Time Complexity :O(logn)
//Space Complexity :O(1)
//Dry Run ::
// 9 10 2 4 6 8
//   s  e  mid      mid+1    mid-1 
//   0  5  2(2)       4        10   condition true for arr[mid-1]>arr[mid]
//       so 10 is returned

int findPivot(vector<int>arr){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        if (s==e)
        {
            return s;
        }
        if (mid<=e && arr[mid]>arr[mid+1])
        {
            return mid;
        }
        if (mid-1>=s && arr[mid-1]>arr[mid])
        {
            return mid-1;
        }
        if(arr[s]>arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
    
}
int main()
{
    vector<int>arr{9,10,2,4,6,8};
    int ans= findPivot(arr);
    if (ans==-1)
    {
        cout<<"kuch gadbad he";
    }
    else{
        cout<<"Found :"<<arr[ans]<<endl;
    }
    
    return 0;
}