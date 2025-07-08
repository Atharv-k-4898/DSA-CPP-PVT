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

// Subsequence in the string is the short string in the main string
// E.g abc   {-},{a}{b}{c}{ab}{bc}{abc}{ac}

// This pattern is called include exclude method 
// Include means " " + "x"  = concat both so ans is "x"
// Exclude is " " + "x" = take as it is " "
 
    //                   "" 
    //                /      \                  <- start (empty string)
    //               /        \
    //           "a"            ""              <- include 'a' / exclude 'a'
    //          /   \         /     \
    //      "ab"     "a"    "b"       ""        <- include/exclude 'b'
    //     /   \     / \    / \        / \
    // "abc" "ab" "ac" "a" "bc" "b"  "c" ""    <- include/exclude 'c'

///  i baher aa gaya is base case 
void printSubsequence(string str,string op,int i){
    if (i>=str.size())
    {
        cout<<op<<endl;
        return;
    }
    // exclude
    printSubsequence(str,op,i+1);
    // include
    op.push_back(str[i]);    
    printSubsequence(str,op,i+1);
}// we can also pass the vector but with address
int main()
{
    string str="abc";
    string op ="";
    int i=0;
    printSubsequence(str,op,i);
    return 0;
}