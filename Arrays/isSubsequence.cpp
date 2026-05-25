/* Date : 25th may 2026 */
/* core idea : j scans the whole big string t
i moves only when a matching character is found in s */

#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
bool isSubsequence(string s, string t){
    int i = 0;
    int j = 0;
    while (j<t.size()){
        if(i<s.size() && s[i] == t[j]){
            i++;
        }
        j++;
    }
    return i == s.size();
}
};

int main() {

    string s = "abc";
    string t = "ahbgdc";

    Solution obj;

    if (obj.isSubsequence(s, t)) {
        cout << "true";
    }
    else {
        cout << "false";
    }

    return 0;
}