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
    // Copy pointer  ''Not double pointer'' 
    int a= 5;
    int *p = &a;
    int *q = p;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<q<<endl;
    cout<<*q<<endl;
    //      address  value
    // a     104      5
    // p     205      104
    // q     206      104  // means both p and q points to a
    // If we change anyone of a q p then all will change fixxxx


    // Double Pointer
    cout<<"Double Pointer"<<endl;
    int b =30;
    int *p1= &b;
    int **q1= &p1;
    cout<<&p1<<endl;
    cout<<&q1<<endl;
    cout<<*p1<<endl;// Pointer p refering to b
    cout<<**q1<<endl; //Double pointer
    return 0;
}