#include<bits/stdc++.h>
using namespace std;
class TreeNode {
public:
    int data;
    TreeNode *left, *right;
    TreeNode() : data(0), left(NULL), right(NULL) {}
    TreeNode(int x) : data(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
};
int heightOfBinaryTree(TreeNode* root) {
	if (root == NULL) return 0;
    int lh = heightOfBinaryTree(root->left);
    int rh = heightOfBinaryTree(root->right);
    return 1 + max(lh,rh);
}