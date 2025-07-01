#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>fdp;
vector<int>resp;
vector<int>verf;
void dfs(int cur){
    verf[cur] = 1;
    for(auto itr : fdp[cur]){
        if(!verf[itr]){
            dfs(itr);
        }
    }
}
int main(){ 
    int a,b;cin >> a >>b;
    fdp = vector<vector<int>>(a+1);
    verf.resize(a+1,0);
    for(int c=0; c < b;c++){
        int x,y; cin >> x >>y;
        fdp[x].push_back(y);
        fdp[y].push_back(x);
    }
    int ab=0;
    for(int c=1; c <= a; c++){
        if(!verf[c]){
            ab++;
            resp.push_back(c);
            dfs(c);
        }
    }
    cout << resp.size()-1 << "\n";
    for(int c=0; c < resp.size()-1;c++){
        cout << resp[c] << " " << resp[c+1] << "\n";
    }

}
