#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> g;
vector<bool> v;
void dfs(int s){
    v[s] = 1; 
    for(auto itr : g[s]){
        if(!v[itr]){
            dfs(itr);
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        char l; 
        cin >> l;
        int ln = int(l) - 64;
        g = vector<vector<int>>(ln+1);
        v = vector<bool>(ln+1, false);
        
        cin.ignore();
        
        string inp;
        while(getline(cin, inp) && !inp.empty()){
            int a1 = int(inp[0]) - 64;
            int a2 = int(inp[1]) - 64;
            g[a1].push_back(a2);
            g[a2].push_back(a1);
        }
        
        int conec = 0;
        for(int c = 1; c <= ln; c++){
            if(!v[c]){
                conec++;
                dfs(c);
            }
        }
        cout << conec << "\n";
        if(t) cout << "\n";
    }
}
