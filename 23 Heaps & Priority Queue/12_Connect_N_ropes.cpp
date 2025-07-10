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

int connectNRopes(vector<int> ropes)
{
    priority_queue<int, vector<int>, greater<int>> pq(ropes.begin(), ropes.end()); // O(n)
    int cost = 0;
    while (pq.size() > 1)
    {
        int min1 = pq.top();
        pq.pop();
        int min2 = pq.top();
        pq.pop();
        cost += min1 + min2;
        pq.push(min1 + min2);
    }
    return cost;
}

int main()
{
    FASTIO;
    vector<int> ropes = {4, 3, 2, 6};
    cout << " Min Cost is :" << connectNRopes(ropes) << endl;

    return 0;
}                                   