#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;
// Find unique element which occurs only once..
int findUnique(vector<int> arr)
{
    int ans = 0;// No effect by 0..
    for (int i = 0; i < arr.size(); i++)
    {
        ans ^= arr[i];
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    cout << findUnique(arr);
    /// Concept make xor with all elements.
    return 0;
}