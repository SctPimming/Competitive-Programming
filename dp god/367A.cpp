#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;
using lli = long long int;

#define fi first
#define se second
#define rep(i,k,n) for(int i=(k);i!=int(n);++i)
#define sz(x) x.size()
#define all(x) x.begin(),x.end()
#define dbg(x) cout << "debug :" << x << "\n"
#define dbg2(x,y) cout << "debug :" << x << ":" << y << "\n"
#define input() (*istream_iterator<int>(cin))
#define strin() (*istream_iterator<string>(cin))
#define output(x) cout << x

const int mxp = 1e5+10;
int dp[mxp];
int main(){
	int n = input();
	rep(i, 0, n){
		int cost = input();
		dp[cost]++;
	}
	rep(i, 1,	mxp) dp[i] += dp[i-1];
	int q = input();
	while(q--) {
		int money = input();
		if(money <= 100000) cout << dp[money] << "\n";
		else cout << n << "\n";
	}

	return 0;
}