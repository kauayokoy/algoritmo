#include <bits/stdc++.h>
using namespace std;
int total=0;
vector<vector<char>>matrix;
void dfs(int x, int y){
    if(matrix[x][y] != '.')
        return;
    matrix[x][y] = '#';
    int n = matrix.size();
    int m = matrix[0].size();
    if(x - 1 >= 0)
        dfs(x - 1, y);
    if(x + 1 < n)
        dfs(x + 1, y);
    if(y - 1 >= 0)
        dfs(x, y - 1);
    if(y + 1 < m)
        dfs(x,y+1);
}
int main(){
    int n,m; cin >> n >> m;
    matrix.resize(n,vector<char>(m));
    for(int i=0; i < n;i++){
        for(int j=0;j < m;j++){
            cin >> matrix[i][j];
        }
    }

    for(int c=0; c < n;c++){
        for(int c1=0; c1 < m;c1++){
            if(matrix[c][c1] == '.'){
                dfs(c,c1);
                total++;
            }
        }
    }
    cout << total << "\n";
}
