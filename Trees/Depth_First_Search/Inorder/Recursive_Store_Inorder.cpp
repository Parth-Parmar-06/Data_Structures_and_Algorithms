#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node* left;
    struct node* right;
    node(int val) {
        data = val;
        left = right = NULL;
    }
};
void inorder(struct node* root, vector<int>& arr) {
    if (root == NULL) return;
    inorder(root->left, arr);
    arr.push_back(root->data);
    inorder(root->right, arr);
}
vector<int> getInorder(struct node* root) {
    vector<int> arr;
    inorder(root, arr);
    return arr;
}