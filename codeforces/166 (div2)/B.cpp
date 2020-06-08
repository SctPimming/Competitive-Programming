#include<bits/stdc++.h>
using namespace std;
using lli = long long;
using pii = pair<int, int>;

#define rep(i, k, n) for(int i=(k); i != int(n); ++i)
#define sz(x) x.size()
#define all(x) x.begin(), x.end()

#define dbg(x) cerr << #x << '=' << x << '\n'
#define dbg2(x, y) cerr << #x << '=' << x << ' ' << #y << '=' << y << '\n' 

#define input() (*istream_iterator<int>(cin))
#define strin() (*istream_iterator<string>(cin))
#define output(x) cout << x << '\n' 

const int mxv = (1e5)+19;

int main(){
    ios::sync_with_stdio(false);
    int n = input(), m = input(), mn = INT_MAX;
    vector<int> prime, v[n];
    prime.push_back(2);
    for(int i = 3, sw = true; i < mxv; i+=2, sw = true){
        for(int j = 3; j <= sqrt(i); j+=2) {
            if(i%j == 0) sw = false;
        }
        if(sw) prime.push_back(i);
    }
    rep(i, 0, n){
        rep(j, 0, m){
            int inp = input();
            int idx = lower_bound(all(prime), inp) - prime.begin(), dist = prime[idx] - inp;
            //dbg2(inp, idx);
            v[i].push_back(dist);
            //cout << dist << " ";
        }
        cout << "\n";
    }
    rep(i, 0, n) mn = min(mn, accumulate(all(v[i]), 0));
    rep(i, 0, m){
        int sum = 0;
        rep(j, 0, n) sum += v[j][i];
        mn = min(mn, sum);
    }
    cout << mn;
}