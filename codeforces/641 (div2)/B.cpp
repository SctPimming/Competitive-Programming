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

int main(){
    ios::sync_with_stdio(false);
    int t = input();
    while(t--){
        int n = input(), ans = 1, spe = 0;
        vector<int> size; 
        vector<pii> sorted_size;
        vector<int> check(n+1, 1);
        size.push_back(0);
        rep(i, 0, n){
            int inp = input();
            size.push_back(inp);
            sorted_size.push_back({inp, i+1});
        }
        spe = sorted_size[0].first;
        sort(all(sorted_size));
        for(int i = 0; i != n; ++i){
            pii cur = sorted_size[i];
            int val = cur.first, idx = cur.second;
            for(int j = i+1; j != n; ++j){
                int dx = sorted_size[j].second;
                if(dx%idx == 0 and sorted_size[j].first>val){
                    if(check[dx] == 1) check[dx]+=check[idx];
                    else check[dx] = max(check[dx], check[idx]+1);
                    break;
                }
            }
        }
        cout << *max_element(all(check)) << "\n";
        //for(int dx : check) cout << dx << " ";
        //cout << "\n";
        //cout << ans << "\n";
    }
}