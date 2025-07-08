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

//Question :
//Link :
//Approach :

//Time Complexity :
//Space Complexity :
//Dry Run ::
void printPermutationString(string& str, int i)    // copy is IMP 
{
    // base case
    if (i >= str.length())
    {
        cout << str << "  ";
        return;
    }
    // recursive case
    for (int j = i; j < str.length(); j++)
    {
        swap(str[i], str[j]);
        printPermutationString(str, i + 1);
        swap(str[i], str[j]); // backtracking case without this line all question is of recursion
    }
   //  Why we use that line?
    // because we are swapping the elements and we need to backtrack to the original string
    // so we swap back the elements to their original position
    // this is called backtracking
}
int main()
{
    string str = "abc";
    int i=0;
    printPermutationString(srr,i);
    return 0;
}