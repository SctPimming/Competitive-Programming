#include<bits/stdc++.h>
using namespace std;
using lli = long long;
using pii = pair<int, int>;

#define rep(i,k,n) for(int i=(k); i != int(n); ++i)
#define sz(x) x.size()
#define all(x) x.begin(), x.end()

#define dbg(x) cout << #x << '=' << x << '\n'
#define dbg2(x, y) cout << #x << '=' << x << ' ' << #y << '=' << y << '\n' 

#define input() (*istream_iterator<lli>(cin))
#define strin() (*istream_iterator<string>(cin))
#define output(x) cout << x << '\n' 

int count_divisor(lli n){
    int res = 0;
    for(int i = 1; i <= sqrt(n); ++i){
        if(n%i == 0){
            res += (n/i == i) ? 1 : 2; 
        }
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    lli n = input(), gcd;
    if(n == 1) cin >> gcd;
    else {
        lli a = input(), b = input();
        gcd = __gcd(a, b);
        for(int i = 3; i <= n; ++i) gcd = __gcd(gcd, input());
    }
    cout << count_divisor(gcd);
}

