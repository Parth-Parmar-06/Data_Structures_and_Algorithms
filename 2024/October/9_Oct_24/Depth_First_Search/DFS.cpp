#include<bits/stdc++.h>
using namespace std;

class Solution {
public: 
    vector<vector<int>> getAdjecencyList(int n, vector<vector<int>>& edges) {
        int m = edges.size();
        vector<vector<int>> ans(n + 1);
        for (int i = 0; i < m; i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            ans[u].push_back(v);
            ans[v].push_back(u);
        }
        return ans;
    }
    void dfsNode(int node, vector<vector<int>>& adj, vector<int>& vis, vector<int>& dfs) {
        vis[node] = 1;
        dfs.push_back(node);
        for (int i : adj[node]) {
            if (!vis[i]) {
                dfsNode(i, adj, vis, dfs);
            }
        }
    }
    vector<int> depthFirstSearch(int n, vector<vector<int>>& adj) {
        vector<int> vis(n + 1, 0);
        int start = 1;
        vector<int> dfs;
        dfsNode(start, adj, vis, dfs);
        return dfs;
    }
};

int main() {
    int n = 8;
    vector<vector<int>> edges = {{1, 2}, {1, 3}, {2, 5}, {2, 6}, {3, 4}, {3, 7}, {4, 8}, {7, 8}};
    Solution obj;
    vector<vector<int>> adj = obj.getAdjecencyList(n, edges);
    vector<int> dfs = obj.depthFirstSearch(n, adj);
    
    cout << "DFS: ";
    for (int i : dfs) {
        cout << i << " ";
    }
    cout << endl;
}
