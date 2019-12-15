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

vector<int> bus_num;

int main(){
    int n = input(), val, old_idx = 0;
    rep(i, 0, n){
        cin >> val;
        bus_num.push_back(val);
    }
    sort(all(bus_num));
    rep(i, 0, n){
        old_idx = i;
        while(bus_num[i]+1 == bus_num[i+1] and (i < n)) i++;
        if(i-old_idx >= 2) cout << bus_num[old_idx] << "-" << bus_num[i] << " ";
        else {
            cout << bus_num[old_idx] << " ";
            i = old_idx;
        }
    }
    return 0;
}