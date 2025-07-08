#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;
//arr1 = {1, 2, 3, 4, 5}
//arr2 = {3, 4, 5, 6, 7}
// Find intersection of two arrays
// ans = {3, 4, 5}
int main()
{
    int n1;
    cin >> n1;
    int n2;
    cin >> n2;
    vector<int> arr1(n1);
    vector<int> arr2(n2);
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    for (int j = 0; j < n2; j++)
    {
        cin >> arr2[j];
    }
    vector<int> ans;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                ans.push_back(arr1[i]);
                arr1[i]=-1; // Marking as visited so that it won't be counted again
                break; // Move to next element in arr1
            }
        }
    }
    sort(ans.begin(), ans.end()); // Sorting the array
    // for (int k = 0; k < ans.size(); k++)
    // {
    //     cout << ans[k] << " ";
    // }
    // or
    for(auto value: ans)
    {
        cout << value << " ";
    }
    return 0;
}