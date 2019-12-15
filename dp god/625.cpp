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

const int coin[] = {1, 5, 10, 25, 50}, cnum = 4;
const int mod = 1e6+3, mxk = 1e5+10; 
int dp[mxk];


int bottom_up(int k){
	dp[0] = 1;
	for(int cur : coin){
		for(int i = 1; i <= k; ++ i) if(i >= cur) dp[i] += dp[i-cur]%mod;
	}
	return dp[k]%mod;
}

int main(){
	ios::sync_with_stdio(false);
	int q = input();
	while(q--) {
	  int k = input();
	  fill_n(dp, mxk, 0);
	  cout << bottom_up(k) << "\n";
	}
	return 0;
}
