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

//Question :
//Link :
//Approach :

//Time Complexity :
//Space Complexity :
//Dry Run ::

class Solution {
public:
    bool isPalindrome(string& s,int i,int j){// to decrease time comp & is used
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        // first extract the all palindromic strings
        string ans="";
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                if(isPalindrome(s,i,j)){
                    string t=s.substr(i,j-i+1);
                    ans = t.size()>ans.size() ? t : ans;
                }// O(n^3)  very big....
            }
        }
        return ans;
    }////////////////////////////// Method 2 Dp comming here
};

int main()
{
    Solution soln;
    string s = "babban";
    cout<<soln.longestPalindrome(s)<<endl;
    return 0;
}