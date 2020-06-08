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
    int n = input(), m = input();
    vector<int> v;
    rep(i, 0, n) v.push_back(input());
    sort(all(v));
    rep(i, 0, m){
        int key = input();
        cout << upper_bound(all(v), key) - v.begin() << " ";
    }
    return 0;
}