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
    vector<int> breadthFirstSearch(int n, vector<vector<int>> adj) {
        int vis[n+1] = {0};
        queue<int> q;
        vector<int> bfs;
        vis[1] = 1;
        q.push(1);
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            for (int i:adj[node]) {
                if (!vis[i]) {
                    q.push(i);
                    vis[i] = 1;
                }
            }
        } return bfs;
    }
};
int main() {
    int n = 7;
    vector<pair<int, int>> edges = {{1,2}, {1,3}, {2,4}, {3,5}, {4,6}, {5,7}};
    Solution obj;
    vector<vector<int>> adj = obj.getAdjecencyList(n, edges);
    vector<int> bfs = obj.breadthFirstSearch(n, adj);
    cout << "BFS: ";
    for (int i:bfs) {
        cout << i << " ";
    }
}