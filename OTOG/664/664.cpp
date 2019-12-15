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

int main(){
	int mx = -1, cnt = 0, cur;
	while(cin >> cur) {
		cnt++;
	  if(cur > mx) {
	  	i(mx != -1) cnt = 0;
	  	mx = cur;
	  }
	}
	output(cnt);
}