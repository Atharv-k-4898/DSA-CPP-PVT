#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;

int main()
{
    // UNBELIEVABLE BEHAVIOUR OF C++
    int a =10;
    cout<<(++a)*(a++)<<endl;
    cout<<(a++)*(++a)<<endl;
    a = 10;
    cout << "First: " << (++a) << " * " << (a++) << " = " << ((++a) * (a++)) << endl;
    return 0;
}