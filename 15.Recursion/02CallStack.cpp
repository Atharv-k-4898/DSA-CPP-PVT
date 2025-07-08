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

void printCountingNto1(int n){
    if(n==0) return;  // we have to use return for base case IMP
    cout<<n<<" ";
    printCounting(n-1);
    
}
// Tree visualisation
/*
Recursive Call Tree (n = 4)

printCounting(4)
│
├──>prints 4
└──> printCounting(3)
    │
    ├──> prints 3
    └──> printCounting(2)
        │
        ├──> prints 2
        └──> printCounting(1)
            │
            ├──> prints 1
            └──> printCounting(0) // base case: returns
*/



void printCountingNto1(int n){
    if(n==0) return;  // we have to use return for base case IMP
    printCounting(n-1);
    cout<<n<<" ";
    
}

/*
Recursive Call Tree: printCountingNto1(4)

printCountingNto1(4)
│
└──> printCountingNto1(3)
    │
    └──> printCountingNto1(2)
        │
        └──> printCountingNto1(1)
            │
            └──> printCountingNto1(0) // base case: returns

Now printing while returning:
printCountingNto1(1)  ---->  prints 1
printCountingNto1(2)  ---->  prints 2
printCountingNto1(3)  ---->  prints 3
printCountingNto1(4)  ---->  prints 4

Output: 1 2 3 4
*/
int main()
{
    int n;
    cin>>n;
    printCounting(n);
    return 0;
}