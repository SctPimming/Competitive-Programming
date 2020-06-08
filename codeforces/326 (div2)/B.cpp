#include<bits/stdc++.h>
using namespace std;
using lli = long long;
using pii = pair<int, int>;

#define rep(i,k,n) for(int i=(k); i != int(n); ++i)
#define sz(x) x.size()
#define all(x) x.begin(), x.end()

#define dbg(x) cerr << #x << '=' << x << '\n'
#define dbg2(x, y) cerr << #x << '=' << x << ' ' << #y << '=' << y << '\n' 

#define input() (*istream_iterator<int>(cin))
#define strin() (*istream_iterator<string>(cin))

int main(){
    ios::sync_with_stdio(false);
    lli n, ans = 1;
    cin >> n;
    for(int i = 2; i <= sqrt(n); ++i){
        if (n%i == 0) ans *= i;
        while (n%i == 0) n/=i;
    }
    if(n >=2) ans *= n;
    cout << ans;
    return 0;
}