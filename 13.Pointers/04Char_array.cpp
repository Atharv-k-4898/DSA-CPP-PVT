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
    // no diff betn ch and &ch
    char ch[] = "AtharvKulkarni";
    char *c = ch; // char *c=&ch[]; same
    // cout<<c<<endl;  // Behaviour of cout is diff for int array and char array
    //  cout arr return a base value of the array
    //  cout c returns whole char array

    cout << ch << endl;        // Imp   //returns whole string / ch array
    cout << &ch << endl;       // returns base address of ch array
    cout << ch[0] << endl;     // returns value at base address
    cout << &c << endl;        // returns address of c pointer
    cout << *c << endl;        // returns base value of ch array
    cout << *(ch + 2) << endl; // returns base value + 2
    cout << c + 5 << endl;     // Imp   //returns all +x values from base address
    cout << c + 10 << endl;
    cout << c << endl; // Imp   //returns whole string or ch char array
    
    // Imp
    char chr='k';
    char *cptr=&chr;
    cout<<cptr<<endl;/// Prints garbage valuee till we vont get null char
    // becoz it is one value               
    return 0;
}