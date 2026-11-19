#include <bits/stdc++.h>
using namespace std;


class Solution {
    void solve(int i, int j, vector<vector<int>>& a, int n,
               vector<string>& ans, string move,
               vector<vector<int>>& vis, int di[], int dj[]) {

        // Base case: If we reach the destination (bottom-right cell)
        if (i == n-1 && j == n-1) {
            ans.push_back(move);  // Store the current path
            return;
        }

        // Directions: D = Down, L = Left, R = Right, U = Up
        string dir = "DLRU";

        // Try all 4 possible directions
        for (int ind = 0; ind < 4; ind++) {

            // Calculate the next row and column
            int nexti = i + di[ind];
            int nextj = j + dj[ind];

            // Check whether the next cell is:
            // 1. Inside the maze
            // 2. Not visited already
            // 3. A valid cell (value must be 1)
            if (nexti >= 0 && nextj >= 0 &&
                nexti < n && nextj < n &&
                !vis[nexti][nextj] &&
                a[nexti][nextj] == 1) {

                // Mark the current cell as visited
                vis[i][j] = 1;

                // Recursively explore the next cell
                // Add the direction to the current path
                solve(nexti, nextj, a, n, ans,
                      move + dir[ind], vis, di, dj);

                // BACKTRACKING:
                // Unmark the current cell so it can be
                // used in another possible path
                vis[i][j] = 0;
            }
        }
    }

public:
    vector<string> findPath(vector<vector<int>>& m, int n) {

        // Stores all possible valid paths
        vector<string> ans;

        // Visited matrix: initially all cells are unvisited (0)
        vector<vector<int>> vis(n, vector<int>(n, 0));

        // Direction arrays:
        // Down = (+1, 0)
        // Left = (0, -1)
        // Right = (0, +1)
        // Up = (-1, 0)
        int di[] = {+1, 0, 0, -1};
        int dj[] = {0, -1, +1, 0};

        // Start searching only if the starting cell is open
        if (m[0][0] == 1) {
            solve(0, 0, m, n, ans, "", vis, di, dj);
        }

        // Return all possible paths
        return ans;
    }
};
