#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;
using lli = unsigned long long int;

#define rep(i,k,n) for(int i=(k);i!=int(n);++i)
#define sz(x) x.size()
#define all(x) x.begin(),x.end()
#define dbg(x) cout << "debug :" << x << "\n"
#define dbg2(x,y) cout << "debug :" << x << ":" << y << "\n"
#define input() (*istream_iterator<lli>(cin))
#define strin() (*istream_iterator<string>(cin))
#define output(x) cout << x

const int mxn = 30, mxm = 1e4+10, inf = 1e6;
int n, money;
int coin[mxn], dp[mxm];

int top_down(int m){
	if(dp[m] != 0) return dp[m];
	int mn = inf;
	if(m <= 0) return 0;
	rep(i, 0, n) if(coin[i] <= m) {
		mn = min(mn, top_down(m - coin[i]) + 1);
	}
	return dp[m] = mn;
}

int bottom_up(int m){
	fill(dp, dp+m+1, inf);
	rep(i, 0, n) dp[coin[i]] = 1;
	rep(i, 0, m+1){
		rep(j, 0, n) {
			if(i >= coin[j]) dp[i] = min(dp[i], dp[i - coin[j]] + 1);
		}
	}
	return dp[m];
}

int main(){
	n = input(), money = input();
	rep(i, 0, n) coin[i] = input();

	//cout << top_down(money);

	cout << bottom_up(money);
}
/*
4 28
10 5 2 1
*/