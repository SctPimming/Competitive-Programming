#define all(x) begin(x),end(x)
#include <bits/stdc++.h>
using namespace std;
const int mxN = 5e4+ 10;
struct Data{
    int node, w;
};
struct cmp {
  bool operator()(Data a, Data b) const { return a.w > b.w; }
};

vector<int> dist(mxN, INT_MAX); 
vector<Data> adj[mxN];
vector<pair<int, bool>> state(mxN);
unordered_map<string, int> hash_map;

priority_queue<Data,vector<Data>,cmp> pq;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    int source, dest;
    string start, endd, town_name;
    cin >> n >> m >> start >> endd;
    for(int i = 0; i < m; i++) {
        string a,b;
        int u, v, wei;
        cin >> a >> b >> wei;
        if(hash_map[a] == 0) 
            hash_map[a] = hash_map.size();
        if(hash_map[b] == 0) 
            hash_map[b] = hash_map.size();
        u = hash_map[a], v = hash_map[b];
        adj[u].push_back({v,wei});
        adj[v].push_back({u,wei});
    }
    source = hash_map[start], dest = hash_map[endd];
    for(int i = 0; i < n; i++) {
        int time;
        bool open;
        cin >> town_name >> time >> open;
        int nx = hash_map[town_name];
        state[nx] = {time, open};
    }
    pq.push({source, dist[source] = 0});
    while (!pq.empty()) {
        auto [cur, w] = pq.top();
        pq.pop();
        for(auto nx : adj[cur]) {
            int nx_w = w + nx.w;
            if(nx_w < dist[nx.node]) {
                auto [cycle, open]  = state[nx.node];
                int check = (cycle != 0) ? nx_w/cycle : 0;
                if(check&1) open ^= 1;
                if(open) {
                    dist[nx.node] = nx_w;
                    pq.push({nx.node, dist[nx.node]});
                }   
            }
        }  
    }
    cout << dist[dest];
}