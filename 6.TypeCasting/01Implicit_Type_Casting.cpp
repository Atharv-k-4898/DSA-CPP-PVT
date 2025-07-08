#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;

int main()
{
    // Implicit means compiler itself does the conversion
    // e.g 1.5 + 2.5 = 4.0
    int a = 5;
    float b = 2.5;
    // Implicit conversion
    cout<<(a+b)<<endl; // 7.5
    // Here 5 is converted to 5.00
    return 0;
}