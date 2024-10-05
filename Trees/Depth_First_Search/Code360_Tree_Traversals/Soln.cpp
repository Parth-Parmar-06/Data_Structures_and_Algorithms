#include<bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    int data;
    TreeNode *left, *right;
    TreeNode() : data(0), left(NULL), right(NULL) {}
    TreeNode(int x) : data(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
};
void inorder(TreeNode* root, vector<int> &arr) {
    if (root == NULL) return;
    inorder(root->left, arr);
    arr.push_back(root->data);
    inorder(root->right, arr);
}
vector<int> getInorder(TreeNode* root) {
    vector<int> arr;
    inorder(root, arr);
    return arr;
}
void preorder(TreeNode* root, vector<int> &arr) {
    if (root == NULL) return;
    arr.push_back(root->data);
    preorder(root->left, arr);
    preorder(root->right, arr);
}
vector<int> getPreorder(TreeNode* root) {
    vector<int> arr;
    preorder(root, arr);
    return arr;
}
void postorder(TreeNode* root, vector<int> &arr) {
    if (root == NULL) return;
    postorder(root->left, arr);
    postorder(root->right, arr);
    arr.push_back(root->data);
}
vector<int> getPostorder(TreeNode* root) {
    vector<int> arr;
    postorder(root, arr);
    return arr;
}
vector<vector<int>> getTreeTraversal(TreeNode *root){
    vector<vector<int>> ans(3);
    ans[0] = getInorder(root);
    ans[1] = getPreorder(root);
    ans[2] = getPostorder(root);
    return ans;
}
