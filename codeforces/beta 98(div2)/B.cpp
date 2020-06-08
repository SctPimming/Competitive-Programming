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
    int n = input();
    map<int, int> mp;
    rep(i, 0 , n) mp[input()]++;
    int cnt = 0;
    for_each(all(mp), [&cnt, n](auto cur){
        if(cur.first <= n) cnt += (cur.second-1);
        else cnt += cur.second;
        }
    );
    cout << cnt;
}