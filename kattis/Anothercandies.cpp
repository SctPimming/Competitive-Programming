#include <bits/stdc++.h>
using namespace std;

using pii = pair<int, int>;
using lli = unsigned long long int;

#define rep(i,k,n) for(int i=(k);i!=int(n);++i)
#define sz(x) x.size()
#define all(x) x.begin(),x.end()
#define dbg(x) cout << "debug :" << x << '\n'
#define dbg2(x,y) cout << "debug :" << x << ':' << y << '\n'
#define input() (*istream_iterator<int>(cin))
#define strin() (*istream_iterator<string>(cin))
#define output(x) cout << x << '\n' 

int main(){
    int t = input();
    while(t--){
        lli n , sum = 0, val;
        cin >> n;
        rep(i, 0, n) {
            cin >> val;
            sum += val;
        }
        (sum % n == 0) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}