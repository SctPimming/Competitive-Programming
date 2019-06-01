#include <bits/stdc++.h>
#define fi first
#define se second
#define rep(i,k,n) for(int i=(k);i!=int(n);++i)
#define sz(x) x.size()
#define all(x) x.begin(),x.end()
#define dbg(x) cout << "debug :" << x << endl;
#define dbg2(x,y) cout << "debug :" << x << ":" << y << endl;
#define input() (*istream_iterator<int>(cin))

using namespace std;
using pii = pair<int, int>;

/*bool cmp(pii a, pii b){
  if(a.fi == b.fi) return a.se > b.se;
  else return a.fi < b.fi;
}

int  main(){
  int n = input();
  std::vector<pii> v(n,{0, 0});
  rep(i, 0, n) cin >> v[i].fi >> v[i].se;
  sort(all(v), cmp);
  for(pii cur : v) cout << cur.fi << " " << cur.se << "\n";
}*/
int main(){
	int n = input();
	std::vector<pii> v(n, {0, 0});
	rep(i, 0, n) cin >> v[i].fi >> v[i].se;
	sort(all(v), [](pii a, pii b) {return (a.fi == b .fi) ? a.se > b.se : a.fi < b.fi;});
	rep(i, 0, n) cout << v[i].fi << " " << v[i].se << "\n";
	return 0;
}