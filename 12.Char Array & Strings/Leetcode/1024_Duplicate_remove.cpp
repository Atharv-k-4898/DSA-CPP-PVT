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

//Question :Remove the two same letters in the string
//Link : https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
//Approach :  a z x x z y 
            //  make a empty string 
            //  try to push sep letters if +1 is same remove it.

//Time Complexity :
//Space Complexity :
//Dry Run ::
//  a z x x z y    i   new string
//                 0      "a"
//                 1      "az"
//                 2      "azx"
//                 3      "az"
//                 4      "a"
//                 5      "ay"


#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        for (int i = 0; i < s.length(); i++) {
            if (!ans.empty() && ans.back() == s[i]) {// back is the fun to find last element
                ans.pop_back();
            } else {
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};

int main() {
    Solution solution;
    string input="abbaca";
    string result = solution.removeDuplicates(input);
    cout << "After removing duplicates: " << result << endl;

    return 0;
}
