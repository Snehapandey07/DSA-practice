#include <bits/stdc++.h>
using namespace std;
struct node {
    int val;
    node* left;
    node* right;
    node(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};
class Solution {
public:
    node* lowestCommonAncestor(node* root, node* p, node* q) {
        if (root == nullptr || root == p || root == q)
            return root;
        node* left = lowestCommonAncestor(root->left, p, q);
        node* right = lowestCommonAncestor(root->right, p, q);

        if (left != nullptr && right != nullptr)
            return root;

        if (left != nullptr)
            return left;

        return right;
    }
};