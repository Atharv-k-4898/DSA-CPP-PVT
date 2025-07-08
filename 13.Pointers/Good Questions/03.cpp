
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
    int a=10;
    int *ptr=&a; // let loc id 400
    cout<<ptr<<endl;
    cout<<a<<endl;
    ptr+=3;
    cout<<ptr<<endl; // then after the operation address will be 412 and not 403


    // For double + 3 it will be 400 + 3*8 = 400 + 24 = 424
    return 0;
}