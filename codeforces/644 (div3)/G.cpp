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
    //ios::sync_with_stdio(false);
    int t = input();
    while(t--){
        int n, m, a, b;
        cin >> n >> m >> a >> b;
        string ans[n];
        if(n%b != 0 or m%a != 0) {
            puts("NO\n");
        }
        else{
            for(int i = 0; i < n/b; ++i){
                ans[i] = string((i)*b, '0') + string(a, '1') + string(m - (i*b + a), '0');
                cout << ans[i] << "\n" << ans[i] <<  "\n";
            }
        }
        
    }
}