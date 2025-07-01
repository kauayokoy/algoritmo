#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  while(cin >> t){
    vector<int>books(t);
    for(int c=0; c < t;c++){
      cin >> books[c];
    }
    int money; cin >> money;
    sort(books.begin(), books.end());
    int left=0,right=t-1,dif=INT_MAX,dif1=0,r1,r2;
    while(left <= right){
      int sum = books[left] + books[right];
      if(sum == money){
        dif1 = abs(books[left] - books[right]);
        if(dif1 < dif){
          dif = dif1;
          r1 = books[left];
          r2 = books[right];
        }
        left++;
      } 
      else if(sum > money){
        right--;
      }else{
        left++;
      }
    }
    cout << "Peter should buy books whose prices are " << r1 << " and " << r2 << ".\n\n"; 
  }
}
