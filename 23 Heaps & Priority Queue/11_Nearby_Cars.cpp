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

/*
✦ Question         : Nearby Cars
✦ Question Link    :
✦ Approach         :
✦ Time Complexity  :
✦ Space Complexity :
✦ Dry Run          :
*/

class Classcar
{
public:
    int idx;
    int distSq;
    Classcar(int idx, int distSq)
    {
        this->distSq = distSq;
        this->idx = idx;
    }
    bool operator<(const Classcar &obj) const
    {
        return this->distSq > obj.distSq; // min heap for distSq
    }
};
void nearbyCars(vector<pair<int, int>> pos, int k)
{
    // idx ,dist^2
    vector<Classcar> Carsarr;
    for (int i = 0; i < pos.size(); i++)
    {
        int distSq = (pos[i].first * pos[i].first) + (pos[i].second * pos[i].second);
        Carsarr.push_back(Classcar(i, distSq));
    }
    // Short cut to initialise heap with O(N)
    priority_queue<Classcar> pq(Carsarr.begin(), Carsarr.end());
    // but we want min heap so making min heap
    // done min heap
    while (k--) // O(k)
    {
        cout << " Top :" << pq.top().idx;
        pq.pop();
    }
}

int main()
{
    FASTIO;
    vector<pair<int, int>> pos;
    pos.push_back(make_pair(3, 3));
    pos.push_back(make_pair(5, -1));
    pos.push_back(make_pair(-2, 4));
    int k = 2;
    nearbyCars(pos, k);
    return 0;
}