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

const int mxq = 60;
int n, m, q;
int mx = 0, cnt = 0;
vector<int> A;
struct quad{
    int a, b, c, d;
};
quad arr[mxq];
void solve(int cur = 1, int sz = 0){
    if(sz == n){
        int sum = 0;
        for(int i = 1; i <= q; ++i){
            cnt++;
            if(A[arr[i].b-1] - A[arr[i].a-1] == arr[i].c) sum += arr[i].d;
        }
        mx = max(sum, mx);
        return;
    }
    for(int i = cur; i <= m; ++i){
        A.push_back(i);
        solve(i, sz+1);
        A.pop_back();
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin >> n >> m >> q;
    for(int i = 1; i <= q; ++i) arr[i] = {input(), input(), input(), input()};
    solve();
    cout << mx;
    return 0;
}
