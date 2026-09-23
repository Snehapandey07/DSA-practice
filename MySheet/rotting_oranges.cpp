/*Date: 23.09.2026
Every 1 minute, a rotten orange makes the up, down, left,
and right neighboring fresh oranges rotten.
Find the minimum number of minutes needed to rot all fresh oranges.
If some fresh orange can never be reached, return -1.*/

/*#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        queue<pair<int, int>> q;
        int fresh = 0;
        int time = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 1) {
                    fresh++;
                }
                else if (grid[i][j] == 2) {
                    q.push({i, j});
                }
            }
        vector<pair<int, int>> directions = {
            {1, 0},     // Down
            {0, 1},     // Right
            {-1, 0},    // Up
            {0, -1}     // Left
        };
        while (!q.empty() && fresh > 0) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                // r = current row
                // c = current column
                auto [r, c] = q.front();
                q.pop();
                // Check all 4 neighboring cells
                for (auto [dr, dc] : directions) {
                    // dr = change in row
                    // dc = change in column
                    // nr = new row
                    // nc = new column
                    int nr = r + dr;
                    int nc = c + dc;
                    if (nr >= 0 && nr < rows &&
                        nc >= 0 && nc < cols &&
                        grid[nr][nc] == 1) {
                        grid[nr][nc] = 2;
                        fresh--;
                        q.push({nr, nc});
                    }
                }
            }
            time++;
        }
        if (fresh == 0) {
            return time;
        }   // Some fresh oranges cannot be reached
        else {
            return -1;
        }
    }
};
int main() {
    vector<vector<int>> grid = {
        {2, 1, 1},
        {1, 1, 0},
        {0, 1, 1}
    };
    Solution obj;
    int answer = obj.orangesRotting(grid);
    cout << "Minimum time = " << answer << endl;
    return 0;
}*/