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
int printDistinctElements(vector<int> &arr)
{
    unordered_set<int> s;
    for (int i = 0; i < arr.size(); i++)
    {
        s.insert(arr[i]);
    }
    for (auto x : s)
    {
        cout << x << " "; // print distinct elements
    }
    cout << endl;
    return s.size(); // return the count of distinct elements
}
int main()
{

    vector<int> arr = {4, 3, 2, 5, 6, 7, 3, 4, 2, 1};
    int distinctCount = printDistinctElements(arr);
    cout << "Count of distinct elements: " << distinctCount << endl;
    return 0;
}