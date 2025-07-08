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
bool isSafe(const vector<vector<int>>& board, int row, int col, int n) {
    // Check this row on left side
    for (int i = 0; i < col; i++) {
        if (board[row][i] == 1) return false;
    }
    // Check upper diagonal on left side
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1) return false;
    }
    // Check lower diagonal on left side
    for (int i = row, j = col; j >= 0 && i < n; i++, j--) {
        if (board[i][j] == 1) return false;
    }
    return true;
}
void printBoard(const vector<vector<int>>& board) {
    for (const auto& row : board) {
        for (int cell : row) {
            cout << (cell ? "Q  " : ".  ");
        }
        cout << endl;
    }
    cout << endl;
}
void solve(vector<vector<int>>& board, int col, int n) {
    // Base case: If all queens are placed
    if(col>= n) {
        printBoard(board);
        return;
    }
    // ek case tum karo baki recursion sambhal lega
    for(int row=0;row<n;row++){
        if(isSafe(board, row, col, n)) {
            // place queen
            board[row][col] = 1;
            // call for next column
            solve(board, col + 1, n);
            // backtrack
            board[row][col] = 0; // remove queen
        }
    }
}
int main()
{
    int n=3;
    vector<vector<int>> board(n, vector<int>(n, 0));
    int col = 0;
    solve(board, col, n);
    return 0;
}