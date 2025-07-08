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
    int a[]={1,2,3,4};
    int *ptr=a++;  // error
    // a is called constant pointer it dont change so a=a+1 is not allowed
    // But we can traverse and find element *(a+1) 
    cout<<*ptr<<endl;
    return 0;
}