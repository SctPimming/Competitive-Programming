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
    int n = input(), m = input();
    vector<bool> kids(n);
    for(int i = 1; i <= m; ++i){
        int num = input();
        for(int j = 1; j <= num; ++j) kids[input()-1] = true; 
    }
    cout << count_if(all(kids), [](bool cur){return cur == false;});
}