#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <limits.h>
#include <string>
using namespace std;
// ✦ Question         :
// ✦ Question Link    :
// ✦ Approach         :
// ✦ Time Complexity  :
// ✦ Space Complexity :
// ✦ Dry Run          :
void charCount(string &w1)
{
    unordered_map<char, int> m1;
    int n = w1.size();
    for (int i = 0; i < n; i++)
    {
        if (m1.count(w1[i]))
            m1[w1[i]]++;
        else
            m1[w1[i]] = 1;
    }
}
int main()
{

    string w1 = "race";
    string w2 = "care";
    charCount(w1);
    charCount(w2);
    // Cheack if w1 and w2 are anagrams
    unordered_map<char, int> m1, m2;
    for (char c : w1)
    {
        m1[c]++;
    }
    for (char c : w2)
    {
        m2[c]++;
    }
    if (m1 == m2)
        cout << "The strings are anagrams." << endl;
    else
        cout << "The strings are not anagrams." << endl;
    return 0;
}