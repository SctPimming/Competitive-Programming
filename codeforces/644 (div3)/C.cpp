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
        int n = input(), sw = false;
        vector<int> odd, even;
        for(int i = 0; i != n; ++i){
            int inp = input();
            if(inp % 2 == 0) odd.push_back(inp);
            else even.push_back(inp);
        }
        if(sz(odd) % 2 == 0) sw = true;
        else{
            for(int cur : odd){
                for(int i = 0; i != sz(even); ++i){
                    if(cur - even[i] == 1 or cur - even[i] == -1) sw = true;
                }
            }
        }
        (sw) ? puts("YES\n") : puts("NO\n");
    }
}