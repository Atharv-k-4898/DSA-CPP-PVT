#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;
int fact(int n){
    int fact=1;
    for(int i=1;i<n;i++){
        fact*=i;
    }
    return fact;
}
int main()
{
    int no;
    cin>>no;
    cout<<fact(no)<<endl;
    
    return 0;
}