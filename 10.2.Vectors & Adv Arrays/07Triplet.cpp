#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;
// Example: arr = {4,5,3,6,2,1}  / 6
// Key is 9
int main()
{
    int n1, key = 0;
    cout << "Enter size of array: ";
    cin >> n1;
    cout << "Enter key: ";
    cin >> key;
    vector<int> arr1(n1);
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < arr1.size(); i++)
    {
        for (int j = i + 1; j < arr1.size(); j++)
        {
            for (int k = j + 1; k < arr1.size(); k++)
            {
                if (arr1[i] + arr1[j] + arr1[k] == key)
                {
                    cout << "Triplet found: (" << arr1[i] << "," << arr1[j] << "," << arr1[k] << ")" << endl;
                    break; // Move to next element in arr1
                }
            }
        }
    }

    return 0;
}