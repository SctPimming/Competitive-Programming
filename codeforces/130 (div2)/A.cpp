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
    string remix = strin(), noise = "WUB";
    if(sz(remix) >= 3){
        for(int i = 0; i <= sz(remix)-3; ++i){
            if(remix.substr(i, 3) == noise){
                remix[i] = ' ';
                remix[i+1] = ' ';
                remix[i+2] = ' ';
                i+=2;
            }
        }
    }
    cout << remix;
}