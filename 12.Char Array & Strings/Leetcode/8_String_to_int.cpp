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

// Question :Convert no. string to int
// Link :
// Approach : 1) Direct fun ava. atoi(char pointer)
//    1)Ignore leading white spaces
//    2)determine sign
//    3)if dig found then convert till non dig char foud ignore after that
//    4)special handling of INT_MAX ans INT_MIN then return same max and min
// Time Complexity :
// Space Complexity :
// Dry Run ::

class Solution
{
public:
    int directConvert(string s)
    {
        return atoi(s.c_str());
    }
    int myAtoi(string s)
    {
        int num = 0, i = 0, sign = 1; // 1 for +ve
        while (s[i] == ' ')
        {
            i++;
        }
        if (i < s.size() && (s[i] == '-' || s[i] == '+'))
        {
            sign = s[i] == '+' ? 1 : -1;
            ++i;
        }
        while (i < s.size() && isdigit(s[i]))
        { // iddigit() is inbuilt function
          // which returns 1 for digits
            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && s[i] > '7'))
                return sign == -1 ? INT_MIN : INT_MAX; // we are multiplying * 10   next so we
                                                       // took INT_MIN/10 and not only INT_MIN
            if (num < INT_MIN) num = num * 10 + (s[i] - '0'); //'9'-'0' is 9
            i++;
        }
        return num * sign;
    }
};

int main()
{
    Solution soln;
    string s;
    cin >> s;
    cout << soln.directConvert(s);
    return 0;
}