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

// What is recursion ?
//->When a function calls itself is called Recursion
//->Jab ek bigger problem ka soln depent karta he choti & same type of problem
// f(5)= 5 and f(4) for printing we can do this

// Steps for making recursive problem
// 1)Base Condition
// 2)Recursive Condition 
// 3)Procressing (printing and all)


// Dry run
/*
Recursive Call Tree: factorial(5)

factorial(5)
│
└──> 5 * factorial(4)
    │
    └──> 4 * factorial(3)
        │
        └──> 3 * factorial(2)
            │
            └──> 2 * factorial(1)
                │
                └──> 1 * factorial(0)
                    │
                    └──> returns 1 (base case)

Returns back:
factorial(1) = 1 * 1 = 1
factorial(2) = 2 * 1 = 2
factorial(3) = 3 * 2 = 6
factorial(4) = 4 * 6 = 24
factorial(5) = 5 * 24 = 120
*/

int factorial(int n){
    cout<<"Function call for value of n is :"<<n<<endl;
    if (n==1)// base condition
    {
        return 1;
    }
    return n*factorial(n-1);
    
}
int main()
{
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}

Time complexity O(n)
Space complixity O(n)