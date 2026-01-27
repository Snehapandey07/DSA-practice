/* Programm to reverse numbers present in an array */
/* Date: 25.01.26*/

#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec = {1,2,3,4,5,6};
    int start = 0; 
    int end = vec.size()-1;
    while(start < end){
        swap(vec[start], vec[end]);
        start ++;
        end --;
    }
    for(int x : vec){
        cout<<x<<" ";
    }
}