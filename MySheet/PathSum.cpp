#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* left;
    node* right;

    node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

class Solution {
public:
    bool hasPathSum(node* root, int targetSum) {
        if (root == nullptr)
            return false;
        if (root->left == nullptr && root->right == nullptr)
            return root->data == targetSum;
        int remain = targetSum - root->data;
        return hasPathSum(root->left, remain) ||
               hasPathSum(root->right, remain);
    }
};

int main() {

    /*
            5
           / \
          4   8
         /   / \
        11  13  4
       /  \
      7    2

    Path: 5 → 4 → 11 → 2 = 22
    */
    node* root = new node(5);
    root->left = new node(4);
    root->right = new node(8);
    root->left->left = new node(11);
    root->right->left = new node(13);
    root->right->right = new node(4);
    root->left->left->left = new node(7);
    root->left->left->right = new node(2);

    int targetSum = 22;
    Solution s;
    cout << s.hasPathSum(root, targetSum);
    return 0;
}