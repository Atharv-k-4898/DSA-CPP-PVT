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
int main()
{
    // creation of map
    map<int,char>meraMap;
    meraMap[0]='a';
    meraMap[1]='t';
    meraMap[23]='h';
    meraMap[25]='a';
    //printing of map
    cout<<meraMap[0]<<endl;
    cout<<meraMap[1]<<endl;
    cout<<meraMap[28]<<endl;  // no allocation so empty
    cout<<meraMap[23]<<endl;
    cout<<meraMap[12]<<endl;  // no allocation so empty


    // For this ordered map insertion / deletion complexity is O(N)

    // For unordered Map insertion / deletion complexity is O(1)
    return 0;
}