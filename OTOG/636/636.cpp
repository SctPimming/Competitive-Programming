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
    //freopen("10.in", "r", stdin);
    //freopen("10.sol", "w", stdout);
    int q = input();
    while(q--){
        int n = input(), m = input();
        printf("%.6lf\n", pow(m, double(1.0/n)));
        //cout << pow(m, double(1.0/n)) << "\n";
    }
    return 0;
}