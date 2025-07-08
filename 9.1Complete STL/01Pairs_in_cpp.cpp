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
    // Method 1
    pair<int, int> p1{1,2};
    pair<int, int> p2{3, 4};
    cout << "Pair 1: (" << p1.first << ", " << p1.second << ")\n";
    cout << "Pair 2: (" << p2.first << ", " << p2.second << ")\n";

    // Method 2
    pair<int,int>arr[3] = { {1, 2}, {3, 4}, {5, 6} };
    cout << "Array of pairs:\n";
    // For single
    cout<< "First: " << arr[0].first << ", Second: " << arr[0].second << "\n";
    // For all
    for (int i = 0; i < 3; i++) {
        cout << "Pair " << i + 1 << ": (" << arr[i].first
                << ", " << arr[i].second << ")\n";
    }

    // Method 3
    pair<int,pair<int,int>> p3 = {1, {2, 3}};
    cout << "Nested Pair: (" << p3.first << ", ("
            << p3.second.first << ", " << p3.second.second << "))\n";
    // For 3 element we can find like this
    cout<<"# element"<<p3.second.second<<endl;
    return 0;
}