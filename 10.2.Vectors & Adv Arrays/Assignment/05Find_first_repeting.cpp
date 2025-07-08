#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;
// Find first repeting element
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << "Repeating element is: " << arr[i] << endl;
                cout << "First repeating element is: " << arr[i] << " at index: " << i << endl;
            }
        }
    }

    return 0;
}

// This is not optimized soln not taking in gfg !!

// By binary seach in sreching operations