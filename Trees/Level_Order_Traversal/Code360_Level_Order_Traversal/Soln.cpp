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
vector<int> levelOrder(TreeNode* root){
    if (root == NULL) return {};
    vector<int> ans;
    queue<TreeNode*> q;
    q.push(root);
    
    while (!q.empty()) {
        TreeNode* curr = q.front();
        q.pop();
        if (curr->left != NULL) q.push(curr->left);
        if (curr->right != NULL) q.push(curr->right); 
        ans.push_back(curr->data);
    } return ans;
}
