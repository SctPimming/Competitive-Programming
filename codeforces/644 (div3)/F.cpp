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
        int n = input(), m = input();
        string inp[n], ans;
        for(int i = 0; i != n; ++i) cin >> inp[i];
        for(int i = 0; i != m; ++i){
            map<char, int> mp;
            for(int j = 0; j != n; ++j){
                char cur = inp[j][i];
                mp[cur]++;
            }
            int mx = -1, ch;
            for(auto itr : mp){
                if(itr.second > mx){
                    mx = itr.second;
                    ch = itr.first; 
                }    
            }
            ans.push_back(ch);
        }

        int sw = true;
        for(int i = 0; i != n; ++i){
            int dif = 0;
            for(int j = 0; j != m; ++j){
                if(ans[j] != inp[i][j]) dif++; 
            }
            if(dif >= 2) sw = false;
        }
        (sw) ? cout << ans << "\n" : cout << -1 << "\n";
    }
}