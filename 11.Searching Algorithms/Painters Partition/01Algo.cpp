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

//Question : Painters Partition Dilpreet Singh (Same as Book Allocation Question)
//Link : https://www.geeksforgeeks.org/problems/the-painters-partition-problem1535/1
//Approach :  10 20 30 40 
// 10 | 20 30 40    max(90)
// 10 20 | 30 40    max(70)
// 10 20 30 | 40    max(60)   so min(90,70,60)  is 60
          
//Time Complexity :
//Space Complexity :
//Dry Run ::
class Solution {
  public:
 bool isPossibleSoln(vector<int> arr, int k, int sol) {
    int pagesum = 0;
    int counter = 1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > sol) // means mid i.e 101 > 12
            return false;

        if (pagesum + arr[i] > sol) { 
            counter++;
            pagesum = arr[i];

            if (counter > k) return false;  // no of soln > students so return
        } else {
            pagesum += arr[i];
        }
    }
    return true;
}
 int findPages(vector<int> &arr, int k) {
        // code here
        // allocation must be contigeous 
        if(arr.size()<k){// Students cant be > than array size()
            return -1;
        }
        int st=0;                                // initial sum 0
        int end = accumulate(arr.begin(), arr.end(), 0);// accumulate fun it does sum from beg to end of arr
        int ans=-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(isPossibleSoln(arr,k,mid)){
                ans = mid;// got soln and searching in lesser space
                end=mid-1;
            }
            else{
                st=mid+1;   // no ans so st from mid+1
            }
        }
        return ans;
    }
};

int main()
{
    Solution soln;
    vector<int> arr{12,34,67,90};
    int k;
    cin>>k;
    cout<<soln.findPages(arr,k);
    return 0;
}