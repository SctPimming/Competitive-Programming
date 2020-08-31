#include <bits/stdc++.h>

using namespace std;
// planet, gas usage
using pii = pair<int, int>;

const int N = 5e4 + 10, M = 1e5 + 10, INF = 2e9;

vector<pii> graph[N];
map<string, int> planet;
int appear[N]; 
int n, m;

priority_queue<pii, vector<pii>, greater<pii>> pq;
int dijk(int s, int e, int t, int mxg) {
    vector<int> dist(n, INF);
    pq.emplace(dist[s] = 0, s);
    while(not pq.empty()) {
        int sw, u;
        tie(sw, u) = pq.top();
        pq.pop();
        for (pii next : graph[u]) {
            int v, w;
            tie(v, w) = next;
            int nw = sw + w;
            if (appear[v] <= t and nw <= mxg and dist[v] > nw) {
                pq.emplace(dist[v] = nw, v);
            }
        }
    }
    return dist[e];
}

int main() {
    int g, mxt = 0;
    char inp1[110], inp2[110];
    string start, end, u,  v;
    cin >> n >> m >> start >> end >> g;
    for (int i = 0, t; i != n; ++i) {
        scanf("%s", inp1);
        v = string(inp1);
        cin >> t;
        planet[v] = i;
        appear[i] = t;
        mxt = max(mxt, t);
    }
    int s = planet[start];
    int e = planet[end];
    for (int i = 0; i != m; ++i) {
        int w;
        scanf("%s %s", inp1, inp2);
        u = string(inp1);
        v = string(inp2);
        cin >> w;
        int x = planet[u];
        int y = planet[v];
        graph[x].emplace_back(y, w);
        graph[y].emplace_back(x, w);
    }
    int l = 0, r = mxt + 1;
    while (l < r) {
        int m = l + (r-l) / 2;
        if (dijk(s, e, m, g) <= g) {
            r = m;
        } else {
            l = m + 1;
        }
    }
    cout << l << ' ' << dijk(s, e, l, g);
}

/*
5 7
A E 80
A 0
E 0
B 2
C 1
D 3
A C 10
A B 70
B E 20
C E 80
A D 40
D E 20
B C 30
*/
/*
5 5
A E 200
A 0
B 3
C 1
D 2
E 0
A C 10
B C 30
B E 20
A D 90
D E 70
*/