#include <iostream>
using namespace std;

void sqrStarPattern(char s, int row, int column){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cout << s;
        }
        cout << endl;
    }
}

void ascndngStarPattern(char s, int row){
    for(int i = 0; i < row; i++){
        for(int j = 0; j <= i; j++){
            cout << s;
        }
        cout << endl;
    }
}

void dscndngStarPattern(char s, int row){
    for(int i = row; i > 0; i--){
        for(int j = 0; j < i; j++){
            cout << s;
        }
        cout << endl;
    }
}

void AscdnumberPattern(int n){
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
}

void starPyramid(char s, int n){
    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= n - i; j++)
            cout << " ";

        for(int k = 1; k <= 2*i - 1; k++)
            cout << s;

        cout << endl;
    }
}

void diamondPattern(char s, int n) {

    // Upper part
    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= n - i; j++)
            cout << " ";

        for(int k = 1; k <= 2*i - 1; k++)
            cout << s;

        cout << endl;
    }

    // Lower part
    for(int i = n - 1; i >= 1; i--) {

        for(int j = 1; j <= n - i; j++)
            cout << " ";

        for(int k = 1; k <= 2*i - 1; k++)
            cout << s;

        cout << endl;
    }
}

int main() {

    int n = 5; 
    char s = '*';
    int row = 4;
    int column = 4;

    cout << "Square Star Pattern" << endl;
    sqrStarPattern(s, row, column);
    cout << endl;

    cout << "---------------------------" << endl;
    cout << "Ascending Triangle Star Pattern" << endl;
    ascndngStarPattern(s, row);
    cout << endl;

    cout << "---------------------------" << endl;
    cout << "Descending Triangle Star Pattern" << endl;
    dscndngStarPattern(s, row);
    cout << endl;

    cout << "---------------------------" << endl;
    cout << "Ascending Number Left Triangle Pattern" << endl;
    AscdnumberPattern(n);
    cout << endl;

    cout << "---------------------------" << endl;
    cout << "Star Pyramid Pattern" << endl;
    starPyramid(s, n);
    cout << endl;

    cout << "---------------------------" << endl;
    cout << "Star Diamond Pattern" << endl;
    diamondPattern(s, n);
    cout << endl;

    return 0;
}