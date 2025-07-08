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
    int *ptr=0;
    int a=10;
    *ptr=a; // we havent given address direct we are allocation
    cout<<*ptr<<endl;// this gives run time error
    //[1]    6090 segmentation fault (core dumped)  ./output
    return 0;
}