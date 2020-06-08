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
        lli n, k;
        cin >> n >> k;
        lli sum1 = k-1;
        if((n - sum1)%2 == 1 and n-sum1 > 0){
            cout << "YES\n";
            for(lli i = 1; i <= k-1; ++i) cout << "1 ";
            cout << n-sum1 << "\n";
            continue;
        }
        lli sum2 = 2*(k-1);
        if((n - sum2)%2 == 0 and n-sum2 > 0){
            cout << "YES\n";
            for(lli i = 1; i <= k-1; ++i) cout << "2 ";
            cout << n-sum2 << "\n";
            continue;
        }
        cout << "NO\n";
    }
}