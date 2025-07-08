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
// Question: Time Complexity and Space Complexity
// TC is the measure of the amount of time an algorithm takes to complete as a function of the length of the input.
// SC is the measure of the amount of memory space an algorithm uses as a function of the length of the input.


// Basics
// 1) if() it takes O(1) time and space
// 2) for loop with n iterations takes O(n) time and space
// 3) while loop with n iterations takes O(n) time and space
// 4) nested for loop with n iterations takes O(n^2) time and space
// 5) nested while loop with n iterations takes O(n^2) time and space  


// a=5 and b=6 space complexity is O(1)
// int arr[n] it makes some space complexity depending on the value of n, so it is O(n)

//1) Counting with recursion TC is O(n) and SC is O(n)
//2) Factorial with recursion TC is O(n) and SC is O(n)
//3) Power with recursion TC is O(n) and SC is O(n)
//4) Maximum in array with recursion TC is O(n) and SC is O(n)
//5) Minimum in array with recursion TC is O(n) and SC is O(n)


// // How O(N) for all
// // Let Code is
// void counting(int n) {
//     if (n == 0) return;           // This needs O(1) time and space
//     counting(n - 1);
//     cout << n << " ";             // This needs O(1) time and space
// }
// // Calls ae for 
// counting(5);
// counting(4);
// counting(3);
// counting(2);
// counting(1);
// counting(0);
 
// TC is = Total no of calls * time taken for each call
// // TC = (k1+k2) * O(n+1) == O(n)

// // Space Complexity

// See depth only one branch calls from 5 to 0 so n calls are made
// So SC = O(n) for the call stack


// Now for complex trees
// 6) Fibonacci with recursion TC is O(2^n) and SC is O(n)
// Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)

// Tree is like this
// //                 5
// //          /           \
// //         4             3
// //        / \           / \
// //       3   2         2   1
// //      / \   / \     / \
// //     2   1 1  0    1   0
// //    / \
// //   1   0

// One call takes O(k)
// Trend of nodes is 1 2 4 8 16 32 64 128
// So total no of calls is 2^n - 1
// So TC = O(2^n) * O(k) == O(k * 2^n) == O(2^n)
// Space Complexity is O(n) for the call stack as we are going down to n levels in the tree

// For binary Search TC is O(log n) and SC is O(1)


// Merge Sort TC is O(n log n) and SC is O(n)


// Permutation of String Using Backtracking
//             abc
//       /      |      \
//      abc     bac     cba
//     / \      / \       / \
//   abc  acb  bac  bca  cba  ca
// TC is O(n!) because we are generating all permutations of the string
// SC is O(n) because we are using a call stack of size n




// Rat in a Maze
// Rows is n and columns is m
// For 1 cell we have 4 options to go
// Up, Down, Left, Right
// So TC is O(4^(n*m)) because we are exploring all possible paths in the maze
// SC is O(n*m) because we are using a call stack of size n*m



// N-Queens Problem
// We have n queens and n rows and n columns
// We can place a queen in any cell of the board
// So we have n options for the first queen, n-1 options for the second queen
// and so on
// So TC is O(n!) because we are generating all possible arrangements of the queens
// SC is O(n) because we are using a call stack of size n

// Enter Phone Number using Letters
// We have 10 digits and each digit can have 3 or 4 letters
// So we have 3^n or 4^n options for n digits
// So TC is O(3^n) or O(4^n) depending on
// the number of letters for each digit
// SC is O(n) because we are using a call stack of size n
