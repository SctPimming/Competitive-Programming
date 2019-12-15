#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define rep(i,k,n) for(int i=(k);i!=int(n);++i)
#define sz(x) x.size()
#define all(x) x.begin(),x.end()
#define dbg(x) cout << "debug :" << x << endl;
#define dbg2(x,y) cout << "debug :" << x << ":" << y << endl;
#define input() (*istream_iterator<int>(cin))

using psi = pair<string, int>;

int main(int argc, char const *argv[]){
	int n, val1, val2;
	cin >> n;
	rep(i, 0, n){
		cin >> val1 >> val2;
		v.push_back(val);
	}
	sort(all(v), [](data a, data b){return (a.x==b.x) ? a.x > b.x : a.y < b.y};);
	return 0;
}

int main(int argc, char const *argv[])
{
	set<psi> score = { //list intialize
		{"A", 80},
		{"B", 70},
		{"C", 60},
		{"D", 50}
	};
	string mkey = "C";
	int mval = 60;
	auto it_key = find_if(all(score), // range of find until we found element that match our condition.
		[&]
		(psi const & t){return t.first.compare(mkey)==0;} // condition --> lambda function
	);
	if(it_key != score.end()) cout << "found (by key) " << it_key->second << "\n"; // searching result.
	else cout << "not found\n";
	auto ch_val = [&](psi const & t){return t.second == mval;};
	auto it_val = find_if(all(score), ch_val);
	if(it_val != score.end()) cout << "found (by val) " << it_key->first << "\n";
	else cout << "not found\n";	
}

