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

class Solution
{
public:
    void solve()
    {
        int arrayLength, goodDays;
        cin >> arrayLength >> goodDays;
        vector<int> a(arrayLength);
        for (int i = 0; i < arrayLength; ++i)
        {
            cin >> a[i];
        }
        vector<int> s(arrayLength + 1, 0);
        for (int i = 0; i < arrayLength; i++)
        {
            s[i + 1] = s[i] + a[i];
        }
        int ans = 0;
        for (int i = 0; i + goodDays <= arrayLength; i++)
        {
            if (s[i + goodDays] - s[i] == 0)
            {
                ans++;
                i += goodDays + 1;
            }
            else
            {
                i++;
            }
        }
        cout << ans << endl;
    }
};

int main()
{
    FASTIO;
    Solution kulkarni;
    int t;
    cin >> t;
    while (t--)
    {
        kulkarni.solve();
    }
    return 0;
}