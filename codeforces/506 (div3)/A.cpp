#include<bits/stdc++.h>
using namespace std;
using lli = long long;
using pii = pair<int, int>;

#define rep(i,k,n) for(int i=(k); i < int(n); ++i)
#define sz(x) x.size()
#define all(x) x.begin(), x.end()

#define dbg(x) cerr << #x << '=' << x << '\n'
#define dbg2(x, y) cerr << #x << '=' << x << ' ' << #y << '=' << y << '\n' 

#define input() (*istream_iterator<int>(cin))
#define strin() (*istream_iterator<string>(cin))
#define output(x) cout << x << '\n' 

string find_prefix(string str){
    string ans, gen;
    rep(i, 0, sz(str)){
        ans.push_back(str[i]);
        gen = ans;
        rep(j, 0, sz(str)/(i+1)) gen += ans;
        dbg(gen);
        gen.resize(sz(str));
        dbg(gen);
        if(gen == str) return ans;
    }
}
int main(){
    ios::sync_with_stdio(false);
    int n = input(), k = input();
    string str = strin();
    string p = find_prefix(str);
    dbg(p);
    rep(i, 0, k-1) cout << p;
    cout << str;

}