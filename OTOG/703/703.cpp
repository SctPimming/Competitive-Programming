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
    //freopen("10.in", "r", stdin);
    //freopen("10.sol", "w", stdout);
    int n = input(), cnt = 0;
    string str = strin();
    reverse(all(str));
    bitset<200010> lamp(str);
    for(int i = 0; i < n; ++i){
        lamp[i] = (cnt % 2 == 0) ? lamp[i] : (not lamp[i]);
        if(lamp[i] == 0) cnt++;  
    }
    cout << cnt;
    return 0;
}