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

const int mxn = 1e5+10;
int arr[mxn], dp[mxn];

int main(){
	int n = input(), len = 1;
	rep(i, 0, n) arr[i] = input();
	rep(i, 1, n){
		if(arr[i] >= arr[i-1]) len++;
		else len = 1;
		//dbg2(dp[i], len);
		dp[i] = max(dp[i], len);
	}
	if(n==1) output(1);
	else output(*max_element(dp, dp+n));
	return 0;
}