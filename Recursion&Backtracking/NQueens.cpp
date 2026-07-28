/* Date : feb 2026 (SUnday) */
/* The n-queens puzzle:  is the problem of placing n queens on an n x n chessboard such that no two queens attack each other.

Given an integer n, return all distinct solutions to the n-queens puzzle. You may return the answer in any order. */
/*time complexity : O(n!) */

#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<string>& board, int row, int col, int n) {
    for(int j = 0; j < n; j++)  // horizontal
        if(board[row][j] == 'Q') return false;

    for(int i = 0; i < n; i++)  // vertical
        if(board[i][col] == 'Q') return false;

    for(int i = row, j = col; i >= 0 && j >= 0; i--, j--)  // left diagonal
        if(board[i][j] == 'Q') return false;

    for(int i = row, j = col; i >= 0 && j < n; i--, j++)  // right diagonal
        if(board[i][j] == 'Q') return false;

    return true;
}

void solveNQueensRecursive(vector<string>& board, int row, int n, vector<vector<string>>& solutions) {
   // base func
    if(row == n) {
        solutions.push_back(board);
        return;
    }

    for(int j = 0; j < n; j++) { 
        if(isSafe(board, row, j, n)) {
            board[row][j] = 'Q'; //places queen
            solveNQueensRecursive(board, row + 1, n, solutions); //next queen 
            board[row][j] = '.'; // backtracking "empty prev state 10"
        }
    }
}

int main() {
    int n;
    cout << "Enter the size of the board (N): ";
    cin >> n;

    vector<string> board(n, string(n, '.'));
    vector<vector<string>> solutions;

    solveNQueensRecursive(board, 0, n, solutions);

    cout << "Total solutions: " << solutions.size() << "\n\n";

    for(size_t idx = 0; idx < solutions.size(); idx++) {
        cout << "Solution " << idx + 1 << ":\n";
        for(auto &row : solutions[idx]) {
            cout << row << endl;
        }
        cout << endl;
    }

    return 0;
}