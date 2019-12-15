
// this is GA (Genetic Algorithm) solution

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

const int mxn = 1e3+10, mxiter = 100, popsz = 1000;
std::vector<pii> item;
std::vector<int> pop[popsz];
int solve(){
	int iter = 1;
	while(iter <= mxiter) {
	    rep(i, 0, popsz){
	    	
	    }
	}
	return best_sol;
}
int main(){
	int n = input(), w = input();
	rep(i, 0, n){
		int w = input(), val = input();
		item.push_back({w, v});
	}
}