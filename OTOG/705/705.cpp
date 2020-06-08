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
    //freopen("10.in", "r", stdin);
    //freopen("10.sol", "w", stdout);
    int t = input();
    while(t--){
        int n = input(); 
        int submit_time, wrong = 0, last_ac = 0;
        string verdict;
        rep(i, 0, n){
            cin >> verdict >> submit_time;
            (verdict == "AC") ? last_ac = submit_time : wrong++;
        }
        cout << last_ac + (20*wrong) << "\n";
    }
}