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
#define ak             long long
#define pb             push_back
#define vi             vector<int>
#define vl             vector<ak>
#define pii            pair<int,int>
#define pll            pair<ak,ak>
#define vpi            vector<pii>
#define vpl            vector<pll>
#define mii            map<int,int>
#define mll            map<ak,ak>
#define ff             first
#define ss             second
#define all(x)         (x).begin(), (x).end()
#define rall(x)        (x).rbegin(), (x).rend()
#define sz(x)          (int)((x).size())
#define rep(i,a,b)     for(int i=(a);i<(b);++i)
#define repd(i,a,b)    for(int i=(a);i>=(b);--i)
#define yes            cout<<"YES\n"
#define no             cout<<"NO\n"
#define endl           '\n'
#define FASTIO         ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


/* 
✦ Question         : Prev Smallest element in the array
✦ Question Link    : 
✦ Approach         :  See in Nb
✦ Time Complexity  : 
✦ Space Complexity : 
✦ Dry Run          :  See in nb
*/

class Solution {
public:
    void solve() {
        vector<int> v = {2, 1, 4, 3};
        vector<int> ans(v.size());
        stack<int> s;

        s.push(-1);

        for (int i = 0; i <v.size(); i++) {
            int curr = v[i];
            while (s.top() != -1 && s.top() >= curr) {
                s.pop();
            }
            ans[i] = s.top();
            s.push(curr);
        }

        for (int i : ans) {
            cout << i << " ";
        }
        cout << endl;
    }
};


int main()
{
    FASTIO;
    Solution s;
    s.solve();
    return 0;
}