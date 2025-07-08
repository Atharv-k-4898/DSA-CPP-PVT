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
✦ Question         : Reverse the first k Queue elements
✦ Question Link    : 
✦ Approach         : 1) Use stack to reverse queue first 3 then pop push others
✦ Time Complexity  : O(n)
✦ Space Complexity : O(n ) tmp takes O(1) so n times
*/

class Solution {
public:
    void reverseKQueue(queue<int>&q,int k){
        stack<int>s;
        int cnt=0;
        int n=q.size();
        // put all elements in stack till k elements
        if(k<=0 || k>n) return;
        while (!q.empty())
        {
            int element=q.front();
            q.pop();
            s.push(element);
            cnt++;
            if(cnt==k) break;
        }
        // put from stack to queue
        while (!s.empty())
        {
            int a = s.top();
            s.pop();
            q.push(a);
        }
        // push n - k elemnts from q to back
        cnt=0;
        while (!q.empty() && n-k!=0)
        {
            int tmp=q.front();
            q.pop();
            q.push(tmp);
            cnt++;

            if(cnt==n-k) break;
        }
    }
    void method1(int k) {
        queue<int>q;
        q.push(3);
        q.push(6);
        q.push(9);
        q.push(2);
        q.push(8);

        reverseKQueue(q,k);
        while (!q.empty())
        {
            cout<<q.front()<<" ";
            q.pop();
        }
        
    }
};

int main()
{
    FASTIO;
    Solution s;
    int k;
    cin>>k;
    s.method1(k);
    return 0;
}