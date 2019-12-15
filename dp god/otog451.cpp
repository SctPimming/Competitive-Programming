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

const int mxn = 1e6+10;
using tu = tuple<lli, lli, lli>;
	//lli c1, c2, idx;
map<tu, int> dp; 
lli arr[mxn];
int n;

int solve(lli c1, lli c2, lli idx){
	//tie(a, b, c) = tup;
	tu state = {c1, c2, idx};
	auto itr = dp.find(state);
	if(itr != dp.end()) return itr->second;
	if(idx == n) return 0;	
	lli cur = arr[idx];
	// can use brush 1/2 instantly 
	if(cur == c1 or cur == c2) return solve(c1, c2, idx+1);
	else{ // change color of brush 1 and 2
		int val1 = solve(cur, c2, idx+1) + 1;
		int val2 = solve(c1, cur, idx+1) + 1;
		return dp[state] = min(val1, val2);
	}


}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	rep(i, 0, n) arr[i] = input();
	cout << solve(0, 0, 0) << "\n";
}
/*
2 
5 
7 7 2 11 7
10 
9 1 7 6 9 9 8 7 6 7 
*/