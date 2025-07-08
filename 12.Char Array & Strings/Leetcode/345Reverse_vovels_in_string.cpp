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

//Question : Reverse vovels in the string 
//Link :https://leetcode.com/problems/reverse-vowels-of-a-string/submissions/1650778318/
//Approach :

//Time Complexity :
//Space Complexity :
//Dry Run ::

class Solution {
public:
    bool isVowel(char ch){
        ch = tolower(ch);
        return ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u';
    }
    string reverseVowels(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j){
            if(isVowel(s[i]) && isVowel(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(isVowel(s[i]) == 0){
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
    string s = "IceCreAm";
    cout<<soln.reverseVowels(s)<<endl;
    return 0;
}