#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    // Recursive function to place queens column by column
    void solve(int col, vector<string>& board, vector<vector<string>>& ans,
               vector<int>& leftRow,
               vector<int>& upperDiagonal,
               vector<int>& lowerDiagonal, int n) {

        // Base case: All queens have been placed successfully
        if (col == n) {
            ans.push_back(board);
            return;
        }

        // Try placing a queen in every row of the current column
        for (int row = 0; row < n; row++) {

            // Check whether the current position is safe
            if (leftRow[row] == 0 &&
                lowerDiagonal[row + col] == 0 &&
                upperDiagonal[n - 1 + col - row] == 0) {

                // Place the queen
                board[row][col] = 'Q';

                // Mark the row and diagonals as occupied
                leftRow[row] = 1;
                lowerDiagonal[row + col] = 1;
                upperDiagonal[n - 1 + col - row] = 1;

                // Recursively place the next queen in the next column
                solve(col + 1, board, ans, leftRow,
                      upperDiagonal, lowerDiagonal, n);

                // BACKTRACKING: Remove the queen and reset the positions
                board[row][col] = '.';

                leftRow[row] = 0;
                lowerDiagonal[row + col] = 0;
                upperDiagonal[n - 1 + col - row] = 0;
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {

        // Stores all valid N-Queens arrangements
        vector<vector<string>> ans;

        // Creates an empty chessboard of size n x n
        vector<string> board(n);
        string s(n, '.');

        // Initialize every row with empty cells
        for (int i = 0; i < n; i++) {
            board[i] = s;
        }

        // Arrays to track occupied rows and diagonals
        vector<int> leftRow(n, 0);
        vector<int> upperDiagonal(2 * n - 1, 0);
        vector<int> lowerDiagonal(2 * n - 1, 0);

        // Start placing queens from column 0
        solve(0, board, ans, leftRow,
              upperDiagonal, lowerDiagonal, n);

        return ans;
    }
};
