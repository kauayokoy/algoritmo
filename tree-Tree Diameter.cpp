#include<bits/stdc++.h>
using namespace std;
vector<int>verf;
vector<vector<int>>saco;
int maior=0;
int node;
void dfs(int cur, int c){
    verf[cur] = 1;
    if(c > maior){
        maior = c;
        node = cur;
    }
    c++;
    for(auto itr : saco[cur]){
        if(!verf[itr]){
            dfs(itr, c);
        }
    }
}
int main(){
    int a;cin>>a;
    saco = vector<vector<int>>(a+1);
    verf.resize(a+1,0);
    for(int c=0; c < a;c++){
        int x,y; cin >> x >> y;
        saco[x].push_back(y);
        saco[y].push_back(x);
    }
    dfs(1,0);
    maior=0;
    verf = vector<int>(a+1,0);
    dfs(node,0);
    cout << maior << "\n";
    }
