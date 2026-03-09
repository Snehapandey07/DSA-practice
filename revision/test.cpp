#include <iostream>
using namespace std;
int main(){
     char s = '*';
     int n = 5;
    for (int i = 0 ; i < n ; i++){
    for(int j = 0; j< i+n-1 ; j++){
        cout<<"*";
    }
    }
    return 0;
}

