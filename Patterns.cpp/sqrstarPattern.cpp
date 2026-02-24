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
void AscdnumberPattern(int n){
    for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= i; j++) cout << j;
    cout << endl;
}
}
void starPyramid(char s, int row, int coulumn, int n){
    for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n-i; j++) cout << " ";       
    for(int k = 1; k <= 2*i-1; k++) cout << "*"; 
    cout << endl;
}
}
int main(){
    int n = 5; 
int s = '*';
int row = 4;
int column = 4;
cout<<"Square star Pattern"<<endl;
sqrStarPattern(s, row, column);
cout<<endl;
cout<<"---------------------------"<<endl;
cout<<"Ascending triangle star Pattern"<<endl;
ascndngStarPattern(s, row ,column);
cout<<endl;
cout<<"---------------------------"<<endl;
cout<<"Descentng trianle star pattern"<<endl;
dscndngStarPattern(s, row,column);
cout<<endl;
cout<<"---------------------------"<<endl;
cout<<"Ascending Number left triandle pattern "<<endl;
AscdnumberPattern(n);
cout<<endl;
cout<<"---------------------------"<<endl;
cout<<"Star Pyramid pattern"<<endl;
starPyramid( s, row, column, n);
cout<<"---------------------------"<<endl;
return 0;
}