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
// #include <priortiyQueue>
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
✦ Question         :
✦ Question Link    :
✦ Approach         :
✦ Time Complexity  :
✦ Space Complexity :
✦ Dry Run          :
*/

int main()
{
    FASTIO;
    // Max-heap priority queue
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(80);
    pq.push(81);
    cout << "top : " << pq.top() << endl;
    while (!pq.empty())
    {
        cout << pq.top() << "  ";
        pq.pop();
    }
    cout << endl;
    // Min-heap priority queue
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(10);
    pq1.push(20);
    pq1.push(30);
    pq1.push(80);
    pq1.push(81);
    cout << "top : " << pq1.top() << endl;
    while (!pq1.empty())
    {
        cout << pq1.top() << "  ";
        pq1.pop();
    }

    // Pq for strings
    cout<<endl;
    priority_queue<string, vector<string>, greater<string>> pq2;
    pq2.push("atharv");
    pq2.push("hii");
    pq2.push("how are you ?");
    pq2.push("done work ?");
    cout << "top : " << pq2.top() << endl;
    while (!pq2.empty())
    {
        cout << pq2.top() << "  ";
        pq2.pop();
    }

    return 0;
}