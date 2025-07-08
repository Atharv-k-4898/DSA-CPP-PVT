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

void findMin(int arr[], int n, int i, int &mini) // very imp pass by reference
{                                     // this is reference variable
    if (i >= n)
    {
        return;
    }
    if (arr[i] < mini)
    {
        mini = arr[i];
    }
    findMin(arr, n, i + 1, mini);
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 99, 39};
    int n = 7;
    int i = 0;
    int mini = INT_MAX;
    findMin(arr, n, i, mini);
    cout << mini << endl;
    return 0;
}