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

// Question : Wave form
// Link : #
// Approach :Change order of printing
//           for even print top to bottum
//           for odd print bottom to top

// Time Complexity :
// Space Complexity :
// Dry Run ::
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12

    // o/p 1|5|9|2|6|10|3|7|11|4|8|12
void wavePrintmatrix(vector<vector<int>> arr)
{
    int n = arr.size();
    cout << n << endl;
    int m = arr[0].size();
    cout<<m<<endl;
    for (int startCol = 0; startCol < m; startCol++)
    {
        if ((startCol & 1) == 0) // Even
        {
            for (int i = 0; i < n; i++)
            {
                cout << arr[i][startCol] << " ";
            }
        }
        else // Odd
        {
            for (int i = n - 1; i >= 0; i--)
            {
                cout << arr[i][startCol] << " ";
            }
        }
    }
}

int main()
{
    vector<vector<int>> arr
    {
        {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
    };
    wavePrintmatrix(arr);
    return 0;
}