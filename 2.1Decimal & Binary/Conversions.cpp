#include <iostream>
#include <cmath>
using namespace std;
int decimalTobinary1(int n)
{
    int binaryno = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 2;
        binaryno = bit * pow(10, i++) + binaryno;
        n /= 2;
    }
    return binaryno;
}
int decimalTobinary2(int n)
{
    int i = 0;
    int binaryno = 0;
    while (n > 0)
    {
        int bit = (n & 1);
        binaryno = bit * pow(10, i++) + binaryno;
        n = n >> 1;
    }
    return binaryno;
}
int binaryToDecimal(int n)
{
    int decimal = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 10;
        decimal += bit * pow(2, i++);
        n /= 10;
    }
    return decimal;
}
int main()
{
    int n;
    cin >> n;
    // int binary = decimalTobinary1(n);
    // int binary = decimalTobinary2(n);
    // cout << binary << endl;
    int decimal = binaryToDecimal(n);
    cout << decimal << endl;
    return 0;
}