#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;
void digits(int n){
    int dig=0;
    while(n>0){
        dig=n%10;
        cout<<dig<<endl;
        n/=10;
    }
}
int main()
{
    int no;
    cin>>no;
    digits(no);
    return 0;
}