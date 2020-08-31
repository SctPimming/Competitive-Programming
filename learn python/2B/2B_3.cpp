#include<bits/stdc++.h>
using namespace std;
using lli = long long;
using pii = pair<int, int>;

#define rep(i,k,n) for(int i=(k); i != int(n); ++i)
#define sz(x) x.size()
#define all(x) x.begin(), x.end()

#define dbg(x) cerr << #x << '=' << x << '\n'
#define dbg2(x, y) cerr << #x << '=' << x << ' ' << #y << '=' << y << '\n' 

#define input() (*istream_iterator<int>(cin))
#define strin() (*istream_iterator<string>(cin))

int main(){
    ios::sync_with_stdio(false);
    int q = input();
    while(q--){
        int n = input()-1, res = n; 
        for(int i = 2; i*i <= n; ++i){
            if(n%i == 0) {
                while(n%i == 0) n/=i;
                res -= (res/i);
            }
        }
        if(n >= 2) res -= res/n;
        cout << res << "\n";
    }
    return 0;
}