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

const int dx[] = {1, -1, 1, -1}, dy[] = {1, 1, -1, -1};
int n, m, q;
struct bro{
    int x, y, r;
    bool operator<(const bro& cur) const{
        return r < cur.r;
    }
};

bool inbound(int x, int y){
    if(x < n and x >= 0 and y < m and y >= 0) return true;
    return false;
}
int main(){
    ios::sync_with_stdio(false);
    n = input(), m = input(), q = input();
    vector<bro> pos;
    set<pii> ans;
    rep(i, 0, q) pos.push_back({input(), input(), input()});
    sort(all(pos));
    //find all (x,y) of first equation 
    int radius = pos[0].r;
    for(int i = 0; i <= radius; ++i){
        int a = i, b = radius-i;
        int x, y;
        for(int j = 0; j != 4; ++j){
            x = a*dx[j]+pos[0].x, y = b*dy[j]+pos[0].y;
            if(inbound(x, y)) ans.insert({x, y});
        }
    }
    for(pii cur: ans){
        int x = cur.first, y = cur.second, sw = true;
        for(int i = 1; i < q; ++i){
            int cur_x = pos[i].x, cur_y = pos[i].y, cur_r = pos[i].r;
            if(abs(x-cur_x)+abs(y-cur_y) != cur_r){
                sw = false;
                break;
            }
        }
        if(sw){
            cout << x << " " << y << "\n";
            break;
        }
    }
}