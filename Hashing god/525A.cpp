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

const int mxc = 30;
int key[mxc];

int main(){
	int n = input(), ans = 0;
	string str;
	cin >> str;
	for(char cur : str){
		int idx = cur-'A';
		if(cur >= 'a') key[cur-'a']++;
		
		if(cur <= 'Z'){
			if(key[idx] == 0) ans++;
			else key[idx]--;
		}
	}
	output(ans);
	return 0;
}