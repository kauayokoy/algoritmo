#include <bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);cin.tie(0);
  int times;
  cin >> times;
  while(times--){
    int a, b;
    cin >> a >> b;
    vector<int>saco(a),fill(a);
    for(int c=0; c < a;c++){
      cin >> saco[c];
    }
    fill[0] = saco[0];
    for(int c=1; c < a;c++){
      fill[c] = fill[c-1] + saco[c];
    }
    while(b--){
      int l,r,k;
      cin >> l >> r >> k;
      l--; r--;
      int sum = (l > 0) ? fill[r] - fill[l-1] : fill[r];
      int total = fill[a-1];
      int dif = total - sum + (r-l + 1) * k;
      if(dif % 2 != 0){
        cout << "YES\n";
      }else{
        cout << "NO\n";
      }
    }
  
  }
}
