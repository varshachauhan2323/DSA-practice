// Problem: Rat in a Maze
// Platform: Geeks for Geeks
// Approach: Backtracking
// Idea:
// Start from (0,0) and try all possible moves (D, L, R, U).
// Move only to valid, unvisited cells with value 1.
// Mark cell as visited while exploring and unmark during backtracking.

class Solution {
public:
    vector<string> result;
    int n;

    void solve(int i, int j, vector<vector<int>>& maze,
               vector<vector<bool>>& visited, string path) {

        // If destination is reached, store the path
        if (i == n - 1 && j == n - 1) {
            result.push_back(path);
            return;
        }

        // Mark current cell as visited
        visited[i][j] = true;

        // Move Down
        if (i + 1 < n && maze[i + 1][j] == 1 && !visited[i + 1][j]) {
            solve(i + 1, j, maze, visited, path + 'D');
        }

        // Move Left
        if (j - 1 >= 0 && maze[i][j - 1] == 1 && !visited[i][j - 1]) {
            solve(i, j - 1, maze, visited, path + 'L');
        }

        // Move Right
        if (j + 1 < n && maze[i][j + 1] == 1 && !visited[i][j + 1]) {
            solve(i, j + 1, maze, visited, path + 'R');
        }

        // Move Up
        if (i - 1 >= 0 && maze[i - 1][j] == 1 && !visited[i - 1][j]) {
            solve(i - 1, j, maze, visited, path + 'U');
        }

        // Backtrack: unmark current cell
        visited[i][j] = false;
    }

    vector<string> findPath(vector<vector<int>>& maze, int N) {
        n = N;
        result.clear();

        // If starting cell is blocked
        if (maze[0][0] == 0) return result;

        vector<vector<bool>> visited(n, vector<bool>(n, false));
        solve(0, 0, maze, visited, "");

        return result;
    }
};
