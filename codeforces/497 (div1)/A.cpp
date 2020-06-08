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
    vector<int> v;
    int n = input(), ans = 0, num = 0;
    int p1 = 0, p2 = 0;
    rep(i, 0, n) v.push_back(input());
    sort(all(v));
    while(p1 < n and p2 < n){
        if(v[p1] < v[p2]){
            p1++;
            p2++;
            ans++;
        }
        else p2++;
    }
    cout << ans;
}