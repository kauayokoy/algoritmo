#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>graph;
vector<int>cats;
vector<bool>visited;
int resultado=0;
int m,n;
void dfs(int cur, int gatos){
    bool isleaf=true;
    visited[cur] = true;
    if(!cats[cur]){
        gatos = 0;
    }else{
        gatos++;
    }
    if(gatos > n){
        return;
    }
    for(auto itr : graph[cur]){
        if(!visited[itr]){
            dfs(itr, gatos);
            isleaf = false;
        }
    }
    if(isleaf)
    resultado++;
}
int main(){
    cin >> m >> n;
    graph.resize(m+1);
    cats.resize(m+1);
    visited.resize(m+1,false);
    for(int c=1; c <= m;c++){
        cin >> cats[c];
    }
    for(int c=0; c < m-1;c++){
        int a,b; cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    dfs(1, 0);
    cout << resultado << "\n";
}
