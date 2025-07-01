#include <bits/stdc++.h>
using namespace std;
vector<vector<char>>cont;
int m,n,x,y;
int total=0;
void floodfill(int a, int b, char letra){
    if(cont[a][b] != letra) return;
    cont[a][b] = '/';
    total++;
    if(b == 0) floodfill(a,n-1,letra);
    if(b == n-1) floodfill(a,0,letra);
    if(a - 1 >= 0) floodfill(a-1,b,letra);
    if(a + 1 < m) floodfill(a+1,b,letra);
    if(b - 1 >= 0) floodfill(a,b-1,letra);
    if(b + 1 < n) floodfill(a,b+1,letra);
}
int main(){
    while(cin >> m >> n && m && n){
        cont.resize(m,vector<char>(n));
        for(int i=0; i < m;i++){
            for(int j=0; j < n;j++){
                cin >> cont[i][j];
            }
        }
        cin >> x >> y;
        char letra = cont[x][y];
        floodfill(x,y,letra);
        total = 0;
        int maior=0;
        for(int i=0; i < m;i++){
            for(int j=0; j < n;j++){
                if(cont[i][j] == letra){
                    floodfill(i,j,letra);
                    if(total > maior) maior = total;
                    total = 0;
                }
            }
        }
        cout << maior << "\n";
    }
}
