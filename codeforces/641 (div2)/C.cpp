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
    int n = input();
    //int first = input();
    int lcm = input();
    vector<int> lcm_arr;
    for(int i = 1; i != n; ++i){
        int inp = input();
        lcm = (lcm*inp)/__gcd(lcm, inp);
        lcm_arr.push_back(lcm);
        dbg(lcm);
    }
    int gcd = lcm_arr[0];
    for(int i = 1; i != sz(lcm_arr); ++i){
        gcd = __gcd(gcd, lcm_arr[i]);
    }
    cout << gcd;
}