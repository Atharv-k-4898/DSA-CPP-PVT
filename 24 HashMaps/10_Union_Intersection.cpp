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
// ✦ Question         :
// ✦ Question Link    :
// ✦ Approach         :
// ✦ Time Complexity  :
// ✦ Space Complexity :
// ✦ Dry Run          :

int main()
{

    vector<int> arr1 = {7, 3, 9};
    vector<int> arr2 = {6, 3, 9, 2, 9, 4};
    // Union
    set<int> s1;
    for (int i = 0; i < arr1.size(); i++)
    {
        s1.insert(arr1[i]);
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        s1.insert(arr2[i]);
    }
    for (auto x : s1)
    {
        cout << x << " "; // print distinct elements
    }
    cout << endl;
    // Intersection
    unordered_map<int, int> m;
    for (int i = 0; i < arr1.size(); i++)
    {
        m[arr1[i]]++;
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        m[arr2[i]]++;
    }
    for (auto x : m)
    {
        if (x.second > 1)       // means more than one occurrence
        cout << x.first << " "; // print common elements
    }
    cout << endl;
    return 0;
}