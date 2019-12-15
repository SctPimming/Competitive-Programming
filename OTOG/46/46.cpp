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

std::vector<pii> v1, v2;

bool cmp(pii u, pii v){
	return (u.second < v.second);
}
int main(int argc, char const *argv[]){
	int n = input();
	int u, v;
	rep(i, 0, n){
		cin >> u >> v;
		v1.push_back({u, v});
		v2.push_back({u, v});
	}
	sort(all(v1));
	sort(all(v2), cmp);
	for(pii cur : v1) dbg2(cur.first, cur.second);
	for(pii cur : v2) dbg2(cur.first, cur.second);
	rep(i, 0, n){
		if(i == n-1) cout << cur.first << " " << cur.second;
		auto itr = upper_bound(all(v2), )
	}
	return 0;
}