#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <string>
#include <map>
#include <set>
#include <limits.h>
using namespace std;
    
bool isSorted(int arr[], int n, int i) // very imp pass by reference
{
    if (i == n)
    {
        return true;
    }
    if (arr[i] > arr[i+1])
    {
        return false;
    } 
    return isSorted(arr, n, i + 1);
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 99, 100};
    int n = 7;
    int i = 0;
    if(isSorted(arr, n, i)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}