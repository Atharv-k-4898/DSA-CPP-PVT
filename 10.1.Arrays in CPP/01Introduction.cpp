// Arrays is the data structure which is collection of contigeous memory elements.
// It is continuous memory block of same data types..
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;

int main()
{
    int arr[6];           // Here array of 6*4=24 bytes block is created
    cout << arr << endl;  // Base address of array
    cout << &arr << endl; // Base address of array
    int arr1[] = {2, 4, 6, 8, 9, 11, 23, 45, 67};
    cout << arr1[4] << endl;
    int arr2[5] = {2, 3, 5, 6, 8}; // Correct
    // int arr3[4]={1,2,3,4,5,6,7}; Error
    int n;
    cin >> n;
    int arr3[n]; //////// Bad pratice
    for (int i = 0; i < n; i++)
    {
        cin >> arr3[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr3[i];
    }
    return 0;
}

//arr[i]==arr[value of base address + index * size of datatype];