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
✦ Question         : Reverse the Queue
✦ Question Link    : 
✦ Approach         : 1) Use stack to reverse queue  2) Recursion
✦ Time Complexity  : O(n)
✦ Space Complexity : O(n ) tmp takes O(1) so n times
✦ Dry Run          : 
  3 6 9 2 8 to 8 2 9 6 3 
*/

class Solution {
public:
    void reverseQueue(queue<int>&q){
        stack<int>s;

        // put all elements in stack
        while (!q.empty())
        {
            int element=q.front();
            q.pop();

            s.push(element);
        }
        //put from stack to queue
        while (!s.empty())
        {
            int a=s.top();
            s.pop();
            q.push(a);
        }
        
        
    }
    void method1() {
        queue<int>q;
        q.push(3);
        q.push(6);
        q.push(9);
        q.push(2);
        q.push(8);

        reverseQueue(q);
        while (!q.empty())
        {
            cout<<q.front()<<" ";
            q.pop();
        }
        
    }
    void reverseQueUsingRecursion(queue<int>&q){
        //base case
        if(q.empty()) return;
        //step 1
        int tmp=q.front();
        q.pop();
        //step 2
        reverseQueUsingRecursion(q);
        //step 3
        q.push(tmp);
    }
    void method2() {
        queue<int>q;
        q.push(3);
        q.push(6);
        q.push(9);
        q.push(2);
        q.push(8);

        reverseQueUsingRecursion(q);
        cout<<endl;
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
    s.method2();
    return 0;
}