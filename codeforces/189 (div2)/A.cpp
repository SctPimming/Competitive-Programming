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
    //ios::sync_with_stdio(false);
    string str = strin();
    for(int i = 0; i <= (sz(str)-3); ++i){
        if(sz(str) < 3) break;
        if(str.substr(i, 3) == "144"){
            str.replace(i, 3, "   ");
        }
    }
    //dbg(str);
    for(int i = 0; i <= (sz(str)-2); ++i){
        if(sz(str) < 2) break;
        if(str.substr(i, 2) == "14"){
            str.replace(i, 2, "  ");
        }
    }
    //dbg(str);
    for(int i = 0; i < sz(str); ++i){
        if(sz(str) < 1) break;
        if(str[i] == '1'){
            str.replace(i, 1, " ");
        }
    }
    //dbg(str);
    (all_of(all(str), [](char cur){return cur == ' ';})) ? puts("YES") : puts("NO");
}