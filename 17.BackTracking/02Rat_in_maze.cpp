#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Rat in a Maze Problem
//             (Check NoteBook for more details)
bool isSafe(int newRow, int newCol, int totalRows, int totalCols, int maze[][3], vector<vector<bool>>& visited)
{
    return (newRow >= 0 && newRow < totalRows &&
            newCol >= 0 && newCol < totalCols &&
            maze[newRow][newCol] == 1 &&
            visited[newRow][newCol] == false);
}

void findPaths(int maze[][3], int totalRows, int totalCols, int currRow, int currCol,
               vector<vector<bool>>& visited, vector<string>& allPaths, const string& currentPath)
{
    if (currRow == totalRows - 1 && currCol == totalCols - 1)
    {
        allPaths.push_back(currentPath);
        return;
    }

    // Down
    if (isSafe(currRow + 1, currCol, totalRows, totalCols, maze, visited))
    {
        visited[currRow + 1][currCol] = true;
        findPaths(maze, totalRows, totalCols, currRow + 1, currCol, visited, allPaths, currentPath + 'D');
        visited[currRow + 1][currCol] = false;
    }

    // Left
    if (isSafe(currRow, currCol - 1, totalRows, totalCols, maze, visited))
    {
        visited[currRow][currCol - 1] = true;
        findPaths(maze, totalRows, totalCols, currRow, currCol - 1, visited, allPaths, currentPath + 'L');
        visited[currRow][currCol - 1] = false;
    }

    // Right
    if (isSafe(currRow, currCol + 1, totalRows, totalCols, maze, visited))
    {
        visited[currRow][currCol + 1] = true;
        findPaths(maze, totalRows, totalCols, currRow, currCol + 1, visited, allPaths, currentPath + 'R');
        visited[currRow][currCol + 1] = false;
    }

    // Up
    if (isSafe(currRow - 1, currCol, totalRows, totalCols, maze, visited))
    {
        visited[currRow - 1][currCol] = true;
        findPaths(maze, totalRows, totalCols, currRow - 1, currCol, visited, allPaths, currentPath + 'U');
        visited[currRow - 1][currCol] = false;
    }
}

int main()
{
    int maze[3][3] = {
        {1, 0, 0},
        {1, 1, 0},
        {1, 1, 1}
    };
    if(maze[0][0] == 0 || maze[2][2] == 0) {
        cout << "No path exists." << endl;
        return 0;
    }
    int totalRows = 3;
    int totalCols = 3;

    vector<vector<bool>> visited(totalRows, vector<bool>(totalCols, false));
    visited[0][0] = true;

    vector<string> allPaths;
    string currentPath = "";

    findPaths(maze, totalRows, totalCols, 0, 0, visited, allPaths, currentPath);

    for (const string& path : allPaths)
    {
        cout << path << endl;
    }
    if (allPaths.empty())
    {
        cout << "No path exists." << endl;
    }
    else
    {
        cout << "Total paths found: " << allPaths.size() << endl;
    }
    return 0;
}
