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
    int n = input(), score, mx = -1;
    string ans, name;
    unordered_map<string, int> mp, mp2;
    vector<pair<string, int>> v;
    rep(i, 0, n){
        cin >> name >> score;
        v.push_back({name, score});
        mp[name] += score;
    }
    for(auto [key, val] : mp) mx = max(val, mx);
    //dbg(mx);
    for(auto [name, score] : v){
        mp2[name] += score;
        if(mp2[name] >= mx and mp[name] == mx){
            ans = name;
            break;
        } 
    }
    cout << ans;
}