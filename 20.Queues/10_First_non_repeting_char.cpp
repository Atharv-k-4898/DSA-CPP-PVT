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
✦ Question         : First non repeting char in the stirng
✦ Question Link    : 
✦ Approach         : 
✦ Time Complexity  : O(n)
✦ Space Complexity : O(n)   for queue
✦ Dry Run          : 
    a a b c  ans is must be
    a # b b

    a a c 
    a # c

    z a r c a a z r d
    z z z z z z r c c
*/

class Solution {
public:
    void solve() {
        string str="zarcaazrd";
        int freq[26]={0};
        queue<char>q;
        string ans="";
        for (int i = 0; i < str.length(); i++)
        {
            char ch=str[i];
            //increment frequency;
            freq[ch-'a']++; // tya letter chi freq increase
            q.push(ch);
            while (!q.empty())
            {
                if (freq[q.front()-'a']>1) 
                {
                    q.pop();
                }
                else{
                    ans.push_back(q.front());
                    break;
                }
            }
            if (q.empty())
            {
                ans.push_back('#');
            }
        }
        for(auto ch:ans){
            cout<<ch<<"  ";
        }
    }
};

int main()
{
    FASTIO;
    Solution s;
    s.solve();   
    return 0;
}