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

// Question : 121. Best Time to Buy and Sell Stock
// Link :https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/1665023221/
// Approach : // Traverse the array first find the min and sub from the max

// Time Complexity :
// Space Complexity :
// Dry Run ::
//  7 1 5 3 6 6 are stocks on ith day
class Solution
{
public:
    // We have to buy when stock price is low
    // And sell on highest day stock

    void maxProfitFinder(vector<int> &prices, int i, int &minPrice, int &maxProfit)
    {
        // base
        if (i == prices.size())
            return;
        // soln for 1
        if (prices[i] < minPrice)
            minPrice = prices[i];
        int todaysProfit = prices[i] - minPrice;
        if (todaysProfit > maxProfit)
            maxProfit = todaysProfit;

        // Re
        maxProfitFinder(prices, i + 1, minPrice, maxProfit);
    }
    int maxProfit(vector<int> &prices)
    {
        int minPrice = INT_MAX;
        int maxProfit = INT_MIN;
        maxProfitFinder(prices, 0, minPrice, maxProfit);
        return maxProfit;
    }
};

int main()
{
    Solution soln;
    vector<int> arr{7, 1, 4, 5, 6, 3, 4};
    cout << soln.maxProfit(arr);
    return 0;
}