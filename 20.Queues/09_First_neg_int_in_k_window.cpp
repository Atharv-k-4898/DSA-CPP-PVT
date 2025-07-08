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
#define ak long long
#define pb push_back
#define vi vector<int>
#define vl vector<ak>
#define pii pair<int, int>
#define pll pair<ak, ak>
#define vpi vector<pii>
#define vpl vector<pll>
#define mii map<int, int>
#define mll map<ak, ak>
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)((x).size())
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define repd(i, a, b) for (int i = (a); i >= (b); --i)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl '\n'
#define FASTIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

/*
✦ Question         :
✦ Question Link    :
✦ Approach         :
✦ Time Complexity  :
✦ Space Complexity :
✦ Dry Run          :
*/
#include <deque>
class Solution
{
public:
    void solve(int arr[], int n, int k)
    {
        deque<int> q;

        // procress first k window size
        for (int i = 0; i < k; i++)
        {
            if (arr[i] < 0)
            {
                q.push_back(i);
            }
        }

        // remaining window procressing
        for (int i = k; i < n; i++)
        {
            // purane winfow ka ans verify
            if (q.empty())
            {
                cout << 0 << " ";
            }
            else
            {
                cout << arr[q.front()] << " ";
            }

            // out of window ko remove kardo
            while ((!q.empty()) && (i - q.front() >= k))
            {
                // remove unnecessary element
                q.pop_front();
            }
            // check currr element for insertion
            if (arr[i] < 0)
            {
                q.push_back(i);
            }
        }
        // Answer print karo for last window
        if (q.empty())
        {
            cout << 0 << " ";
        }
        else
        {
            cout << arr[q.front()] << " ";
        }
    }
};

int main()
{
    FASTIO;
    Solution s;
    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int size = 8;
    int k = 3;
    s.solve(arr, size, k);
    return 0;
}