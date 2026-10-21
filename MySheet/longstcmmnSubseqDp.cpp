#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
        int n = text2.size();

        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {

                if (text1[i - 1] == text2[j - 1]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]); //ignore curent character of t1 or t2 and return max
                }
            }
        }

        return dp[m][n];
    }
};

int main (){
    string text1 = "abcde";
    string text2 = "ace";
    Solution s;
    cout <<"longest common subsequence is : "<<s.longestCommonSubsequence(text1, text2)<<endl;
    return 0;
}

/*Space optimization  - min O(m,n)
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
        int n = text2.size();
        vector<int> prev(n + 1, 0);
        vector<int> curr(n + 1, 0);
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (text1[i - 1] == text2[j - 1]) {
                    curr[j] = 1 + prev[j - 1];
                }
                else {
                    curr[j] = max(prev[j], curr[j - 1]);
                }
            }
            swap(prev, curr);
            fill(curr.begin(), curr.end(), 0);
        }
        return prev[n];
    }
};
*/