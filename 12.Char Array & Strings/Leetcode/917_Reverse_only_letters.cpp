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

//Question :Reverse Only letters 
//Link : https://leetcode.com/problems/reverse-only-letters/
//Approach :  // Check if alpha(ch) then for that pos of i++ and j--
//               else swap i , j

//Time Complexity :O(n)
//Space Complexity :
//Dry Run ::


class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j){
            //if((s[i]>=97 && s[i]<=122) || (s[i]<=65 && s[i]>=90)){
                //or 
            if(isalpha(s[i]) && isalpha(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }//////////////////////////////////// is alpha checks other char present or not
            else if (!isalpha(s[i])){ 
                i++;
            }
            else{
                j--;
            }
        }
        return s;
    }
};
int main()
{
    Solution soln;
    string s = "a-bC-dEf-ghIj";
    cout<<soln.reverseOnlyLetters(s)<<endl;
    return 0;
}