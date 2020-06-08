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
vector<int> v;
int n;
int solve(int cur = 0){
    if(v[cur] == 0) return 1 + ((1 << (n-cur)));
    
}
int main(){
    ios::sync_with_stdio(false);
    n = input();
    string str = strin();
    rep(i, 0, n) v.push_back(str[i]-'0');
    cout << o
}