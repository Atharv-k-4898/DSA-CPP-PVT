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

//Question :Remove all occurences of a substring
//Link : https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/
//Approach : use of two methods find ans erase

//Time Complexity :O(n).
//Space Complexity :O(1)
//Dry Run ::
//  "d a a b c b a a b c b c "
//   0 1 2 3 4 5 6 7 8 9 10 11             pos      new s
//                                          2        d a b a a b c b c
//                                          7        d a b a b c
//                                          3        d a b
class Solution { 
public:
    string removeOccurrences(string s, string part) {
        int pos=s.find(part);
        while(pos != string::npos){// npos is the function use till we dont get pos
            s.erase(pos,part.length());
            pos=s.find(part);
        }
        return s;
    }
};
int main()
{
    Solution soln;
    string s= "daabcbaabcbc";
    string part= "abc";
    cout<<"Ans is :"<<soln.removeOccurrences(s,part);
    return 0;
}