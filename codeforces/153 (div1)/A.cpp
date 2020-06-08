#include<bits/stdc++.h>
using namespace std;
using lli = long long;
using pii = pair<int, int>;

#define rep(i,k,n) for(int i=(k); i < int(n); ++i)
#define sz(x) x.size()
#define all(x) x.begin(), x.end()

#define dbg(x) cout << #x << '=' << x << '\n'
#define dbg2(x, y) cout << #x << '=' << x << ' ' << #y << '=' << y << '\n' 

#define input() (*istream_iterator<int>(cin))
#define strin() (*istream_iterator<string>(cin))
#define output(x) cout << x << '\n' 

int main(){
    ios::sync_with_stdio(false);
    vector<lli> ncr, point;
    lli ans = 0;
    ncr.push_back(0);
    ncr.push_back(0);
    ncr.push_back(1);
    ncr.push_back(3);
    for(int i =  4; i <= 100000; ++i) ncr.push_back(ncr[i-1]+i-1);
    int n = input(), k = input();
    rep(i, 0, n) point.push_back(input());
    rep(i, 0, n-2){
        int len = upper_bound(all(point), point[i]+k) - point.begin() - 1;
        //dbg2(len-i, ncr[len-i]);
        ans += ncr[len-i];
    }
    cout << ans;
}