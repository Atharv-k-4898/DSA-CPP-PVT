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
    
    set<int> s;
    // insert
    s.insert(10);
    s.insert(20);
    s.insert(30); // ordered, no duplicates
    s.insert(30);
    s.insert(50);
    s.insert(20); // no duplicate allowed

    cout << "Size of set: " << s.size() << endl;

    //erase
    s.erase(20);
    // search
    if (s.find(20) != s.end())
        cout << "20 is present in the set." << endl;
    else
        cout << "20 is not present in the set." << endl;

    for(auto x : s)
    {
        cout << x << " "; // sorted order
    }
    cout << endl;
    return 0;
}