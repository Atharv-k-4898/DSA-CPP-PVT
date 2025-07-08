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

//Question : Check valid palindrome 2
//Link : https://leetcode.com/problems/valid-palindrome-ii/
//Approach : take 2 pointer and check for i once and for j once 
//Time Complexity :O(n)
//Space Complexity :O(1)
//Dry Run ::
// l e v e r l     i  j  s[i]!=s[j]
//                 0  5   false
//                 1  4   true        now   checkPalindrome for s,i+1,j   ||  s,i,j-1
//                 2  4                                          v e r          e v e
//                 1  3                                          false           true
//                 2  2   out of loop
class Solution {
public:
    bool checkPalindrome(string s,int i,int j){
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return checkPalindrome(s,i+1,j) || checkPalindrome(s,i,j-1);
            }
            else{
                i++;
                j--;
            }
        
        }
        return true;
    }
};
int main()
{
    Solution soln;
    string s = "leverl";
    cout<<soln.validPalindrome(s)<<endl;
    return 0;
}