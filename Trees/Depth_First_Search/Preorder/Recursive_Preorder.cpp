#include<iostream>
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
void preorder(struct node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}