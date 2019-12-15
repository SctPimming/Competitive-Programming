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

const int mxn = 510, mxc = 30;
int arr[mxn], dp[mxc][mxc][mxn];
int n;

int solve(int c1, int c2, int idx){
	if(dp[c1][c2][idx]!=-1) return dp[c1][c2][idx];
	if(idx == n) return 0;
	int cur = arr[idx];
	// can use brush 1/2 instantly 
	if(cur == c1 or cur == c2) return solve(c1, c2, idx+1);
	else{ // change color of brush 1 and 2
		int val1 = solve(cur, c2, idx+1) + 1;
		int val2 = solve(c1, cur, idx+1) + 1;
		return dp[c1][c2][idx] = min(val1, val2);
	}


}
int main(){
	int q = input();
	while(q--) {
		n = input();
		rep(i, 0, n) arr[i] = input();
		fill_n(**dp, mxn*mxc*mxc, -1);
		cout << solve(0, 0, 0) << "\n";
	}

}
/*
2 
5 
7 7 2 11 7
10 
9 1 7 6 9 9 8 7 6 7 
*/