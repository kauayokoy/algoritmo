#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> g;
vector<bool> v;
bool ehciclo;
void dfs(int vert, int parent) {
    v[vert] = true;
    if(g[vert].size() != 2){
        ehciclo = false;
    } 
    for(int itr : g[vert]){
        if (!v[itr]) {
            dfs(itr, vert);
        }
    }
}
int main() {
    int n, m;
    cin >> n >> m;
    g.assign(n + 1, {});
    v.assign(n + 1, false);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int ciclos = 0;
    for (int i = 1; i <= n; i++) {
        if (!v[i]) {
            ehciclo = true;
            dfs(i, 0);
            if (ehciclo) {
                ciclos++;
            }
        }
    }
    cout << ciclos << "\n";
}
