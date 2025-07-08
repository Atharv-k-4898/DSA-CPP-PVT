#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;
// Eg array is        10 20 30 40 50 60 70 80
// then o/p will be   80 70 60 50 40 30 20 10
int main()
{
    int arr[100];
    int n;
    int i = 0, j = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0, j = n -1; i < j; i++, j--)
    {
        swap(arr[i], arr[j]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }

    return 0;
}