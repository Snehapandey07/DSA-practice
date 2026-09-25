// #include <bits/stdc++.h>
// using namespace std;

// struct node {
//     int val;
//     node* left;
//     node* right;

//     node(int x) {
//         val = x;
//         left = nullptr;
//         right = nullptr;
//     }
// };

// class Solution {
// public:
//     node* lowestCommonAncestor(node* root, node* p, node* q) {

//         if (root == nullptr || root == p || root == q)
//             return root;

//         node* left = lowestCommonAncestor(root->left, p, q);
//         node* right = lowestCommonAncestor(root->right, p, q);

//         if (left != nullptr && right != nullptr)
//             return root;

//         if (left != nullptr)
//             return left;

//         return right;
//     }
// };

// int main() {

//     // Creating the tree
//     node* root = new node(1);
//     root->left = new node(2);
//     root->right = new node(3);
//     root->left->left = new node(4);
//     root->left->right = new node(5);

//     // p = 4, q = 5
//     node* p = root->left->left;
//     node* q = root->left->right;

//     Solution obj;

//     node* result = obj.lowestCommonAncestor(root, p, q);

//     cout << "Lowest Common Ancestor of "
//          << p->val << " and " << q->val
//          << " is: " << result->val << endl;

//     return 0;
// }