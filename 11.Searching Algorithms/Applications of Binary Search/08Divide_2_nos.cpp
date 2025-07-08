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

//Question :Divide 2 nos using dividend and divisor
//Link :#
//Approach :  dividend=10  divisor is 2 quo = 5 rem =0
  // Search space is 0 to 10 
  //     dividend = divisor * quo + rem
  // leave rem dividend>=quo*divisor 

//Time Complexity :
//Space Complexity :
//Dry Run ::0 to 22  given divisor 7 
// mid(quo)    quo*divisor   s  e
// 11          11*7=77>22    0  mid-1=10
// 5            5*7=35>22    0  mid-1=4
// 2            2*7=14<22    3   4
// 3            3*7=21<22    4   4     exit of loop



int main()
{
    int dividend,divisor;
    cin>>dividend>>divisor;
    int st=0;
    int end=abs(dividend);
    int mid = st+(end-st)/2;
    int ans=-1;
    int x=1;
    while(st<=end){
        if(abs(mid*divisor)==abs(dividend)){
            ans=mid;
        }
        else if(abs(mid*divisor)>abs(dividend)){
            end=mid-1;
        }
        else{
            st=mid+1;
            x=mid;
        }
        mid = st+(end-st)/2;
    }
    if((divisor<0 && dividend<0)||(divisor>0 && dividend>0)){
        x=x;
    }
    else{
        x=-x;
    }
    cout<<x<<endl;
    return 0;
}