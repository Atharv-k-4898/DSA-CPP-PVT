#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;
void areaOfcircle(float radius){
    cout<<2*3.14*radius<<endl;
}
int main()
{
    float rad;
    cin>>rad;
    areaOfcircle(rad);
    return 0;
}