#include<bits/stdc++.h>
using namespace std;
using lli = long long;
using pii = pair<int, int>;

#define rep(i,k,n) for(int i=(k); i != int(n); ++i)
#define sz(x) x.size()
#define all(x) x.begin(), x.end()

#define dbg(x) cerr << #x << '=' << x << '\n'
#define dbg2(x, y) cerr << #x << '=' << x << ' ' << #y << '=' << y << '\n' 
#define output(x) cout << x << '\n' 

template<typename T>
T in(){
    return (*istream_iterator<T>(cin));
}

int main(){
    ios::sync_with_stdio(false);
    string str1 = in<string>(), str2 = in<string>();
    auto cp = [](char cur){return (cur == '+');}; 
    auto cn = [](char cur){return (cur == '-');};
    int cp1 = count_if(all(str1), cp), cp2 = count_if(all(str2), cp);
    int cn1 = count_if(all(str1), cn), cn2 = count_if(all(str2), cn);
    int space = cp1+cn1-cp2-cn2, diff = (cp1-cn1)-(cp2-cn2);
    double event = 0, sample = (1<<space);
    rep(msk, 0, (1<<space)){
        int cntp = 0, cntn = 0;
        rep(i, 0, space)
            if(msk & (1 << i)) cntp++;
        cntn = space - cntp;
        if(cntp - cntn == diff) event++;
    }
    printf("%.9lf", event/sample);
}