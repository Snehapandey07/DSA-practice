/* Explanation : solve this using DFS with a global variable.
 At every node, I keep track of the direction in which the next
  move should be made and the current ZigZag length. If I continue
   in the expected direction, I increase the length by one and flip
    the expected direction. If I move in the other direction, the current
     ZigZag breaks, so I start a new ZigZag with length one from that child. 
     I update a global maximum at every node because the longest ZigZag can start
      anywhere in the tree.*/
class Solution {
public:
    int ans = 0;

    void dfs(TreeNode* node, bool goLeft, int length) {

        if (node == nullptr)
            return;

        ans = max(ans, length);

        if (goLeft) {

            dfs(node->left, false, length + 1);

            dfs(node->right, true, 1);

        } else {

            dfs(node->right, true, length + 1);

            dfs(node->left, false, 1);
        }
    }

    int longestZigZag(TreeNode* root) {

        dfs(root, true, 0);
        dfs(root, false, 0);

        return ans;
    }
};