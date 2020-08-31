#include<bits/stdc++.h>
using namespace std;
using lli = long long;
using pii = pair<int, int>;

#define sz(x) x.size()
#define all(x) x.begin(), x.end()

#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))

#define dbg(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }

void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
    cerr << *it << '=' << a << endl;
    err(++it, args...);
}

#define input() (*istream_iterator<int>(cin))
#define strin() (*istream_iterator<string>(cin))

const int mxn = 1e5+10;
int dp[mxn], point[mxn];
int n;
int solve(int cur = n){
    if(cur <= 2) return 0;
    if(dp[cur] > 0) return dp[cur];
    return dp[cur] = max({
                    point[cur] + solve(cur-3),
                    solve(cur-1)
                    });
}
int main(){
    ios::sync_with_stdio(false);
    n = input();
    for(int i = 1; i <= n; ++i) point[i] = input();
    for(int i = 3; i <= n; ++i) dp[i] = max({dp[i-1], point[i] + dp[i-3]});
    cout << dp[n];
    return 0;
}