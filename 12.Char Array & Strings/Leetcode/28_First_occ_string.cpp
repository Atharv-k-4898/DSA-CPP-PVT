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

//Question :Find the Index of the First Occurrence in a String
//Link : https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/
//Approach :
                    // // 1)Sliding Window Algorithm
                    // eg  l e t s a d u
                    //     s a d            not equal
                    //       s a d          not equal 
                    //         s a d        not equal 
                    //           s a d      yes equal done

                    // outer loop i and inner j
                    // if(needle[j]==haystack[i+j]) then true else false
                                          //""i+j"""// is imp
//Time Complexity :O(N^2)
//Space Complexity :
//Dry Run ::
// haystack = "sadbutsad"
// needle="sad"                 // it occurs at pos 0 in main string

// haystack = "letsadu"
// needle = "sad"

int main()
{
    
    return 0;
}