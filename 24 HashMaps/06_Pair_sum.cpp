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
 
int main()
{
    vector<int> arr = {1,2,7,11,15,5,71,6,9};
    int key = 9;
    unordered_map<int, int> m;  // key=array element, value=index
    for (int i = 0; i < arr.size(); i++)
    {
        int complement = key - arr[i];  
        if (m.count(complement)) // check if the complement exists in the map
        {
            cout << "Pair found:" << arr[i] << ", " << complement << ")" << endl;
            return 0; 
        }
        m[arr[i]] = i; // store the current element in the map
    }
    cout << "No pair found with the given sum." << endl;
    
    return 0;
}