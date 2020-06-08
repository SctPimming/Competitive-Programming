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
#define output(x) cout << x << '\n' 

int main(){
    ios::sync_with_stdio(false);
    int n = input(); 
    int mn, mx;
    lli mn_num = 0, mx_num = 0;
    vector<int> v;
    rep(i, 0, n) v.push_back(input());
    sort(all(v));
    mn = v[0], mx = v[n-1];
    rep(i, 0, n)
        if(v[i] == mn) mn_num++;
    for(int i = n-1; i >= 0; --i)
        if(v[i] == mx) mx_num++;
    int all_num = mx_num + mn_num;
    lli ans = mn_num*mx_num;
    if(mn == mx) ans = lli(mx_num*(mx_num-1))/2;
    cout << (mx - mn) << " " << ans;
}