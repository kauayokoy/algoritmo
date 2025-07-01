#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>dom;
vector<int>verf;
int c=0;
void dfs(int cur){
    if (!verf[cur])c++;
    verf[cur] = 1;
    for(auto itr : dom[cur]){
        if(!verf[itr])
        dfs(itr);
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        int n,m,l; cin >> n >> m >> l;
        dom = vector<vector<int>>(n+1);
        verf = vector<int>(n+1, 0);
        for(int c1=0; c1 < m;c1++){
            int a,b;cin>>a>>b;
            dom[a].push_back(b);
        }
        for(int c1=0; c1 < l;c1++){
            int fdp;cin>>fdp;
            dfs(fdp);
        }
        cout << c << "\n";
        c = 0;
    }
}
