#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;

// Left Shift and Right Shift

// Left Shift
// This means removing 0 from lsb and adding it to last
// e.g  0000 0000 0001 -->  0000 0000 0010
//      0000 0000 1101 -->  0000 0001 1010
// After doing left shift no is multiplied by 2
// 2<<1 is 4
// 5<<1 is 10

// if 2<<2 then multiply by 2^2 times so 2*2*2 =8
// if 7<<2 then multiply by 2^2 times so 7*2*2 =28
// if 8<<3 then 8*2*2*2=128

// Right Shift
// This means rsb is removed and 0 is added to the lsb
// e.g  0000 0000 0001 -->  0000 0000 0000
//      0000 0000 1101 -->  0000 0000 1100
// After doing this no is divided by operator no
// if 2>>1 then multiply by 2/2 times so 1
// if 100>>2 then multiply by 100/2^2 times so 25
// if 8>>3 then 8*2*2*2=128
int main()
{
    int a = 7;
    // Left shift
    cout << (7 << 1) << endl;
    cout << (7 << 2) << endl;
    cout << (7 << 3) << endl;
    cout << (7 << 4) << endl;

    // Right Shift
    cout << (5 >> 1) << endl; // divide by 2
    cout << (2 >> 1) << endl;
    cout << (25 >> 2) << endl;
    cout << (100 >> 2) << endl;
    cout << (7 >> 5) << endl;
    // Twist for 5 1111..1111011
    // then by rightshift it is 01111..1111101
    // So technically it is + ve no but comp gives correct
    cout << (-100 >> 1) << endl; // Compiler handles this
    // We know that by default int is signed
    unsigned int z = -100;
    cout << (z >> 2) << endl; // Compiler not handles this
    return 0;
}
// For Signed Case Compiler Handles and gives -50 as o/p of the Q but
// For Unsigned Case compiler not handles it ... it gives garbage value

/// Very Imp
//    cout << ( 10 << -1) << endl;
// ###### It not gives error it gives garbage value... #########