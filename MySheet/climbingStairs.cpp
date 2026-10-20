#include <bits/stdc++.h>
using namespace std;

/*
//tc/Sc:- O(n)
class Solution {
public:
    int climbStairs(int n) {
        vector<int>ways(n+1, 0) ;
       ways[0] = 0;
       ways[1] = 1;
        for (int i = 2; i <= n ; i++){
        ways [i] = ways [i-1] + ways [i-2];
        }
        return ways[n];
    }
};
*/

/*space optimization*/
int cllimbstairs(int n){
    int prev1 = 1;
    int prev2 = 1;
    for (int i = 2; i <=n; i++){
        int curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}
int main (){
    int n ; 
    cout <<"enter the no. of stairs";
    cin >>n;
    cout << cllimbstairs(n);
    return 0;
}
