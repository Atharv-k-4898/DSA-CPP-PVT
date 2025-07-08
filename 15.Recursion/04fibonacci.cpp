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

/*
                         fibo(5)                                c time
                         /     \
                    fibo(4)   fibo(3)                          2c time
                    /    \     /    \
              fibo(3)  fibo(2) fibo(2) fibo(1)                 4c time
              /    \     |      |       |
         fibo(2) fibo(1)  1      1       0                     8c time
           |       |
           1       0

Return values:
fibo(1) = 0
fibo(2) = 1
→ fibo(3) = 1 + 0 = 1
→ fibo(4) = fibo(3) + fibo(2) = 1 + 1 = 2
→ fibo(5) = fibo(4) + fibo(3) = 2 + 1 = 3
*/


int fibo(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    return fibo(n-1)+fibo(n-2);
}

int main()
{
    int n;
    cin>>n;
    cout<<"The term is "<<n<<" and it's value is "<<fibo(n);
    return 0;
}

// Time Complixity till (2^n-1)c time  so time comp is O(2^n)
// So wrost method 
//Space Complixity
// So for 5 as depth it will go till 5 O(n)