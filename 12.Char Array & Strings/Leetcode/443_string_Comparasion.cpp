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

//Question :
//Link :
//Approach : 1) 2 pointer approach 
                if s[i] == previous then cnt++
                else s[idx]=prev

//Time Complexity :
//Space Complexity :
//Dry Run ::
// a a b b c d e e 
// ^ ^
// | |
// p i
// cnt=1 a==a so cnt =2
// a a b b c d e e 
//   ^ ^
//   | |
//   p i
// cnt=2 not eq so put a at oth pos and 2 ath p pos  and so on..
// a a b b c d e e 
// a 2 b 2 c d e 2


//a a b b c c c  cnt =1
//a 2 b 2 c 3

// IF a char > 10 2 digit then  find rever
int main()
{
    
    return 0;
}