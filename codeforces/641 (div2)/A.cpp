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

int main(){
    ios::sync_with_stdio(false);
    lli t = input();
    while(t--){
        lli n = input(), k = input();
        if(n%2 == 1){
            for(int i = 3; i <= n; ++i){
                if(n%i == 0) {
                    n+=i;
                    k--;
                    break;
                }
            }
        }
        // sure that will be even
        n += (k*2);
        cout << n << "\n";
    }
}