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
    
    map<string, int> m;
    // insert
    m["India"] = 150;
    m["USA"] = 100; 
    m["China"] = 200;
    m["Japan"] = 50;
    m["Andaman"] = 10;
    // search
    cout << "India population: " << m["India"] << endl;
    // print all elements
    for (pair<string, int> country : m)
    {
        cout << country.first << " : " << country.second << endl; // sorted order
    }
    // remove
    m.erase("India");
    // count function   
    if (m.count("India"))
        cout << "India is present in the map." << endl;
    else
        cout << "India is not present in the map." << endl;
    return 0;
}