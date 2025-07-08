#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;
// Missing elements with duplicates
void findMissing(vector<int> &arr, int n)
{
    int i = 0;
    while (i < n)
    {
        int index = arr[i] - 1;
        if (arr[i] >= 1 && arr[i] <= n && arr[i] != arr[index])
        {
            swap(arr[i], arr[index]);
        }
        else
        {
            i++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i + 1)
        {
            cout <<"Missing is/are : "<< i + 1 << " ";
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    findMissing(arr, n);
    cout << endl;
    return 0;
}


// time complexity is O(N)
// space complexity is O(1)