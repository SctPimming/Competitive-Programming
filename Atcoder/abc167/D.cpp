#include<bits/stdc++.h>
using namespace std;
using lli = long long;
using pii = pair<int, int>;

#define rep(i,k,n) for(int i=(k); i != int(n); ++i)
#define sz(x) x.size()
#define all(x) x.begin(), x.end()

#define dbg(x) cout << #x << '=' << x << '\n'
#define dbg2(x, y) cout << #x << '=' << x << ' ' << #y << '=' << y << '\n' 

#define input() (*istream_iterator<lli>(cin))
#define strin() (*istream_iterator<string>(cin))
#define output(x) cout << x << '\n' 

const int mxn = 2e5+10;
lli arr[mxn];
bool is_visit[mxn];
int find_loop(int cur = 1){
    is_visit[cur] = true;
    int nx = arr[cur];
    if(is_visit[nx]) return nx;
    return find_loop(nx);
}
int main(){
    ios::sync_with_stdio(false);
    lli n = input(), k = input();
    vector<int> cycle;
    int cur = 1, dist = 0;
    for(int i = 1; i <= n; ++i) arr[i] = input();
    int loop_town = find_loop();
    //dbg(loop_town);
    while(cur != loop_town){
        cur = arr[cur];
        dist++;
        if(dist == k){
            cout << cur;
            return 0;
        }
    }
    //dbg(dist);
    k -= dist;
    cur = arr[loop_town];
    cycle.push_back(loop_town);
    while(cur != loop_town){
        cycle.push_back(cur);  
        cur = arr[cur];  
    }
    //for(int cur: cycle) cout << cur;
    k%=cycle.size();
    cout << cycle[k];

}