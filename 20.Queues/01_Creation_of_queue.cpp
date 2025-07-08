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
✦ Question         : 
✦ Question Link    : 
✦ Approach         : 
✦ Time Complexity  : 
✦ Space Complexity : 
✦ Dry Run          : 
*/

class Solution {
public:
    void solve() {
        queue<int> q;
        // creation of queue
        // pushing elements
        q.push(10);
        q.push(20);
        q.push(30);
        q.push(40);
        q.push(50);
        q.push(60);

        // Size of queue
        cout << "Size of queue: " << q.size() << endl;

        // removing elements
        q.pop();
        q.pop();

        // Size of queue after popping elements
        cout << "Size of queue after popping elements: " << q.size() << endl;

        // Empty check
        if (q.empty()) {
            cout << "Queue is empty" << endl;
        } else {
            cout << "Queue is not empty" << endl;
        }

        //front and back elements
        cout << "Front element: " << q.front() << endl;
        cout << "Back element: " << q.back() << endl;

        //printing all elements in the queue
        cout << "Elements in the queue: ";
        while (!q.empty()) {
            cout << q.front() << " ";
            q.pop();
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