#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if (root == NULL) return true;
        int lh = maxDepth(root->left);
        int rh = maxDepth(root->right);
        return (abs(lh-rh)<=1 && isBalanced(root->left) && isBalanced(root->right));
    }
    int maxDepth(TreeNode* node) {
        if (node == NULL) return 0;
        int lh = maxDepth(node->left);
        int rh = maxDepth(node->right);
        return 1 + max(lh,rh);
    }
}; 