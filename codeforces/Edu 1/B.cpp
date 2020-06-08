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
    string str = strin();
    int q = input();
    while (q--){
        int l = input(), r = input(), k = input(), len = r-l+1;
        k %= len;
        l--, r--;
        string seg = str.substr(l, len);
        //dbg(seg);
        for(int i = l; i <= r; ++i){
            int nx = i+k;
            //dbg(nx);
            if(nx > r) nx -= len;
            str[nx] = seg[i-l];
            //dbg(str);
        }
    }
    cout << str;
    return 0;
}