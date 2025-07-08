
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
    void interLeaveQueues(queue<int>&q){
        int n=q.size();
        int k=n/2;
        int cnt=0;
        // put all elements in stack till k elements
        queue<int>s;
        if(q.empty()) return;
        while (!q.empty())
        {
            int element=q.front();
            q.pop();
            s.push(element);
            cnt++;
            if(cnt==k) break;
        }
        // interleaving start kardo
        while (!s.empty() && !q.empty())
        {
            int first = s.front();
            s.pop();
            q.push(first);

            int second = q.front();
            q.pop();
            q.push(second);
        }
        // for odd q will remain with some elements
        if(n&1){
            int element=q.front();
            q.pop();
            q.push(element);
        }
    }
    void method1() {
        queue<int>q;
        q.push(10);
        q.push(20);
        q.push(30);
        q.push(40);
        q.push(50);
        q.push(60);
        q.push(70);
        q.push(80);
        q.push(90);
        q.push(100);

        interLeaveQueues(q);
        cout<<"Printing :"<<endl;
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
    s.method1();
    return 0;
}