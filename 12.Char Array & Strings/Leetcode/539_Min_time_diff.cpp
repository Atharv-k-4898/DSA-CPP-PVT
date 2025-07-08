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

//Question : Minimum Time difference
//Link :
//Approach :  1) Convert time string into min value use of stio function
   //         2) sort the min array


//Time Complexity :
//Space Complexity :
//Dry Run ::


class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> mint;
        for (int i = 0; i < timePoints.size(); i++) {
            string curr = timePoints[i];
            int hours = stoi(curr.substr(0, 2));
            int minutes = stoi(curr.substr(3, 2));
            int totmin = hours * 60 + minutes;
            mint.push_back(totmin);
        }

        sort(mint.begin(), mint.end());
        int mini = INT_MAX;

        // Compare consecutive time differences
        for (int i = 1; i < mint.size(); i++) {
            int diff = mint[i] - mint[i - 1];
            mini = min(mini, diff);
        }
            //THIS IS THE GAME  OP  Q              
        // Wrap-around difference between last and first time
        int lastdiff = (mint[0] + 1440) - mint[mint.size() - 1];
        mini = min(mini, lastdiff);// OR ELSE WE CAN HAVE 00 TO 24 AND THEN FIND

        return mini;
    }
};

int main()
{
    Solution soln;
    vector<string> timePoints= {"23:59","00:00"};
    cout<<soln.findMinDifference(timePoints);
    return 0;
}