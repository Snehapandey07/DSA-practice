/* invert binary tree problem */
#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {

        if (root == NULL)
            return NULL;

        invertTree(root->left);
        invertTree(root->right);

        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;

        return root;
    }
};

// Inorder Traversal
void inorder(TreeNode* root) {
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main() {

    // Create Tree
    //
    //       1
    //      / \
    //     2   3
    //    / \
    //   4   5
    //

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << "Before Inversion: ";
    inorder(root);
    cout << endl;

    Solution obj;
    obj.invertTree(root);

    cout << "After Inversion: ";
    inorder(root);
    cout << endl;

    return 0;
}