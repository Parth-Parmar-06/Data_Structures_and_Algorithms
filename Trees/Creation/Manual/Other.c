#include<stdio.h>
struct node {
    int data;
    struct node* left;
    struct node* right;
};
struct node* getNode(int data) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
int main() {
    struct node* root = getNode(1);
    root->left = getNode(2);
    root->right = getNode(3);
    root->left->right = getNode(4);
}