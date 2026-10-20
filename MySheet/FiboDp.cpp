//Memoization , TC : O(n) , SC: O (n)

#include <bits/stdc++.h>
using namespace std;

int fib(int n , vector<int> dp){
    if (n<= 1){
        return n;
    }
    if (dp[n] != -1){
        return dp[n];
    }
    dp[n] = fib(n-1, dp) + fib(n-2, dp);
    return dp[n];
} 
int main (){
   int n = 10;
   vector <int> dp(n + 1 , -1);
   cout << fib(n , dp) << endl;
   return 0; 
}


/* Fibo using Tabulation , Tc : O(n), Sc: O(n)*/
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n ;
    cin >> n;
    vector <int> dp (n+1, 0);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2 ; i <= n ; i++){
        dp [i] = dp [i-1] + dp[i-2];
    }
    cout<< dp[n];
    return 0;
}