#include <bits/stdc++.h>
using namespace std;

using pii = pair<int, int>;
using lli = long long int;

#define rep(i,k,n) for(int i=(k);i!=int(n);++i)
#define sz(x) x.size()
#define all(x) x.begin(),x.end()
#define dbg(x) cout << "debug :" << x << '\n'
#define dbg2(x,y) cout << "debug :" << x << ':' << y << '\n'
#define input() (*istream_iterator<int>(cin))
#define strin() (*istream_iterator<string>(cin))
#define output(x) cout << x << '\n' 

bool cmp(pii lhs, pii rhs){
    return lhs.second < rhs.second;
}
int main(){
    multiset<int> w_pos;
    vector<pii> clock;
    int n = input(), m = input(), ans = 0;
    rep(i, 0, n) w_pos.insert(input());
    rep(i, 0, m){
        int pos = input(), tm = input();
        clock.push_back({pos-tm, pos+tm});
    }
    sort(all(clock), cmp);
    for(pii cur : clock){
        int l = cur.first, r = cur.second;
        //dbg2(l, r);
        auto posl = w_pos.lower_bound(l);
        auto posr = w_pos.lower_bound(r);
        if(*posl >= l and *posl <= r){
            w_pos.erase(posl);
            //dbg("from left");
            //dbg(*posl);
            ans++;
        }
        else if(*posr >= l and *posr <= r){
            w_pos.erase(posr);
            //dbg("from right");
            //dbg(*posr);
            ans++;
        }
    }
    cout << ans;
    return 0;
}
/*
3 3
1 
0
3 
-6 7 
4 1
2 1
*/
