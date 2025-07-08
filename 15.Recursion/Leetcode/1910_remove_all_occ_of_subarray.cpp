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

//Question : Leetcode 1910 Remove all occ of Subarray
//Link :
//Approach :

//Time Complexity :O(n^2)
//Space Complexity :O(n/M)
//Dry Run ::


class Solution {
public:
// Using recursion
    void removeOcc(string&s,string&part){
        int pos=s.find(part);   // gives pos of the part
        if(pos!=string::npos) {
      // till we dont get pos   
        // So we have to make 2 strings left and right 
          string left=s.substr(0,pos);
          string right=s.substr(pos+part.size(),s.size());
          s=left+right;
          removeOcc(s,part);
        }               
        else{
            // base case 
            // all the occurences of the part has been removed
            return;
        }
    }
    string removeOccurrences(string s, string part) {
        removeOcc(s,part);
        return s;
    }
};
int main()
{
    
    return 0;
}