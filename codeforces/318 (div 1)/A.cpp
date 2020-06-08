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

int main(){
    ios::sync_with_stdio(false);
    lli n = input(), sw = true;
    vector<lli> v;
    rep(i, 0, n) v.push_back(input());
    lli gcd = v[0];
    rep(i, 1, n) gcd =  __gcd(gcd, v[i]); 
    //dbg(gcd);
    rep(i, 0, n) {
        if(gcd != v[i]){
            int d = v[i]/gcd;
            while(d % 2 == 0) d/=2;
            while(d % 3 == 0) d/=3;
            if(d != 1) sw = false;
        }
    }
    (sw) ? puts("Yes") : puts("No");
}