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
struct num{
    int occ, l, r;
};
int main(){
    ios::sync_with_stdio(false);
    int n = input();
    int l = 0, r = n+1, mx = 0;
    map<int, num> mp;
    rep(i, 0, n){
        int inp = input();
        mp[inp].occ++;
        if(mp[inp].occ == 1){
            mp[inp].l = i+1;
            mp[inp].r = i+1;
        }
        else mp[inp].r = max(mp[inp].r, i+1);
    }
    for(auto ele: mp) mx = max(ele.second.occ, mx);
    for(auto ele: mp){
        num cur = ele.second;
        if(cur.occ == mx){
            mx = cur.occ;
            if(cur.r - cur.l < r - l){
                r = cur.r;
                l = cur.l;
            }
        }
    }
    cout << l << " " << r;
}