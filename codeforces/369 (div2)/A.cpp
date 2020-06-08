#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string str[n];
    bool found = false;

    for(int i = 0; i != n; ++i) cin >> str[i];
    for(int i = 0; i != n; ++i){
        size_t itr = str[i].find("OO");
        if(itr != string::npos){
            str[i][itr] = str[i][itr+1] = '+';
            found = true;
            break;
        }
    }
    if(found){
        cout << "YES\n";
        for(int i = 0; i != n; ++i) cout << str[i] << "\n";  
    }
    else cout << "NO\n";
    
    
}