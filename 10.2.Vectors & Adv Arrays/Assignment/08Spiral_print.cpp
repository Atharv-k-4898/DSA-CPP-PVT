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

// Question : Spiral print
// Link : #
// Approach :Change order of printing
//           
//           

// Time Complexity :
// Space Complexity :
// Dry Run ::
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12

    // o/p 1|2|3|4|8|12|11|10|9|5|6|7 

    class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();
        int top = 0, bottom = m - 1;
        int left = 0, right = n - 1;
        int cnt = 0, total = m * n;

        while (cnt < total) {
            // Traverse from left to right
            for (int i = left; i <= right && cnt < total; i++) {
                ans.push_back(matrix[top][i]);
                cnt++;
            }
            top++;

            // Traverse downwards
            for (int i = top; i <= bottom && cnt < total; i++) {
                ans.push_back(matrix[i][right]);
                cnt++;
            }
            right--;

            // Traverse from right to left
            for (int i = right; i >= left && cnt < total; i--) {
                ans.push_back(matrix[bottom][i]);
                cnt++;
            }
            bottom--;

            // Traverse upwards
            for (int i = bottom; i >= top && cnt < total; i--) {
                ans.push_back(matrix[i][left]);
                cnt++;
            }
            left++;
        }

        return ans;
    }
};
