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

void solve(int* &p){// this is pass by reference
    p+=1;
}
void solve1(int* p){// this is pass by value
    p+=1;
}
// | `void solve(int* &p)`             | `void solve(int* p)`                                              |
// | --------------------------------- | ----------------------------------------------------------------- |
// | Reference to pointer              | Copy of pointer (by value)                                        |
// | ✅ Yes                            | ❌ No                                                              |
// | You want to modify pointer itself | You want to modify what pointer points to, not the pointer itself |

int main()
{
    int a = 5;
    // creating a reference variable
    int &b = a;

    /// """" Same memory locations different names"""""
    cout<<a<<endl;
    cout<<b<<endl;

    a++;
    cout<<a<<endl;
    b++;
    cout<<b<<endl;
    cout<<a<<endl;
    /// Whatever we change in a will change in b and vice versa

    // Why we ue se reference variabe 
    // Pointers are hard to understand so 
    // Rediability is good 
    // Used for pass by reference concept

    int a1=5;
    int *p=&a;
    cout<<" Pass by value"<<endl;
    cout<<"Before   "<<p<<endl;
    solve1(p);
    cout<<"After    "<<p<<endl;

    cout<<" Pass by reference"<<endl;
    cout<<"Before   "<<p<<endl;
    solve(p);
    cout<<"After    "<<p<<endl;
    return 0;
}