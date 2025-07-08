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

//Question :Print all subarays in the array
//Link :
//Approach :

//Time Complexity :O(n^2)
//Space Complexity :O(n)
//Dry Run ::
// 1 2 3 4 5 
// so First set subarrays are 
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// Second set is
// 2
// 2 3
// 2 3 4
// 2 3 4 5
// Third set is
// 3 
// 3 4 
// 3 4 5 
// fourth set is 
// 4 
// 4 5
// fifth set is 
// 5

void printSubArray(vector<int>&arr,int s,int e){
    //base
    if(e==arr.size()) return;
    //1 case soln
    for (int i = s; i <=e; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout << endl;
    // rec sumbhal lega
    printSubArray(arr,s,e+1);
}
void printSubArrayMain(vector<int>&arr){
    for (int start = 0; start < arr.size(); start++)
    {
        int end=start;
        printSubArray(arr,start,end);
    }
}
int main()
{
    vector<int> arr{1,2,3,4,5};
    printSubArrayMain(arr);
    return 0;
}