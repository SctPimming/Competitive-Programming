#include<bits/stdc++.h>
using namespace std;
using lli = long long;
using pii = pair<int, int>;

const int mxn = 120;
vector<int> rock(mxn);
int dp[mxn][mxn], n;
int solve(int l, int r){
    if(l >= r) return 0;
    if(dp[l][r] != 0) return dp[l][r];
    return dp[l][r] = max({
                        solve(l+2, r) + rock[l], 
                        solve(l+1, r-1) + rock[l], 
                        solve(l, r-2) + rock[r], 
                        solve(l+1, r-1) + rock[r]
                        });
}
int main(){
    int l, r;
    cin >> n;
    l = 0, r = 2*n-1;
    for(int i = 0; i < 2*n; ++i) cin >> rock[i];
    cout << solve(l, r);
    return 0;
}