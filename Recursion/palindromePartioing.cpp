#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isPalin(string s) {
    int l = 0;
    int r = s.size() - 1;

    while (l < r) {
        if (s[l] != s[r])
            return false;
        l++;
        r--;
    }
    return true;
}

void getAllParts(string s, vector<string> &partitions, vector<vector<string>> &ans) {

    if (s.size() == 0) {
        ans.push_back(partitions);
        return;
    }

    for (int i = 0; i < s.size(); i++) {
        string part = s.substr(0, i + 1);

        if (isPalin(part)) {
            partitions.push_back(part);

            getAllParts(s.substr(i + 1), partitions, ans);

            partitions.pop_back(); // backtrack
        }
    }
}

vector<vector<string>> partition(string s) {
    vector<vector<string>> ans;
    vector<string> partitions;

    getAllParts(s, partitions, ans);
    return ans;
}

int main() {
    string s;
    cin >> s;

    vector<vector<string>> result = partition(s);

    for (auto &vec : result) {
        for (auto &str : vec) {
            cout << str << " ";
        }
        cout << endl;
    }

    return 0;
}