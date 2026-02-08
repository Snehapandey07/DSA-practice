/* Date: 8.0.26*/
/* Spiral matrix problem */
#include <iostream>
using namespace std;

int printSpiralorder(int matrix[4][4], int row, int column){
int strow = 0; 
int stcol = 0;
int enrow= row -1;
int encol = column-1;
    while (strow <= enrow && stcol <= encol) {

        // top row
        for (int j = stcol; j <= encol; j++) {
            cout << matrix[strow][j] << " ";
        }
        strow++;

        // right column
        for (int i = strow; i <= enrow; i++) {
            cout << matrix[i][encol] << " ";
        }
        encol--;

        // bottom row
        if (strow <= enrow) {
            for (int j = encol; j >= stcol; j--) {
                cout << matrix[enrow][j] << " ";
            }
            enrow--;
        }

        // left column
        if (stcol <= encol) {
            for (int i = enrow; i >= strow; i--) {
                cout << matrix[i][stcol] << " ";
            }
            stcol++;
        }
    }
}

int main(){
int matrix [4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
int row = 4;
int column = 4;
printSpiralorder(matrix, row ,column);
return 0;
}