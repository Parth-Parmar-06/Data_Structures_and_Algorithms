#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> getAdjecencyList(int n, vector<pair<int, int>> edges) {
        int m = edges.size();
        vector<vector<int>> ans(n+1);
        for (int i=0; i<m; i++) {
            int u = edges[i].first;
            int v = edges[i].second;
            ans[u].push_back(v);
            ans[v].push_back(u);
        } return ans;
    }
    void breadthFirstSearch(int node, vector<vector<int>>& adj, vector<int>& vis) {
        queue<int> q;
        q.push(node);
        vis[node] = 1;
        while (!q.empty()) {
            int curr = q.front();
            q.pop();
            for (int i:adj[curr]) {
                if (!vis[i]) {
                    q.push(i);
                    vis[i] = 1;
                }
            }
        } 
    }
    int countComponents(int n, vector<vector<int>>& adjList) {
        vector<int> vis(n + 1, 0);  
        int cc = 0;
        for (int i = 1; i <= n; i++) {  // 1-based indexing
            if (!vis[i]) {
                breadthFirstSearch(i, adjList, vis);
                cc++;  
            }
        } return cc;
    }
};
int main() {
    int n = 10;
    vector<pair<int, int>> edges = {{1,2}, {1,3}, {2,4}, {3,4}, {5,6}, {5,7}, {6,7}, {8,9}};
    Solution obj;
    vector<vector<int>> adj = obj.getAdjecencyList(n, edges);
    int cc = obj.countComponents(n, adj);
    cout << "Connected Components: " << cc;
}