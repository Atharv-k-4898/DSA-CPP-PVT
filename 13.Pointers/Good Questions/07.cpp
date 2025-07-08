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

// Question :
// Link :
// Approach :

// Time Complexity :
// Space Complexity :
// Dry Run ::

int f(int x, int *py, int **ppz)
{
    //x=4,py=4,ppz=4
    int y, z;
    **ppz += 1;
    //x=4,py=4,ppz=5.y=0,z=0
    z = **ppz;
    //x=4,py=4,ppz=5.y=0,z=5
    *py += 2;
    //x=4,py=6,ppz=5.y=0,z=5
    y = *py;
    //x=4,py=6,ppz=5.y=7,z=5      here for all c will also change
    x += 3;
    //x=7,py=6,ppz=5.y=7,z=5
    return x + y + z;// 7+ 7 + 5
}

int main()
{
    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;
    cout << f(c, b, a);
    return 0;
}