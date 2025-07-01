#include <bits/stdc++.h>
using namespace std;
int main(){
    int saco;
    cin >> saco;
    while(saco != 0){
        int trem=1;
        while(trem != 0){
            vector<int>a,b;
            stack<int>station;
            for(int c=saco; c > 0 && trem != 0;c--){
                cin >> trem;
                a.push_back(trem);
                b.push_back(c);
            }
            reverse(a.begin(), a.end());
            if(trem != 0){
                while(!a.empty()){
                    if(b.empty() && station.top() != a[a.size()-1]){
                        cout << "No\n";
                        break;
                    }
                    if(b[b.size()-1] == a[a.size()-1]){
                        a.pop_back();
                        b.pop_back();
                    }else{
                        if(!station.empty() && station.top() == a[a.size()-1]){
                            station.pop();
                            a.pop_back();
                        }else{
                            station.push(b[b.size()-1]);
                            b.pop_back();
                        }
                    }
                }
                if(a.empty()) cout << "Yes\n";
            }
        }
        cin >> saco;
        cout << "\n";
    }
}
