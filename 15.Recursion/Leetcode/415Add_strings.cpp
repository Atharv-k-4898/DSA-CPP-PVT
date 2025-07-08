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

//Question : Add strings
//Link :https://leetcode.com/problems/add-strings/
//Approach :   

//Time Complexity :O(N)
//Space Complexity :O(N)
//Dry Run ::

class Solution {
public:
    void addRE(string num1, string num2, int p1, int p2, int carry, string &ans) {
        if (p1 < 0 && p2 < 0) {
            if (carry != 0) {
                ans.push_back(carry + '0');
            }
            return;
        }
        int n1 = (p1 >= 0 ? num1[p1] : '0') - '0';
        int n2 = (p2 >= 0 ? num2[p2] : '0') - '0';
        int csum = n1 + n2 + carry;
        int digit = csum % 10;
        carry = csum / 10;
        ans.push_back(digit + '0');
        addRE(num1, num2, p1 - 1, p2 - 1, carry, ans);
    }

    string addStrings(string num1, string num2) {
        string ans = "";
        int carry = 0; 
        addRE(num1, num2, num1.size() - 1, num2.size() - 1, carry, ans);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};



int main()
{
    Solution soln;
    string num1,num2;
    cin>>num1>>num2;
    cout<<
    return 0;
}