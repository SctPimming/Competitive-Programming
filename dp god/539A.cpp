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

const int mxn = 110;
int dp[mxn][mxn]; // dp[town][fuel] 
int main(){
	int n = input(), cap = input();
	fill_n(*dp, mxn*mxn, INT_MAX);
	rep(i, 1, n+1){
		rep(j, 0, cap+1){
			if(i == 1) dp[i][j] = j;
			else{
				if(j == 0) dp[i][j] = dp[i-1][j+1];
				else{
					rep(k, 0, j){
						int fill = j - k;
						dp[i][j] = min((dp[i][k]+(fill*i)), dp[i][j]);
						dp[i][j] = min(dp[i-1][j+1], dp[i][j]);
					}
				}
			}
		}
	}
	int mn = INT_MAX;
	/*rep(i, 1, n+1){
		rep(j, 0, cap+1) cout << dp[i][j] << " ";
		cout << "\n";
	}*/
	rep(i, 0, cap+1) mn = min(dp[n][i], mn);
	output(mn);
	return 0;
}