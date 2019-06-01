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

const int mxn = 100;

int main(){
	string str = strin();
	int len = sz(str), cnt = 0;
	rep(i, 0, len){
		if(str[i] == 'Q'){
			rep(j, i, len){
				if(str[j] == 'A')
					rep(k, j, len) if(str[k] == 'Q') cnt++;
			}
		}
	}
	output(cnt);
}