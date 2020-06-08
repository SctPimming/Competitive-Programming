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

struct cmp{
    bool operator() (const pii& lhs, const pii& rhs) const{
        int len1 = lhs.second - lhs.first, len2 = rhs.second - rhs.first;
        return (len1 == len2) ? lhs.first < rhs.first : len1 > len2;
    }
};
int main(){
    ios::sync_with_stdio(false);
    int t = input();
    while(t--){
        int n = input();
        vector<int> ans(n+1, 0);
        set<pii, cmp> range;
        range.insert({1, n});
        for(int i = 1; i <= n; ++i){
            pii cur = *range.begin();
            int l = cur.first, r = cur.second;
            int m = (l+r)/2;
            ans[m] = i;
            range.insert({l, m-1});
            range.insert({m+1, r});
            range.erase(cur);
        }
        for(int i = 1; i <= n; ++i) cout << ans[i] << " ";
        cout << "\n";
    }
}