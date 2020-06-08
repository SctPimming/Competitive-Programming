#include<bits/stdc++.h>
using namespace std;
const int mxn = 1e3+10;
int main(){
    int n, m;
    int a, b;
    char op;
    bitset<10002> msk[mxn], res;
    cin >> n >> m;
    for(int i = 1, p; i <= n; ++i){
        cin >> p;
        for(int j = 0, inp; j != p; ++j){
            cin >> inp;
            msk[i][inp] = 1;
        }
    }
    for(int i = 0; i != m; ++i){
        scanf("%d%c%d",&a, &op, &b);
        if(op == 'U') res = msk[a]|msk[b];
        else if(op == '|') res = msk[a]&msk[b];
        else res = (msk[a]|msk[b])^ msk[b];
        if(res.count() == 0) cout << "Empty";
        else {
            for(int i = 0; i <= 10001; ++i)
                if(res[i]) cout << i << " "; 
        }
        cout << "\n";
    }
}