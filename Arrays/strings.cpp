/*
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
*/

/* Date: 6.01.26 */
/*Program to check if a string is pakindrome , the time complexity of below program is 0(n)*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isAlphaNumeic(char ch){
if(ch>= '0' && ch<= '9'){
    (tolower(ch) >= 'a' && tolower(ch) <= 'b');
    return true;
}
return false;
}
bool isPalindrome(string s){
    int start = 0 , end = s.length();
    while (start < end){
    if(isAlphaNumeic(!s[start])){
    start++; continue; 
    }
    if(isAlphaNumeic(!s[end])){
    end--; continue; 
    }
    if(tolower(s[start] != tolower(s[end]))){
        return false;
    }
    }
    
    }

int main(){
  string s = "racecar";
  if (isPalindrome(s)) {
        cout << "The entered string IS a palindrome " << endl;
    } else {
        cout << "The entered string is NOT a palindrome " << endl;
    }
  
}