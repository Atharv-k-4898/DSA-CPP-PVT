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

//Question : Longest common prifix
//Link : https://leetcode.com/problems/longest-common-prefix/description/
//Approach :
                //  strs = ["flower","flow","flight"]
                //  o/p fl is common and longest string..
//Time Complexity :
//Space Complexity :
//Dry Run ::

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int i = 0;
        while (true) {
            int curr_char = 0;
            for (auto str : strs) {
                if (i >= str.size()) {
                    // out of bound
                    curr_char = 0;
                    break;
                }
                if (curr_char == 0) {
                    curr_char = str[i];
                } 
                else if (str[i] != curr_char) {
                    curr_char = 0;
                    break;
                }
            }
            if (curr_char == 0) {
                break;
            }
            ans.push_back(curr_char);
            i++;
        }
        return ans;
    }
};

int main()
{
    Solution soln;
    vector<string> strs{"flower","flow","flight"};
    cout<<soln.longestCommonPrefix(strs);
    return 0;
}