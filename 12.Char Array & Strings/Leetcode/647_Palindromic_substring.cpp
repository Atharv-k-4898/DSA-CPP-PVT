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

//Question :Palindrommmic Substring
//Link :
//Approach :

//Time Complexity :
//Space Complexity :
//Dry Run ::


class Solution {
public:
    int expandAroundIndex(string s,int i,int j){
        int count=0;
        while(i>=0 && j<=s.length() && s[i]==s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int count=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            //odd
            int oddKaAns=expandAroundIndex(s,i,i);
            count+=oddKaAns;//O(N^2)
            //even
            int evenKaAns=expandAroundIndex(s,i,i+1);
            count+=evenKaAns;
        }
        return count;
    }
};
int main()
{
    Solution soln;
    string s = "aaa";
    cout<<soln.countSubstrings(s);
    return 0;
}/////////////////////////////// very very very imp///////// INTERVIEW