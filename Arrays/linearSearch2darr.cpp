#include <iostream>
using namespace std;

void LinearSearch(int mat[4][3], int rows, int colms, int key) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colms; j++) {
            if (mat[i][j] == key) {
                cout << "Element " << key << " found at index ("
                     << i << ", " << j << ")";
                return;
            }
        }
    }
    cout << "Element not found";
}

int maxRowSum(int mat[][3], int rows, int colms) {
    int maxSum = INT16_MIN;

    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < colms; j++) {
            rowSum += mat[i][j];
        }
        maxSum = max(maxSum, rowSum);
    }
    return maxSum;
}

int diagonalSum(int mat[][4], int n){
  int sum = 0;
  for (int i = 0; i<n; i++){
    sum+=mat[i][i];
    if(i!= n-i-1){
   sum+= mat[i][n-i-1];
    }
  }
  return sum;
}

int main() {
    int mat[4][4] = {
        {1,2,3,0},
        {4,5,6,0},
        {7,8,9,0},
        {10,11,12,0}
    };

    int n= 4;

    int rows = 4;
    int colms = 3;
    int key = 8;
    cout<<diagonalSum(mat, n);

    return 0;
}
