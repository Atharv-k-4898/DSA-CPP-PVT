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
    int ***r,**q,*p,i=8;
    p=&i;
    (*p)++;  //i=9
    q=&p; // i=9,p=9,q=9
    (**q)++; //i=10,p=10,q=10
    r=&q; //i=10,p=10,q=10,r=10
    cout<<i<<" "<<*p<<" "<<**q<<" "<<***r;
    return 0;
}