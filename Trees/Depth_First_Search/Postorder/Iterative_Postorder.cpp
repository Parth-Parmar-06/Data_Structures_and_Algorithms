#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) {
        val = x;
        left = right = NULL;
    }
};
class Solution {
public: 
    vector<int> iterativePostorder(TreeNode* root) {
        if (root == NULL) return {};
        stack<TreeNode*> st1;
        stack<TreeNode*> st2;
        vector<int> ans;
        st1.push(root);
        while (!st1.empty()) {
            TreeNode* TreeNode = st1.top();
            st1.pop();
            st2.push(TreeNode);
            if (TreeNode->left != NULL) {
                st1.push(TreeNode->left);
            }
            if (TreeNode->right != NULL) {
                st1.push(TreeNode->right);
            }
        }
        while (!st2.empty()) {
            ans.push_back(st2.top()->val);
            st2.pop();
        } return ans;
    }
};
void printVector(const vector<int>& vec) {
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}
int main()
{
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    Solution obj;
    vector<int> result = obj.iterativePostorder(root);

    cout << "Postorder traversal: ";
    printVector(result);

    return 0;
}