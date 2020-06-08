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
    int t = input();
    while(t--){
        vector<int> seq;
        int n = input();
        rep(i, 0, n) seq.push_back(input());
        int mx = seq[0]; 
        lli sum = 0;
        rep(i, 1, n){
            int cur = seq[i];
            if(cur/seq[i-1] >= 0 and seq[i-1]/cur >= 0) mx = max(mx, cur);
            else{
                sum += mx;
                mx = cur;
            }
        }
        sum += mx;
        cout << sum << "\n";
    }
}