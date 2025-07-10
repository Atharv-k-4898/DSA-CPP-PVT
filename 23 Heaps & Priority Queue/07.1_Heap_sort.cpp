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
✦ Question         :
✦ Question Link    :
✦ Approach         :
✦ Time Complexity  :
✦ Space Complexity :
✦ Dry Run          :
*/
void heapify(int i, vectro<int> arr, int n)
{
    int left = i * 2 + 1;
    int right = i * 2 + 2;
    int maxI = i;
    if (left < n && arr[left] > arr[maxI])
        maxI = left;
    if (right < n && arr[right] > arr[maxI])
        maxI = right;
    if (maxI != i)
    {
        swap(arr[i], arr[max]);
        heapify(maxI, arr, n);
    }
}
void heapSort(vector<int> arr)
{
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(i, arr, n);
    }
}

int main()
{
    FASTIO;
    vector<int> arr = {1, 4, 2, 5, 3};
    cout<<"Sorting the Heap"<<endl;
    return 0;
}