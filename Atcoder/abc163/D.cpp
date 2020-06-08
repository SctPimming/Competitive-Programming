#include<bits/stdc++.h>
using namespace std;
using lli = long long;
using pii = pair<int, int>;

#define rep(i,k,n) for(int i=(k); i != int(n); ++i)
#define sz(x) x.size()
#define all(x) x.begin(), x.end()
#define dbg(x) cerr << #x << '=' << x << '\n';
#define dbg2(x, y) cout << #x << '=' << x << ' ' << #y << '=' << y << '\n' 

#define input() (*istream_iterator<int>(cin))
#define strin() (*istream_iterator<string>(cin))
#define output(x) cout << x << '\n' 

const int mod = 1e9+7;
lli acc(lli idx){
    return (lli(idx*(idx+1))/2);
}
int main(){
    ios::sync_with_stdio(false);
    int n = input(), k = input();
    int sum = 0;
    for(int i = k; i <= n+1; ++i){
        lli mn = acc(i-1), mx = acc(n)-acc(n-i);
        lli seg = mx - mn + 1;
        //dbg(seg);
        sum = ((sum%mod) + (seg%mod))%mod;       
    }
    cout << sum;
}