#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s ;
    cout<<"Enter a string: "<<endl;
    getline(cin, s);; 
    cout<< "Entered string : "<<s;
    cout<<endl;
    reverse(s.begin(), s.end());
    cout <<"Reversed string : "<< s;
    cout<<endl;
    int len = s.length();
    cout<<"length of eneterd string: "<<len;
}