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


int main()
{
    vector<int> v = {1, 2, 3, 4, 5,6,7,8,9,10};
    int n= v.size();
    int sum = 0;
    int fourSomeKey;
    cout << "Enter the key for four elements sum: ";
    cin >> fourSomeKey;
    for(int i = 0; i < n - 3; i++)
    {
        for (int j = i + 1; j < n - 2; j++)
        {
            for (int k = j + 1; k < n - 1; k++)
            {
                for (int l = k + 1; l < n; l++)
                {
                    sum = v[i] + v[j] + v[k] + v[l];
                    if (sum == fourSomeKey)
                    {
                        cout << "Four elements found: (" << v[i] << ", " << v[j] << ", " << v[k] << ", " << v[l] << ")" << endl;
                    }
                }
            }
        }
    }
    if (sum != fourSomeKey)
    {
        cout << "No four elements found with the sum equal to " << fourSomeKey <<       
    endl;
    }
    else
    {
        cout << "Total four elements found with the sum equal to " << fourSomeKey << ": " << sum << endl;
    }
    cout << "End of program." << endl;
    // Note: The above code has a time complexity of O(n^4) which is not efficient for large arrays.
    // For larger datasets, consider using hashing or sorting techniques to optimize the search for quadruples.
    // This is a brute force approach and is not recommended for large datasets.
    // The code is designed to find all unique quadruples in the vector that sum up to
    return 0;
}