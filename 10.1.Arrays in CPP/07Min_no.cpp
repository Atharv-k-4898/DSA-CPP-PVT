#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <limits.h> // for INT_MAX
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
    int min = INT_MAX;// This is best practice to find min value
    for (int i = 0; i < size; i++)
    {
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"MIN Value is : "<<min<<endl;
    return 0;
}

// Best condition is O(n) 