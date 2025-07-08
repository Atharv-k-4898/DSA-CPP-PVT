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

// Question :
// Link :
// Approach :

// Time Complexity :O(nlog(logn))
// Space Complexity :
// Dry Run ::

// // 1) First optimization is we start while loop by n * 2
// eg  2 -> 4 6 8 10 ...
//     3 -> 6 12 18 ...
//     4 -> 8 16 24 ....

// But  6 8 .. is already included in 2 so they should be optimized

// So j = i * i  and not j = i * 2

// // 2) Second Optimization is as we have done inner loop optimization there should be outer loop
      // So ve know if the no is 7 then 7 * 7 = 49 is > than 25 
    //   so outer loop is till i*i<=n

class Solution
{
public:
    void countAndPrintPrimes(int n)
    {
        if (n <= 2) {
            cout << "No prime numbers less than " << n << endl;
            return;
        }

        vector<bool> prime(n, true);
        prime[0] = prime[1] = false;

        for (int i = 2; i * i < n; i++)// secont optimization
        {
            if (prime[i])
            {
                for (int j = i * i; j < n; j += i)// first  optimization
                {
                    prime[j] = false;
                }
            }
        }

        // Count and print primes
        int count = 0;
        int sum = 0;
        cout << "Prime numbers less than " << n << " are:\n";
        for (int i = 2; i < n; i++)
        {
            if (prime[i])
            {
                cout << i << " ";
                sum+=i;
                count++;
            }
        }
        cout << "\nTotal number of primes: " << count << endl;
        cout << "\nTotal sum is " << sum << endl;
    }
};

int main()
{
    Solution soln;
    int n;
    cin >> n;
    soln.countAndPrintPrimes(n);
    return 0;
}
