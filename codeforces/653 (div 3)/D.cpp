#include<bits/stdc++.h>
using namespace std;
using lli = long long;
using pii = pair<int, int>;

#define sz(x) x.size()
#define all(x) x.begin(), x.end()

#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))

#define dbg(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }

void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
    cerr << *it << '=' << a << endl;
    err(++it, args...);
}

#define input() (*istream_iterator<int>(cin))
#define strin() (*istream_iterator<string>(cin))

int main(){
    ios::sync_with_stdio(false);
    int t = input();
    while(t--){
        int n = input(), k = input();
        lli ans = 0;
        vector<lli> need;
        map<int, int> mp;
        rep(i, 0, n){
            int inp = input();
            lli target = ((inp/k)+1)*k;
            if(inp % k == 0) continue;
            else need.push_back(target-inp);
        }
        for(lli &cur: need){
            dbg(cur);
            mp[cur]++;
            cur += (mp[cur]-1)*k;
        }
        sort(all(need));
        rep(i, 0, sz(need)){
            dbg(need[i]);
            if(i == 0) ans += need[i];
            else ans += need[i] - need[i-1];
        }
        if(ans > 0) ans++;
        cout << ans << "\n";
    }
    return 0;
}
/*
1
30 99999989
1000000000
1000000000
1000000000
1000000000
1000000000
1000000000
1000000000
1000000000
1000000000
1000000000
1000000000
1000000000
1000000000
1000000000
1000000000
1000000000
1000000000
1000000000
1000000000
1000000000
1000000000
1000000000
1000000000
1000000000
1000000000
1000000000
1000000000
1000000000
1000000000
1000000000


*/
