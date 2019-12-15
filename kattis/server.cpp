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

int main(){
    int n = input(), mx = input(), sum = 0, val, cnt;
    for(cnt = 1; cnt <= n; ++cnt){
        cin >> val;
        sum += val;
        if(sum > mx) break;
    }
    cout << cnt - 1;
    return 0;
}