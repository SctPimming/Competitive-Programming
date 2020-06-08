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
    ostringstream ss;
    string str = strin();
    int digits = count_if(all(str), [](char cur){return (cur == '4' or cur == '7');});
    ss << digits;
    str = ss.str();
    int cnt = count_if(all(str), [](char cur){return (cur != '4' and cur != '7');});
    (cnt > 0)? puts("NO") : puts("YES");
}