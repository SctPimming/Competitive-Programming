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
    lli n = input(), a = input(), b = input(), c = input();
    lli r = (n%4);
    //dbg(r);
    if(r == 0) puts("0");
    else{
        lli need = 4 - r;
        if(need == 1) cout << min({a, b+c, 3*c});
        else if(need == 2) cout << min({2*a, b, 2*c});
        else cout << min({3*a, a + b, c});
    }
}