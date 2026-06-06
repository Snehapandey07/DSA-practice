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

    bool mirror(TreeNode* left, TreeNode* right) {

        if (left == NULL && right == NULL)
            return true;

        if (left == NULL || right == NULL)
            return false;

        if (left->val != right->val)
            return false;

        return mirror(left->left, right->right) &&
               mirror(left->right, right->left);
    }

    bool isSymmetric(TreeNode* root) {

        if (root == NULL)
            return true;

        return mirror(root->left, root->right);
    }
};

int main() {
    TreeNode* p = new TreeNode(1);
    p->left = new TreeNode(2);
    p->right = new TreeNode(2);

    p->left->left = new TreeNode(3);
    p->left->right = new TreeNode(4);

    p->right->left = new TreeNode(4);
    p->right->right = new TreeNode(3);

    Solution obj;

    if (obj.isSymmetric(p)) {
        cout << "Symmetric Tree" << endl;
    }
    else {
        cout << "Not Symmetric Tree" << endl;
    }

    return 0;
}