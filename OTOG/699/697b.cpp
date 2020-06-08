#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("2.in", "r", stdin);
    //freopen("1.sol", "w", stdout);
    int a, b, cnt = 0, n = 8;
    cin >> a >> b;
    vector<int> p(n), r(n);
    for(int i = 0; i != n; ++i) cin >> p[i];
    for(int i = 0; i != n; ++i) cin >> r[i];
    for(int i = a; i <= b; ++i){
        int gate = true;
        for(int j = 0; j != n; ++j){
            if(i%p[j] != r[j]){
                gate = false;
                break;
            } 
        }
        if(gate) cnt++;
    }
    if(cnt == 0) cout << "saddo";
    else cout << cnt; 
}