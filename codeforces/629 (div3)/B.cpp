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

int mxn = 2e5;
int main(){
    ios::sync_with_stdio(false);
    vector<int> sum;
    sum.push_back(0);
    for(int i = 1; i <= mxn; ++i){
        if(sum[i-1] + i < 0) break;
        sum.push_back(i + sum[i-1]);
        //cout << sum[i] << "\n";
    }
    int t = input();
    while(t--){
        int n = input(), k = input();
        int div = lower_bound(all(sum), k) - sum.begin();
        int len = k - sum[div-1] - 1;
        string ans(n, 'a');
        ans[div] = 'b';
        ans[len] = 'b';
        reverse(all(ans));
        //dbg2(div, len);
        cout << ans << "\n";
    }
    
}