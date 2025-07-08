#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <string>
#include <map>
#include <set>
#include <limits.h>
using namespace std;

// //Question : p parata <=1000
//              l cooks  <=50
//              rank r[1,8]
//        Rank is given by      1st parata in 1min
//                              2nd parata in 2min ............  1000 parata in 1000min
//             min time to comp all parata
/////////////////////////// """""""" Cook can Work Parallely""""""""""""""////////////////////////////////////////
//Link :https://www.spoj.com/problems/PRATA/
//Approach :
//                     1) Brute Force loop from 0 min to max min check for 0 min 1 min ...
                    
// //                  2)Use Binary Search for it
//                     for chef 1 rank 1 means he needs 1*{1+2+3..10}  = 55  min for 10 Parata 
//                     for chef 1 rank 4 means he needs 4*{1+2+3..10}  = 220 min for 10 parata
//                         if(possible) end = mid-1;
//                         else(st=mid+1)

//                      So allow 1 rated chef till mid and see if 2 3 4 any one parallely make paratha within mid 
//                      go till mimimmest you can go and return  mid is your ans

// As ans is 12 Dry run for it

//Time Complexity :
//Space Complexity :
//Dry Run ::

// 3               test cases

// 10              10 parata
// 4 1 2 3 4       4 cooks with rank 1 2 3 4 

// 8               8 paratha
// 1 1             1 cook rank 1

// 8               8 paratha ..
// 8 1 1 1 1 1 1 1 1

// 1) 10 parathas mid we come till 12 now 
//    chef 1 = 1+2+3+4 (10min)   4 paratha                |____
//    chef 2 = 2+4+6   (12min)   3 paratha           c4   |___|____
//    chef 3 = 3+6      (9min)   2 paratha           c3   |_______|_______
//    chef 4 = 4        (4min)   1 paratha           c2   |___________   |
//                                                   c1   |          |   |
//                                                        -------------------------
//                                                                   10   12
bool ifPossibleSoln(vector<int> cooksRanks, int np, int mid) {
    int currParatha = 0;
    for (int i = 0; i < cooksRanks.size(); i++) {
        int r = cooksRanks[i], j = 1;
        int timeTaken = 0;
        while (true) {
            if (timeTaken + j * r <= mid) {
                currParatha++;
                timeTaken += j * r; // accumulate total time
                j++;
            } else {
                break;
            }
        }
        if (currParatha >= np) return true;
    }
    return currParatha >= np;
}

int minTimeToCompleteOrder(vector<int> cooksRanks, int np) {
    int st = 0;
    int highestRank = *max_element(cooksRanks.begin(), cooksRanks.end());
    int end = highestRank * (np * (np + 1) / 2); // worst case: slowest cook makes all parathas
    int ans = -1;

    while (st <= end) {
        int mid = (st + end) / 2;
        if (ifPossibleSoln(cooksRanks, np, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int np, nc;
        cin >> np >> nc;
        vector<int> cooksRanks(nc);
        for (int i = 0; i < nc; ++i) {
            cin >> cooksRanks[i];
        }
        cout << minTimeToCompleteOrder(cooksRanks, np) << endl;
    }
    return 0;
}
