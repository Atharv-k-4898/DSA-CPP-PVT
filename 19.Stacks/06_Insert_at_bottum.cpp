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
✦ Question         : Insert element at bottum
✦ Question Link    :
✦ Approach         : Dont delete upper elements
✦ Time Complexity  :
✦ Space Complexity :
✦ Dry Run          :
    5 15 27 32 
    insert at bottum 10 so stack will be 10 5 15 27 32
*/

class Solution {
public:
    void insertAtBottom(stack<int>& s, int val) {
        if (s.empty()) {
            s.push(val);
            return;
        }
        int top = s.top();
        // s.top ko empty stack pe bilkol nahi lagana
        s.pop();
        insertAtBottom(s, val);
        s.push(top);
    }
    void solve() {
        stack<int> s;
        s.push(5);
        s.push(15);
        s.push(27);
        s.push(32);

        int valueToInsert = 10;
        insertAtBottom(s, valueToInsert);

        // Print and pop to show correct order
        while (!s.empty()) {
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;
    }
};
int main() {
    FASTIO;
    Solution s;
    s.solve();
    return 0;
}
