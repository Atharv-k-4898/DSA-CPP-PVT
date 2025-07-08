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
✦ Question         : Find Middle element in stack
✦ Question Link    :
✦ Approach         : Dont delete upper elements
✦ Time Complexity  :
✦ Space Complexity :
✦ Dry Run          :
    10 20 30 40 50 60 70
    middle is 40
*/

class Solution
{
public:
    void printMiddle(stack<int> &s, int &totalsize)
    {
        // base
        if (s.size() == totalsize / 2 + 1)
        {
            cout << "Middle   " << s.top() << endl;
            return;
        }
        int tmp = s.top();
        s.pop();

        // recursive call
        printMiddle(s, totalsize);
        //backtrack call
        s.push(tmp);
    }
    void solve()
    {
        stack<int> s;
        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40);
        s.push(50);
        s.push(60);
        s.push(70);
        int totalsize=s.size();
        printMiddle(s,totalsize);
    }
};

int main()
{
    FASTIO;
    Solution s;
    s.solve();
    return 0;
}