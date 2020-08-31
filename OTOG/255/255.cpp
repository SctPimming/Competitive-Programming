

const int mxn = 1e5+10;
vector<int> money(mxn, 0), adj[mxn];

void dfs(int cur = 1){
    for(auto nx: adj[cur]){
        money[nx] += money[cur];
        dfs(nx);
    }
}

int main(){
    ios::sync_with_stdio(false);
    int n = input(), m = input();
    rep(i, 0, n-1) {
        int u = input(), v = input();
        adj[v].push_back(u);
    }
    rep(i, 0, m) {
        int sec = input(), inc = input();
        money[sec] += inc;
        dbg(money[sec], inc);
    }
    dfs();
    for(int i = 1; i <= n; ++i) cout << money[i] << "\n";
    return 0;
}