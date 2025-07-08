
// Approach 
/*
------------------------------------------
🌳 Wood Cutter Problem (EKO) - Two Approaches
------------------------------------------

🎯 Problem:
Given `n` trees with different heights and an integer `m`, find the maximum height `H` at which you can set the sawblade so that you collect **at least `m` meters** of wood.

Example:
n = 4, m = 7
trees[] = {20, 15, 10, 17}

Expected Output:
15


==========================================
🧪 APPROACH 1: Brute Force (Simulation)
==========================================

🔁 Try all heights H from 0 to max(trees) and check:
- How much wood is collected if you cut all trees taller than H
- If wood >= m, store H as possible answer

Time Complexity: O(n * max(trees))

------------------------------------------
Dry Run for H = 15
------------------------------------------
trees = [20, 15, 10, 17], m = 7

Height | Cut Amount
--------------------
20     | 20-15 = 5
15     | 15-15 = 0
10     | skip
17     | 17-15 = 2
--------------------
Total = 7 (✅ valid)

We keep trying higher H to maximize.


==========================================
📈 Graphical Representation (Brute Force)
==========================================

X-axis: Blade Height (H)
Y-axis: Collected Wood

           *
         *  
       *    
     *      
 *           
---------------------------------
H: 0     5     10    15    20

(wood decreases as height increases)

We pick highest H such that wood >= m


==========================================
⚡ APPROACH 2: Binary Search on Answer
==========================================

🌟 Idea:
Instead of trying all H from 0 to max, apply binary search:
- H is between 0 and max height
- For each mid, check: is it possible to collect ≥ m wood?

Time Complexity: O(n * log(max(trees)))

------------------------------------------
Dry Run:
trees = [20, 15, 10, 17], m = 7

Sorted heights: (not needed, but max = 20)

Binary Search Range: [0, 20]
Step 1: mid = (0 + 20) / 2 = 10
   → Cut above 10: (10)+(5)+(0)+(7) = 22 ✅
   → Move right: st = mid+1

Step 2: mid = (11+20)/2 = 15
   → Cut above 15: (5)+(0)+(0)+(2) = 7 ✅
   → Move right: st = mid+1

Step 3: mid = (16+20)/2 = 18
   → Cut above 18: (2)+(0)+(0)+(0) = 2 ❌
   → Move left: end = mid-1

Step 4: mid = (16+17)/2 = 16
   → (4+0+0+1) = 5 ❌ → end = mid-1

Step 5: mid = 16+17/2 = 16.5 → floor = 16

Final answer = last valid mid = 15

✅ Correct blade height is 15


==========================================
📉 Graphical Representation (Binary Search)
==========================================

          Valid →        Invalid →
H:   0   5   10   15   16   17   18   19   20
      ✅  ✅   ✅   ✅   ❌   ❌   ❌   ❌   ❌

We search for the highest ✅

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long

bool isPossible(vector<ll> trees, ll m, ll mid) {
    ll woodCollected = 0;
    for (int i = 0; i < trees.size(); i++) {
        if (trees[i] > mid) {
            woodCollected += trees[i] - mid;
        }
    }
    return woodCollected >= m;
}

ll maxSawBladeHeight(vector<ll> trees, ll m) {
    ll st = 0, end = *max_element(trees.begin(), trees.end());
    ll ans = -1;

    while (st <= end) {
        ll mid = st + (end - st) / 2;
        if (isPossible(trees, m, mid)) {
            ans = mid;
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return ans;
}

int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> trees(n);

    for (int i = 0; i < n; i++) {
        cin >> trees[i];
    }

    cout << maxSawBladeHeight(trees, m) << endl;
    return 0;
}
