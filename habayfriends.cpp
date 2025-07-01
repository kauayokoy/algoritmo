#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    vector <string> names;
    vector <string> choices;
    string name;
    int maior=0;
    while(cin >> name && name != "FIM"){   
        string choice;
        cin >> choice;
        bool saco=false;
        for(int c=0; c < names.size(); c++){
            if(names[c] == name){
                saco = true;
            }
        }
        if(!saco){
            names.push_back(name);
            choices.push_back(choice);
        }        
    }
    string vencedor;
    vector <string> yes;
    vector <string> no;
    for(int c=0; c < names.size(); c++)
    {
        if(names[c].size() > maior && choices[c] == "YES"){
            maior = names[c].size();
            vencedor = names[c];
        }
    }
    for(int c=0; c < names.size(); c++)
    {
        if(choices[c] == "YES"){
            yes.push_back(names[c]);
        }
        else{
            no.push_back(names[c]);
        }
    }
    sort(yes.begin(), yes.end());
    sort(no.begin(), no.end());
    for(int c=0; c < yes.size(); c++)
    {
        cout << yes[c] << "\n";
    }
    for(int c=0; c < no.size(); c++)
    {
        cout << no[c] << "\n";
    }
    cout << "\nAmigo do Habay:\n" << vencedor << "\n";
}
