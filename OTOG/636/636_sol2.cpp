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
    int q = input();
    while(q--){
        double n, m;
        cin >> n >> m;
        double l = 0, r = m, mid, val;
        while(l < r){
            mid = (l+r)/2;
            val = pow(mid, n);
            if(abs(val - m) < 1e-5){
                printf("%.6lf\n", mid);
                break;
            }
            else if(val > m) r = mid;
            else if(val < m) l = mid;
        }
    }
    return 0;
}