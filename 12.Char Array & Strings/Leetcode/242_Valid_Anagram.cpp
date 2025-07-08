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

//Question : Valid Anagram
//Link :
//Approach :  1) Brute force outer loop for s and inner for t    O(n^2)
//            2) Brute force sort strings and check s==t then true..         O(nlogn)
//            3) Freq of each char must be same  so freq table same then anagram
//               How to make freq table for strings ??
//                

//Time Complexity :
//Space Complexity :
//Dry Run ::


class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        // Brute force O(n^2)
        // Freq table
        int freqTable[256]={0};// hash is created of 256 
        for(int i=0;i<s.length();i++){
            freqTable[s[i]]++;         // this will add 1 to that [i] value
        }
        for(int i=0;i<t.length();i++){
            freqTable[t[i]]--;         // this will sub 1 to that [i] value
        }
        // So for anagram freq table must be 0;
        for(int i=0;i<256;i++){
            if(freqTable[i]!=0){
                return false;
            }       
        }
        return true;
    }
};
int main()
{
    Solution soln;
    string s = "anagram";
    string t= "naaargm";
    cout<<soln.isAnagram(s,t)<<endl;
    return 0;
}