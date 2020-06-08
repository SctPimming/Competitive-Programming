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
    int q = input();
    while(q--){
        int n = input(), m = input(), k = input();
        int rec = n/k, point = 0;
        int left = m - rec;
        int sub = (left % (k-1) == 0) ? left/(k-1) : (left/(k-1))+1;
        if(left <= 0) point = m;
        else point = rec - sub;
        cout << point << "\n";
    }
}