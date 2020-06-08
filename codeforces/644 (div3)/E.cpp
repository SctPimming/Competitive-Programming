#include<bits/stdc++.h>
using namespace std;
using lli = long long;
using pii = pair<int, int>;

#define rep(i,k,n) for(int i=(k); i != int(n); ++i)
#define sz(x) x.size()
#define all(x) x.begin(), x.end()

#define dbg(x) cout << #x << '=' << x << '\n'
#define dbg2(x, y) cout << #x << '=' << x << ' ' << #y << '=' << y << '\n' 

#define input() (*istream_iterator<int>(cin))
#define strin() (*istream_iterator<string>(cin))
#define output(x) cout << x << '\n' 

int main(){
    ios::sync_with_stdio(false);
    int t = input();
    while(t--){
        int n = input(), sw = true;
        string field[n+1];
        for(int i = 0; i != n; ++i){
            cin >> field[i];
            field[i].push_back('1');
        }
        field[n] = string(n, '1');
        for(int i = 0; i != n; ++i){
            for(int j = 0; j != n; ++j){
                if(field[i][j] == '1'){
                    if(field[i+1][j] == '0' and field[i][j+1] == '0') sw = false;
                }
            }
        }
        (sw) ? puts("YES\n") : puts("NO\n");
    }
}