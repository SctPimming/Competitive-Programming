#include<bits/stdc++.h>
using namespace std;
using lli = long long;
using pii = pair<int, int>;

#define rep(i,k,n) for(int i=(k); i != int(n); ++i)
#define sz(x) x.size()
#define all(x) x.begin(), x.end()

#define dbg(x) cout << #x << '=' << x << '\n'
#define dbg2(x, y) cout << #x << '=' << x << ' ' << #y << '=' << y << '\n' 

#define input() (*istream_iterator<lli>(cin))
#define strin() (*istream_iterator<string>(cin))
#define output(x) cout << x << '\n' 

int main(){
    ios::sync_with_stdio(false);
    lli n = input(), k = input();
    vector<lli> v, s;
    rep(i, 0, n) v.push_back(input());
    sort(all(v));
    for(lli cur : v){
        if(cur % k != 0) s.push_back(cur);
        else{
            int key = cur/k;
            if(not binary_search(all(s), key)) s.push_back(cur);
            //for(int ele: s) cout << ele << ' ';
            //cout << '\n';
        }
    }
    cout << sz(s);
}
