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
const int mxn = 510;
int dp[mxn][mxn];
int main(){
    ios::sync_with_stdio(false);
    string str1 = strin(), str2 = strin();
    int n = sz(str1), m = sz(str2);
    rep(i, 1, n+1){
        rep(j, 1, m+1){
            int idx1 = i-1, idx2 = j-1;
            if(str1[idx1] == str2[idx2]) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    cout << dp[n][m];
    return 0;
}