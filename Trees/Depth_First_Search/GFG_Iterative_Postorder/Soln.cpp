#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
};
class Solution{
    public:
    vector<int> postOrder(Node* node) {
        if (node == NULL) return {};
        vector<int> ans;
        stack<Node*> st1;
        stack<Node*> st2;
        st1.push(node);
        while (!st1.empty()) {
            Node* curr = st1.top();
            st1.pop();
            st2.push(curr);
            if (curr->left != NULL) {
                st1.push(curr->left);
            }
            if (curr->right != NULL) {
                st1.push(curr->right);
            }
        }
        while (!st2.empty()) {
            ans.push_back(st2.top()->data);
            st2.pop();
        } return ans;
    }
};