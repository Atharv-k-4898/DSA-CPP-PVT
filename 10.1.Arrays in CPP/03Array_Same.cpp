#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // //make arr 1 full
    // for (int i = 0; i < n; i++)
    // {
    //     arr[i]=1;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<"  ";
    // }
    ////////// Or using std::fill function
    fill(arr, arr + n, 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    return 0;
}