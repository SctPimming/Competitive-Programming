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

const int mxn = 1e5+10;
vector<int> adj[mxn], h;
int main(){
    ios::sync_with_stdio(false);
    int n = input(), m = input();
    int cnt = 0;
    for(int i = 0; i != n; ++i) h.push_back(input());
    for(int i = 0; i != m; ++i){
        int u = input(), v = input();
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i = 0; i != n; ++i){
        bool is_good = true;
        for(int cur: adj[i+1]){
            if(h[cur-1] >= h[i]){
                is_good = false;
                break;
            }
        }
        if(is_good) cnt++;
    }
    cout << cnt;
}