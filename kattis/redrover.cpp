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
    ios::sync_with_stdio(false);
    string str, sub_str;
    cin >> str;
    int len = sz(str), mn = INT_MAX, macro_len, match = 0, encrypted_len = 0;
    rep(l, 0, len){
        rep(r, l, len){
            //dbg(len - macro_len + 1);
            macro_len = r-l+1;
            match = 0;
            encrypted_len = 0;
            sub_str = str.substr(l, macro_len);
            for(int idx = 0; idx < len-macro_len+1; idx++){
                //dbg2(idx, len);
                string cur = str.substr(idx, macro_len);
                if(cur == sub_str){
                    match++;
                    idx += macro_len-1;
                }
            }
            //dbg2(sub_str, match);
            encrypted_len = len - (match*macro_len) + match + macro_len;
            mn = min(encrypted_len, mn);
        }
    }
    cout << min(mn, len);
    return 0;
}