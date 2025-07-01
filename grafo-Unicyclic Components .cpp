#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> g;
vector<bool> v;
int ca = 0;
int edg = 0;
void dfs(int s){
    v[s] = true;
    ca++;
    edg+=g[s].size();
    for(auto neighbor : g[s]){
        if(!v[neighbor]){
            dfs(neighbor);
        }
    }
}
int main(){
    int n, m;
    cin >> n >> m;
    g = vector<vector<int>>(n + 1);
    v = vector<bool>(n + 1, false);
    for(int i = 0; i < m; i++){
        int u, w;
        cin >> u >> w;
        g[u].push_back(w);
        g[w].push_back(u);
    }
    bool a = true;
    for(int i = 1; i <= n; i++){
        if(!v[i]){
            ca = 0;
            edg = 0;
            dfs(i);
            if(edg/ 2 != ca){
                a = false;
            }
        }
    }
    if(a) cout << "Yes\n";
    else cout << "No\n";
}
