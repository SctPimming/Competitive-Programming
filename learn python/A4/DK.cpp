#include<bits/stdc++.h>
using namespace std;
using lli = long long;
using pii = pair<int, int>;

#define sz(x) x.size()
#define all(x) x.begin(), x.end()

#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))

#define dbg(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }

void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
    cerr << *it << '=' << a << endl;
    err(++it, args...);
}

#define input() (*istream_iterator<int>(cin))
#define strin() (*istream_iterator<string>(cin))

struct Edge{
    int u, v, w;
    bool operator < (const Edge& sth){
        return w < sth.w;
    }
};
const int mxn = 5e5+10;
vector<Edge> edge_list;
vector<int> parent(mxn), level(mxn);

void make_set(int v){
    parent[v] = v;
    level[v] = 0;
}
int find_set(int v){
    return (v == parent[v]) ? parent[v] : find_set(parent[v]);
}
void union_set(int u, int v){
    u = find_set(u);
    v = find_set(v);
    if(u != v){
        if(level[u] < level[v]) swap(u, v);
        parent[v] = u;
        if(level[u] == level[v]) level[u]++;
    }
} 
int main(){
    ios::sync_with_stdio(false);
    int n = input(), m = input(), cost = 0;
    rep(i, 0, n) make_set(i);
    rep(i, 0, m) edge_list.push_back({input(), input(), input()});
    sort(all(edge_list));
    for(Edge e: edge_list){
        if(find_set(e.u) != find_set(e.v)){
            cost += e.w;
            union_set(e.u, e.v);
        }
    }
    cout << cost;
    return 0;
}