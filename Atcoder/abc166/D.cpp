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

const int mn = -1000, mx = 1000;
lli my_pow(int n, int m = 5){
    lli res = 1;
    for(int i = 1; i <= m; ++i) res*=n;
    return res;
}
int main(){
    ios::sync_with_stdio(false);
    int n = input();
    for(int i = mn; i <= mx; ++i){
        for(int j = mn; j <= mx; ++j){
            if(my_pow(i) - my_pow(j) == n){
                cout << i << " " << j;
                return 0;
            } 
        }
    }
}