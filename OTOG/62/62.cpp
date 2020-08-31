#include<bits/stdc++.h>
using namespace std;
using lli = long long;
using pii = pair<int, int>;

#define rep(i,k,n) for(int i=(k); i < int(n); ++i)
#define sz(x) x.size()
#define all(x) x.begin(), x.end()

#define dbg(x) cerr << #x << '=' << x << '\n'
#define dbg2(x, y) cerr << #x << '=' << x << ' ' << #y << '=' << y << '\n' 

#define input() (*istream_iterator<int>(cin))
#define strin() (*istream_iterator<string>(cin))

int ncr (int n, int r){
    int up = 1, down1 = 1, down2 = 1;
    rep(i, 0, n) up*=(i+1);
    rep(i, 0, n-r) down1 *= (i+1);
    //dbg(down1);
    rep(i, 0, r) down2 *= (i+1);
    //dbg(up/(down1*down2));
    return up/(down1*down2); 
}
int main(){
    ios::sync_with_stdio(false);
    int n = input();
    int times = n/9, r = n%9;        
    int res = ncr(9, r), ans = res;
    rep(i, 0, times) ans*=res;
    if(n == 1) ans++;
    cout << ans;
    
    return 0;
}