#include <unordered_map>
using namespace std;
// here we created a table having entries of all elements
// int    int 
// 1       1
// 5       2
// 3       2
// 4       1
// 6       1
int firstRepeated(int arr[], int n) {
    unordered_map<int, int> hash;

    for(int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    for(int i = 0; i < n; i++) {
        if(hash[arr[i]] > 1)
            return i + 1;
    }

    return -1;
}


/// time complexity is O(n)
/// space complexity is O(n)