#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;
void prime1toN(int n){
    for(int i=2;i<n;i++){
        if(i%2!=0){
            cout<<i<<endl;
        }
    }
}
int main()
{
    int no;
    cin>>no;
    prime1toN(no);
    return 0;
}