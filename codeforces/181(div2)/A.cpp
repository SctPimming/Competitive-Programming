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
    int n = input();
    vector<int> neg, pos, zero;
    rep(i, 0, n){
        int inp = input();
        if(inp > 0) pos.push_back(inp);
        else if(inp < 0) neg.push_back(inp);
        else zero.push_back(inp);
    }
    if(sz(pos) == 0){
        pos.push_back(neg.back());
        neg.pop_back();
        pos.push_back(neg.back());
        neg.pop_back();
    }
    if(sz(neg)%2 == 0){
        zero.push_back(neg.back());
        neg.pop_back();
    }
    cout << sz(neg) << " ";
    auto print = [](int i){cout << i << " ";};
    for_each(all(neg), print);
    cout << "\n" << sz(pos) << " ";
    for_each(all(pos), print);
    cout << "\n" << sz(zero) << " ";
    for_each(all(zero), print);

}