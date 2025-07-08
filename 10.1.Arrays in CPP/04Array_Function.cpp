#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;// Array is always Pass by reference actual array will also be changed
void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void inc(int arr[], int size)
{
    arr[0] = arr[0] + 10;
    printArr(arr, size);
}

int main()
{
    int arr[2] = {6, 7};
    int size = 2;
    inc(arr, size); // frist element of array will be changed
    printArr(arr, size);
    return 0;
}
// When we pass array to function then it is passed by reference.//
// Always pass size of arrays in function program....