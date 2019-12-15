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

const int mxn = 4e2; // 4e2 ^2 = 16e4 = 16000 > mxl = 10000
vector<int> tmp;

void init(){
    rep(i, 1, mxn)  tmp.push_back(i*i);
}

int main(){
    int t = input();
    init();
    while (t--){
        string str = strin();
        int len = sz(str);
        int m = (*lower_bound(all(tmp, len)));
        int alen = m-len;

        rep(i, 0, alen) str.push_back("*");
        m = sqrt(m);

        string encryted[m];

        
    }    
    return 0;
}