#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;
using lli = long long int;


#define rep(i,k,n) for(int i=(k);i!=int(n);++i)
#define sz(x) x.size()
#define all(x) x.begin(),x.end()
#define dbg(x) cout << "debug :" << x << "\n"
#define dbg2(x,y) cout << "debug :" << x << ":" << y << "\n"
#define input() (*istream_iterator<int>(cin))
#define strin() (*istream_iterator<string>(cin))
#define output(x) cout << x

const int mxn = 1e3;
int dp[mxn][mxn];
int solve(int n, int m){
	if(n <=0 or m <= 0 or(n<=1 and m<=1)) return 0;
	if(dp[n][m]>0) return dp[n][m];
	return dp[n][m] = max(solve(n+1, m-2)+1, solve(n-2, m+1)+1);
}
int main(){
	int n = input(), m = input();
	cout << solve(n, m);
}