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
    //freopen("9.in", "r", stdin);
    //freopen("9.sol", "w", stdout);
    int n = input(), cnt = 0;
    string str = strin();
    reverse(all(str));
    bitset<200010> lamp(str);
    for(int i = 0; i < n; ++i){
        if(not lamp[i]){
            for(int j = i; j < n; ++j) lamp.flip(j);
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}