/*Date : 26.09.2026*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void dfs(vector<vector<int>>& image, int r, int c, int oldColor, int newColor) {
        int rows = image.size();
        int cols = image[0].size();
        if (r < 0 || r >= rows || c < 0 || c >= cols)
            return;
        if (image[r][c] != oldColor)
            return;
        image[r][c] = newColor;
        dfs(image, r + 1, c, oldColor, newColor); // down
        dfs(image, r - 1, c, oldColor, newColor); // up
        dfs(image, r, c + 1, oldColor, newColor); // right
        dfs(image, r, c - 1, oldColor, newColor); // left
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image,
                                   int sr, int sc, int color) {\
        int oldColor = image[sr][sc];
        if (oldColor == color)
            return image;
        dfs(image, sr, sc, oldColor, color);
        return image;
    }
};
int main() {
    vector<vector<int>> image = {
        {1, 1, 1},
        {1, 1, 0},
        {1, 0, 1}
    };
    int sr = 1;
    int sc = 1;
    int color = 2;
    Solution s;
    vector<vector<int>> result = s.floodFill(image, sr, sc, color);
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[0].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}