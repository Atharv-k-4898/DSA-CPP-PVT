#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <limits.h>
#include <string>
using namespace std;
//✦ Question         : 
//✦ Question Link    : 
//✦ Approach         : 
//✦ Time Complexity  : 
//✦ Space Complexity : 
//✦ Dry Run          : 
void majorityElement(vector<int> &arr){
    unordered_map<int, int> m;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if(m.count(arr[i]))
            m[arr[i]]++;
        else
            m[arr[i]] = 1;
    }
    for(pair<int, int> p : m)
    {
        if(p.second > n/3)
        {
            cout << "Majority Element: " << p.first << endl;
            return;
        }
    }
}
int main()
{
    
    vector<int> arr = {1, 3,2,5,1,3,1,5,1};
    vector<int> arr1={1,2};
    majorityElement(arr);
    majorityElement(arr1);
    return 0;
}