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

const int mod = 1e9 + 7;
int main(){
    ios::sync_with_stdio(false);
    lli n = input(), k = input(), p = n-k+2;
    lli p1 = p*((lli(n*(n+1))/2)+1);
    lli p2 = (n+1)*(n+2)*(2*n+3)/3 - (k*(k-1)*(2*k-1))/3;
    lli p3 = (n+1)*((n+2)*(n+1) - (k*(k-1)));
    lli p4 = p*lli(n*(n+1));
    dbg(p1);
    dbg(p2);
    dbg(p3);
    dbg(p4);
    cout << (p1%mod - ((((p2%mod + p4%mod)%mod - p3%mod)%mod)/2))%mod;
}