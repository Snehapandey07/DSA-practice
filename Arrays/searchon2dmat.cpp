#include <iostream>
using namespace std;

// Binary search inside a specific row
bool SearchInRow(int mat[3][4], int rowIndex, int col, int target) {
    int start = 0;
    int end = col - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (mat[rowIndex][mid] == target) {
            return true;
        }
        else if (target > mat[rowIndex][mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return false;
}

// Binary search on rows
bool elepresentrow(int mat[3][4], int row, int col, int target) {
    int startR = 0;
    int endR = row - 1;

    while (startR <= endR) {
        int midR = startR + (endR - startR) / 2;

        if (target >= mat[midR][0] && target <= mat[midR][col - 1]) {
            return SearchInRow(mat, midR, col, target);
        }
        else if (target > mat[midR][col - 1]) {
            startR = midR + 1;
        }
        else {
            endR = midR - 1;
        }
    }
    return false;
}

int main() {
    int mat[3][4] = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int target = 34;
    cout << elepresentrow(mat, 3, 4, target) << endl;
}
