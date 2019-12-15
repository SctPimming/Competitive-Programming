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
    int tmp = 0, n1 = 0, n2 = 0;
    string str = strin();
    for(char ch: str){
        int idx = ch-'a';
        if(tmp & (1 << idx)) {
            n1++;
            tmp = 0;
        }
        else tmp |= (1 << idx);
    }
    reverse(all(str));
    dbg(str);
    for(char ch: str){
        int idx = ch-'a';
        if(tmp & (1 << idx)) {
            n2++;
            tmp = 0;
        }
        else tmp |= (1 << idx);
    }
    cout << min(n1, n2);
}