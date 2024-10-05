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
void postorder(struct node* root, vector<int>& arr) {
    if (root == NULL) return;
    postorder(root->left, arr);
    postorder(root->right, arr);
    arr.push_back(root->data);
}
vector<int> getPostorder(struct node* root) {
    vector<int> arr;
    postorder(root, arr);
    return arr;
}