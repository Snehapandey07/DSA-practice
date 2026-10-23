/*Count pairs violating BST properties*/
/*Geeks for geeks problem of the day */
#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
class Solution {
  public:
    long long pairsViolatingBST(Node* root) {
        vector<int> arr;
        inorder(root, arr);

        long long ans = 0;

        // Count inversions in the inorder traversal.
        vector<int> temp(arr.size());
        mergeSort(arr, temp, 0, arr.size() - 1, ans);

        return ans;
    }

  private:
    void inorder(Node* root, vector<int>& arr) {
        if (!root) return;

        inorder(root->left, arr);
        arr.push_back(root->data);
        inorder(root->right, arr);
    }

    void mergeSort(vector<int>& arr, vector<int>& temp,
                   int left, int right, long long& ans) {
        if (left >= right) return;

        int mid = left + (right - left) / 2;

        mergeSort(arr, temp, left, mid, ans);
        mergeSort(arr, temp, mid + 1, right, ans);

        int i = left, j = mid + 1, k = left;

        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j]) {
                temp[k++] = arr[i++];
            } else {
                temp[k++] = arr[j++];
                ans += mid - i + 1;
            }
        }

        while (i <= mid) temp[k++] = arr[i++];
        while (j <= right) temp[k++] = arr[j++];

        for (int p = left; p <= right; p++)
            arr[p] = temp[p];
    }
};