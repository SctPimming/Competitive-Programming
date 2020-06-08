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
    int n = input();
    rep(i, 0, n) v.push_back(input());
    int sum = accumulate(all(v), 0), pre = 0;
    rep(i, 0, n){
        pre += v[i];
        if(pre*2 >= sum){
            cout << i+1;
            return 0;
        }
    }
}