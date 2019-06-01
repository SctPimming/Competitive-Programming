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
#define spc " "
#define ln "\n"
using pii = pair<int, int>;
const int mxn = 1e4+10, mxm = 2e5+10, mxw = 1e7;
vector <pii> adj[mxn];
std::vector<int> cost(mxn, 0);

void add_edge(int u, int v, int w){
	int vw = (w*19) + cost[v];
	int uw = (w*19) + cost[u];
	adj[u].push_back({v,vw});
	adj[v].push_back({u,uw});
}

int dijkstra(int n, int src, int dest){
	priority_queue <pii, vector<pii>, greater<pii>> pq;
	std::vector<int> dist(n , mxw);
	std::vector<bool> flag(n, 0);
	pq.push({dist[src] = 0, src});
	while(not pq.empty()){
		int u = pq.top().second;
		flag[u] = 1;
		pq.pop();
		for(auto cur : adj[u]){
			int w = cur.second;
			int v = cur.first;
			if(dist[v] > dist[u] + w and (flag[v] == 0)){
				//dbg("hey listen\n");
				dist[v] = dist[u] + w;
				pq.push({dist[v], v});
			}
		}
	}
	return dist[dest];
}

int main(){
	//freopen("10.in", "r", stdin);
	//freopen("10.sol", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n = input(), m = input();
	int s = input(), t = input(), g = input();
	rep(i, 0, n) cin >> cost[i];
	rep(i, 0, m){
		int u, v, w;
		cin >> u >> v >> w;
		add_edge(u, v, w);
	}
	cout << (g-dijkstra(n, s, t));
	return 0;
}