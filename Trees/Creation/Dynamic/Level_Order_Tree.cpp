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
struct node* createTree(vector<int> arr) {
    if (arr.empty()) return NULL;
    struct node* root = new node(arr[0]);
    queue<struct node*> q;
    q.push(root);
    int i = 1;
    int n = arr.size();
    while (!q.empty() && i<n) {
        struct node* curr = q.front();
        q.pop();
        if (i<n) {
            curr->left = new node(arr[i]);
            q.push(curr->left);
            i++;
        }
        if (i<n) {
            curr->right = new node(arr[i]);
            q.push(curr->right);
            i++;
        }
    } return root;
}
int main() {
    int n;
    vector<int> arr;
    cout << "Enter the number of nodes in tree: ";
    cin >> n;
    if (n>0) {
        cout << "Enter the nodes: ";
        for (int i=0; i<n; i++) {
            int ele;
            cin >> ele;
            arr.push_back(ele);
        }
    }
    struct node* root = createTree(arr);
    cout << "Tree created with root: " << root->data;
}