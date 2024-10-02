#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> getAdjecencyMatrix(int n, vector<pair<int, int>> edges) {
        int m = edges.size();
        vector<vector<int>> ans(n+1, vector<int>(n+1, 0));
        for (int i=0; i<m; i++) {
            int u = edges[i].first;
            int v = edges[i].second;
            ans[u][v] = 1;
            ans[v][u] = 1;
        } return ans;
    }
};
int main() {
    int n = 7;
    vector<pair<int, int>> edges = {{1,2}, {1,3}, {2,4}, {3,5}, {4,6}, {5,7}};
    Solution obj;
    vector<vector<int>> ans = obj.getAdjecencyMatrix(n, edges);
    for (int i = 1; i <= n; ++i) {  // 1-based indexing
        for (int j = 1; j <= n; ++j) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}