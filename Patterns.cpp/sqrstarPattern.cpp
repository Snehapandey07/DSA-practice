#include <iostream>
using namespace std;
void sqrStarPattern(char s, int row, int column){
for(int i = 0; i<row; i++){
    for(int j =0; j<= column; j++){
        cout <<s;
    }
    cout<< endl;
}
}
void ascndngStarPattern(char s, int row, int column){
for(int i = 0; i<row; i++){
    for(int j =0; j<column -i+ 1; j++){
        cout<<s;}
    cout<< endl;
}
}
void dscndngStarPattern(char s, int row, int column){
for(int i = 0; i<row; i++){
    for(int j =0; j<=i; j++){
        cout<<s;}
    cout<< endl;
}
}
int main(){
int s = '*';
int row = 4;
int column = 4;
// sqrStarPattern(s, row, column);
// ascndngStarPattern(s, row ,column);
dscndngStarPattern(s, row,column);
return 0;
}