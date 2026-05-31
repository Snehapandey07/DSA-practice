/* Date : 31.05.26 */
/* Longest substring without repeating characters Given a string s, 
find the length of the longest substring without duplicate characters. */

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> window;

        int left = 0;
        int maxLen = 0;

        for (int right = 0; right < s.size(); right++) {

            while (window.count(s[right])) {
                window.erase(s[left]);
                left++;
            }

            window.insert(s[right]);

            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};
int main() {

    string s = "abcabcbb";

    Solution obj;

    cout << obj.lengthOfLongestSubstring(s);

    return 0;
}

//understood , get a help to solve this  