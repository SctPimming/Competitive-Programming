#include<bits/stdc++.h>
using namespace std;
using lli = long long;
using pii = pair<int, int>;

#define rep(i,k,n) for(int i=(k); i != int(n); ++i)
#define sz(x) x.size()
#define all(x) x.begin(), x.end()

#define dbg(x) cout << #x << '=' << x << '\n'
#define dbg2(x, y) cout << #x << '=' << x << ' ' << #y << '=' << y << '\n' 

#define input() (*istream_iterator<int>(cin))
#define strin() (*istream_iterator<string>(cin))
#define output(x) cout << x << '\n' 
const int mxn = 1e5+10;
int main(){
    ios::sync_with_stdio(false);
    int n = input(), m = input();
    vector<int> post(n+1, -1), adj[mxn];
    queue<int> q;
    q.push(1);
    for(int i = 0; i != m; ++i){
        int u = input(), v = input();
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    while(not q.empty()){
        int cur = q.front();
        q.pop();
        for(int nx : adj[cur]){
            if(post[nx] == - 1){
                q.push(nx);
                post[nx] = cur;
            }
        }
    }
    int fail = count_if(post.begin()+1, post.end(), [](int i){return i == -1;});
    if(fail > 0) cout << "No\n";
    else{
        cout << "Yes\n";
        for(int i = 2; i <= n; ++i) cout << post[i] << "\n";
    }
}