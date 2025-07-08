#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;
void count(int *arr, int size)
{
     int count0 = 0, count1 = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        else if (arr[i] == 1)
        {
            count1++;
        }
    }
    cout << "Count of 0's : " << count0 << endl;
    cout << "Count of 1's : " << count1 << endl;
}
int main()
{
    int arr[200];
    int size;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    count(arr, size);
    return 0;
}