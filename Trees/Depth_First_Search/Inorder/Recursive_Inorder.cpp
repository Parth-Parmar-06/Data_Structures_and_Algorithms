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
void inorder(struct node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}