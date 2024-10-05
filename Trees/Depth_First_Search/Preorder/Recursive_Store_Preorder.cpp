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
void preorder(struct node* root, vector<int>& arr) {
    if (root == NULL) return;
    arr.push_back(root->data);
    preorder(root->left, arr);
    preorder(root->right, arr);
}
vector<int> getPreorder(struct node* root) {
    vector<int> arr;
    preorder(root, arr);
    return arr;
}