#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;
// Set bit means to make a mask od that dig place to 1 and find the decimal no of that binary no
int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int mask = 1 << k;
    int ans = n | mask;
    cout << ans << endl;
    return 0;
}


// comming more