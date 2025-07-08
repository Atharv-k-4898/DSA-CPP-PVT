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
✦ Question         : Remove the redundant brackets 
✦ Question Link    : 
✦ Approach         : Closing bracket se opening bracket ki journey me operator mila to return valid he nahi to nahi
✦ Time Complexity  : 
✦ Space Complexity : 
✦ Dry Run          : 
*/

class Solution {
public:
    bool isOperator(char ch) {
        return ch == '+' || ch == '-' || ch == '*' || ch == '/';
    }

    bool hasRedundantBrackets(string &s) {
        stack<char> st;

        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            if (ch == ')' || ch == '}' || ch == ']') {
                bool operatorFound = false;
                char opening;

                if (ch == ')') opening = '(';
                else if (ch == '}') opening = '{';
                else opening = '[';

                while (!st.empty() && st.top() != opening) {
                    if (isOperator(st.top())) {
                        operatorFound = true;
                    }
                    st.pop();
                }

                if (!operatorFound) return true; // Redundant found

                if (!st.empty()) st.pop(); // pop the matching opening
            } else {
                st.push(ch);
            }
        }

        return false; // No redundancy
    }

    void solve() {
        string expr;
        cin >> expr;

        if (hasRedundantBrackets(expr)) {
            cout << "Redundant brackets found" << endl;
        } else {
            cout << "No redundant brackets" << endl;
        }
    }
};

int main(){
    Solution soln;
    soln.solve();
}
