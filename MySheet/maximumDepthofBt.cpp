/* Date: 23.09.2026 */
#include <bits/stdc++.h>
using namespace std;
struct node {
    int data ;
    node*right;
    node*left;
    node(int x){
        data = x;
        right = nullptr;
        left = nullptr;
    }
};
class Solution {
public:
    int maxDepth(node* root) {
        if (root == nullptr){
            return 0;
        }
        return 1+ max(maxDepth(root->left),
                   maxDepth(root->right));
    }
};
int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    Solution s;
    cout << "Maximum Depth: " << s.maxDepth(root) << endl;
    return 0;
}