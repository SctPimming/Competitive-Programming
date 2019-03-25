#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define rep(i,k,n) for(int i=(k);i!=int(n);++i)
#define sz(x) x.size()
#define all(x) x.begin(),x.end()
#define dbg(x) cout << "debug :" << x << "\n"
#define dbg2(x,y) cout << "debug :" << x << ":" << y << "\n"
#define input() (*istream_iterator<int>(cin))

int solve(int n, int m){
	int res = 0, val;
	if(m%n != 0) return -1;
	else val = m/n;
	while(val%2 == 0){
		val/=2;
		res++;
	}
	while(val%3 == 0){
		val/=3;
		res++;
	}
	if(val == 1) return res;
	else return -1;
}
int main(){
	int n = input(), m = input();
	cout << solve(n, m);
}