#include <bits/stdc++.h>
using namespace std;
class Solution {
public:

    vector<int> findSubstring(string s, vector<string>& words) {

        vector<int> ans;

        if (s.empty() || words.empty()) {
            return ans;
        }

        int wordLen = words[0].size();
        int wordCount = words.size();
        int totalLen = wordLen * wordCount;

        unordered_map<string, int> required;

        // Store required frequencies
        for (string word : words) {
            required[word]++;
        }

        // Try every possible offset
        for (int offset = 0; offset < wordLen; offset++) {

            int left = offset;
            int count = 0;

            unordered_map<string, int> window;

            // Move right pointer word by word
            for (int right = offset;
                 right + wordLen <= s.size();
                 right += wordLen) {

                string word = s.substr(right, wordLen);

                // Valid word
                if (required.find(word) != required.end()) {

                    window[word]++;
                    count++;

                    while (window[word] > required[word]) {

                        string leftWord =
                            s.substr(left, wordLen);

                        window[leftWord]--;
                        left += wordLen;
                        count--;
                    }

                    if (count == wordCount) {

                        ans.push_back(left);

                        string leftWord =
                            s.substr(left, wordLen);

                        window[leftWord]--;
                        left += wordLen;
                        count--;
                    }
                }

                else {

                    window.clear();
                    count = 0;
                    left = right + wordLen;
                }
            }
        }

        return ans;
    }
};
int main(){

    string st = "barfoothefoobarman";

    vector<string> words = {"foo","bar"};

    Solution s;

    vector<int> ans = s.findSubstring(st, words);

    cout << "Substring starting indices: ";

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}