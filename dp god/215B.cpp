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

const int mxn = 1e5+10;
int dp[mxn], num[mxn];
int arr[mxn];	
int main(){
	int n = input(), m = input();
	rep(i, 1, n+1) arr[i] = input();
	for(int i = n; i > 0; --i){
		if(num[arr[i]] == 0) dp[i] = dp[i+1] + 1;
		else dp[i] = dp[i+1];
		//dbg2(arr[i], dp[i]);
		num[arr[i]]++;
	}
	rep(i, 0, m){
		int q = input();
		cout << dp[q] << "\n";
	}
	return 0;
}