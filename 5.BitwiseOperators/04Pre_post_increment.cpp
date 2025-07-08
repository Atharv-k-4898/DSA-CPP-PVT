#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;
// Preincrement   ++a     // First increment then use
// Predecrement   --a     // First increment then use
// Postincrement  a++     // First use then use it
// Postdecrement  a--     // First use then use it
int main()
{


    // Pre increment
    int a = 5;
    ++a;
    cout << a << endl;
    a = 5;
    cout << (++a) << endl;


    // Pre decrement
    a = 5;
    --a;
    cout << a << endl;
    a = 5;
    cout << (--a) << endl;


    // Post increment
    a = 5;
    a++;// pahila vaparle mag increment so nantar vicharla tar 6 asnar as nantar increment zala ahe 
    cout << a << endl;
    a = 5;
    cout << (a++) << endl;// Ethe direct a++ vicharla ahr not a so 5 rhanar
    

    // Post decrement
    a = 5;
    a--;
    cout << a << endl;
    a = 5;
    cout << (a--) << endl;
    return 0;
}