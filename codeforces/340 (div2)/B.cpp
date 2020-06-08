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

int main(){
    ios::sync_with_stdio(false);
    int n = input(); 
    lli ans = 1;
    vector<int> v;
    rep(i, 0, n) v.push_back(input());
    int p1 = 0, sw = 0;
    while (p1 < n){
        if(v[p1] == 1){
            sw = 1;
            int cnt = 0;
            p1++;
            while(v[p1] != 1 and p1 < n){
                cnt++;
                p1++;
            }
            if(v[p1] == 1) ans *= (cnt + 1);
        }
        else p1++;
    }
    (sw) ? cout << ans : cout << 0;
    return 0;
}