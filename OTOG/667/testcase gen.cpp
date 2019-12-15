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
#define nline "\n"
#define spc " "

bool rng(){
	int res = rand()%10+1;
	return (res<=3) ? true : false;
}

int main(){
	//freopen ("10.in", "w", stdout);
	srand(time(NULL));
	int n = 10000, m = 150000;
	int s = rand()%n, t = rand()%n, edge_num = 0;
	while(s==t) t = rand()%n;
	int u = s, v; // from u to v
	cout << n << spc << m << spc << s << spc << t << endl;
	std::vector<bool> visit(n, false);
	visit[t] = visit[s] = true;	
	while(edge_num < n-2){
	int idx = rand()%n;
		if(!visit[idx]){
			visit[idx] = 1;
			v = idx;
			cout << u << spc << v << spc << (rand()%1000)+1 << nline;
			u = idx;
			edge_num++;
		}
	}
	cout << u << spc << t << spc << (rand()%1000)+1 << nline;
	edge_num++;	
	//dbg(edge_num);
	while(edge_num < m){
		u = rand()%n;
		v = rand()%n;
		if(u == s or v == t or u == v) continue;
		if(rng()) {
			cout << u << spc << v << spc << (rand()%5000)+1 << nline;
			edge_num++;
		}
	}
	return 0;
}	