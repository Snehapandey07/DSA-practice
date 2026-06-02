/* Max depth of Binary tree */

#include <bits/stdc++.h>
using namespace std;

class TreeNode {
public:
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
    int maxDepth(TreeNode* root) {

        if (root == NULL)
            return 0;

        int left = maxDepth(root->left);
        int right = maxDepth(root->right);

        return 1 + max(left, right);
    }
};

int main() {

    // Create nodes
    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->right->right = new TreeNode(6);

    Solution obj;

    cout << "Maximum Depth = "
         << obj.maxDepth(root) << endl;

    return 0;
}