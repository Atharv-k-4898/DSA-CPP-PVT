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

//Question : Isomorphic Strings
//Link : https://leetcode.com/problems/isomorphic-strings/submissions/1651290188/
//Approach :

//Time Complexity :
//Space Complexity :
//Dry Run ::

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hash[256]={0};
        bool isCharMapped[256]={0};
        for(int i=0; i<s.size();i++){
            if(hash[s[i]]== 0 && isCharMapped[t[i]]==0){
                hash[s[i]]=t[i];
                isCharMapped[t[i]]=true;
            }
        }
        for(int i=0;i<s.size();i++){
            if(char(hash[s[i]]) !=t[i] ){
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution sol;
    string s = "egg";
    string t = "add";
    cout<<sol.isIsomorphic(s,t)<<endl;
    return 0;
}