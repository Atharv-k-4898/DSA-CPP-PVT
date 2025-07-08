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
    int *ptr=&a; // let loc id 300
    cout<<a<<endl;
    ptr+=1;
    cout<<*ptr<<endl;  // this will print garbage value at location 304
    return 0;
}