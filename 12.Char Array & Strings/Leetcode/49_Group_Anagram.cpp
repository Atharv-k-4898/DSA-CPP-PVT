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

//Question : Group Anagram
// Input: strs = ["eat","tea","tan","ate","nat","bat"]
// Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
//Link :
//Approach :
/////////  OP App 1) Sort indivisual strings and then check for ==
        // For this create a map 
//Time Complexity :
//Space Complexity :
//Dry Run ::
// ["eat","tea","tan","ate","nat","bat"]
// ["aet","aet","ant","aet","ant","abt"]
 //   1     1     2     1     2     3  
 class Solution {
public:
    std::array<int, 256> hash(string s) {
        std::array<int, 256> hash = {0};
        for (int i = 0; i < s.size(); i++) {
            hash[s[i]]++;
        }
        return hash;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // map<string,vector<string> > mp;
        // for(auto str : strs){
        //     string s = str;
        //     sort(s.begin(),s.end());
        //     mp[s].push_back(str);// Time complexity is O(nklogk)
        // }
        // vector<vector<string>>ans;
        // for(auto it = mp.begin(); it!=mp.end();it++){
        //     ans.push_back(it->second);
        // }
        // return ans;

        // m2
        // make hash for the indvisual strings and check
        // std::array<int,256>hash={0}        ===      int hash[256]={0};
        map<std::array<int, 256>, vector<string>> mp;
        for (auto str : strs) {
            mp[hash(str)].push_back(str); // Time complexity is O(nk)
        }
        vector<vector<string>> ans;
        for (auto it = mp.begin(); it != mp.end(); it++) {
            ans.push_back(it->second);
        }
        return ans;
    }
};   
int main()
{
    
    return 0;
}