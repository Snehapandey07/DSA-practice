/* Date : 22.07.26*/
/* Traverse every cell.

If we find an unvisited land ('1'),
start DFS.

DFS visits all connected land cells
and marks them as visited.

After DFS finishes,
we have completely explored one island.

So increment the island count. */


#include <bits/stdc++.h>
using namespace std;
class Solution {
public:

    int row, col;

    void dfs(vector<vector<char>>& grid, int r, int c){

        if(r < 0 || c < 0 || r >= row || c >= col)
            return;

        if(grid[r][c] == '0')
            return;

        grid[r][c] = '0';

        dfs(grid, r - 1, c);
        dfs(grid, r + 1, c);
        dfs(grid, r, c - 1);
        dfs(grid, r, c + 1);
    }

    int numIslands(vector<vector<char>>& grid) {

        row = grid.size();
        col = grid[0].size();

        int islands = 0;

        for(int i = 0; i < row; i++){

            for(int j = 0; j < col; j++){

                if(grid[i][j] == '1'){

                    dfs(grid, i, j);

                    islands++;
                }
            }
        }

        return islands;
    }
};
int main(){
    vector<vector<char>> grid = {
        {'1','1','1','1','0'},
        {'1','1','0','1','0'},
        {'1','1','0','0','0'},
        {'0','0','0','0','0'}
    };

    Solution obj;

    cout << obj.numIslands(grid);

    return 0;
}
