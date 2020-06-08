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

vector<int> val;
bool check(){
    lli sum = 0;
    rep(i, 0, sz(val)){
        sum += val[i];
        if(sum <= 0) return 0;
    }
    sum = 0;    
    reverse(all(val));
    rep(i, 0, sz(val)){
        sum += val[i];
        if(sum <= 0) return 0;
    }
    return 1;
}
int main(){
    ios::sync_with_stdio(false);
    int t = input();
    while(t--){
        int n = input();
        rep(i, 0 , n) val.push_back(input());
        (check()) ? puts("YES\n") : puts("NO\n");
        val.clear();
    }
}