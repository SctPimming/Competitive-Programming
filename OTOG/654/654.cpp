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

const int mxn = 3e5+10;

lli bit[mxn], idx[mxn], n;
std::vector<pii> key;
std::vector<int> v[26];


void update(int cur, int val){
	for(; cur <= n; cur += cur&(-cur)) bit[cur] += val;
}

void range_update(int l, int r, int val){
	update(l, val);
	update(r+1, -val);
}

lli query(int cur){
	lli res = 0;
	for(; cur; cur -= cur&(-cur)) res += bit[cur];
	return res;
}

int main(){
	int mode = input();
	lli ans = 0;
	string pat = strin(), str = strin();
	n = sz(pat);
	rep(i, 0, n){
		int cur = pat[i]-'a';
		v[cur].push_back(i+1);
	}
	for(char now : str){
		int cur = now - 'a', ptr = idx[cur];
		if(idx[cur] > sz(v[cur])){
			output(-1);
			return 0;
		}
			lli diff = query(v[cur][ptr]);
			lli sum = v[cur][ptr] + diff;
			ans += sum;
			idx[cur]++;
			range_update(v[cur][ptr]+1, n, -mode);
	}
	output(ans);
}
/*
0 
aabceddectfghaat 
catbat

1 
aabceddectfghaat 
catbat
*/
