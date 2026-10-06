/*Two pointers approach for two sorted arrrays */
#include <iostream>
#include <vector>
using namespace std;
vector<int> unionArray(vector<int>& A, vector<int>& B) {
    int i = 0, j = 0;
    vector<int> ans;
    while (i < A.size() && j < B.size()) {
        if (A[i] < B[j]) {
            if (ans.empty() || ans.back() != A[i])
                ans.push_back(A[i]);
            i++;
        }
        else if (A[i] > B[j]) {
            if (ans.empty() || ans.back() != B[j])
                ans.push_back(B[j]);
            j++;
        }
        else {
            if (ans.empty() || ans.back() != A[i])
                ans.push_back(A[i]);
            i++;
            j++;
        }
    }
    while (i < A.size()) {
        if (ans.empty() || ans.back() != A[i])
            ans.push_back(A[i]);
        i++;
    }
    while (j < B.size()) {
        if (ans.empty() || ans.back() != B[j])
            ans.push_back(B[j]);
        j++;
    }
    return ans;
}
int main() {
    vector<int> A = {1, 2, 2, 3, 4};
    vector<int> B = {2, 3, 5, 6};
    vector<int> result = unionArray(A, B);
    for (int x : result) {
        cout << x << " ";
    }
    return 0;
}