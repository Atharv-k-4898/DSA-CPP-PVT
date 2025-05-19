#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;

int main()
{
    int a = 2, b = 3;
    // 2 is 0000010
    // 3 is 0000011
    // ans is 2
    cout << (a & b) << endl; // 2
    cout << (1 ^ 1) << endl; // XOR for 1 ^ 1 is 0
    cout << (1 | 1) << endl;
    cout << (~1) << endl; // -2 comes 000001 not is 111110 so 2's complement is -1
    cout << (5 ^ 10) << endl;
    // h/w
    cout << (~(1)) << endl;
    cout << ~1 << endl;
    //cout < ~(1) << endl;
    return 0;
}