#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;
// Eg array is        10 20 30 40 50 60 70 80 
// then o/p will be   10 80 20 70 30 60 50 60
// 2 pointer approach 
int main()
{
    int arr[100];
    int n;
    int i=0,j=0;
    cin>>n;
    for (i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for(i=0,j=n-1;i<=j;i++,j--){
        cout<<arr[i]<<" "<<arr[j]<<" ";
    }
    return 0;
}