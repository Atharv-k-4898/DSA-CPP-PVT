#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <limits.h> // for INT_MIN
using namespace std;

int main()
{
    int arr[100];
    int size;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    int max = INT_MIN;// This is best practice to find max value
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Max Value is : "<<max<<endl;
    return 0;
}