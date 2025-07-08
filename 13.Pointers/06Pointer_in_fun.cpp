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

void solve(int *ptr)
{
    *ptr = *ptr + 100; // pass by reference
    // ptr  = ptr +1;  // this will not create any change in a
    cout << *ptr << endl;
}
void solve2(int **ptr)
{
    //    ptr  = ptr +1; //this will not create any change
    //    *ptr+=10; // this will not also create any difference
    **ptr += 10; // this will change 5 to 15
}
int solve1(int b)
{
    b += 1;
    return b;
}
int main()
{
    int a = 50;
    int *ptr = &a;
    solve(ptr);
    cout << a << endl;
    int b = 40;
    solve1(b);
    cout << b << endl;

    int a1 = 5;
    int *p = &a1;
    int **q = &p;
    solve2(q);
    cout << a1 << endl;
    return 0;
}