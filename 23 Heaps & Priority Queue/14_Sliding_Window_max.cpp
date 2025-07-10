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
void slidingWindowMax(vector<int> arr, int k)
{
    priority_queue<pair<int, int>> pq;
    // 1 st window
    for (int i = 0; i < k; i++)
    {
        pq.push(make_pair(arr[i], i));
    }
    cout << "O/p : " << pq.top().first << "  ";
    for (int i = k; i < arr.size(); i++)
    {
        while (!pq.empty() && pq.top().second <= (i - k)) // outside window so pop
        {
            pq.pop();
        }
        pq.push(make_pair(arr[i], i));
        cout << pq.top().first << "  ";
    }
}
int main()
{

    vector<int> arr = {1, 3, -1, -1, -3, 5, 3, 6, 7};
    int k = 3;
    slidingWindowMax(arr, k);
    return 0;
}