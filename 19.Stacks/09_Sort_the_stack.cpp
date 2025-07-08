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
✦ Question         : Sort the stack
✦ Question Link    : 
✦ Approach         : 
✦ Time Complexity  : 
✦ Space Complexity : 
✦ Dry Run          : 
 7 11 3 5 9 
 op must be 3 5 7 9 11
*/

#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    void insertSorted(stack<int>& s, int target) {
        if (s.empty() || s.top() >= target) {
            s.push(target);
            return;
        }
        int topElement = s.top();
        s.pop();
        insertSorted(s, target);
        s.push(topElement);
    }

    void stackSort(stack<int>& s) {
        if (s.empty()) return;
        int topElement = s.top();
        s.pop();
        stackSort(s);
        insertSorted(s, topElement);
    }

    void printStack(stack<int> s) {
        while (!s.empty()) {
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;
    }
};



int main()
{
    FASTIO;
    Solution sol;
    stack<int> s;
    s.push(7);
    s.push(11);
    s.push(3);
    s.push(5);
    s.push(9);

    sol.stackSort(s);
    sol.printStack(s);  // Output: 3 5 7 9 11

    
}