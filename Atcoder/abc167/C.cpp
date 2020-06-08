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
    int n, m, x, mn = INT_MAX;
    cin >> n >> m >> x;
    vector<int> price, upgrade[n];
    for(int i = 0; i != n; ++i){
        price.push_back(input());
        for(int j = 0; j != m; ++j) upgrade[i].push_back(input());
    }
    for(int msk = 0; msk < (1<<n); ++msk){
        vector<int> skill(m);
        int money = 0, sw = true;
        for(int i = 0; i < n; ++i){
            if(msk&(1<<i)){ //buy
                money += price[i];
                for(int j = 0; j != m; ++j) skill[j]+=upgrade[i][j];
            }
        }
        for(int cur : skill){
            if(cur < x){
                sw = false;
                break;
            }
        }
        if(sw) mn = min(money, mn);
    }
    (mn == INT_MAX) ? cout << -1 : cout << mn;
}