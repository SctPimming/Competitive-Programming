#include <bits/stdc++.h>
using namespace std;

#define rep(i,k,n) for(auto i=(k); i != n; ++i)
#define sz(x) x.size()
#define all(x) x.begin(),x.end()
#define dbg(x) cout << "debug :" << x << "\n"
#define dbg2(x,y) cout << "debug :" << x << ":" << y << "\n"
#define qdbg() cout << "I'm here" << "\n";
#define input() (*istream_iterator<int>(cin))
#define sinp() (*istream_iterator<int>(string))


std::vector<int> v;
int main(){
	int n = input(), cnt = 0, ans = INT_MIN; 
	v.resize(n);

	rep(i, 0, n) cin >> v[i];
	v.insert(v.end(), all(v));

	rep(i, 0, sz(v)){
		(v[i] == 1) ? cnt++ : cnt = 0;
		ans = max(cnt, ans);
	}

	cout << ans;
}